double __thiscall sub_4AA030(_DWORD *this)
{
  int v2; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 0x16C))(this, 1) && (v2 = *(this + 0x25)) != 0 ) /*0x4aa04c*/
    return *(float *)(v2 + 0x38); /*0x4aa055*/
  else
    return unk_B35710; /*0x4aa064*/
}
