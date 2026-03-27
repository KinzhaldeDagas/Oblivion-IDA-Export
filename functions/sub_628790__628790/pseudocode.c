int __cdecl sub_628790(int a1, TESObjectREFR *a2, float a3, int a4, char a5)
{
  float *v6; // eax
  float *v7; // eax
  double v8; // st7
  float v9; // edx
  float v10; // eax
  double v11; // st7
  double v12; // st7
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v14; // ebx
  int *v15; // eax
  float v17; // [esp+Ch] [ebp-24h]
  float v18; // [esp+10h] [ebp-20h]
  float v19; // [esp+14h] [ebp-1Ch]
  float v20; // [esp+18h] [ebp-18h]
  float v21; // [esp+18h] [ebp-18h]
  float v22; // [esp+1Ch] [ebp-14h]
  float v23; // [esp+1Ch] [ebp-14h]
  float v24; // [esp+20h] [ebp-10h]
  float v25; // [esp+20h] [ebp-10h]
  int v26; // [esp+24h] [ebp-Ch] BYREF
  float v27; // [esp+28h] [ebp-8h]
  float v28; // [esp+2Ch] [ebp-4h]
  int v29; // [esp+34h] [ebp+4h]

  *(float *)a1 = Vector3_InitValue_;
  *(float *)(a1 + 4) = *(&Vector3_InitValue_ + 1);
  *(float *)(a1 + 8) = dword_B3F9B0;
  if ( a4 )
  {
    if ( a2 )
    {
      v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x174))(a4);
      v22 = v6[1];
      v20 = *v6;
      v24 = v6[2];
      v7 = a2->vtbl->GetPos(a2);
      *(float *)&v29 = a3 + dbl_A2FC68;
      v17 = *v7;
      v18 = v7[1];
      v19 = v7[2];
      if ( a5 )
      {
        *(float *)&v26 = v20 - v17;
        v27 = v22 - v18;
        v8 = v24 - v19;
      }
      else
      {
        *(float *)&v26 = v17 - v20;
        v27 = v18 - v22;
        v8 = v19 - v24;
      }
      v28 = v8;
      v9 = v27;
      v10 = v28;
      *(float *)a1 = *(float *)&v26;
      *(float *)(a1 + 4) = v9;
      *(float *)(a1 + 8) = v10;
      sub_43F350((float *)a1);
      *(float *)&v26 = *(float *)a1 * *(float *)&v29;
      v27 = *(float *)(a1 + 4) * *(float *)&v29;
      v28 = *(float *)&v29 * *(float *)(a1 + 8);
      v21 = *(float *)&v26 + v17;
      v11 = v27;
      *(float *)a1 = v21;
      v23 = v11 + v18;
      v12 = v28;
      *(float *)(a1 + 4) = v23;
      v25 = v12 + v19;
      *(float *)(a1 + 8) = v25;
      ParentCell = TESObjectREFR_GetParentCell(a2);
      v14 = ParentCell;
      if ( ParentCell )
      {
        if ( TESObjectCELL_IsInterior(ParentCell) )
        {
          v15 = sub_5E2E20(a2, &v26, *(_DWORD *)a1, *(_DWORD *)(a1 + 4), *(float *)(a1 + 8), v14, 0.0, 0, 0);
          *(_DWORD *)a1 = *v15;
          *(_DWORD *)(a1 + 4) = v15[1];
          *(_DWORD *)(a1 + 8) = v15[2];
        }
      }
    }
  }
  return a1;
}
