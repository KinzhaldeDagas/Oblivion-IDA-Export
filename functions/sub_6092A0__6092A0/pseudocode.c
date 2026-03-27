char __thiscall sub_6092A0(TESObjectREFR *this)
{
  TESObjectREFR *v1; // esi
  int v2; // ebx
  _DWORD *v3; // eax
  int v4; // eax
  int v6; // edi
  float *v7; // eax
  float v8; // eax
  float x; // esi
  float y; // edi
  float z; // edx
  int v12; // edi
  NiTransform a3; // [esp+24h] [ebp-154h] BYREF
  NiTransform v15; // [esp+58h] [ebp-120h] BYREF
  NiTransform a4; // [esp+8Ch] [ebp-ECh] BYREF
  NiTransform v17; // [esp+C0h] [ebp-B8h] BYREF
  NiTransform a2; // [esp+F4h] [ebp-84h] BYREF
  __m128 v19[3]; // [esp+128h] [ebp-50h] BYREF
  __int128 v20; // [esp+158h] [ebp-20h]

  v1 = this;
  v2 = ((int (__fastcall *)(TESObjectREFR *))this->vtbl->GetNiNode)(this);
  if ( !v2 )
    return 1;
  if ( (v1->member.super.flags & 0x20) != 0 )
    return 1;
  v3 = *(_DWORD **)&v1[1].member.super.type;
  if ( !v3 || *v3 != 1 )
    return 1;
  v4 = sub_480340(v3[0xB]);
  if ( !v4 )
  {
    ((void (__thiscall *)(TESObjectREFR *, int))v1->vtbl->super.Unk_23)(v1, 1);
    return 1;
  }
  v6 = *(_DWORD *)(v4 + 0x10);
  if ( sub_607880((_DWORD *)v6) )
    return 1;
  if ( sub_4B6D90((_DWORD *)v6) == 6 )
  {
    qmemcpy(&v15, (const void *)(*(_DWORD *)(*(_DWORD *)&v1[1].member.super.type + 0x2C) + 0x64), sizeof(v15));
    if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_BA8018, (NiObject *)v6) )
    {
      sub_8B1DD0(v19[0].m128_f32, (float *)(v6 + 0x20));
      v20 = *(_OWORD *)(v6 + 0x30);
      sub_6077C0((int)&a3, v19);
      qmemcpy(&v17, &v15, sizeof(v17));
      qmemcpy(&v15, sub_53D7A0(&v17, &a2, &a3), sizeof(v15));
    }
    v1 = this;
  }
  else
  {
    if ( v6 )
      v12 = *(_DWORD *)(v6 + 8);
    else
      v12 = 0;
    sub_6077C0((int)&v15, (__m128 *)(*(_DWORD *)(v12 + 0x50) + 0x10));
  }
  v7 = *(float **)&v1[1].member.super.type;
  v15.scale = 1.0;
  qmemcpy(&a4, v7 + 0xC, 0x24u);
  a4.pos.x = v7[1];
  a4.pos.y = v7[2];
  v8 = v7[3];
  a4.scale = 1.0;
  a4.pos.z = v8;
  sub_53D7A0(&v15, &a3, &a4);
  x = a3.pos.x;
  y = a3.pos.y;
  TESObjectREFR_SetPosition(this, a3.pos.x, a3.pos.y, a3.pos.z);
  z = a3.pos.z;
  *(float *)(v2 + 0x54) = x;
  *(float *)(v2 + 0x58) = y;
  qmemcpy((void *)(v2 + 0x30), &a3, 0x24u);
  *(float *)(v2 + 0x5C) = z;
  NiAVObject_UpdateNiAVObject((NiAVObject *)v2, 0.0, 0);
  return 0;
}
