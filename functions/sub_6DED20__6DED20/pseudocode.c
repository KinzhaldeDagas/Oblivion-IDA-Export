int __thiscall sub_6DED20(Ni2DBuffer **this, _DWORD *a2)
{
  int result; // eax
  int v4; // esi
  NiObject *v5; // eax
  Ni2DBuffer *v6; // eax

  result = j_NiSingleInterpController_LinkObject((int)a2); /*0x6ded49*/
  if ( a2[0x36] < 0xA010068u ) /*0x6ded58*/
  {
    v4 = sub_7124A0(a2); /*0x6ded63*/
    v5 = (NiObject *)FormHeapAlloc(0x20u); /*0x6ded65*/
    if ( v5 ) /*0x6ded7b*/
      v6 = (Ni2DBuffer *)sub_6DA160(v5, v4); /*0x6ded80*/
    else
      v6 = 0; /*0x6ded87*/
    NiSmartPointer_Set__(this + 0xF, v6); /*0x6ded97*/
    return (*((int (__thiscall **)(_DWORD))(*(this + 0xF))->__vftable + 0x1F))(*(this + 0xF)); /*0x6deda3*/
  }
  return result; /*0x6deda5*/
}
