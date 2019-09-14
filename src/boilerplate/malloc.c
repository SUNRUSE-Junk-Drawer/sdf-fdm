void * sdf_fdm_malloc (
  size_t size,
  const sdf_fdm_char_t * action
) {
  void * allocated = malloc(size);
  if (!allocated) {
    sdf_fdm_fail(
      "failed to allocate %u bytes to %s\n",
      (unsigned long) size,
      action
    );
  }
  return allocated;
}
