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
  int v10; // edi
  int v11; // eax
  float *Singleton; // eax
  double v13; // st7
  Tile **v14; // eax
  Tile *v15; // [esp-4h] [ebp-Ch]
  float a2; // [esp+0h] [ebp-8h]

  a2 = (float)a5;
  Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFAE, a2);
  LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[1]) = a5;
  if ( a5 <= 1 )
    *(this + 0x14) = 7;
  else
    *(this + 0x14) = 1 << (a5 - 2);
  sub_5B1A40((int)this, st5_0, a4, a3, *(this + 0x14));
  Tile_SetFloat((Tile *)*(this + 0xD), (_DWORD *)0xFB7, flt_A6B618);
  Float = 0.0;
  Tile_SetFloat((Tile *)*(this + 0xD), (_DWORD *)0xFB7, 0.0);
  altActiveTile = InterfaceManager_GetSingleton(0, 1)->altActiveTile;
  if ( altActiveTile )
  {
    v10 = *this;
    v15 = altActiveTile;
    Float = Tile_GetFloat(altActiveTile, 0xFA8);
    v11 = Double_To_SInt32(Float);
    (*(void (__thiscall **)(int *, int, Tile *))(v10 + 0x14))(this, v11, v15);
  }
  Singleton = (float *)InterfaceManager_GetSingleton(0, 1);
  v13 = sub_57F9F0(Singleton, st5_0, Float, a4, 0.0, (_DWORD *)0xFDD, 0);
  v14 = (Tile **)InterfaceManager_GetSingleton(0, 1);
  sub_57FD60(v14, st5_0, a4, v13);
}
