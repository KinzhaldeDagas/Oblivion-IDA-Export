void __userpurge sub_4723A0(float *a1@<ecx>, double a2@<st1>, float *a3, Actor *a4, char a5, char a6)
{
  int v8; // eax
  int v9; // edx
  float v10; // ecx
  float v11; // edx
  float v12; // ecx
  float v13; // edx
  int v15; // eax
  double v16; // st6
  int v17; // eax
  double v18; // st5
  double v19; // st5
  float v20; // ecx
  float v21; // edx
  __int64 v22; // [esp-14h] [ebp-58h]
  float v23; // [esp+4h] [ebp-40h]
  float v24; // [esp+4h] [ebp-40h]
  float v25; // [esp+8h] [ebp-3Ch] BYREF
  float v26; // [esp+Ch] [ebp-38h]
  float v27; // [esp+10h] [ebp-34h]
  _DWORD v28[3]; // [esp+14h] [ebp-30h] BYREF
  _BYTE v29[36]; // [esp+20h] [ebp-24h] BYREF
  float v30; // [esp+4Ch] [ebp+8h]
  float v31; // [esp+4Ch] [ebp+8h]
  float v32; // [esp+4Ch] [ebp+8h]
  float v33; // [esp+4Ch] [ebp+8h]
  float v34; // [esp+4Ch] [ebp+8h]

  v8 = *((_DWORD *)a1 + 1);
  if ( v8 )
  {
    v9 = *((_DWORD *)&Vector3_InitValue_ + 1);
    *(float *)v28 = Vector3_InitValue_;
    v10 = dword_B3F9B0;
    v28[1] = v9;
    v11 = a1[3];
    *(float *)&v28[2] = v10;
    v12 = a1[4];
    v25 = v11;
    v13 = a1[5];
    v26 = v12;
    v27 = v13;
    qmemcpy(v29, (const void *)(v8 + 0x30), sizeof(v29));
    if ( Actor_IsCreature(a4) )
      goto LABEL_26;
    if ( !sub_5E05B0(a4) )
      goto LABEL_26;
    v15 = *((_DWORD *)a1 + 0x28);
    if ( !v15
      || TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(v15 + 0x68)) < 3
      || TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(*((_DWORD *)a1 + 0x28) + 0x68)) > 0x10 )
    {
      goto LABEL_26;
    }
    v30 = flt_B33E9C;
    v16 = sub_51AED0((float *)*(_DWORD *)(*((_DWORD *)a1 + 0x28) + 0x68));
    v17 = *((_DWORD *)a1 + 0x2B);
    v31 = v16 * a1[0x2F] * v30;
    if ( v17 && *(_DWORD *)(v17 + 0x44) == 1 )
    {
      v23 = flt_B33E9C;
      v24 = sub_51AED0((float *)*(_DWORD *)(v17 + 0x68)) * a1[0x30] * v23;
      if ( v31 >= (double)v24 )
      {
        a2 = v31;
LABEL_13:
        v32 = dbl_A3C800 * a2;
        if ( a2 > 0.0 )
        {
          v18 = v32;
          if ( v32 < (double)v25 )
            v25 = a2;
          if ( v26 > v18 )
            v26 = a2;
          if ( v27 > v18 )
            v27 = a2;
          v33 = -v18;
          v19 = v33;
          if ( v33 > (double)v25 )
            v25 = -a2;
          if ( v26 < v19 )
            v26 = -a2;
          if ( v27 < v19 )
          {
            a2 = -a2;
            v27 = a2;
          }
        }
LABEL_26:
        if ( a4 )
        {
          switch ( a4->vtbl->super.super.GetSleepState((TESObjectREFR *)a4) )
          {
            case kSitSleep_SittingIn:
            case kSitSleep_SittingOut:
            case kSitSleep_SleepingIn:
            case kSitSleep_SleepingOut:
              a4->vtbl->super.super.GetScale((TESObjectREFR *)a4);
              v34 = a2;
              v25 = v25 / v34;
              v26 = v26 / v34;
              break;
            default:
              break;
          }
        }
        if ( a6 )
          v27 = 0.0;
        if ( a5 )
        {
          HIDWORD(v22) = v28;
          LODWORD(v22) = v29;
          sub_710580(v22, 1, (int)&v25, (int)a3);
        }
        else
        {
          v20 = v26;
          *a3 = v25;
          v21 = v27;
          a3[1] = v20;
          a3[2] = v21;
        }
        return;
      }
      v31 = v24;
    }
    a2 = v31;
    goto LABEL_13;
  }
}
