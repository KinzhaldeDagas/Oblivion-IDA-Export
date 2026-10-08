// ScriptEffectUpdate begin-block callback: returns 1.0 when the running Script has BYTE1(info.type) set, the same script-effect type gate used before m_scriptEffectInfo allocation.
char __cdecl ScriptEvent_ScriptEffectUpdate_Eval(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  char result; // al

  *a7 = 0.0; /*0x50a12c*/
  if ( !a5 || a5 == 0xFFFFFFE8 ) /*0x50a135*/
    return 1; /*0x50a144*/
  result = 1; /*0x50a13b*/
  if ( *(_BYTE *)(a5 + 0x29) ) /*0x50a137*/
    *a7 = 1.0; /*0x50a141*/
  return result; /*0x50a143*/
}
