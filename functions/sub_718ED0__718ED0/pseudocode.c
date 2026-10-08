NiObjectNET *__thiscall sub_718ED0(char **this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x24u); /*0x718ef7*/
  v4 = v3; /*0x718efc*/
  if ( v3 ) /*0x718f0f*/
  {
    NiObjectNET::NiObjectNET(v3); /*0x718f13*/
    v4->vtbl = (NiObjectVtbl **)&NiStencilProperty::`vftable'; /*0x718f18*/
    v4[1].members.super.m_uiRefCount = 0; /*0x718f1e*/
    v4[1].members.m_pcName = (const char *)0xFFFFFFFF; /*0x718f25*/
    LOWORD(v4[1].vtbl) = 0x4180; /*0x718f2c*/
  }
  else
  {
    v4 = 0; /*0x718f34*/
  }
  sub_700A60(this, v4, a2); /*0x718f46*/
  LOWORD(v4[1].vtbl) = *((_WORD *)this + 0xC); /*0x718f4f*/
  v4[1].members.super.m_uiRefCount = (UInt32)*(this + 7); /*0x718f56*/
  v4[1].members.m_pcName = *(this + 8); /*0x718f5c*/
  return v4; /*0x718f61*/
}
