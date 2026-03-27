void __thiscall sub_5F0EE0(Actor *this, _DWORD *arg0, float a3)
{
  NiNode *v4; // ebx
  int v5; // eax
  float v6; // edx
  float v7; // edi
  NiTransform *v8; // edi
  NiPoint3 *v9; // eax
  float *v10; // eax
  float v11; // ecx
  float v12; // edx
  float v13; // eax
  NiPoint3 *v14; // eax
  float *v15; // eax
  float v16; // ecx
  float v17; // edx
  float v18; // eax
  double v19; // rt0
  double v20; // rt1
  float v21; // [esp+14h] [ebp-54h] BYREF
  float v22; // [esp+18h] [ebp-50h]
  float v23; // [esp+1Ch] [ebp-4Ch]
  float v24; // [esp+20h] [ebp-48h]
  float v25; // [esp+24h] [ebp-44h]
  float v26; // [esp+28h] [ebp-40h]
  float a2; // [esp+2Ch] [ebp-3Ch] BYREF
  float v28; // [esp+30h] [ebp-38h]
  float v29; // [esp+34h] [ebp-34h]
  float v30; // [esp+38h] [ebp-30h]
  float v31[3]; // [esp+3Ch] [ebp-2Ch] BYREF
  __m128 v32; // [esp+48h] [ebp-20h] BYREF

  if ( arg0 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*arg0 + 0x170))(arg0) + 4) != 0x24
      || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*arg0 + 0x278))(arg0) )
    {
      v4 = (NiNode *)arg0[0xF];
      if ( v4 )
      {
        v5 = (int)this->vtbl->super.super.GetNiNode(this);
        v6 = *(&Vector3_InitValue_ + 1);
        v7 = dword_B3F9B0;
        v24 = Vector3_InitValue_;
        v25 = v6;
        v26 = v7;
        v21 = v24;
        v22 = v6;
        v23 = v7;
        if ( v5 )
        {
          v8 = (NiTransform *)(v5 + 0x64);
          v9 = (NiPoint3 *)this->members.super.process->GetUnk20C(this->members.super.process);
          v10 = sub_53D4B0(v8, &a2, v9);
          v11 = *v10;
          v12 = v10[1];
          v13 = v10[2];
          v24 = v11;
          v25 = v12;
          v26 = v13;
          v14 = (NiPoint3 *)sub_5E6A40(this, &a2);
          v15 = sub_53D4B0(v8, v31, v14);
          v16 = *v15;
          v17 = v15[1];
          v18 = v15[2];
          v21 = v16;
          v22 = v17;
          v23 = v18;
        }
        a2 = v24 - v21;
        v21 = a2;
        v28 = v25 - v22;
        v22 = v28;
        v29 = v26 - v23;
        v23 = v29;
        sub_43F350(&v21);
        v19 = dbl_A30F70;
        v21 = v21 * v19;
        v22 = v22 * v19;
        v23 = v19 * v23;
        v21 = v24 + v21;
        v22 = v22 + v25;
        v23 = v23 + v26;
        v30 = sub_547770(a3);
        sub_8B8700(v4);
        sub_88D070(v4, 1, 1, 0);
        NiAVObject_UpdateNiAVObject((NiAVObject *)v4, 0.0, 0);
        v20 = hkFactor;
        v32.m128_f32[0] = v21 * v20;
        v32.m128_f32[1] = v22 * v20;
        v32.m128_f32[2] = v20 * v23;
        sub_5364B0((int)v4, &v32, v30);
      }
    }
  }
}
