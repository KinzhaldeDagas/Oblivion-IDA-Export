NiObjectNET *__thiscall sub_718ED0(char **this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x24u);
  v4 = v3;
  if ( v3 )
  {
    NiObjectNET::NiObjectNET(v3);
    v4->vtbl = (NiObjectVtbl **)&NiStencilProperty::`vftable';
    v4[1].members.super.m_uiRefCount = 0;
    v4[1].members.m_pcName = (const char *)0xFFFFFFFF;
    LOWORD(v4[1].vtbl) = 0x4180;
  }
  else
  {
    v4 = 0;
  }
  sub_700A60(this, v4, a2);
  LOWORD(v4[1].vtbl) = *((_WORD *)this + 0xC);
  v4[1].members.super.m_uiRefCount = (UInt32)*(this + 7);
  v4[1].members.m_pcName = *(this + 8);
  return v4;
}
