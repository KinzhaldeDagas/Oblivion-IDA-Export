int __usercall ActiveEffect_Base_SaveSize_::LoopTest@<eax>(_DWORD *a1@<esi>, __int16 a2)
{
  if ( a1[1] || *a1 )
    return ActiveEffect_Base_SaveSize_::LoopBody(a1, a2);
  else
    return ActiveEffect_Base_SaveSize_::LoopExit();
}
