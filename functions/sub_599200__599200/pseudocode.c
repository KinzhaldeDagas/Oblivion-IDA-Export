InterfaceManager *__userpurge sub_599200@<eax>(int *this@<ecx>, double st7_0@<st0>, signed int a3, int a4)
{
  InterfaceManager *result; // eax
  Tile *altActiveTile; // ecx
  int v7; // edi
  double Float; // st7
  int v9; // eax
  Tile *v10; // [esp-4h] [ebp-Ch]
  float a2; // [esp+0h] [ebp-8h]

  a2 = (float)a3; /*0x59920b*/
  Tile_SetFloat((Tile *)*(this + 1), 0xFAEu, a2); /*0x599213*/
  if ( a3 <= 1 ) /*0x59921f*/
    *(this + 0x10) = 0x1F; /*0x599230*/
  else
    *(this + 0x10) = 1 << (a3 - 2); /*0x59922b*/
  sub_5987F0(this, st7_0, *(this + 0x10)); /*0x59923d*/
  if ( BYTE1(InterfaceManager_GetSingleton(0, 1)->unk0B8) ) /*0x59924e*/
  {
    Tile_SetFloat((Tile *)*(this + 0xB), 0xFB7u, flt_A6B618); /*0x599269*/
    Tile_SetFloat((Tile *)*(this + 0xB), 0xFB7u, 0.0); /*0x59927c*/
  }
  result = InterfaceManager_GetSingleton(0, 1); /*0x599285*/
  altActiveTile = result->altActiveTile; /*0x59928a*/
  if ( altActiveTile ) /*0x599295*/
  {
    v7 = *this; /*0x599298*/
    v10 = result->altActiveTile; /*0x59929a*/
    Float = Tile_GetFloat(altActiveTile, 0xFA8); /*0x5992a0*/
    v9 = Double_To_SInt32(Float); /*0x5992a5*/
    return (InterfaceManager *)(*(int (__thiscall **)(int *, int, Tile *))(v7 + 0x14))(this, v9, v10); /*0x5992b0*/
  }
  return result; /*0x5992b4*/
}
