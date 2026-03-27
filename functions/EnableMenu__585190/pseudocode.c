void __userpurge EnableMenu(Menu *a1@<ecx>, double a2@<st2>, double a4@<st1>, double a5@<st0>, char a6)
{
  float *Singleton; // edi
  double v8; // st7

  Singleton = (float *)InterfaceManager_GetSingleton(0, 1);
  sub_58FBA0((int)a1->members.tile, a2, a4, a5, 0);
  sub_57EA20(*((NiObject **)a1->members.tile + 9), 0.0, 0.0);
  Tile_SetFloat(a1->members.tile, (_DWORD *)0xFA1, 1.0);
  if ( !a6 )
    sub_584390((int)a1);
  v8 = sub_57F9F0(Singleton, a2, 1.0, a4, 0.0, (_DWORD *)0xFDD, 0);
  InterfaceManager_GetDepthR(v8);
}
