char __thiscall sub_8A0760(int *this)
{
  char v2; // bl
  int v3; // eax
  unsigned int *v4; // edi

  v2 = 0; /*0x8a076a*/
  v3 = (*(int (__thiscall **)(int *))(*this + 0x58))(this); /*0x8a076c*/
  if ( v3 ) /*0x8a0770*/
    v4 = *(unsigned int **)(v3 + 0x2B0); /*0x8a0772*/
  else
    v4 = 0; /*0x8a077a*/
  if ( v4 ) /*0x8a077e*/
  {
    v2 = sub_88B600(v4, *(this + 2)); /*0x8a078f*/
    (*(void (__thiscall **)(int *, unsigned int *, _DWORD))(*this + 0x90))(this, v4, 0); /*0x8a079a*/
  }
  return v2; /*0x8a079c*/
}
