int __cdecl sub_71DA20(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int8 *a7)
{
  int result; // eax
  int i; // ebp
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // bl
  unsigned __int8 *v13; // esi
  unsigned __int8 v14; // cl
  int v15; // [esp+4h] [ebp-4h]
  unsigned __int8 v16; // [esp+18h] [ebp+10h]

  result = a2; /*0x71da21*/
  if ( a2 ) /*0x71da2c*/
  {
    v15 = a2; /*0x71da39*/
    result = a6; /*0x71da3d*/
    do /*0x71daea*/
    {
      for ( i = a1; /*0x71da47*/
            i;
            *(_WORD *)(a4 - 2) = *(_WORD *)(a6 + 8)
                               & ((unsigned __int8)(v14 >> *(_BYTE *)(a6 + 0x16)) << *(_BYTE *)(a6 + 0x12))
                               | *(_WORD *)(a6 + 0xC)
                               & ((unsigned __int8)(v16 >> *(_BYTE *)(a6 + 0x17)) << *(_BYTE *)(a6 + 0x13))
                               | *(_WORD *)a6
                               & ((unsigned __int8)(v11 >> *(_BYTE *)(a6 + 0x14)) << *(_BYTE *)(a6 + 0x10))
                               | *(_WORD *)(a6 + 4)
                               & ((unsigned __int8)(v12 >> *(_BYTE *)(a6 + 0x15)) << *(_BYTE *)(a6 + 0x11)) )
      {
        v11 = *a7; /*0x71da50*/
        v12 = a7[1]; /*0x71da52*/
        v13 = a7 + 1; /*0x71da55*/
        v14 = *++v13; /*0x71da58*/
        v16 = v13[1]; /*0x71da6a*/
        a7 = v13 + 2; /*0x71da9b*/
        a4 += 2; /*0x71daba*/
        --i; /*0x71dad8*/
      }
      --v15; /*0x71dae5*/
    }
    while ( v15 ); /*0x71daea*/
  }
  return result; /*0x71daf3*/
}
