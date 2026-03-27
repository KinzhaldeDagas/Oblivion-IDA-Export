NiObjectNET *__thiscall sub_740DC0(char **this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x2Cu);
  v4 = v3;
  if ( v3 )
  {
    NiObjectNET::NiObjectNET(v3);
    v4->vtbl = (NiObjectVtbl **)&NiFogProperty::`vftable';
    *(float *)&v4[1].members.m_pcName = 0.0;
    *(float *)&v4[1].members.m_controller = 0.0;
    *(float *)&v4[1].members.m_extraDataList = 0.0;
    LOWORD(v4[1].vtbl) = 0;
    *(float *)&v4[1].members.super.m_uiRefCount = 1.0;
    v4[1].members.m_pcName = (const char *)dword_B3FA90;
    v4[1].members.m_controller = (NiInterpController *)dword_B3FA94;
    v4[1].members.m_extraDataList = (NiExtraData **)dword_B3FA98;
  }
  else
  {
    v4 = 0;
  }
  sub_700A60(this, v4, a2);
  LOWORD(v4[1].vtbl) = *((_WORD *)this + 0xC);
  v4[1].members.super.m_uiRefCount = *((UInt32 *)this + 7);
  v4[1].members.m_pcName = *(this + 8);
  v4[1].members.m_controller = (NiInterpController *)*(this + 9);
  v4[1].members.m_extraDataList = (NiExtraData **)*(this + 0xA);
  return v4;
}
