unsigned __int16 __thiscall ScriptEventList_GetSaveSize_(int **this)
{
  int v2; // edi
  int *v3; // esi
  int v4; // edi

  v2 = 0; /*0x4fa1eb*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4fa1ed*/
    v2 = 6; /*0x4fa1f6*/
  v3 = *(this + 3); /*0x4fa1fb*/
  v4 = v2 + 2; /*0x4fa1fe*/
  if ( !v3 ) /*0x4fa203*/
    JUMPOUT(0x4FA242); /*0x4fa242*/
  return ScriptEventList_GetSaveSize__::LoopBody(this, v4, v3, 0.0);
}
