__int16 __thiscall sub_8FA0D0(_WORD *this)
{
  _WORD *v2; // esi
  int v3; // ebx
  int v4; // eax

  v2 = this + 6; /*0x8fa0d5*/
  v3 = 3; /*0x8fa0d8*/
  do /*0x8fa0f8*/
  {
    v4 = (unsigned __int16)*v2; /*0x8fa0e2*/
    if ( *v2 != 0xFFFF ) /*0x8fa0e9*/
      LOWORD(v4) = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v4); /*0x8fa0f1*/
    ++v2; /*0x8fa0f4*/
    --v3; /*0x8fa0f7*/
  }
  while ( v3 ); /*0x8fa0f8*/
  if ( this ) /*0x8fa0fc*/
    LOWORD(v4) = (**(__int16 (__thiscall ***)(_WORD *, int))this)(this, 1); /*0x8fa104*/
  return v4; /*0x8fa106*/
}
