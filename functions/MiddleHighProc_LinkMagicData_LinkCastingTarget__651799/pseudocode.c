int __userpurge MiddleHighProc_LinkMagicData__::LinkCastingTarget@<eax>(int a1@<edi>, int a2, int a3, int a4)
{
  if ( *(_DWORD *)(a1 + 0x178) )
    *(_DWORD *)(a1 + 0x178) = MagicTarget_LookupByFormID(*(_DWORD *)(a1 + 0x178));
  return MiddleHighProc_LinkMagicData__::LinkMagicEffectList(a2, a3, a4);
}
