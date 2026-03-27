int __userpurge ActiveEffect_Base_Link_::LoopTest@<eax>(_DWORD *a1@<esi>, int a2)
{
  if ( a1[1] || *a1 )
    return ActiveEffect_Base_Link_::LoopBody(a1, a2);
  else
    return ActiveEffect_Base_Link_::LoopExit(a2);
}
