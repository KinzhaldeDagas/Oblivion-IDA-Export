void __userpurge sub_45E990(double a1@<st2>, double a2@<st1>, double st7_0@<st0>, TESChildCELL *a4)
{
  float *v4; // eax
  float v5; // ecx
  float v6; // edx
  float v7; // eax
  float v8; // edx
  float v9; // eax
  TESObjectCELL *v10; // edi
  UInt32 v11; // eax
  TESWorldSpace *v12; // ebx
  float *v13; // eax
  int v14; // eax
  double v15; // st7
  BSExtraDataVtbl *v16; // eax
  BSExtraDataVtbl *v17; // edi
  TESObjectCELL *v18; // ebx
  TESWorldSpace *v19; // eax
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v21; // eax
  _DWORD *v22; // eax
  char *v23; // eax
  float *v24; // eax
  float v25; // ecx
  float v26; // edx
  float v27; // [esp+1Ch] [ebp-24h] BYREF
  float v28; // [esp+20h] [ebp-20h]
  float v29; // [esp+24h] [ebp-1Ch]
  int a3; // [esp+28h] [ebp-18h] BYREF
  int a3_4; // [esp+2Ch] [ebp-14h] BYREF
  int v32; // [esp+30h] [ebp-10h]
  float v33[3]; // [esp+34h] [ebp-Ch] BYREF

  if ( a4 )
  {
    v4 = (float *)(*((int (__usercall **)@<eax>(TESChildCELL *@<ecx>, double@<st0>, double@<st1>))a4->vtbl + 0x5D))(
                    a4,
                    st7_0,
                    a2);
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v27 = v5;
    v33[0] = *(float *)&a4[8].vtbl;
    v28 = v6;
    v8 = *(float *)&a4[9].vtbl;
    v29 = v7;
    v9 = *(float *)&a4[0xA].vtbl;
    v33[1] = v8;
    v33[2] = v9;
    if ( sub_452430(&v27) )
    {
      PrintError("Corrupt location found loading reference %08X, fixing it.", a4[3].vtbl);
      if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))a4->vtbl + 0x64))(a4) && sub_5E0260(a4) )
      {
        v10 = (TESObjectCELL *)sub_5E1F60(a4);
        v11 = sub_5E1F40((Actor *)a4);
        v12 = (TESWorldSpace *)v11;
        if ( v10 || v11 )
        {
          v13 = (float *)(*((int (__usercall **)@<eax>(TESChildCELL *@<ecx>, int *))a4->vtbl + 0x3D))(a4, &a3);
          TESObjectREFR_SetPosition((TESObjectREFR *)a4, *v13, v13[1], v13[2]);
          v14 = (*((int (__usercall **)@<eax>(TESChildCELL *@<ecx>, int *, double@<st0>))a4->vtbl + 0x3C))(
                  a4,
                  &a3_4,
                  st7_0);
          v15 = *(float *)(v14 + 8);
          sub_4D8A10(*(float *)(v14 + 8));
          sub_4DD4B0((int)v12, a1, a2, v15, (Actor *)a4, v10, v12);
        }
      }
      else if ( BaseExtraList_GetExtraData((ExtraDataList *)&a4[0x11], kExtraData_StartingPosition) )
      {
        (*((void (__thiscall **)(TESChildCELL *, float *))a4->vtbl + 0x3D))(a4, &v27);
        (*((void (__thiscall **)(TESChildCELL *, int *))a4->vtbl + 0x3C))(a4, &a3);
        TESObjectREFR_SetPosition((TESObjectREFR *)a4, v27, v28, v29);
        sub_4D89A0((int *)a4, a3, a3_4, v32);
        v16 = sub_41F7F0((ExtraDataList *)&a4[0x11]);
        v17 = v16;
        if ( v16 )
        {
          v18 = (TESObjectCELL *)OblivionDynamicCast(
                                   v16,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESObjectCELL `RTTI Type Descriptor',
                                   0);
          v19 = (TESWorldSpace *)OblivionDynamicCast(
                                   v17,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESWorldSpace `RTTI Type Descriptor',
                                   0);
          if ( v18 || v19 )
            sub_4DD4B0((int)v18, a1, a2, st7_0, (Actor *)a4, v18, v19);
        }
      }
      else if ( TESObjectREFR_GetParentCell((TESObjectREFR *)a4)
             && (ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a4), sub_4AF170(ParentCell))
             && (v21 = TESObjectREFR_GetParentCell((TESObjectREFR *)a4),
                 v22 = (_DWORD *)sub_4AF170(v21),
                 (v23 = (char *)sub_4E5A10(v22)) != 0) )
      {
        v24 = (float *)sub_4BEF40(v23);
        v25 = *v24;
        v26 = v24[1];
        v32 = *((int *)v24 + 2);
        *(float *)&v32 = *(float *)&v32 + dbl_A3AA50;
        TESObjectREFR_SetPosition((TESObjectREFR *)a4, v25, v26, *(float *)&v32);
      }
      else
      {
        TESObjectREFR_SetPosition((TESObjectREFR *)a4, Vector3_InitValue_, *(&Vector3_InitValue_ + 1), dword_B3F9B0);
      }
    }
    if ( sub_452430(v33) )
    {
      PrintError("Corrupt angle found loading reference %08X, setting to (0, 0, 0).", a4[3].vtbl);
      sub_4D89A0((int *)a4, LODWORD(Vector3_InitValue_), *((_DWORD *)&Vector3_InitValue_ + 1), LODWORD(dword_B3F9B0));
    }
  }
}
