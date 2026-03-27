void __thiscall sub_4374A0(int this)
{
  if ( (*(_BYTE *)(this + 0x34) & 8) == 0 )
    goto LABEL_2;
  if ( !*(_DWORD *)(this + 0x1C)
    || *(unsigned __int16 *)(*(_DWORD *)(this + 0x1C) + 0xC) == *(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x10) )
  {
    if ( *(_DWORD *)(this + 0xC) )
    {
LABEL_2:
      sub_436F30(this);
      return;
    }
    (*((void (__thiscall **)(IOManager *, int))ioManager->vtbl + 0xF))(ioManager, this);
  }
}
