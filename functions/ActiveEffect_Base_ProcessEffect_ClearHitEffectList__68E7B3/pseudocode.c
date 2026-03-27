int __usercall ActiveEffect_Base_ProcessEffect_::ClearHitEffectList@<eax>(int a1@<esi>)
{
  _DWORD *v1; // ecx

  v1 = *(_DWORD **)(a1 + 0x34);
  if ( v1 )
  {
    BSSimpleList_Clear(v1);
    FormHeapFree(*(_DWORD *)(a1 + 0x34));
    *(_DWORD *)(a1 + 0x34) = 0;
  }
  return ActiveEffect_Base_ProcessEffect_::NewHitEffectList();
}
