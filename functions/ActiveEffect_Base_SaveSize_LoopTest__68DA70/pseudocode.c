int __userpurge ActiveEffect_Base_SaveSize_::LoopTest@<eax>(_DWORD *a1@<esi>, int a2)
{
  if ( a1[1] || *a1 ) /*0x68da76*/
    return ActiveEffect_Base_SaveSize_::LoopBody(a1, a2); /*0x68da7a*/
  else
    return ActiveEffect_Base_SaveSize_::LoopExit(a2); /*0x68da79*/
}
