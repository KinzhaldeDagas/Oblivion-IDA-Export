NiNode *__thiscall sub_608DA0(MobileObject *this, int a2, int a3)
{
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  NiNode *result; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  float *v10; // eax
  bhkCharacterProxy *CharProxy; // eax
  char *v12; // eax
  __m128 *v13; // eax
  __m128 v14; // xmm0
  double v15; // st6
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // edx
  double v17; // st5
  int v18; // eax
  NiTransform *v19; // eax
  _DWORD *v20; // ecx
  float v21; // [esp+10h] [ebp-30h] BYREF
  __m128 v22; // [esp+20h] [ebp-20h] BYREF

  v4 = *((_DWORD **)this + 0x17);
  if ( v4 )
  {
    if ( sub_8AA390((float *)a3, &Vector3_InitValue_) )
    {
      v4[4] = *(_DWORD *)a3;
      v4[5] = *(_DWORD *)(a3 + 4);
      v4[6] = *(_DWORD *)(a3 + 8);
    }
    if ( sub_8AA390((float *)a2, &Vector3_InitValue_) )
    {
      v5 = (_DWORD *)(*((_DWORD *)this + 0x17) + 4);
      *v5 = *(_DWORD *)a2;
      v5[1] = *(_DWORD *)(a2 + 4);
      v5[2] = *(_DWORD *)(a2 + 8);
    }
    **((_DWORD **)this + 0x17) = 3;
    result = *((NiNode **)this + 0x17);
    result->members.super.m_kWorldBound.Center.z = 0.0;
  }
  else
  {
    v7 = (_DWORD *)FormHeapAlloc(0x54u);
    *((_DWORD *)this + 0x17) = v7;
    *v7 = 3;
    *(_DWORD *)(*((_DWORD *)this + 0x17) + 0x2C) = 0;
    *(_DWORD *)(*((_DWORD *)this + 0x17) + 0x28) = 0;
    v8 = *((_DWORD **)this + 0x17);
    v8[4] = *(_DWORD *)a3;
    v8[5] = *(_DWORD *)(a3 + 4);
    v8[6] = *(_DWORD *)(a3 + 8);
    v9 = *((_DWORD **)this + 0x17);
    v9[1] = *(_DWORD *)a2;
    v9[2] = *(_DWORD *)(a2 + 4);
    v9[3] = *(_DWORD *)(a2 + 8);
    qmemcpy((void *)(*((_DWORD *)this + 0x17) + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
    v10 = (float *)(*((_DWORD *)this + 0x17) + 0x1C);
    *v10 = Vector3_InitValue_;
    v10[1] = *(&Vector3_InitValue_ + 1);
    v10[2] = dword_B3F9B0;
    result = (NiNode *)MobileObject_GetCharProxy(this);
    if ( result )
    {
      CharProxy = MobileObject_GetCharProxy(this);
      if ( CharProxy && (v12 = *((char **)CharProxy + 2)) != 0 )
        v13 = (__m128 *)sub_8AC0A0(v12);
      else
        v13 = (__m128 *)&stru_BA7A40;
      v14 = *v13;
      v21 = v13->m128_f32[0];
      v15 = flt_A7DEB4;
      v22 = v14;
      if ( -v15 == v21 )
      {
        result = this->vtbl->super.GetNiNode((TESObjectREFR *)this);
        if ( result )
        {
          GetNiNode = this->vtbl->super.GetNiNode;
          v17 = *((float *)this + 0x1B);
          v22.m128_f32[0] = *(float *)&dword_B258DC * v17;
          v22.m128_f32[1] = *(float *)&qword_B258E0 * v17;
          v22.m128_f32[2] = v17 * *((float *)&qword_B258E0 + 1);
          v18 = (int)GetNiNode((TESObjectREFR *)this);
          v19 = sub_7101F0((NiTransform *)(v18 + 0x64), (NiTransform *)&v21, (NiPoint3 *)&v22);
          v20 = (_DWORD *)(*((_DWORD *)this + 0x17) + 0x1C);
          *v20 = LODWORD(v19->rot.data[0][0]);
          v20[1] = LODWORD(v19->rot.data[0][1]);
          result = (NiNode *)LODWORD(v19->rot.data[0][2]);
          v20[2] = result;
        }
      }
      else
      {
        result = (NiNode *)sub_43F3E0((float *)(*((_DWORD *)this + 0x17) + 0x1C), &v22);
      }
    }
    *((_DWORD *)this + 0x18) = 1;
  }
  return result;
}
