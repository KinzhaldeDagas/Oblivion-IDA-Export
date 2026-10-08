// ScriptEffectFinish begin-block callback: returns 1.0 only when eventList->m_scriptEffectInfo exists and byte 1 is set.
char __cdecl ScriptEvent_ScriptEffectFinish_Eval(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  int v7; // eax
  bool v8; // zf
  char result; // al

  *a7 = 0.0; /*0x50232c*/
  if ( !a6 ) /*0x50232e*/
    return 1; /*0x50232e*/
  v7 = *(_DWORD *)(a6 + 0x10); /*0x502330*/
  if ( !v7 ) /*0x502335*/
    return 1; /*0x502344*/
  v8 = *(_BYTE *)(v7 + 1) == 0; /*0x502337*/
  result = 1; /*0x50233b*/
  if ( !v8 ) /*0x50233d*/
    *a7 = 1.0; /*0x502341*/
  return result; /*0x502343*/
}
