int __cdecl sub_8CC4E0(int a1, int a2)
{
  int result; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // ebp
  int v7; // edx

  result = *(_DWORD *)(a1 + 0x18); /*0x8cc4e5*/
  v3 = 0; /*0x8cc4e9*/
  if ( result > 0 ) /*0x8cc4ed*/
  {
    result = 0; /*0x8cc4f5*/
    do /*0x8cc561*/
    {
      v4 = *(_DWORD *)(a1 + 0x14); /*0x8cc4f7*/
      if ( *(_DWORD *)(result + v4 + 4) == a2 || *(_DWORD *)(result + v4 + 8) == a2 ) /*0x8cc504*/
      {
        v5 = *(_DWORD *)(a1 + 0x18) - 1; /*0x8cc509*/
        *(_DWORD *)(a1 + 0x18) = v5; /*0x8cc50a*/
        v5 <<= 6; /*0x8cc50d*/
        v6 = *(_DWORD *)(v5 + v4); /*0x8cc510*/
        v7 = v4 + v5; /*0x8cc513*/
        *(_DWORD *)(result + v4) = v6; /*0x8cc515*/
        *(_DWORD *)(result + v4 + 4) = *(_DWORD *)(v7 + 4); /*0x8cc51b*/
        *(_DWORD *)(result + v4 + 8) = *(_DWORD *)(v7 + 8); /*0x8cc522*/
        *(_DWORD *)(result + v4 + 0xC) = *(_DWORD *)(v7 + 0xC); /*0x8cc529*/
        *(_DWORD *)(result + v4 + 0x10) = *(_DWORD *)(v7 + 0x10); /*0x8cc530*/
        *(_DWORD *)(result + v4 + 0x14) = *(_DWORD *)(v7 + 0x14); /*0x8cc537*/
        *(_DWORD *)(result + v4 + 0x18) = *(_DWORD *)(v7 + 0x18); /*0x8cc53e*/
        *(_OWORD *)(result + v4 + 0x20) = *(_OWORD *)(v7 + 0x20); /*0x8cc546*/
        *(_OWORD *)(result + v4 + 0x30) = *(_OWORD *)(v7 + 0x30); /*0x8cc54f*/
        --v3; /*0x8cc554*/
        result -= 0x40; /*0x8cc555*/
      }
      ++v3; /*0x8cc55b*/
      result += 0x40; /*0x8cc55c*/
    }
    while ( v3 < *(_DWORD *)(a1 + 0x18) ); /*0x8cc561*/
  }
  return result; /*0x8cc565*/
}
