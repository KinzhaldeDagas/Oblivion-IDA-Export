unsigned int __thiscall sub_440530(int this, unsigned int a2)
{
  unsigned int result; // eax

  result = a2;
  if ( *(_BYTE *)(this + 0x53) != (_BYTE)a2 )
  {
    *(_BYTE *)(this + 0x53) = a2;
    if ( TESDataHandler )
    {
      if ( !*(_DWORD *)(this + 0x34) )
        return sub_4824C0(*(_DWORD **)(this + 8), a2);
    }
  }
  return result;
}
