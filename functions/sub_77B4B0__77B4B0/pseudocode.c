int __thiscall sub_77B4B0(int this, int a2)
{
  int v3; // eax
  int result; // eax

  if ( a2 )
  {
    if ( !*(_BYTE *)(this + 0x1000) )
    {
      if ( *(_DWORD *)(this + 0x1004) == a2 )
      {
        v3 = *(_DWORD *)(this + 0xFF8);
        *(_DWORD *)(this + 0x1004) = 2;
        result = (*(int (__stdcall **)(int, int))(*(_DWORD *)v3 + 0x164))(v3, 2);
      }
      if ( *(_DWORD *)(this + 0x1008) == a2 )
        *(_DWORD *)(this + 0x1008) = 2;
    }
  }
  return result;
}
