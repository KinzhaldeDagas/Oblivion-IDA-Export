_DWORD *__thiscall sub_75F6D0(Ni2DBuffer **this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v4; // esi
  NiObject *v5; // eax
  Ni2DBuffer *v6; // eax

  result = (_DWORD *)j_NiSingleInterpController_LinkObject(this, a2); /*0x75f6d9*/
  if ( a2[0x36] < 0xA010068u ) /*0x75f6e8*/
  {
    v4 = sub_7124A0(a2); /*0x75f6f3*/
    v5 = (NiObject *)FormHeapAlloc(0x18u); /*0x75f6f5*/
    if ( v5 ) /*0x75f6ff*/
    {
      v6 = (Ni2DBuffer *)sub_6D2990(v5, v4); /*0x75f704*/
      return NiSmartPointer_Set__(this + 0xF, v6); /*0x75f70d*/
    }
    else
    {
      return NiSmartPointer_Set__(this + 0xF, 0); /*0x75f71d*/
    }
  }
  return result; /*0x75f712*/
}
