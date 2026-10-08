void __thiscall sub_4374A0(int this)
{
  if ( (*(_BYTE *)(this + 0x34) & 8) == 0 ) /*0x4374a4*/
    goto LABEL_2; /*0x4374a4*/
  if ( !*(_DWORD *)(this + 0x1C) /*0x4374c6*/
    || *(unsigned __int16 *)(*(_DWORD *)(this + 0x1C) + 0xC) == *(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x10) )
  {
    if ( *(_DWORD *)(this + 0xC) ) /*0x4374c8*/
    {
LABEL_2:
      sub_436F30(this); /*0x4374a6*/
      return; /*0x4374a6*/
    }
    (*((void (__thiscall **)(IOManager *, int))MEMORY[0xB33A10]->vtbl + 0xF))(MEMORY[0xB33A10], this); /*0x4374db*/
  }
}
