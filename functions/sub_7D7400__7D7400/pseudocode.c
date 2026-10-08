int __thiscall sub_7D7400(
        int this,
        char a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        int a11)
{
  int result; // eax

  if ( *(_WORD *)(this + 0xB8) == 9 ) /*0x7d7408*/
  {
    **(_BYTE **)(this + 0xC8) = a2; /*0x7d7414*/
    *(_BYTE *)(*(_DWORD *)(this + 0xC8) + 1) = a3; /*0x7d7420*/
    *(_BYTE *)(*(_DWORD *)(this + 0xC8) + 2) = a4; /*0x7d742d*/
    *(_BYTE *)(*(_DWORD *)(this + 0xC8) + 3) = a5; /*0x7d743a*/
    *(_BYTE *)(*(_DWORD *)(this + 0xC8) + 4) = a6; /*0x7d7447*/
    *(_BYTE *)(*(_DWORD *)(this + 0xC8) + 5) = a7; /*0x7d7454*/
    *(_BYTE *)(*(_DWORD *)(this + 0xC8) + 6) = a8; /*0x7d7461*/
    *(_BYTE *)(*(_DWORD *)(this + 0xC8) + 7) = a9; /*0x7d746e*/
    result = *(_DWORD *)(this + 0xC8); /*0x7d7471*/
    *(_BYTE *)(result + 8) = a10; /*0x7d747b*/
  }
  return result; /*0x7d747e*/
}
