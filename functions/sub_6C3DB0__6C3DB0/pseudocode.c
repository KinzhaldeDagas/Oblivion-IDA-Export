// Oblivion NiTransformController link phase. Runs generic controller linking; for stream versions below 0x0A010068 resolves the legacy NiTransformData link, constructs a 0x38-byte NiTransformInterpolator around it, assigns smart pointer +0x3C, then invokes interpolator virtual +0x7C to collapse constant tracks.
int __thiscall NiTransformController_LinkObject(Ni2DBuffer **this, _DWORD *a2)
{
  int result; // eax
  int v4; // esi
  NiObject *v5; // eax
  Ni2DBuffer *v6; // eax

  result = NiSingleInterpController_LinkObject((int)a2); /*0x6c3dd9*/
  if ( a2[0x36] < 0xA010068u ) /*0x6c3de8*/
  {
    v4 = sub_7124A0(a2); /*0x6c3df3*/
    v5 = (NiObject *)FormHeapAlloc(0x38u); /*0x6c3df5*/
    if ( v5 ) /*0x6c3e0b*/
      v6 = (Ni2DBuffer *)NiTransformInterpolator_ConstructWithData(v5, v4); /*0x6c3e10*/
    else
      v6 = 0; /*0x6c3e17*/
    NiSmartPointer_Set__(this + 0xF, v6); /*0x6c3e27*/
    return (*((int (__thiscall **)(_DWORD))(*(this + 0xF))->__vftable + 0x1F))(*(this + 0xF)); /*0x6c3e33*/
  }
  return result; /*0x6c3e35*/
}
