void __thiscall ChangeCell_____(TESObjectREFR *this, TESObjectCELL *a2)
{
  TESObjectREFR *v2; // edi
  TESObjectCELL *v3; // ebx
  BSExtraData *v4; // esi
  Sky *GlobalObject; // eax
  TESWorldSpace *WorldSpace; // eax
  int v7; // ecx
  void (__thiscall ***v8)(_DWORD, int); // ecx
  double v9; // st5
  BSExtraData *v10; // eax
  _DWORD *v11; // ebx
  TESWorldSpace *v12; // esi
  float **v13; // eax
  char v14; // bl
  float **v15; // esi
  float *v16; // edi
  float v17; // ebx
  int v18; // eax
  int *v19; // esi
  TESObjectREFR *v20; // edi
  TESForm::FormFlags flags; // eax
  int v22; // esi
  int v23; // eax
  char v24; // cl
  float v25; // eax
  _WORD *v26; // eax
  NiTArray_NiTexturingPropertyMap *v27; // esi
  unsigned int end; // ebx
  int v29; // esi
  int v30; // eax
  unsigned int *v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // eax
  TESForm::FormFlags v35; // eax
  int v36; // eax
  TESForm::FormFlags v37; // edx
  int v38; // ebx
  const char **v39; // eax
  const char *v40; // [esp+8h] [ebp-8Ch]
  char v41; // [esp+23h] [ebp-71h]
  float v43; // [esp+28h] [ebp-6Ch]
  float **v44; // [esp+28h] [ebp-6Ch]
  float v45; // [esp+2Ch] [ebp-68h] BYREF
  float v46; // [esp+30h] [ebp-64h]
  float v47; // [esp+34h] [ebp-60h]
  TESWorldSpace *v48; // [esp+38h] [ebp-5Ch] BYREF
  __int16 v49; // [esp+3Ch] [ebp-58h]
  __int16 v50; // [esp+3Eh] [ebp-56h]
  float v51[2]; // [esp+40h] [ebp-54h] BYREF
  float v52[2]; // [esp+48h] [ebp-4Ch] BYREF
  float v53[2]; // [esp+50h] [ebp-44h] BYREF
  float v54[2]; // [esp+58h] [ebp-3Ch] BYREF
  float v55[2]; // [esp+60h] [ebp-34h] BYREF
  unsigned int v56[3]; // [esp+68h] [ebp-2Ch] BYREF
  TESForm::FormFlags v57; // [esp+74h] [ebp-20h] BYREF
  BSStringT v58; // [esp+78h] [ebp-1Ch] BYREF
  int v59; // [esp+80h] [ebp-14h]
  int v60; // [esp+90h] [ebp-4h]

  v2 = this;
  v47 = 0.0;
  v3 = a2;
  if ( a2 != TESObjectREFR_GetParentCell(this) )
  {
    MobileObject_ChangeCell(v2, (ExtraDataList *)a2);
    if ( !a2 )
    {
      BSSimpleList_Clear(&v2[0x14].member.super.refID);
      return;
    }
    if ( !TESObjectCELL_IsInterior(a2) )
      v2[0x14].member.super.flags = 0;
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))v2->vtbl->Unk_5E)(v2, 0);
    sub_43DF10(ModelLoaderPtr);
    v4 = sub_4CAF90((int)a2);
    if ( v4 || !TESObjectCELL_IsInterior(a2) || sub_4C9820(a2) )
    {
      GlobalObject = Sky_CreateOrGetGlobalObject();
      Sky_CreateChildGlobalObjects(GlobalObject, (TESClimate *)v4, 0);
    }
    WorldSpace = TESObjectCELL_GetWorldSpace(a2);
    v7 = *(_DWORD *)&v2[0x14].member.baseExtraList.members.m_presenceBitfield[4];
    v48 = WorldSpace;
    v41 = 0;
    BYTE2(v2[0x14].member.niNode) = 0;
    if ( v7 )
    {
      sub_65DD90(v7);
      v8 = *(void (__thiscall ****)(_DWORD, int))&v2[0x14].member.baseExtraList.members.m_presenceBitfield[4];
      if ( v8 )
        (**v8)(v8, 1);
      *(_DWORD *)&v2[0x14].member.baseExtraList.members.m_presenceBitfield[4] = 0;
    }
    LODWORD(v47) = TESObjectCELL_GetXCoordinate(a2) << 0xC;
    LODWORD(v45) = TESObjectCELL_GetYCoordinate(a2) << 0xC;
    v46 = (float)SLODWORD(v47);
    v9 = dbl_A37650;
    v47 = v46 + v9;
    v45 = (float)SLODWORD(v45);
    v43 = v9 + v45;
    sub_4A6970(v52, v46, v45);
    sub_4A6970(v53, v46, v43);
    sub_4A6970(v54, v47, v45);
    sub_4A6970(v55, v47, v43);
    BSSimpleList_Clear(&v2[0x14].member.super.refID);
    v10 = sub_4C9B40((ExtraDataList *)a2, 1);
    if ( v10 )
    {
      LODWORD(v46) = &v10->members;
      if ( v10 != (BSExtraData *)0xFFFFFFFC )
      {
        do
        {
          v11 = *(_DWORD **)LODWORD(v46);
          v45 = *(float *)LODWORD(v46);
          if ( v45 == 0.0 )
            break;
          sub_4A6950(v51, v2->member.pos);
          if ( (v11[2] & 0x20) == 0 )
          {
            v12 = (TESWorldSpace *)v11[8];
            if ( !v12 || v12 == TESObjectREFR_GetWorldSpace(v2) )
            {
              v13 = (float **)v11[7];
              if ( v13 )
              {
                if ( v13[1] || *v13 )
                {
                  v14 = 0;
                  v44 = v13;
                  while ( 1 )
                  {
                    v15 = v44;
                    if ( !v44 )
                      break;
                    v16 = *v44;
                    if ( !*v44 )
                      goto LABEL_48;
                    if ( sub_4A7330(v16, v51) )
                    {
                      v17 = v45;
                      v18 = sub_4A4460(*(int **)(LODWORD(v45) + 0x18), 7);
                      if ( v18 )
                      {
                        v19 = (int *)(v18 + 0xC);
                        if ( v18 != 0xFFFFFFF4 )
                        {
                          do
                          {
                            if ( !*v19 )
                              break;
                            BSSimpleList_PushFront((_DWORD *)this + 0x1BB, *v19);
                            v19 = (int *)v19[1];
                          }
                          while ( v19 );
                        }
                      }
                      if ( (*(_DWORD *)(LODWORD(v17) + 8) & 0x40) != 0
                        && (v41 = 1, sub_4A7330(v16, v52))
                        && sub_4A7330(v16, v53)
                        && sub_4A7330(v16, v54)
                        && sub_4A7330(v16, v55) )
                      {
                        v20 = this;
                        *((_BYTE *)this + 0x71E) = 1;
                      }
                      else
                      {
                        v20 = this;
                      }
                      flags = v20[0x14].member.super.flags;
                      if ( !flags
                        || (v22 = sub_4A4460(*(int **)(flags + 0x18), 3),
                            (v23 = sub_4A4460(*(int **)(LODWORD(v17) + 0x18), 3)) != 0)
                        && (!v22
                         || (v24 = *(_BYTE *)(v23 + 4)) != 0 && !*(_BYTE *)(v22 + 4)
                         || v24 == *(_BYTE *)(v22 + 4) && *(_BYTE *)(v23 + 6) > *(_BYTE *)(v22 + 6)) )
                      {
                        *(float *)&v20[0x14].member.super.flags = v17;
                      }
                      v15 = v44;
                      v14 = 1;
                    }
                    v44 = (float **)v15[1];
                    if ( v14 )
                    {
LABEL_48:
                      v2 = this;
                      break;
                    }
                    v2 = this;
                  }
                  if ( (*(_DWORD *)(LODWORD(v45) + 8) & 0x40) != 0 )
                  {
                    if ( !*(_DWORD *)&v2[0x14].member.baseExtraList.members.m_presenceBitfield[4] )
                    {
                      v25 = COERCE_FLOAT(FormHeapAlloc(0x10u));
                      v47 = v25;
                      v60 = 0;
                      if ( v25 == 0.0 )
                        v26 = 0;
                      else
                        v26 = sub_65DD30((_WORD *)LODWORD(v25), 1u, 1);
                      v60 = 0xFFFFFFFF;
                      *(_DWORD *)&v2[0x14].member.baseExtraList.members.m_presenceBitfield[4] = v26;
                    }
                    v27 = *(NiTArray_NiTexturingPropertyMap **)&v2[0x14].member.baseExtraList.members.m_presenceBitfield[4];
                    end = v27->end;
                    if ( end >= v27->capacity )
                      NiTArray_SetSize((unsigned __int16 *)v27, end + v27->growSize);
                    NiTArray_SetAt(v27, end, &v45);
                  }
                }
              }
            }
          }
          v46 = *(float *)(LODWORD(v46) + 4);
        }
        while ( v46 != 0.0 );
        v3 = a2;
      }
    }
    if ( !byte_B14F58 || !v48 || !sub_4EF160(v48) || TES->unk51 || TES->unk52 || v41 )
      goto LABEL_72;
    v29 = *(_DWORD *)v2[0x14].member.baseExtraList.members.m_presenceBitfield;
    if ( v29 )
    {
      v30 = *(unsigned __int8 *)(v29 + 4);
      if ( v30 == 0x30 )
      {
        if ( (TESObjectCELL *)v29 != v3 )
          goto LABEL_71;
      }
      else if ( v30 == 0x35 && (TESWorldSpace *)v29 != TESObjectCELL_GetWorldSpace(v3) )
      {
        goto LABEL_71;
      }
    }
    v31 = (unsigned int *)v2->vtbl->GetPos(v2);
    v32 = *v31;
    v33 = v31[1];
    v34 = v31[2];
    v56[0] = v32;
    v56[1] = v33;
    v56[2] = v34;
    sub_43F320((float *)v56, (float *)&v2[0x14].member.parentCell);
    if ( sub_404C90((float *)v56) <= flt_A2FF44 )
    {
LABEL_72:
      v35 = v2[0x14].member.super.flags;
      if ( v35 )
        v36 = sub_4A4460(*(int **)(v35 + 0x18), 4);
      else
        v36 = 0;
      v58.m_data = 0;
      v58.m_dataLen = 0;
      v58.m_bufLen = 0;
      v37 = v2[0x14].member.super.flags;
      v38 = 1;
      v60 = 1;
      LOBYTE(v59) = 1;
      v57 = v37;
      if ( v36 )
      {
        v39 = (const char **)(*(int (__thiscall **)(int, unsigned int *))(*(_DWORD *)v36 + 0x28))(v36, v56);
        LOBYTE(v60) = 2;
      }
      else
      {
        FormHeapFree(0);
        v48 = 0;
        v50 = 0;
        v49 = 0;
        v39 = (const char **)&v48;
        v60 = 3;
        v38 = 2;
      }
      v40 = *v39;
      v47 = *(float *)&v38;
      BSStringT_Set(&v58, v40, 0);
      if ( (v38 & 2) != 0 )
      {
        LOBYTE(v38) = v38 & 0xFD;
        FormHeapFree((unsigned int)v48);
      }
      v60 = 1;
      if ( (v38 & 1) != 0 )
        FormHeapFree(v56[0]);
      sub_5A64B0((int)&v57);
      sub_65E860(v2);
      FormHeapFree((unsigned int)v58.m_data);
      return;
    }
LABEL_71:
    HIBYTE(v2[0x14].member.niNode) = 1;
    goto LABEL_72;
  }
}
