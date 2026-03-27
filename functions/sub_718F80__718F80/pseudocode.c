NiObjectNET *sub_718F80()
{
  NiObjectNET *v0; // eax
  NiObjectNET *v1; // esi

  v0 = (NiObjectNET *)FormHeapAlloc(0x24u);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiObjectNET::NiObjectNET(v0);
  v1->vtbl = (NiObjectVtbl **)&NiStencilProperty::`vftable';
  v1[1].members.super.m_uiRefCount = 0;
  v1[1].members.m_pcName = (const char *)0xFFFFFFFF;
  LOWORD(v1[1].vtbl) = 0x4180;
  return v1;
}
