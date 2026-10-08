void __userpurge ActiveEffect_Base_Link_::ResolveHitEffects(int a1@<edi>, int a2, int a3, int a4)
{
  _DWORD *v4; // esi

  if ( g_TESSaveLoadGame->currentVersion >= 0x2Au && (v4 = *(_DWORD **)(a1 + 0x34)) != 0 ) /*0x68dcf4*/
    ActiveEffect_Base_Link_::LoopTest(v4, a2); /*0x68dcfb*/
  else
    ActiveEffect_Base_Link_::Done(a2); /*0x68dced*/
}
