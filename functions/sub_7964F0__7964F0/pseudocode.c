unsigned int **__thiscall sub_7964F0(char *this, int a2)
{
  int v2; // edi
  unsigned int *v3; // esi

  v2 = a2;
  v3 = (unsigned int *)(this + 0xE8);
  sub_785F30((unsigned int *)this + 0x3A, (int *)a2);
  if ( !sub_787680() )
    return sub_785F30(v3, (int *)(v2 + 4));
  *(float *)&a2 = -*(float *)(v2 + 4);
  return sub_785F30(v3, &a2);
}
