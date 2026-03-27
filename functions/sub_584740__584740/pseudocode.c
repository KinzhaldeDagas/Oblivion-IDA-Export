void __usercall sub_584740(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>)
{
  bool v6; // zf
  double v7; // st7
  InterfaceManager *Singleton; // eax
  float *v9; // eax
  InterfaceManager *v10; // eax
  signed int v11; // [esp-4h] [ebp-10h]
  float Float; // [esp+8h] [ebp-4h]

  if ( Tile_GetFloat((_DWORD *)a1[1], 0xFA1) == fConstant_2 )
  {
    Float = Tile_GetFloat((_DWORD *)a1[1], 0xFDB);
    if ( 0.0 == Float )
      Float = Tile_GetFloat((_DWORD *)a1[1], 0xFDC);
    sub_584300((int)a1, Float);
    v6 = a1[5] == 0;
    a1[9] = 2;
    if ( !v6 )
    {
      v7 = Tile_GetFloat((_DWORD *)a1[1], 0x1772);
      if ( v7 == fConstant_2 )
      {
        v11 = a1[5];
        Singleton = InterfaceManager_GetSingleton(0, 1);
        sub_57CFE0((int)Singleton, a2, a3, v7, v11, 0);
        v9 = (float *)InterfaceManager_GetSingleton(0, 1);
        sub_57F9F0(v9, a2, v7, a3, 0.0, (_DWORD *)0xFDD, 0);
      }
    }
    v10 = InterfaceManager_GetSingleton(0, 1);
    sub_583C30(v10);
  }
}
