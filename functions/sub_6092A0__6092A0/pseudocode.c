char __thiscall sub_6092A0(TESObjectREFR *this)
{
  TESObjectREFR *v1; // esi
  int v2; // ebx
  int v3; // eax
  _DWORD *BhkCollisionObjectRecursive; // eax
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
  NiTransform parent; // [esp+C0h] [ebp-B8h] BYREF
  NiTransform out; // [esp+F4h] [ebp-84h] BYREF
  __m128 v19[3]; // [esp+128h] [ebp-50h] BYREF
  __int128 v20; // [esp+158h] [ebp-20h]

  v1 = this; /*0x6092bc*/
  v2 = ((int (__fastcall *)(TESObjectREFR *))this->vtbl->GetNiNode)(this); /*0x6092cd*/
  if ( !v2 ) /*0x6092d1*/
    return 1; /*0x6092d1*/
  if ( (v1->member.super.flags & 0x20) != 0 ) /*0x6092db*/
    return 1; /*0x6092db*/
  v3 = *(_DWORD *)&v1[1].member.super.type; /*0x6092dd*/
  if ( !v3 || *(_DWORD *)v3 != 1 ) /*0x6092e7*/
    return 1; /*0x6092e7*/
  BhkCollisionObjectRecursive = NiAVObject_FindBhkCollisionObjectRecursive(*(NiAVObject **)(v3 + 0x2C)); /*0x6092ed*/
  if ( !BhkCollisionObjectRecursive ) /*0x6092f7*/
  {
    ((void (__thiscall *)(TESObjectREFR *, int))v1->vtbl->super.Unk_23)(v1, 1); /*0x609305*/
    return 1; /*0x60931d*/
  }
  v6 = BhkCollisionObjectRecursive[4]; /*0x60931e*/
  if ( sub_607880((_DWORD *)v6) ) /*0x609327*/
    return 1; /*0x60932e*/
  if ( sub_4B6D90((_DWORD *)v6) == 6 ) /*0x60933a*/
  {
    qmemcpy(&v15, (const void *)(*(_DWORD *)(*(_DWORD *)&v1[1].member.super.type + 0x2C) + 0x64), sizeof(v15)); /*0x609352*/
    if ( NiRTTI::IsObjectOfRTTIType(&stru_BA8018, (NiObject *)v6) ) /*0x60935e*/
    {
      hkMatrix3_SetFromQuaternion(v19[0].m128_f32, (float *)(v6 + 0x20)); /*0x609375*/
      v20 = *(_OWORD *)(v6 + 0x30); /*0x60938b*/
      sub_6077C0((int)&a3, v19); /*0x609393*/
      qmemcpy(&parent, &v15, sizeof(parent)); /*0x6093b7*/
      qmemcpy(&v15, NiTransform_Compose(&parent, &out, &a3), sizeof(v15)); /*0x6093d1*/
    }
    v1 = this; /*0x6093d3*/
  }
  else
  {
    if ( v6 ) /*0x609494*/
      v12 = *(_DWORD *)(v6 + 8); /*0x609496*/
    else
      v12 = 0; /*0x60949b*/
    sub_6077C0((int)&v15, (__m128 *)(*(_DWORD *)(v12 + 0x50) + 0x10)); /*0x6094a9*/
  }
  v7 = *(float **)&v1[1].member.super.type; /*0x6093d7*/
  v15.scale = 1.0; /*0x6093dc*/
  qmemcpy(&a4, v7 + 0xC, 0x24u); /*0x6093f2*/
  a4.pos.x = v7[1]; /*0x6093f7*/
  a4.pos.y = v7[2]; /*0x609401*/
  v8 = v7[3]; /*0x609408*/
  a4.scale = 1.0; /*0x609413*/
  a4.pos.z = v8; /*0x609423*/
  NiTransform_Compose(&v15, &a3, &a4); /*0x60942a*/
  x = a3.pos.x; /*0x60942f*/
  y = a3.pos.y; /*0x609433*/
  TESObjectREFR_SetPosition(this, a3.pos.x, a3.pos.y, a3.pos.z); /*0x60944c*/
  z = a3.pos.z; /*0x609451*/
  *(float *)(v2 + 0x54) = x; /*0x609457*/
  *(float *)(v2 + 0x58) = y; /*0x60945a*/
  qmemcpy((void *)(v2 + 0x30), &a3, 0x24u); /*0x609469*/
  *(float *)(v2 + 0x5C) = z; /*0x609470*/
  NiAVObject_UpdateNiAVObject((NiAVObject *)v2, 0.0, 0); /*0x609476*/
  return 0; /*0x609309*/
}
