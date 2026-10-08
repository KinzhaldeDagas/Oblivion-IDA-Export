int __thiscall sub_77B4B0(int this, int a2)
{
  int v3; // eax
  int result; // eax

  if ( a2 ) /*0x77b4ba*/
  {
    if ( !*(_BYTE *)(this + 0x1000) ) /*0x77b4bc*/
    {
      if ( *(_DWORD *)(this + 0x1004) == a2 ) /*0x77b4cb*/
      {
        v3 = *(_DWORD *)(this + 0xFF8); /*0x77b4cd*/
        *(_DWORD *)(this + 0x1004) = 2; /*0x77b4d3*/
        result = (*(int (__stdcall **)(int, int))(*(_DWORD *)v3 + 0x164))(v3, 2); /*0x77b4e8*/
      }
      if ( *(_DWORD *)(this + 0x1008) == a2 ) /*0x77b4f0*/
        *(_DWORD *)(this + 0x1008) = 2; /*0x77b4f2*/
    }
  }
  return result; /*0x77b4fc*/
}
