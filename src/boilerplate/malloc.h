void * sdf_fdm_malloc (
  size_t size,
  const sdf_fdm_char_t * action
);

#define SDF_FDM_MALLOC(type, quantity, action) \
  ((type * ) sdf_fdm_malloc(quantity * sizeof(type *), action))
