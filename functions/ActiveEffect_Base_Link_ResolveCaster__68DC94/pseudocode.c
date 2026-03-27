int __usercall ActiveEffect_Base_Link_::ResolveCaster@<eax>(int a1@<edi>, int a2, int a3, int a4)
{
  if ( *(_DWORD *)(a1 + 0x24) )
    *(_DWORD *)(a1 + 0x24) = MagicCaster_GetFromRefID(*(_DWORD *)(a1 + 0x24));
  return ActiveEffect_Base_Link_::ResolveTarget(a1, a2, a3, a4);
}
