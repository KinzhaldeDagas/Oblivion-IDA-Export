_DWORD *__usercall sub_7895E0@<eax>(int a1@<edi>, char *Src)
{
  rsize_t v3; // [esp-4h] [ebp-8h]

  LODWORD(v3) = strlen(Src);
  return sub_414500(&dword_B2B614, a1, Src, v3);
}
