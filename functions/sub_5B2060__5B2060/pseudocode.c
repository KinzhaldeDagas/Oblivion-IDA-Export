void __userpurge sub_5B2060(
        int *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st0>,
        double a4@<st1>,
        signed int a5,
        int a6)
{
  double Float; // st7
  Tile *altActiveTile; // ecx
  int v9; // edi
  int v10; // eax
  float *Singleton; // eax
  double v12; // st7
  Tile **v13; // eax
  Tile *v14; // [esp-4h] [ebp-Ch]
  float a2; // [esp+0h] [ebp-8h]

  a2 = (float)a5; /*0x5b206b*/
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFAE, a2); /*0x5b2073*/
  LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[1]) = a5; /*0x5b208b*/
  if ( a5 <= 1 ) /*0x5b208e*/
    *(this + 0x14) = 7; /*0x5b209f*/
  else
    *(this + 0x14) = 1 << (a5 - 2); /*0x5b209a*/
  sub_5B1A40((int)this, st5_0, a4, a3, *(this + 0x14)); /*0x5b20ac*/
  Tile_SetFloat((Tile *)*(this + 0xD), (_DWORD *)0xFB7, flt_A6B618); /*0x5b20c3*/
  Float = 0.0; /*0x5b20c8*/
  Tile_SetFloat((Tile *)*(this + 0xD), (_DWORD *)0xFB7, 0.0); /*0x5b20d6*/
  altActiveTile = InterfaceManager_GetSingleton(0, 1)->altActiveTile; /*0x5b20e4*/
  if ( altActiveTile ) /*0x5b20ef*/
  {
    v9 = *this; /*0x5b20f2*/
    v14 = altActiveTile; /*0x5b20f4*/
    Float = Tile_GetFloat(altActiveTile, 0xFA8); /*0x5b20fa*/
    v10 = Double_To_SInt32(Float); /*0x5b20ff*/
    (*(void (__thiscall **)(int *, int, Tile *))(v9 + 0x14))(this, v10, v14); /*0x5b210a*/
  }
  Singleton = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5b211a*/
  v12 = InterfaceManager::SetCurrentFocusTarget(Singleton, st5_0, Float, a4, 0.0, (_DWORD *)0xFDD, 0); /*0x5b2124*/
  v13 = (Tile **)InterfaceManager_GetSingleton(0, 1); /*0x5b212d*/
  InterfaceManager::GetDefaultFocus(v13, st5_0, a4, v12); /*0x5b2137*/
}
