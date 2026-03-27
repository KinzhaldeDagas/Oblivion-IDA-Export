int __userpurge MiddleHighProc_LinkMagicData__::LinkActiveMagicItem@<eax>(int a1@<edi>, int a2, int a3, int a4)
{
  if ( *(_DWORD *)(a1 + 0x144) )
    *(_DWORD *)(a1 + 0x144) = MagicItem_LookupByFormID(*(_DWORD *)(a1 + 0x144));
  return MiddleHighProc_LinkMagicData__::LinkCastingTarget(a1, a2, a3, a4);
}
