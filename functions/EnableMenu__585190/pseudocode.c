void __userpurge EnableMenu(Menu *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, char a5)
{
  float *Singleton; // edi
  double v7; // st7

  Singleton = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5851a5*/
  sub_58FBA0((int)a1->members.tile, a2, a3, a4, 0); /*0x5851a7*/
  sub_57EA20(*((NiObject **)a1->members.tile + 9), 0.0, 0.0); /*0x5851c1*/
  Tile_SetFloat(a1->members.tile, 0xFA1u, 1.0); /*0x5851d4*/
  if ( !a5 ) /*0x5851de*/
    Menu::StartFadeIn(a1); /*0x5851e2*/
  v7 = InterfaceManager::SetCurrentFocusTarget(Singleton, a2, 1.0, a3, 0.0, (_DWORD *)0xFDD, 0); /*0x5851f2*/
  InterfaceManager_GetDepthR(v7); /*0x5851f7*/
}
