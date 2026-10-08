// Oblivion ClassMenu step refresh: derives the active step value from tile traits 0xFDB/0xFDC, updates menu state, sets state 8, and refreshes the interface manager.
// Verified correction of previous ClassMenu_RefreshStep interpretation: generic Menu fade-in. Reads traits 0xFDB/0xFDC, creates timer, sets +0x24=8, updates timers. Fallout named analogue 0x827E2F18 has matching flow including null-root fallback.
void __thiscall Menu::StartFadeIn(_DWORD *this)
{
  _DWORD *v2; // ecx
  double Float; // st7
  InterfaceManager *Singleton; // eax
  float duration; // [esp+8h] [ebp-4h]

  v2 = (_DWORD *)*(this + 1); /*0x584394*/
  if ( !v2 ) /*0x584399*/
  {
    Float = flt_A41304; /*0x5843f3*/
    goto LABEL_4; /*0x5843f9*/
  }
  duration = Tile_GetFloat(v2, 0xFDB); /*0x5843a5*/
  if ( 0.0 == duration ) /*0x5843b4*/
  {
    Float = Tile_GetFloat((_DWORD *)*(this + 1), 0xFDC); /*0x5843be*/
LABEL_4:
    duration = Float; /*0x5843c3*/
  }
  InterfaceManager::NewTimer(this, duration); /*0x5843c7*/
  *(this + 9) = 8; /*0x5843d9*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5843e0*/
  InterfaceManager::UpdateAllTimers((OblivionInterfaceTimersView *)Singleton); /*0x5843ee*/
}
