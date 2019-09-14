void sdf_fdm_types (
  void
) {
  if (sizeof(sdf_fdm_u8_t) != 1) {
    sdf_fdm_fail("unexpected size; sizeof(u8) = %u\n", sizeof(sdf_fdm_u8_t));
  }

  if (sizeof(sdf_fdm_u16_t) != 2) {
    sdf_fdm_fail("unexpected size; sizeof(u16) = %u\n", sizeof(sdf_fdm_u16_t));
  }

  if (sizeof(sdf_fdm_f32_t) != 4) {
    sdf_fdm_fail("unexpected size; sizeof(f32) = %u\n", sizeof(sdf_fdm_f32_t));
  }
}
