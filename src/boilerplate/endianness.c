void sdf_fdm_endianess (
  void
) {
  union {
    sdf_fdm_u8_t u8[4];
    sdf_fdm_u16_t u16;
    sdf_fdm_f32_t f32;
  } check;

  check.u8[0] = 74;
  check.u8[1] = 149;
  check.u8[2] = 87;
  check.u8[3] = 201;

  switch (check.u16) {
    case 19093:
      sdf_fdm_endianess_u16_requires_swap = SDF_FDM_BOOLEAN_FALSE;
      break;
    case 38218:
      sdf_fdm_endianess_u16_requires_swap = SDF_FDM_BOOLEAN_TRUE;
      break;
    default:
      sdf_fdm_fail("unexpected endianness; u16[33, 149] = %u\n", (unsigned int)check.u16);
  }

  if (check.f32 == 4893668.500000f) {
    sdf_fdm_endianess_f32_requires_swap = SDF_FDM_BOOLEAN_FALSE;
  } else if (check.f32 == -883028.62500f) {
    sdf_fdm_endianess_f32_requires_swap = SDF_FDM_BOOLEAN_TRUE;
  } else {
    sdf_fdm_fail("unexpected endianness; f32[33, 149, 87, 201] = %f\n", check.f32);
  }
}
