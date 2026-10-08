unsigned int __thiscall sub_440530(int this, unsigned int a2)
{
  unsigned int result; // eax

  result = a2; /*0x440530*/
  if ( *(_BYTE *)(this + 0x53) != (_BYTE)a2 ) /*0x440537*/
  {
    *(_BYTE *)(this + 0x53) = a2; /*0x440539*/
    if ( g_TESDataHandler ) /*0x44053c*/
    {
      if ( !*(_DWORD *)(this + 0x34) ) /*0x440545*/
        return sub_4824C0(*(_DWORD **)(this + 8), a2); /*0x440552*/
    }
  }
  return result; /*0x440557*/
}
