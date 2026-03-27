int __thiscall sub_77B5B0(int this, int a2)
{
  int v3; // eax
  int result; // eax

  if ( a2 )
  {
    if ( *(_BYTE *)(this + 0x1000) )
    {
      if ( *(_DWORD *)(this + 0x100C) == a2 )
      {
        v3 = *(_DWORD *)(this + 0xFF8);
        *(_DWORD *)(this + 0x100C) = 0;
        result = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 0x15C))(v3, 0);
      }
      if ( *(_DWORD *)(this + 0x1010) == a2 )
        *(_DWORD *)(this + 0x1010) = 0;
    }
  }
  return result;
}
