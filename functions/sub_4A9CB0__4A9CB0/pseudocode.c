double __thiscall sub_4A9CB0(_DWORD *this)
{
  int v2; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 0x16C))(this, 1) && (v2 = *(this + 0x25)) != 0 ) /*0x4a9ccc*/
    return *(float *)v2; /*0x4a9cd4*/
  else
    return MEMORY[0xB356A0]; /*0x4a9ce3*/
}
