void __usercall sub_488FD3(int a1@<esi>, int a2, int a3, int a4, float a5)
{
  _DWORD *v5; // ecx
  int v6; // ebx
  float *SafeFloatPointer; // eax
  signed int Magnitude; // eax

  v5 = *(_DWORD **)(a1 + 4); /*0x488fd3*/
  if ( !v5 ) /*0x488fd8*/
    JUMPOUT(0x488EF4); /*0x488ef4*/
  v6 = v5[7]; /*0x488fde*/
  if ( (*(_DWORD *)(v6 + 0x58) & 0x100) != 0 ) /*0x488fe9*/
  {
    SafeFloatPointer = GameSetting_GetSafeFloatPointer(&flt_B37ED0[0x84]); /*0x488ff0*/
    Magnitude = Double_To_SInt32(*SafeFloatPointer); /*0x488ff7*/
  }
  else
  {
    Magnitude = EffectItem_GetMagnitude(v5); /*0x488ffe*/
  }
  sub_489003(Magnitude, v6, a1, a2, a3, a4, a5); /*0x488ffc*/
}
