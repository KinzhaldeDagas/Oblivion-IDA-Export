int __thiscall sub_6E4370(Ni2DBuffer **this, _DWORD *a2)
{
  int result; // eax
  int v4; // esi
  NiObject *v5; // eax
  Ni2DBuffer *v6; // eax

  result = j_NiSingleInterpController_LinkObject((int)a2); /*0x6e4399*/
  if ( a2[0x36] < 0xA010068u ) /*0x6e43a8*/
  {
    v4 = sub_7124A0(a2); /*0x6e43b3*/
    v5 = (NiObject *)FormHeapAlloc(0x24u); /*0x6e43b5*/
    if ( v5 ) /*0x6e43cb*/
      v6 = (Ni2DBuffer *)sub_6E3860(v5, v4); /*0x6e43d0*/
    else
      v6 = 0; /*0x6e43d7*/
    NiSmartPointer_Set__(this + 0xF, v6); /*0x6e43e7*/
    return (*((int (__thiscall **)(_DWORD))(*(this + 0xF))->__vftable + 0x1F))(*(this + 0xF)); /*0x6e43f3*/
  }
  return result; /*0x6e43f5*/
}
