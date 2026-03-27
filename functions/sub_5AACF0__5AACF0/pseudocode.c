InterfaceManager *__userpurge sub_5AACF0@<eax>(int *a1@<ecx>, double st7_0@<st0>, signed int a3, int a4)
{
  InterfaceManager *result; // eax
  Tile *altActiveTile; // ecx
  int v10; // edi
  double Float; // st7
  int v12; // eax
  Tile *v13; // [esp-4h] [ebp-Ch]
  float a2; // [esp+0h] [ebp-8h]

  a2 = (float)a3;
  Tile_SetFloat((Tile *)a1[1], (_DWORD *)0xFAE, a2);
  HIBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]) = a3;
  if ( a3 <= 1 )
    a1[0x10] = 0x1F;
  else
    a1[0x10] = 1 << (a3 - 2);
  sub_5AA3A0(a1, st7_0, a1[0x10]);
  if ( BYTE1(InterfaceManager_GetSingleton(0, 1)->unk0B8) )
  {
    Tile_SetFloat((Tile *)a1[0xD], (_DWORD *)0xFB7, flt_A6B618);
    Tile_SetFloat((Tile *)a1[0xD], (_DWORD *)0xFB7, 0.0);
  }
  result = InterfaceManager_GetSingleton(0, 1);
  altActiveTile = result->altActiveTile;
  if ( altActiveTile )
  {
    v10 = *a1;
    v13 = result->altActiveTile;
    Float = Tile_GetFloat(altActiveTile, 0xFA8);
    v12 = Double_To_SInt32(Float);
    return (InterfaceManager *)(*(int (__thiscall **)(int *, int, Tile *))(v10 + 0x14))(a1, v12, v13);
  }
  return result;
}
