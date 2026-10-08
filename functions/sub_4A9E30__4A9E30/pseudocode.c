double __thiscall sub_4A9E30(_DWORD *this)
{
  int v2; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 0x16C))(this, 1) && (v2 = *(this + 0x25)) != 0 ) /*0x4a9e4c*/
    return *(float *)(v2 + 0x18); /*0x4a9e55*/
  else
    return MEMORY[0xB356C8]; /*0x4a9e64*/
}
