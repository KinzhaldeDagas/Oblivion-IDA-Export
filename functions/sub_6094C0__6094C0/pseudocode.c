char __thiscall sub_6094C0(TESObjectREFR *this, _DWORD *a2)
{
  float *v3; // edi
  NiNode *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx

  this->vtbl[1].super.Unk_08((TESForm *)this);
  v3 = (float *)(*((_DWORD *)this + 0x17) + 4);
  v4 = this->vtbl->GetNiNode(this);
  v4->members.super.m_localTransform.pos.x = *v3;
  v4->members.super.m_localTransform.pos.y = v3[1];
  v4->members.super.m_localTransform.pos.z = v3[2];
  TESObjectREFR_SetPosition(
    this,
    *(float *)(*((_DWORD *)this + 0x17) + 4),
    *(float *)(*((_DWORD *)this + 0x17) + 8),
    *(float *)(*((_DWORD *)this + 0x17) + 0xC));
  if ( a2 && (v5 = a2[2]) != 0 && (v6 = v5 + 0x14) != 0 )
    v7 = *(_DWORD *)(v6 + 0x1C);
  else
    v7 = 0;
  v8 = v7 & 0xFFFFBFC0 | 0xF;
  if ( a2 )
  {
    v9 = a2[2];
    if ( v9 )
    {
      v10 = v9 + 0x14;
      if ( v10 )
        *(_DWORD *)(v10 + 0x1C) = v8;
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*a2 + 0x80))(a2);
  v11 = dword_B3B7D4;
  if ( !dword_B3B7D4 )
  {
    v11 = (unsigned __int16)(dword_B2EB3C + 1);
    dword_B2EB3C = v11;
    if ( !v11 )
    {
      v11 = 0xA;
      dword_B2EB3C = 0xA;
    }
    dword_B3B7D4 = v11;
  }
  v12 = a2[2];
  v13 = (v11 << 0x10) | 0xF;
  if ( v12 )
  {
    v14 = v12 + 0x14;
    if ( v14 )
      *(_DWORD *)(v14 + 0x1C) = v13;
  }
  (*(void (__thiscall **)(_DWORD *))(*a2 + 0x80))(a2);
  return 1;
}
