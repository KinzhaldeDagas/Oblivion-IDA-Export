NiObject *__thiscall sub_7306B0(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x1Cu); /*0x7306d7*/
  v4 = v3; /*0x7306dc*/
  if ( v3 ) /*0x7306ef*/
  {
    sub_721350(v3); /*0x7306f3*/
    v4->__vftable = (NiObjectVtbl *)&NiColorExtraData::`vftable'; /*0x7306fa*/
    *(float *)&v4[1].members.m_uiRefCount = 0.0; /*0x730700*/
    *(float *)&v4[2].__vftable = 0.0; /*0x730703*/
    *(float *)&v4[2].members.m_uiRefCount = 0.0; /*0x730706*/
    *(float *)&v4[3].__vftable = 0.0; /*0x730709*/
    v4[1].members.m_uiRefCount = dword_B25AD0; /*0x730711*/
    v4[2].__vftable = (NiObjectVtbl *)dword_B25AD4; /*0x73071a*/
    v4[2].members.m_uiRefCount = dword_B25AD8; /*0x730723*/
    v4[3].__vftable = (NiObjectVtbl *)dword_B25ADC; /*0x73072b*/
  }
  else
  {
    v4 = 0; /*0x730730*/
  }
  sub_7214A0(this, (unsigned int *)v4, a2); /*0x730742*/
  v4[1].members.m_uiRefCount = (UInt32)*(this + 3); /*0x73074d*/
  v4[2].__vftable = (NiObjectVtbl *)*(this + 4); /*0x730753*/
  v4[2].members.m_uiRefCount = (UInt32)*(this + 5); /*0x730759*/
  v4[3].__vftable = (NiObjectVtbl *)*(this + 6); /*0x73075f*/
  return v4; /*0x730764*/
}
