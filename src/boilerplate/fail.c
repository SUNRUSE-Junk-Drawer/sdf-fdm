void sdf_fdm_fail
(
  const sdf_fdm_char_t * format,
  ...
)
{
  va_list argptr;
  va_start(argptr, format);
  vfprintf(stderr, format, argptr);
  va_end(argptr);
  exit(1);
}
