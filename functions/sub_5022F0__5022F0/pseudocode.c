// ScriptEffectStart begin-block callback: returns 1.0 only when eventList->m_scriptEffectInfo exists and byte 0 is set.
char __cdecl ScriptEvent_ScriptEffectStart_Eval(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  _BYTE *v7; // eax
  bool v8; // zf
  char result; // al

  *a7 = 0.0; /*0x5022fc*/
  if ( !a6 ) /*0x5022fe*/
    return 1; /*0x5022fe*/
  v7 = *(_BYTE **)(a6 + 0x10); /*0x502300*/
  if ( !v7 ) /*0x502305*/
    return 1; /*0x502313*/
  v8 = *v7 == 0; /*0x502307*/
  result = 1; /*0x50230a*/
  if ( !v8 ) /*0x50230c*/
    *a7 = 1.0; /*0x502310*/
  return result; /*0x502312*/
}
