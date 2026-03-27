unsigned int *sub_6FA900()
{
  unsigned int *v0; // eax
  unsigned int *v1; // esi

  v0 = (unsigned int *)FormHeapAlloc(0x10u);
  if ( v0 )
    v1 = BSXFlags_constr(v0);
  else
    v1 = 0;
  sub_721440(v1, 0);
  return v1;
}
