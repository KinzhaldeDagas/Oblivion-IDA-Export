void __thiscall sub_5359A0(int this, int a2, int a3)
{
  int v3; // edx
  int i; // eax
  int v5; // eax

  v3 = *(_DWORD *)(a2 + 0xC); /*0x5359a5*/
  for ( i = a2; v3; v3 = *(_DWORD *)(v3 + 0xC) ) /*0x5359ac*/
    i = v3; /*0x5359b0*/
  v5 = *(_DWORD *)(i + 0x1C); /*0x5359b9*/
  if ( (((unsigned __int8)v5 ^ *(_BYTE *)(this + 0x40)) & 0x3F) != 0 || HIWORD(v5) == *(_WORD *)(this + 0x42) ) /*0x5359cd*/
    sub_8B1AB0(this, a2, a3); /*0x5359d5*/
}
