// Verified: matches Fallout Menu::StartFadeOut 0x827E2E60: visibility check, duration fallback, NewTimer, state=2, modal stack/focus updates, UpdateAllTimers. Previous alias Menu_RequestClose describes purpose; exact inherited semantic name is StartFadeOut.
double __usercall Menu::StartFadeOut@<st0>(
        _DWORD *a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st2>,
        double result@<st0>)
{
  bool v9; // zf
  double Float; // st6
  InterfaceManager *Singleton; // eax
  float *v12; // eax
  InterfaceManager *v13; // eax
  signed int v14; // [esp-4h] [ebp-10h]
  float duration; // [esp+8h] [ebp-4h]

  if ( Tile_GetFloat((_DWORD *)a1[1], 0xFA1) == fConstant_2 ) /*0x58475c*/
  {
    duration = Tile_GetFloat((_DWORD *)a1[1], 0xFDB); /*0x58476f*/
    if ( 0.0 == duration ) /*0x58477e*/
      duration = Tile_GetFloat((_DWORD *)a1[1], 0xFDC); /*0x58478d*/
    InterfaceManager::NewTimer(a1, duration); /*0x58479a*/
    v9 = a1[5] == 0; /*0x5847a2*/
    a1[9] = 2; /*0x5847a6*/
    if ( !v9 ) /*0x5847ad*/
    {
      Float = Tile_GetFloat((_DWORD *)a1[1], 0x1772); /*0x5847b7*/
      if ( Float == fConstant_2 ) /*0x5847c7*/
      {
        v14 = a1[5]; /*0x5847ce*/
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5847d3*/
        sub_57CFE0((int)Singleton, a6, Float, result, a2, a3, a4, a5, v14, 0); /*0x5847dd*/
        v12 = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5847ef*/
        result = InterfaceManager::SetCurrentFocusTarget(v12, a6, result, Float, 0.0, (_DWORD *)0xFDD, 0); /*0x5847f9*/
      }
    }
    v13 = InterfaceManager_GetSingleton(0, 1); /*0x584802*/
    InterfaceManager::UpdateAllTimers((OblivionInterfaceTimersView *)v13); /*0x584810*/
  }
  return result; /*0x58480c*/
}
