// ScriptEffectElapsedSeconds command execute callback: returns eventList->m_scriptEffectInfo +4 as a float when present, otherwise 0.0.
char __cdecl Cmd_ScriptEffectElapsedSeconds_Execute(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  int v7; // eax

  *a7 = 0.0; /*0x50235c*/
  if ( a6 ) /*0x50235e*/
  {
    v7 = *(_DWORD *)(a6 + 0x10); /*0x502360*/
    if ( v7 ) /*0x502365*/
      *a7 = *(float *)(v7 + 4); /*0x50236a*/
  }
  return 1; /*0x50236e*/
}
