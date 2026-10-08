double __thiscall sub_4A9D30(_DWORD *this)
{
  int v2; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 0x16C))(this, 1) && (v2 = *(this + 0x25)) != 0 ) /*0x4a9d4c*/
    return *(float *)(v2 + 8); /*0x4a9d55*/
  else
    return MEMORY[0xB356A8]; /*0x4a9d64*/
}
