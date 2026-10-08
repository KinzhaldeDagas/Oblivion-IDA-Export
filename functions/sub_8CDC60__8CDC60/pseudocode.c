int __cdecl sub_8CDC60(int a1)
{
  int result; // eax

  result = a1; /*0x8cdc60*/
  if ( a1 ) /*0x8cdc68*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8cdc6a*/
    *(_DWORD *)(a1 + 0x28) = 0; /*0x8cdc70*/
    *(_DWORD *)(a1 + 0x38) = 0; /*0x8cdc73*/
    *(_DWORD *)(a1 + 0x3C) = 0; /*0x8cdc76*/
    *(_DWORD *)(a1 + 0x40) = 0x80000000; /*0x8cdc7e*/
    *(_DWORD *)(a1 + 0x50) = 0; /*0x8cdc81*/
    *(_DWORD *)(a1 + 0x54) = 0; /*0x8cdc84*/
    *(_DWORD *)(a1 + 0x58) = 0x80000000; /*0x8cdc87*/
    *(_DWORD *)(a1 + 0x5C) = 0; /*0x8cdc8a*/
    *(_DWORD *)(a1 + 0x60) = 0; /*0x8cdc8d*/
    *(_DWORD *)(a1 + 0x64) = 0x80000000; /*0x8cdc90*/
    *(_DWORD *)a1 = &off_A99BF0; /*0x8cdc93*/
    *(_DWORD *)(a1 + 0x90) = 0; /*0x8cdc99*/
    *(_DWORD *)(a1 + 0x94) = 0; /*0x8cdc9f*/
    *(_DWORD *)(a1 + 0x98) = 0x80000000; /*0x8cdca5*/
  }
  return result; /*0x8cdcab*/
}
