LONG __thiscall sub_740720(NiCamera *this)
{
  float v2; // ecx
  float *v3; // ebp
  float v4; // eax
  int (__thiscall *v5)(float *, float, _DWORD); // edx
  LONG result; // eax
  float v7; // [esp+18h] [ebp-8h]
  float v8; // [esp+1Ch] [ebp-4h]

  NiAVObject_UpdateWorldTransform((NiAVObject *)this); /*0x740729*/
  v2 = this->members.WorldToCam[0][2]; /*0x74072e*/
  v3 = *(float **)(LODWORD(v2) + 0x5C); /*0x740734*/
  v8 = v2; /*0x740737*/
  sub_7403B0((_WORD *)LODWORD(v2)); /*0x74073b*/
  qmemcpy(v3 + 0xC, &this->members.super.m_worldTransform, 0x28u); /*0x74074b*/
  v4 = *v3; /*0x74075c*/
  v3[0x16] = this->members.super.m_worldTransform.pos.y; /*0x74075f*/
  v3[0x17] = this->members.super.m_worldTransform.pos.z; /*0x740768*/
  v5 = *(int (__thiscall **)(float *, float, _DWORD))(LODWORD(v4) + 0x60); /*0x74076b*/
  v7 = fabs(this->members.super.m_worldTransform.scale); /*0x740779*/
  v3[0x18] = v7; /*0x740783*/
  result = ((int (__thiscall *)(_DWORD, _DWORD, _DWORD))v5)(v3, this->members.WorldToCam[1][1], 0); /*0x74078f*/
  if ( *(_BYTE *)(LODWORD(v8) + 0x60) ) /*0x740795*/
  {
    NiAVObject_InitializePropertyState((NiAVObject *)this); /*0x74079d*/
    result = NiNode_UpdateDynamicEffectState((NiNode *)this); /*0x7407a4*/
    *(_BYTE *)(LODWORD(v8) + 0x60) = 0; /*0x7407a9*/
  }
  return result; /*0x7407ad*/
}
