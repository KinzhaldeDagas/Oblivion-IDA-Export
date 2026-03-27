void __thiscall sub_728280(int this, char a2)
{
  int v3; // edi

  v3 = 1;
  if ( (*(_WORD *)(this + 0x2C) & 0xF000) != 0 )
    v3 = 3;
  if ( !*(_DWORD *)(this + 0x20) )
    *(_DWORD *)(this + 0x20) = FormHeapAlloc(
                                 (0xC * (unsigned __int64)(v3 * (unsigned int)*(unsigned __int16 *)(this + 8))) >> 0x20 != 0
                               ? 0xFFFFFFFF
                               : 0xC * v3 * *(unsigned __int16 *)(this + 8));
  if ( a2 )
    _memset(*(_DWORD *)(this + 0x20), 0, 0xC * v3 * *(unsigned __int16 *)(this + 8));
}
