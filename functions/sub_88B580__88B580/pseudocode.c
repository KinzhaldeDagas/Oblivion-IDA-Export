char __thiscall sub_88B580(unsigned int *this, int a2)
{
  char v3; // bl
  int *v4; // eax

  v3 = 0; /*0x88b589*/
  v4 = (int *)(*(int (__thiscall **)(unsigned int *))(*this + 0x58))(this); /*0x88b58b*/
  if ( !v4 || !a2 ) /*0x88b598*/
    return v3; /*0x88b598*/
  v3 = 1; /*0x88b59e*/
  if ( !*(this + 8) ) /*0x88b5a3*/
  {
    sub_89CCC0(v4, a2); /*0x88b5e9*/
    return v3; /*0x88b5f0*/
  }
  if ( *(this + 0xF) >= 0x64 ) /*0x88b5a9*/
  {
    sub_88A440(this); /*0x88b5ad*/
    sub_88A3A0(this); /*0x88b5b4*/
    sub_88A310((int *)this); /*0x88b5bb*/
    sub_88A280(this); /*0x88b5c2*/
  }
  if ( *(_WORD *)(a2 + 4) ) /*0x88b5c7*/
    ++*(_WORD *)(a2 + 6); /*0x88b5ce*/
  *(_DWORD *)(*(this + 0xE) + 4 * (*(this + 0xF))++) = a2; /*0x88b5d8*/
  return 1; /*0x88b5df*/
}
