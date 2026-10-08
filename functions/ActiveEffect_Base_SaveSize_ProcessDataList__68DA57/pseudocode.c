int __usercall ActiveEffect_Base_SaveSize_::ProcessDataList@<eax>(int a1@<edi>, int a2, int a3, int a4)
{
  _DWORD *v4; // esi

  v4 = *(_DWORD **)(a1 + 0x34); /*0x68da58*/
  if ( v4 ) /*0x68da65*/
    return ActiveEffect_Base_SaveSize_::LoopTest(v4, 0x1D); /*0x68da6d*/
  else
    return ActiveEffect_Base_SaveSize_::DoneDataList(0x1D); /*0x68da65*/
}
