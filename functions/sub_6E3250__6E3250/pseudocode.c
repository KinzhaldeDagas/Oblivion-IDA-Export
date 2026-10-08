int __thiscall sub_6E3250(Ni2DBuffer **this, _DWORD *a2)
{
  int result; // eax
  int v4; // esi
  NiObject *v5; // eax
  Ni2DBuffer *v6; // eax

  result = j_NiSingleInterpController_LinkObject((int)a2); /*0x6e3279*/
  if ( a2[0x36] < 0xA010068u ) /*0x6e3288*/
  {
    v4 = sub_7124A0(a2); /*0x6e3293*/
    v5 = (NiObject *)FormHeapAlloc(0x18u); /*0x6e3295*/
    if ( v5 ) /*0x6e32ab*/
      v6 = (Ni2DBuffer *)sub_6D2990(v5, v4); /*0x6e32b0*/
    else
      v6 = 0; /*0x6e32b7*/
    NiSmartPointer_Set__(this + 0xF, v6); /*0x6e32c7*/
    return (*((int (__thiscall **)(_DWORD))(*(this + 0xF))->__vftable + 0x1F))(*(this + 0xF)); /*0x6e32d3*/
  }
  return result; /*0x6e32d5*/
}
