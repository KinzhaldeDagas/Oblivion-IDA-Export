// [Controller decode 2026-07-09] Non-player QueryControlState consumer: Forward 0, Back 1, SlideLeft 2, SlideRight 3 move flycam.
int __thiscall UpdateFlyCam(float *this)
{
  InputGlobal *input; // edi
  LONG v3; // eax
  bool v4; // zf
  float x; // eax
  float z; // edx
  NiTransform *v7; // eax
  double v8; // st7
  float v9; // edx
  double v10; // st7
  void *v11; // eax
  float *v12; // ecx
  int v13; // ecx
  NiPoint3 v15; // [esp+Ch] [ebp-8Ch] BYREF
  int v16; // [esp+18h] [ebp-80h]
  LONG MouseAxisMovement; // [esp+1Ch] [ebp-7Ch]
  char v18; // [esp+20h] [ebp-78h] BYREF
  NiMatrix33 out; // [esp+2Ch] [ebp-6Ch] BYREF
  NiMatrix33 right; // [esp+50h] [ebp-48h] BYREF
  NiMatrix33 v21; // [esp+74h] [ebp-24h] BYREF

  input = MEMORY[0xB33398]->input; /*0x6643ad*/
  MouseAxisMovement = InputGlobals::GetMouseAxisMovement(input, 1); /*0x6643bf*/
  v3 = InputGlobals::GetMouseAxisMovement(input, 2); /*0x6643c3*/
  v4 = bInvertYValues == 0; /*0x6643c8*/
  v16 = v3; /*0x6643cf*/
  if ( !v4 ) /*0x6643d3*/
    v16 = -v3; /*0x6643d7*/
  *(this + 0x1D3) = (double)MouseAxisMovement * flt_B14EE8 + *(this + 0x1D3); /*0x6643f0*/
  *(this + 0x1D4) = (double)v16 * flt_B14EE8 + *(this + 0x1D4); /*0x664406*/
  NiMatrix33_InitRotationZ(&v21, *(this + 0x1D3)); /*0x664415*/
  NiMatrix33_InitRotationXTransposed(&right, *(this + 0x1D4)); /*0x664428*/
  NiMAtrix33_Multiply(&v21, &out, &right); /*0x66443b*/
  x = g_zeroNiPoint3.x; /*0x664446*/
  z = g_zeroNiPoint3.z; /*0x66444b*/
  v15.y = g_zeroNiPoint3.y; /*0x664453*/
  v15.x = x; /*0x66445b*/
  v15.z = z; /*0x66445f*/
  if ( InputGlobals::QueryControlState(input, 0, 0) ) /*0x664463*/
    v15.y = v15.y + dbl_A3F3E8; /*0x664476*/
  if ( InputGlobals::QueryControlState(input, 1, 0) ) /*0x664480*/
    v15.y = v15.y - dbl_A3F3E8; /*0x664493*/
  if ( InputGlobals::QueryControlState(input, 3, 0) ) /*0x66449d*/
    v15.x = v15.x + dbl_A3F3E8; /*0x6644b0*/
  if ( InputGlobals::QueryControlState(input, 2, 0) ) /*0x6644ba*/
    v15.x = v15.x - dbl_A3F3E8; /*0x6644cd*/
  v7 = sub_7101F0((NiTransform *)&out, (NiTransform *)&v18, &v15); /*0x6644df*/
  v8 = *(this + 0x1D5); /*0x6644e4*/
  *(_QWORD *)&v15.x = *(_QWORD *)&v7->rot.data[0][0]; /*0x6644ec*/
  v9 = v7->rot.data[0][2]; /*0x6644fb*/
  *(this + 0x1D5) = v8 + v15.x; /*0x6644fe*/
  v10 = *(this + 0x1D6); /*0x664504*/
  v15.z = v9; /*0x66450a*/
  *(this + 0x1D6) = v10 + v15.y; /*0x664512*/
  *(this + 0x1D7) = *(this + 0x1D7) + v15.z; /*0x664522*/
  v11 = g_WorldSceneReceiverRoot; /*0x664528*/
  if ( *((_WORD *)g_WorldSceneReceiverRoot + 0x5B) ) /*0x66452d*/
    v12 = **((float ***)v11 + 0x2C); /*0x664541*/
  else
    v12 = 0; /*0x664537*/
  v12[0x15] = *(this + 0x1D5); /*0x664549*/
  v12[0x16] = *(this + 0x1D6); /*0x664552*/
  v12[0x17] = *(this + 0x1D7); /*0x66455b*/
  if ( *((_WORD *)v11 + 0x5B) ) /*0x66455e*/
    v13 = **((_DWORD **)v11 + 0x2C); /*0x664572*/
  else
    v13 = 0; /*0x664568*/
  qmemcpy((void *)(v13 + 0x30), &out, 0x24u); /*0x664580*/
  if ( *((_WORD *)v11 + 0x5B) ) /*0x664582*/
    return NiAVObject_UpdateNiAVObject(**((NiAVObject ***)v11 + 0x2C), 0.0, 0); /*0x6645b3*/
  else
    return NiAVObject_UpdateNiAVObject(0, 0.0, 0); /*0x664597*/
}
