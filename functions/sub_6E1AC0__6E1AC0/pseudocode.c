char __thiscall sub_6E1AC0(int this, int a2, int a3, int a4)
{
  char result; // al

  if ( a2 && (result = a3, a3) ) /*0x6e1ad1*/
  {
    *(_WORD *)(this + 0xC) = a3; /*0x6e1ad3*/
    *(_DWORD *)(this + 0x28) = a2; /*0x6e1adb*/
    *(_DWORD *)(this + 0x18) = a4; /*0x6e1ade*/
    result = byte_B3D3E8[a4]; /*0x6e1ae1*/
    *(_BYTE *)(this + 0x1E) = result; /*0x6e1ae7*/
  }
  else
  {
    *(_WORD *)(this + 0xC) = 0; /*0x6e1aee*/
    *(_DWORD *)(this + 0x28) = 0; /*0x6e1af2*/
    *(_BYTE *)(this + 0x1E) = 0; /*0x6e1af5*/
    *(_DWORD *)(this + 0x18) = 0; /*0x6e1af8*/
  }
  return result; /*0x6e1aea*/
}
