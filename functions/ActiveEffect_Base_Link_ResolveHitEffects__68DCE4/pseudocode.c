int __userpurge ActiveEffect_Base_Link_::ResolveHitEffects@<eax>(int a1@<edi>, int a2, int a3, int a4)
{
  _DWORD *v4; // esi

  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x2Au && (v4 = *(_DWORD **)(a1 + 0x34)) != 0 )
    return ActiveEffect_Base_Link_::LoopTest(v4, a2);
  else
    return ActiveEffect_Base_Link_::Done(a2);
}
