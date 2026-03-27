NiNode *__thiscall sub_6079A0(MobileObject *this, int a2)
{
  NiNode *result; // eax
  _DWORD *v4; // eax
  float *v5; // eax
  float *v6; // eax
  float *v7; // eax
  bhkCharacterProxy *CharProxy; // eax
  char *v9; // eax
  __m128 *v10; // eax
  __m128 v11; // xmm0
  double v12; // st6
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // eax
  double v14; // st5
  int v15; // eax
  NiTransform *v16; // eax
  _DWORD *v17; // ecx
  float v18; // [esp+10h] [ebp-30h] BYREF
  __m128 v19; // [esp+20h] [ebp-20h] BYREF

  result = *((NiNode **)this + 0x17);
  if ( result )
  {
    result->vtbl = (NiNodeVtbl *)4;
  }
  else
  {
    v4 = (_DWORD *)FormHeapAlloc(0x54u);
    *((_DWORD *)this + 0x17) = v4;
    *v4 = 4;
    *(_DWORD *)(*((_DWORD *)this + 0x17) + 0x2C) = 0;
    *(_DWORD *)(*((_DWORD *)this + 0x17) + 0x28) = a2;
    v5 = *((float **)this + 0x17);
    v5[4] = Vector3_InitValue_;
    v5[5] = *(&Vector3_InitValue_ + 1);
    v5[6] = dword_B3F9B0;
    v6 = *((float **)this + 0x17);
    v6[1] = Vector3_InitValue_;
    v6[2] = *(&Vector3_InitValue_ + 1);
    v6[3] = dword_B3F9B0;
    qmemcpy((void *)(*((_DWORD *)this + 0x17) + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
    v7 = (float *)(*((_DWORD *)this + 0x17) + 0x1C);
    *v7 = Vector3_InitValue_;
    v7[1] = *(&Vector3_InitValue_ + 1);
    v7[2] = dword_B3F9B0;
    result = (NiNode *)MobileObject_GetCharProxy(this);
    if ( result )
    {
      CharProxy = MobileObject_GetCharProxy(this);
      if ( CharProxy && (v9 = *((char **)CharProxy + 2)) != 0 )
        v10 = (__m128 *)sub_8AC0A0(v9);
      else
        v10 = (__m128 *)&stru_BA7A40;
      v11 = *v10;
      v18 = v10->m128_f32[0];
      v12 = flt_A7DEB4;
      v19 = v11;
      if ( -v12 == v18 )
      {
        result = this->vtbl->super.GetNiNode((TESObjectREFR *)this);
        if ( result )
        {
          GetNiNode = this->vtbl->super.GetNiNode;
          v14 = *((float *)this + 0x1B);
          v19.m128_f32[0] = *(float *)&dword_B258DC * v14;
          v19.m128_f32[1] = *(float *)&qword_B258E0 * v14;
          v19.m128_f32[2] = v14 * *((float *)&qword_B258E0 + 1);
          v15 = (int)GetNiNode((TESObjectREFR *)this);
          v16 = sub_7101F0((NiTransform *)(v15 + 0x64), (NiTransform *)&v18, (NiPoint3 *)&v19);
          v17 = (_DWORD *)(*((_DWORD *)this + 0x17) + 0x1C);
          *v17 = LODWORD(v16->rot.data[0][0]);
          v17[1] = LODWORD(v16->rot.data[0][1]);
          result = (NiNode *)LODWORD(v16->rot.data[0][2]);
          v17[2] = result;
        }
      }
      else
      {
        result = (NiNode *)sub_43F3E0((float *)(*((_DWORD *)this + 0x17) + 0x1C), &v19);
      }
    }
  }
  *((_DWORD *)this + 0x18) = 1;
  return result;
}
