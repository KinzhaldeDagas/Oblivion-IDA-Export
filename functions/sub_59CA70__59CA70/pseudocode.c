// [Controller decode 2026-07-09] Controls menu cancel/scroll update. Escape control 29 backs out/cancels; mouse release clears rebind gate.
void __usercall ControlsMenu::UpdateCancelAndScroll(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>)
{
  InputGlobal *input; // edi
  int v9; // eax
  int v10; // eax
  int v11; // edx
  double v12; // st5
  float v13; // [esp+10h] [ebp-10h]
  float v14; // [esp+1Ch] [ebp-4h]

  input = MEMORY[0xB33398]->input; /*0x59ca7a*/
  LOBYTE(v9) = InputGlobals::QueryMouseKeyState(input, 0, 1u); /*0x59ca85*/
  if ( v9 || InputGlobals::QueryControlState(input, 0x1D, 1) || sub_6DA150(9) == 2 ) /*0x59caa9*/
    sub_59C9F0(a2, a3, a4, a5, a6); /*0x59caab*/
  v10 = *(_DWORD *)(a1 + 0x2C); /*0x59cab0*/
  if ( v10 ) /*0x59cab5*/
  {
    v11 = *(_DWORD *)(v10 + 0x58); /*0x59cac9*/
    v12 = flt_B13FC4 * *(float *)&MEMORY[0xB33E90][0xC] + *(float *)(v10 + 0x5C); /*0x59cad0*/
    *(_DWORD *)(v10 + 0x54) = *(_DWORD *)(v10 + 0x54); /*0x59cad4*/
    *(_DWORD *)(v10 + 0x58) = v11; /*0x59cad7*/
    v14 = v12; /*0x59cadc*/
    *(float *)(v10 + 0x5C) = v14; /*0x59cae7*/
    NiAVObject_UpdateNiAVObject(*(NiAVObject **)(a1 + 0x2C), 0.0, 1); /*0x59caf0*/
    v13 = *(float *)(*(_DWORD *)(a1 + 0x2C) + 0x2C) + *(float *)(*(_DWORD *)(a1 + 0x2C) + 0x2C); /*0x59cb01*/
    if ( v13 < (double)v14 ) /*0x59cb10*/
      sub_59C9F0(v14, a3, a4, a5, a6); /*0x59cb17*/
  }
}
