NiObjectNET *__thiscall sub_740DC0(char **this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x2Cu); /*0x740de7*/
  v4 = v3; /*0x740dec*/
  if ( v3 ) /*0x740dff*/
  {
    NiObjectNET::NiObjectNET(v3); /*0x740e03*/
    v4->vtbl = (NiObjectVtbl **)&NiFogProperty::`vftable'; /*0x740e0a*/
    *(float *)&v4[1].members.m_pcName = 0.0; /*0x740e10*/
    *(float *)&v4[1].members.m_controller = 0.0; /*0x740e13*/
    *(float *)&v4[1].members.m_extraDataList = 0.0; /*0x740e16*/
    LOWORD(v4[1].vtbl) = 0; /*0x740e1b*/
    *(float *)&v4[1].members.super.m_uiRefCount = 1.0; /*0x740e21*/
    v4[1].members.m_pcName = (const char *)LODWORD(stru_B3FA90.x); /*0x740e29*/
    v4[1].members.m_controller = (NiInterpController *)LODWORD(stru_B3FA90.y); /*0x740e32*/
    v4[1].members.m_extraDataList = (NiExtraData **)LODWORD(stru_B3FA90.z); /*0x740e3b*/
  }
  else
  {
    v4 = 0; /*0x740e40*/
  }
  sub_700A60(this, v4, a2); /*0x740e52*/
  LOWORD(v4[1].vtbl) = *((_WORD *)this + 0xC); /*0x740e5b*/
  v4[1].members.super.m_uiRefCount = *((UInt32 *)this + 7); /*0x740e65*/
  v4[1].members.m_pcName = *(this + 8); /*0x740e6a*/
  v4[1].members.m_controller = (NiInterpController *)*(this + 9); /*0x740e70*/
  v4[1].members.m_extraDataList = (NiExtraData **)*(this + 0xA); /*0x740e76*/
  return v4; /*0x740e7b*/
}
