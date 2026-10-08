int __thiscall sub_6D9D00(int this, int a2, int a3, int a4)
{
  int result; // eax
  char v5; // dl

  result = 0; /*0x6d9d06*/
  if ( a2 && a3 ) /*0x6d9d12*/
  {
    v5 = unk_B3D3EE[a4]; /*0x6d9d18*/
    *(_DWORD *)(this + 0xC) = a2; /*0x6d9d1e*/
    *(_DWORD *)(this + 8) = a3; /*0x6d9d22*/
    *(_BYTE *)(this + 0x14) = v5; /*0x6d9d25*/
    *(_DWORD *)(this + 0x10) = a4; /*0x6d9d28*/
    return a4; /*0x6d9d14*/
  }
  else
  {
    *(_DWORD *)(this + 8) = 0; /*0x6d9d30*/
    *(_DWORD *)(this + 0xC) = 0; /*0x6d9d33*/
    *(_BYTE *)(this + 0x14) = 0; /*0x6d9d36*/
    *(_DWORD *)(this + 0x10) = 0; /*0x6d9d39*/
  }
  return result; /*0x6d9d21*/
}
