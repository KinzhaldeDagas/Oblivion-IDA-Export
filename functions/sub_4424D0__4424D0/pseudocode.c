int __thiscall sub_4424D0(ExtraDataList **this, float arg0)
{
  ExtraDataList *v3; // edi
  double v4; // st7
  int v5; // eax
  double v6; // st7
  float a2; // [esp+0h] [ebp-18h]
  float v9; // [esp+4h] [ebp-14h]
  float v10; // [esp+4h] [ebp-14h]
  float v11; // [esp+10h] [ebp-8h]
  float v12; // [esp+14h] [ebp-4h]
  float v13; // [esp+1Ch] [ebp+4h]

  v3 = *(this + 0xD); /*0x4424d7*/
  if ( v3 ) /*0x4424df*/
  {
    sub_6FACA0(0.0, 0.0); /*0x4424ea*/
    v4 = 0.0; /*0x4424ef*/
    v9 = 0.0; /*0x4424f1*/
  }
  else
  {
    v5 = (int)*(this + 0x17); /*0x4424f7*/
    v12 = *(float *)(v5 + 0xC0); /*0x442500*/
    v11 = *(float *)(v5 + 0xC4); /*0x44250a*/
    sub_6FACA0(v12, v11); /*0x44251d*/
    v9 = v11; /*0x442526*/
    v4 = v12; /*0x44252a*/
  }
  a2 = v4; /*0x44252e*/
  sub_8984A0(a2, v9); /*0x442531*/
  source = source + arg0;                       // ModernWindowsCompatible decode: TES world update increments global animation timer flt_B33A30 by arg0, which main loop supplies as fAnimationMult * frame delta outside menu mode. /*0x442546*/
  v10 = source; /*0x442552*/
  if ( v3 ) /*0x442555*/
    sub_4D4970(v3, v10);                        // BloodOnDeath decode 2026-05-30: active interior/single-cell update calls sub_4D4970, which resets the decal counter once per visual update before updating cell geometry. /*0x442559*/
  else
    sub_4823D0((unsigned int *)*(this + 2), v10); /*0x442563*/
  if ( !MEMORY[0xB333A0]->waterNodeData ) /*0x44256e*/
    sub_43F560(MEMORY[0xB333A0]); /*0x442574*/
  if ( InterfaceManager::IsOpenedMenuDialogue() ) /*0x442579*/
    v6 = flt_B06530 * *(float *)&MEMORY[0xB33E90][0xC]; /*0x442588*/
  else
    v6 = arg0; /*0x442590*/
  v13 = v6; /*0x442594*/
  Sky__Update((Sky *)*(this + 0x17), v13, v13); /*0x4425a3*/
  NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 5), source, 1);// ModernWindowsCompatible decode: updated flt_B33A30 is passed as absolute time into scene-root NiAVObject_UpdateNiAVObject, covering broad visual controllers such as texture/particle animation. /*0x4425b7*/
  return sub_676E40(&qword_B3BB2C[0x75]); /*0x4425c6*/
}
