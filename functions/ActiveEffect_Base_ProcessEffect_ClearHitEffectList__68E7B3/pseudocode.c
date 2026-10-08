int __usercall ActiveEffect_Base_ProcessEffect_::ClearHitEffectList@<eax>(int a1@<esi>)
{
  _DWORD *v1; // ecx

  v1 = *(_DWORD **)(a1 + 0x34); /*0x68e7b3*/
  if ( v1 ) /*0x68e7b8*/
  {
    BSSimpleList_Clear(v1); /*0x68e7ba*/
    FormHeapFree(*(_DWORD *)(a1 + 0x34)); /*0x68e7c3*/
    *(_DWORD *)(a1 + 0x34) = 0; /*0x68e7cb*/
  }
  return ActiveEffect_Base_ProcessEffect_::NewHitEffectList();
}
