InterfaceManager *__userpurge sub_5AACF0@<eax>(int *a1@<ecx>, double st7_0@<st0>, signed int a3, int a4)
{
  InterfaceManager *result; // eax
  Tile *altActiveTile; // ecx
  int v7; // edi
  double Float; // st7
  int v9; // eax
  Tile *v10; // [esp-4h] [ebp-Ch]
  float a2; // [esp+0h] [ebp-8h]

  a2 = (float)a3; /*0x5aacfb*/
  Tile_SetFloat((Tile *)a1[1], (_DWORD *)0xFAE, a2); /*0x5aad03*/
  HIBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]) = a3; /*0x5aad1b*/
  if ( a3 <= 1 ) /*0x5aad1e*/
    a1[0x10] = 0x1F; /*0x5aad2f*/
  else
    a1[0x10] = 1 << (a3 - 2); /*0x5aad2a*/
  sub_5AA3A0(a1, st7_0, a1[0x10]); /*0x5aad3c*/
  if ( BYTE1(InterfaceManager_GetSingleton(0, 1)->unk0B8) ) /*0x5aad4d*/
  {
    Tile_SetFloat((Tile *)a1[0xD], (_DWORD *)0xFB7, flt_A6B618); /*0x5aad68*/
    Tile_SetFloat((Tile *)a1[0xD], (_DWORD *)0xFB7, 0.0); /*0x5aad7b*/
  }
  result = InterfaceManager_GetSingleton(0, 1); /*0x5aad84*/
  altActiveTile = result->altActiveTile; /*0x5aad89*/
  if ( altActiveTile ) /*0x5aad94*/
  {
    v7 = *a1; /*0x5aad97*/
    v10 = result->altActiveTile; /*0x5aad99*/
    Float = Tile_GetFloat(altActiveTile, 0xFA8); /*0x5aad9f*/
    v9 = Double_To_SInt32(Float); /*0x5aada4*/
    return (InterfaceManager *)(*(int (__thiscall **)(int *, int, Tile *))(v7 + 0x14))(a1, v9, v10); /*0x5aadaf*/
  }
  return result; /*0x5aadb3*/
}
