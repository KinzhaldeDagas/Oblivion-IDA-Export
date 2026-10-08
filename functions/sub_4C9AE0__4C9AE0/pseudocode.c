int __thiscall sub_4C9AE0(int this, int a2)
{
  int v3; // ecx
  int result; // eax

  if ( (*(_BYTE *)(this + 0x24) & 1) == 0 ) /*0x4c9ae7*/
  {
    v3 = *(_DWORD *)(this + 0x40); /*0x4c9ae9*/
    if ( v3 != a2 ) /*0x4c9af3*/
    {
      if ( v3 ) /*0x4c9af7*/
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, 1); /*0x4c9b00*/
      *(_DWORD *)(this + 0x40) = a2; /*0x4c9b02*/
    }
  }
  return result; /*0x4c9b06*/
}
