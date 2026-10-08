// Sets and returns g_godModeEnabled (0x00B3BB06).
bool __cdecl SetGodMode(bool enabled)
{
  g_godModeEnabled = enabled; /*0x65d814*/
  return enabled; /*0x65d819*/
}
