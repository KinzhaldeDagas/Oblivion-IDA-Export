void __userpurge sub_681DF0(int a1@<ecx>, double st6_0@<st1>, MobileObject *a3, char *a4)
{
  MobileObject *v6; // edi
  float *v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // esi
  float v11; // eax
  NiNode *v12; // ebx
  bool v13; // zf
  int v14; // eax
  int v15; // eax
  NiNode *v16; // eax
  BSShaderProperty *v17; // eax
  NiObjectNET *v18; // eax
  BSShaderProperty *v19; // eax
  int v20; // eax
  UInt32 v21; // edi
  float v22; // esi
  float *v23; // eax
  double v24; // st7
  int v25; // eax
  double v26; // st5
  char v27; // cl
  double v28; // st4
  NiAVObject *v29; // eax
  float v30; // ecx
  float v31; // edx
  NiAVObject *v32; // esi
  NiTransform *v33; // eax
  TESObjectREFRVtbl *p_super; // edx
  float *v35; // eax
  double v36; // st7
  NiAVObject *v37; // esi
  float v38; // [esp+3Ch] [ebp-D0h] BYREF
  int v39; // [esp+40h] [ebp-CCh]
  float v40; // [esp+44h] [ebp-C8h]
  float v41; // [esp+48h] [ebp-C4h] BYREF
  float v42; // [esp+4Ch] [ebp-C0h]
  float v43; // [esp+50h] [ebp-BCh]
  float v44; // [esp+54h] [ebp-B8h]
  float v45; // [esp+58h] [ebp-B4h] BYREF
  float v46; // [esp+5Ch] [ebp-B0h]
  float v47; // [esp+60h] [ebp-ACh]
  NiPoint3 v48; // [esp+64h] [ebp-A8h] BYREF
  int v49; // [esp+70h] [ebp-9Ch] BYREF
  float v50; // [esp+74h] [ebp-98h]
  float v51; // [esp+78h] [ebp-94h]
  float v52; // [esp+7Ch] [ebp-90h]
  float a2[3]; // [esp+80h] [ebp-8Ch] BYREF
  float v54[4]; // [esp+8Ch] [ebp-80h] BYREF
  float v55[4]; // [esp+9Ch] [ebp-70h] BYREF
  float v56[12]; // [esp+ACh] [ebp-60h] BYREF
  _BYTE v57[48]; // [esp+DCh] [ebp-30h] BYREF

  v6 = a3;
  if ( a3 && a4 )
  {
    v7 = (float *)sub_6899C0(a4);
    v8 = *v7;
    v9 = v7[1];
    v10 = *(float *)a1;
    v11 = v7[2];
    v12 = 0;
    v13 = *(_DWORD *)a1 == 0;
    v45 = v8;
    v46 = v9;
    v47 = v11;
    if ( !v13 )
    {
      if ( byte_B15750 )
      {
        v14 = (*(int (__thiscall **)(float, const char *))(*(_DWORD *)LODWORD(v10) + 0x58))(
                COERCE_FLOAT(LODWORD(v10)),
                "AvoidNode");
        if ( v14 && (v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 8))(v14), (v12 = (NiNode *)v15) != 0) )
        {
          v20 = *(unsigned __int16 *)(v15 + 0xB6);
          v21 = 0;
          LODWORD(v40) = v12->members.children.end;
          if ( v20 )
          {
            do
            {
              v12->vtbl->RemoveObjectAt(v12, (NiAVObject **)&v38, v21);
              if ( v38 != 0.0 )
              {
                v22 = v38;
                if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v38) + 4)) )
                  (**(void (__thiscall ***)(float, int))LODWORD(v22))(COERCE_FLOAT(LODWORD(v22)), 1);
              }
              ++v21;
            }
            while ( v21 < LODWORD(v40) );
          }
          sub_477EF0(&v12->members.children);
          v6 = a3;
        }
        else
        {
          *(float *)&v16 = COERCE_FLOAT(FormHeapAlloc(0xDCu));
          v38 = *(float *)&v16;
          v12 = 0;
          *(_DWORD *)&v57[0x2C] = 0;
          if ( *(float *)&v16 != 0.0 )
            v12 = NiNode::NiNode(v16, 0);
          v17 = (BSShaderProperty *)sub_4E70B0();
          sub_405680(v12, v17);
          NiObjectNET_SetName((NiObjectNET *)v12, "AvoidNode");
          *(float *)&v18 = COERCE_FLOAT(FormHeapAlloc(0x1Cu));
          v38 = *(float *)&v18;
          *(_DWORD *)&v57[0x2C] = 1;
          if ( *(float *)&v18 == 0.0 )
            v19 = 0;
          else
            v19 = (BSShaderProperty *)sub_4059D0(v18);
          v19->member.super.flags |= 1u;
          *(_DWORD *)&v57[0x2C] = 0xFFFFFFFF;
          sub_405680(v12, v19);
          (*(void (__thiscall **)(float, NiNode *, int))(*(_DWORD *)LODWORD(v10) + 0x84))(
            COERCE_FLOAT(LODWORD(v10)),
            v12,
            1);
        }
      }
    }
    v23 = v6->vtbl->super.GetPos((TESObjectREFR *)v6);
    v38 = v46 - v23[1];
    v40 = v47 - v23[2];
    a2[0] = v45 - *v23;
    a2[1] = v38;
    a2[2] = v40;
    v38 = sub_683CB0(a2);
    sub_680E70((float *)a1, v38);
    v24 = _memset(v56, 0, sizeof(v56));
    if ( byte_B15750 )
      sub_680F60(v6, v56);
    v25 = *(char *)(a1 + 0xC);
    v40 = flt_B33E9C;
    v38 = *(float *)(a1 + 0x24);
    if ( v25 >= 3 )
    {
      if ( v25 <= 4 )
      {
        v38 = *(float *)(a1 + 0x20) - v40;
        if ( v38 <= 0.0 )
        {
          *(float *)(a1 + 0x20) = 0.0;
          *(_BYTE *)(a1 + 0xC) = 0;
          *(_BYTE *)(a1 + 0xD) = 0;
          sub_680D30(a1, st6_0, (int)v6);
          *(float *)(a1 + 0x10) = 0.0;
        }
        else
        {
          *(float *)(a1 + 0x20) = v38;
          sub_680E70((float *)a1, *(float *)(a1 + 0x10));
          *(_BYTE *)(a1 + 0xD) = *(_BYTE *)(a1 + 0xC);
          sub_680D30(a1, st6_0, (int)v6);
        }
        return;
      }
      if ( v25 == 5 )
      {
        v38 = v40 + *(float *)(a1 + 0x1C);
        if ( flt_B3A4A8 <= (double)v38 )
        {
          sub_5E05F0((Actor *)v6, 0x3F);
          *(float *)(a1 + 0x1C) = 0.0;
          *(_BYTE *)(a1 + 0xC) = 0;
          *(_BYTE *)(a1 + 0xD) = 0;
        }
        else
        {
          *(float *)(a1 + 0x1C) = v38;
          sub_5E05F0((Actor *)v6, 0x3F);
          *(_BYTE *)(a1 + 0xD) = *(_BYTE *)(a1 + 0xC);
        }
        sub_680D30(a1, st6_0, (int)v6);
        return;
      }
    }
    v26 = 0.0;
    v27 = sub_681D90((_DWORD *)a1, v6);
    HIBYTE(v39) = v27;
    if ( v27 )
    {
      if ( *(_BYTE *)(a1 + 0x30) )
      {
        *(_BYTE *)(a1 + 0xC) = 7;
        return;
      }
      *(_BYTE *)(a1 + 0xC) = 0;
      if ( Actor::CanUSeDoor_((Actor *)v6) && (unsigned __int8)sub_681050(a1, 0.0, st6_0, v24, (TESObjectREFR *)v6) )
      {
        *(_BYTE *)(a1 + 0xD) = *(_BYTE *)(a1 + 0xC);
        sub_680D30(a1, st6_0, (int)v6);
        return;
      }
      v26 = 0.0;
      v27 = HIBYTE(v39);
    }
    else
    {
      *(float *)(a1 + 0x14) = 0.0;
      *(float *)(a1 + 0x10) = 0.0;
      *(_BYTE *)(a1 + 0xC) = 0;
      *(float *)(a1 + 0x1C) = 0.0;
      *(float *)(a1 + 0x24) = 0.0;
      *(_DWORD *)(a1 + 0x28) = 0;
      *(_DWORD *)(a1 + 0x2C) = 0;
      v38 = 0.0;
      *(_DWORD *)(a1 + 0x30) = 0;
    }
    v28 = v38;
    *(float *)(a1 + 0x24) = v38;
    if ( fPathAvoidanceTimeOut < v28 )
      *(_BYTE *)(a1 + 0xC) = 7;
    if ( v12 )
    {
      *(float *)&v49 = v26;
      v50 = 1.0;
      v51 = v26;
      v52 = v51;
      if ( v27 )
      {
        v41 = 1.0;
        *(float *)&v49 = 1.0;
        v42 = v26;
        v43 = v42;
        v44 = v42;
        v50 = v42;
        v51 = v42;
        v52 = v42;
      }
      else if ( *(_BYTE *)(a1 + 0xC) )
      {
        v41 = 1.0;
        v42 = 1.0;
        *(float *)&v49 = 1.0;
        v43 = v26;
        v44 = v43;
        v50 = 1.0;
        v51 = v43;
        v52 = v43;
      }
      v29 = sub_47EA60(v56[6], v56[7], v56[8], &v49);
      v30 = v56[0xA];
      v31 = v56[0xB];
      v32 = v29;
      v29->members.m_localTransform.pos.x = v56[9];
      v29->members.m_localTransform.pos.y = v30;
      v29->members.m_localTransform.pos.z = v31;
      ((void (__thiscall *)(NiNode *, NiAVObject *, int))v12->vtbl->AddObject)(v12, v29, 1);
      NiAVObject_InitializePropertyState(v32);
      NiNode_UpdateDynamicEffectState((NiNode *)v32);
      NiAVObject_UpdateNiAVObject(v32, 0.0, 0);
      sub_6818D0(v6, a1 + 0x28, (int)v12);
      v48.x = 0.0;
      v48.y = flt_A3D8F0;
      qmemcpy(v57, &stru_B26AF0[0xA].unk2C, 0x24u);
      v48.z = 0.0;
      NiMatrix33_InitRotationTransform((float *)v57, *(float *)(a1 + 0x18));
      v33 = sub_7101F0((NiTransform *)v57, (NiTransform *)a2, &v48);
      v48.x = v33->rot.data[0][0];
      v48.y = v33->rot.data[0][1];
      p_super = &a3->vtbl->super;
      v48.z = v33->rot.data[0][2];
      v35 = p_super->GetPos((TESObjectREFR *)a3);
      v45 = *v35;
      v46 = v35[1];
      v47 = v35[2];
      v36 = sub_5E0660(a3);
      v47 = v36 * dbl_A2FAA0 + v47;
      v55[0] = 1.0;
      v55[1] = 1.0;
      v55[2] = 0.0;
      v55[3] = 0.0;
      v41 = v48.x + v45;
      v42 = v46 + v48.y;
      v26 = v48.z + v47;
      v43 = v26;
      v54[0] = 1.0;
      v54[1] = 1.0;
      v54[2] = 0.0;
      v54[3] = 0.0;
      v37 = sub_47F070(&v45, v54, &v41, v55);
      ((void (__thiscall *)(NiNode *, NiAVObject *, int))v12->vtbl->AddObject)(v12, v37, 1);
      NiAVObject_InitializePropertyState(v37);
      NiNode_UpdateDynamicEffectState((NiNode *)v37);
      NiAVObject_UpdateNiAVObject(v37, 0.0, 0);
      v6 = a3;
    }
    *(_BYTE *)(a1 + 0xD) = *(_BYTE *)(a1 + 0xC);
    v6->vtbl->GetZRotation(v6);
    *(float *)(a1 + 0x14) = v26;
  }
}
