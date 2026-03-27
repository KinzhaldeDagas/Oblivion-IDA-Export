int __usercall ActiveEffect_Base_Link_::ResolveTarget@<eax>(int a1@<edi>, int a2, int a3, int a4)
{
  int v4; // esi

  v4 = *(_DWORD *)(a1 + 0x20);
  if ( !v4 )
    return ActiveEffect_Base_Link_::ResolveBoundObj(a1, 0, a2, a3, a4);
  *(_DWORD *)(a1 + 0x20) = MagicTarget_LookupByFormID(*(_DWORD *)(a1 + 0x20));
  return ActiveEffect_Base_Link_::ResolveBoundObj(a1, v4, a2, a3, a4);
}
