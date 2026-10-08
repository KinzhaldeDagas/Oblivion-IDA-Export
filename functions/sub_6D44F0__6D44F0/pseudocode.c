int __thiscall sub_6D44F0(Ni2DBuffer **this, _DWORD *a2)
{
  int result; // eax
  int v4; // esi
  float *v5; // eax
  float *v6; // eax

  result = j_NiSingleInterpController_LinkObject((int)a2); /*0x6d4519*/
  if ( a2[0x36] < 0xA010068u ) /*0x6d4528*/
  {
    v4 = sub_7124A0(a2); /*0x6d4533*/
    v5 = (float *)FormHeapAlloc(0x18u); /*0x6d4535*/
    if ( v5 ) /*0x6d454b*/
      v6 = sub_6E7F50(v5, v4); /*0x6d4550*/
    else
      v6 = 0; /*0x6d4557*/
    NiSmartPointer_Set__(this + 0xF, (Ni2DBuffer *)v6); /*0x6d4567*/
    return (*((int (__thiscall **)(_DWORD))(*(this + 0xF))->__vftable + 0x1F))(*(this + 0xF)); /*0x6d4573*/
  }
  return result; /*0x6d4575*/
}
