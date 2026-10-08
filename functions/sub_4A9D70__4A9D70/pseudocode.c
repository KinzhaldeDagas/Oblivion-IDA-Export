double __thiscall sub_4A9D70(_DWORD *this)
{
  int v2; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 0x16C))(this, 1) && (v2 = *(this + 0x25)) != 0 ) /*0x4a9d8c*/
    return *(float *)(v2 + 0xC); /*0x4a9d95*/
  else
    return MEMORY[0xB356B0]; /*0x4a9da4*/
}
