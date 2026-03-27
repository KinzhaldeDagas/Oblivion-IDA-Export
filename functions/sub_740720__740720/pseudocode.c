LONG __thiscall sub_740720(NiCamera *this)
{
  float v2; // ecx
  float *v3; // ebp
  float v4; // eax
  int (__thiscall *v5)(float *, float, _DWORD); // edx
  LONG result; // eax
  float v7; // [esp+18h] [ebp-8h]
  float v8; // [esp+1Ch] [ebp-4h]

  sub_70C120(this);
  v2 = this->members.WorldToCam[0][2];
  v3 = *(float **)(LODWORD(v2) + 0x5C);
  v8 = v2;
  sub_7403B0((_WORD *)LODWORD(v2));
  qmemcpy(v3 + 0xC, &this->members.super.m_worldTransform, 0x28u);
  v4 = *v3;
  v3[0x16] = this->members.super.m_worldTransform.pos.y;
  v3[0x17] = this->members.super.m_worldTransform.pos.z;
  v5 = *(int (__thiscall **)(float *, float, _DWORD))(LODWORD(v4) + 0x60);
  v7 = fabs(this->members.super.m_worldTransform.scale);
  v3[0x18] = v7;
  result = ((int (__thiscall *)(_DWORD, _DWORD, _DWORD))v5)(v3, this->members.WorldToCam[1][1], 0);
  if ( *(_BYTE *)(LODWORD(v8) + 0x60) )
  {
    NiAVObject_InitializePropertyState((NiAVObject *)this);
    result = NiNode_UpdateDynamicEffectState((NiNode *)this);
    *(_BYTE *)(LODWORD(v8) + 0x60) = 0;
  }
  return result;
}
