double __userpurge sub_681DF0@<st0>(int a1@<ecx>, double st5_0@<st2>, double result@<st0>, MobileObject *a4, char *a5)
{
  MobileObject *v7; // edi
  char *Head; // eax
  float v9; // ecx
  float v10; // edx
  float v11; // esi
  float v12; // eax
  NiNode *v13; // ebx
  bool v14; // zf
  int v15; // eax
  int v16; // eax
  NiNode *v17; // eax
  BSShaderProperty *VertexColorProperty; // eax
  NiObjectNET *v19; // eax
  BSShaderProperty *v20; // eax
  int v21; // eax
  UInt32 v22; // edi
  float v23; // esi
  float *v24; // eax
  int v25; // eax
  double v26; // st6
  double v27; // st6
  double v28; // st6
  char v29; // cl
  double v30; // st5
  NiAVObject *v31; // eax
  float v32; // ecx
  float v33; // edx
  NiAVObject *v34; // esi
  NiTransform *v35; // eax
  MobileObjectVtbl *vtbl; // edx
  double ScaledCollisionHeight; // st7
  NiAVObject *v38; // esi
  float v39; // [esp+3Ch] [ebp-D0h] BYREF
  int v40; // [esp+40h] [ebp-CCh]
  float v41; // [esp+44h] [ebp-C8h]
  NiPoint3 end; // [esp+48h] [ebp-C4h] BYREF
  float y; // [esp+54h] [ebp-B8h]
  NiPoint3 start; // [esp+58h] [ebp-B4h] BYREF
  NiPoint3 v45; // [esp+64h] [ebp-A8h] BYREF
  int v46; // [esp+70h] [ebp-9Ch] BYREF
  float v47; // [esp+74h] [ebp-98h]
  float z; // [esp+78h] [ebp-94h]
  float v49; // [esp+7Ch] [ebp-90h]
  float a2[3]; // [esp+80h] [ebp-8Ch] BYREF
  float v51[4]; // [esp+8Ch] [ebp-80h] BYREF
  float v52[4]; // [esp+9Ch] [ebp-70h] BYREF
  float v53[12]; // [esp+ACh] [ebp-60h] BYREF
  _BYTE v54[48]; // [esp+DCh] [ebp-30h] BYREF

  v7 = a4; /*0x681e1f*/
  if ( a4 && a5 ) /*0x681e37*/
  {
    Head = EmbeddedList_GetHead(a5); /*0x681e3d*/
    v9 = *(float *)Head; /*0x681e42*/
    v10 = *((float *)Head + 1); /*0x681e44*/
    v11 = *(float *)a1; /*0x681e47*/
    v12 = *((float *)Head + 2); /*0x681e4a*/
    v13 = 0; /*0x681e4d*/
    v14 = *(_DWORD *)a1 == 0; /*0x681e4f*/
    start.x = v9; /*0x681e51*/
    start.y = v10; /*0x681e55*/
    start.z = v12; /*0x681e59*/
    if ( !v14 ) /*0x681e5d*/
    {
      if ( byte_B15750 ) /*0x681e63*/
      {
        v15 = (*(int (__thiscall **)(float, const char *))(*(_DWORD *)LODWORD(v11) + 0x58))( /*0x681e7b*/
                COERCE_FLOAT(LODWORD(v11)),
                "AvoidNode");
        if ( v15 && (v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15), (v13 = (NiNode *)v16) != 0) ) /*0x681e8e*/
        {
          v21 = *(unsigned __int16 *)(v16 + 0xB6); /*0x681f31*/
          v22 = 0; /*0x681f38*/
          LODWORD(v41) = v13->members.children.end; /*0x681f3c*/
          if ( v21 ) /*0x681f40*/
          {
            do /*0x681f81*/
            {
              v13->vtbl->RemoveObjectAt(v13, (NiAVObject **)&v39, v22); /*0x681f52*/
              if ( v39 != 0.0 ) /*0x681f5a*/
              {
                v23 = v39; /*0x681f5c*/
                if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v39) + 4)) ) /*0x681f62*/
                  (**(void (__thiscall ***)(float, int))LODWORD(v23))(COERCE_FLOAT(LODWORD(v23)), 1); /*0x681f78*/
              }
              ++v22; /*0x681f7a*/
            }
            while ( v22 < LODWORD(v41) ); /*0x681f81*/
          }
          NiTObjectArray_ClearAndRelease(&v13->members.children); /*0x681f89*/
          v7 = a4; /*0x681f8e*/
        }
        else
        {
          *(float *)&v17 = COERCE_FLOAT(FormHeapAlloc(0xDCu)); /*0x681e99*/
          v39 = *(float *)&v17; /*0x681ea1*/
          v13 = 0; /*0x681ea5*/
          *(_DWORD *)&v54[0x2C] = 0; /*0x681ea9*/
          if ( *(float *)&v17 != 0.0 ) /*0x681eb0*/
            v13 = NiNode::NiNode(v17, 0); /*0x681eba*/
          VertexColorProperty = (BSShaderProperty *)DebugRender_GetOrCreateVertexColorProperty(); /*0x681ec7*/
          sub_405680(v13, VertexColorProperty); /*0x681ecf*/
          NiObjectNET_SetName((NiObjectNET *)v13, "AvoidNode"); /*0x681edb*/
          *(float *)&v19 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x681ee2*/
          v39 = *(float *)&v19; /*0x681eea*/
          *(_DWORD *)&v54[0x2C] = 1; /*0x681ef0*/
          if ( *(float *)&v19 == 0.0 ) /*0x681efb*/
            v20 = 0; /*0x681f06*/
          else
            v20 = (BSShaderProperty *)sub_4059D0(v19); /*0x681eff*/
          v20->member.super.flags |= 1u; /*0x681f08*/
          *(_DWORD *)&v54[0x2C] = 0xFFFFFFFF; /*0x681f10*/
          sub_405680(v13, v20); /*0x681f1b*/
          (*(void (__thiscall **)(float, NiNode *, int))(*(_DWORD *)LODWORD(v11) + 0x84))( /*0x681f2d*/
            COERCE_FLOAT(LODWORD(v11)),
            v13,
            1);
        }
      }
    }
    v24 = v7->vtbl->super.GetPos((TESObjectREFR *)v7); /*0x681f9f*/
    v39 = start.y - v24[1]; /*0x681fa8*/
    v41 = start.z - v24[2]; /*0x681fb3*/
    a2[0] = start.x - *v24; /*0x681fc2*/
    a2[1] = v39; /*0x681fca*/
    a2[2] = v41; /*0x681fd2*/
    v39 = Vector3_CalculateHeadingRadiansXY(a2); /*0x681fdb*/
    result = v39; /*0x681fe1*/
    sub_680E70((float *)a1, v39); /*0x681fe8*/
    _memset((int)v53, 0, sizeof(v53)); /*0x681ff9*/
    if ( byte_B15750 ) /*0x682001*/
      sub_680F60(v7, v53); /*0x682013*/
    v25 = *(char *)(a1 + 0xC); /*0x682021*/
    v41 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x682028*/
    v39 = *(float *)(a1 + 0x24); /*0x68202f*/
    if ( v25 >= 3 ) /*0x682033*/
    {
      if ( v25 <= 4 ) /*0x68203c*/
      {
        v39 = *(float *)(a1 + 0x20) - v41; /*0x6820ac*/
        if ( v39 <= 0.0 ) /*0x6820bd*/
        {
          *(float *)(a1 + 0x20) = 0.0; /*0x6820ea*/
          *(_BYTE *)(a1 + 0xC) = 0; /*0x6820ed*/
          *(_BYTE *)(a1 + 0xD) = 0; /*0x6820f1*/
          sub_680D30(a1, 0.0, (int)v7); /*0x6820f5*/
          *(float *)(a1 + 0x10) = 0.0; /*0x6820fc*/
        }
        else
        {
          *(float *)(a1 + 0x20) = v39; /*0x6820c2*/
          v27 = *(float *)(a1 + 0x10); /*0x6820c7*/
          sub_680E70((float *)a1, *(float *)(a1 + 0x10)); /*0x6820cd*/
          *(_BYTE *)(a1 + 0xD) = *(_BYTE *)(a1 + 0xC); /*0x6820d5*/
          sub_680D30(a1, v27, (int)v7); /*0x6820db*/
        }
        return result; /*0x6820e0*/
      }
      if ( v25 == 5 ) /*0x682041*/
      {
        v39 = v41 + *(float *)(a1 + 0x1C); /*0x682052*/
        v26 = v39; /*0x682056*/
        if ( unk_B3A4A8 <= (double)v39 ) /*0x682067*/
        {
          sub_5E05F0((Actor *)v7, 0x3F); /*0x682086*/
          *(float *)(a1 + 0x1C) = 0.0; /*0x682090*/
          *(_BYTE *)(a1 + 0xC) = 0; /*0x682093*/
          *(_BYTE *)(a1 + 0xD) = 0; /*0x682097*/
          sub_680D30(a1, 0.0, (int)v7); /*0x68209b*/
        }
        else
        {
          *(float *)(a1 + 0x1C) = v39; /*0x682069*/
          sub_5E05F0((Actor *)v7, 0x3F); /*0x68206c*/
          *(_BYTE *)(a1 + 0xD) = *(_BYTE *)(a1 + 0xC); /*0x682077*/
          sub_680D30(a1, v26, (int)v7); /*0x68207a*/
        }
        return result; /*0x68207f*/
      }
    }
    v28 = 0.0; /*0x68210c*/
    v29 = sub_681D90((_DWORD *)a1, v7); /*0x68210e*/
    HIBYTE(v40) = v29; /*0x682112*/
    if ( v29 ) /*0x682116*/
    {
      if ( *(_BYTE *)(a1 + 0x30) ) /*0x682118*/
      {
        *(_BYTE *)(a1 + 0xC) = 7; /*0x682120*/
        return result; /*0x682124*/
      }
      *(_BYTE *)(a1 + 0xC) = 0; /*0x68212a*/
      if ( Actor::CanUSeDoor_((Actor *)v7) && sub_681050(a1, st5_0, 0.0, result, (TESObjectREFR *)v7) ) /*0x68213d*/
      {
        *(_BYTE *)(a1 + 0xD) = *(_BYTE *)(a1 + 0xC); /*0x68214c*/
        sub_680D30(a1, 0.0, (int)v7); /*0x68214f*/
        return result; /*0x682154*/
      }
      v28 = 0.0; /*0x68217a*/
      v29 = HIBYTE(v40); /*0x68217c*/
    }
    else
    {
      *(float *)(a1 + 0x14) = 0.0; /*0x682159*/
      *(float *)(a1 + 0x10) = 0.0; /*0x68215e*/
      *(_BYTE *)(a1 + 0xC) = 0; /*0x682161*/
      *(float *)(a1 + 0x1C) = 0.0; /*0x682165*/
      *(float *)(a1 + 0x24) = 0.0; /*0x682168*/
      *(_DWORD *)(a1 + 0x28) = 0; /*0x68216b*/
      *(_DWORD *)(a1 + 0x2C) = 0; /*0x68216e*/
      v39 = 0.0; /*0x682171*/
      *(_DWORD *)(a1 + 0x30) = 0; /*0x682175*/
    }
    v30 = v39; /*0x682180*/
    *(float *)(a1 + 0x24) = v39; /*0x682184*/
    if ( MEMORY[0xB3A4B8] < v30 ) /*0x682194*/
      *(_BYTE *)(a1 + 0xC) = 7; /*0x682196*/
    if ( v13 ) /*0x68219c*/
    {
      *(float *)&v46 = v28; /*0x6821a4*/
      v47 = 1.0; /*0x6821aa*/
      z = v28; /*0x6821b0*/
      v49 = z; /*0x6821b4*/
      if ( v29 ) /*0x6821b8*/
      {
        end.x = 1.0; /*0x6821bc*/
        *(float *)&v46 = 1.0; /*0x6821c4*/
        end.y = v28; /*0x6821c8*/
        end.z = end.y; /*0x6821d0*/
        y = end.y; /*0x6821d8*/
        v47 = end.y; /*0x6821e0*/
        z = end.y; /*0x6821e4*/
        v49 = end.y; /*0x6821e8*/
      }
      else if ( *(_BYTE *)(a1 + 0xC) ) /*0x6821ee*/
      {
        end.x = 1.0; /*0x6821f6*/
        end.y = 1.0; /*0x6821fe*/
        *(float *)&v46 = 1.0; /*0x682206*/
        end.z = v28; /*0x68220a*/
        y = end.z; /*0x682212*/
        v47 = 1.0; /*0x68221a*/
        z = end.z; /*0x68221e*/
        v49 = end.z; /*0x682222*/
      }
      v31 = sub_47EA60(v53[6], v53[7], v53[8], &v46); /*0x682254*/
      v32 = v53[0xA]; /*0x682259*/
      v33 = v53[0xB]; /*0x682260*/
      v34 = v31; /*0x682267*/
      v31->members.m_localTransform.pos.x = v53[9]; /*0x682270*/
      v31->members.m_localTransform.pos.y = v32; /*0x682273*/
      v31->members.m_localTransform.pos.z = v33; /*0x682279*/
      ((void (__thiscall *)(NiNode *, NiAVObject *, int))v13->vtbl->AddObject)(v13, v31, 1); /*0x682289*/
      NiAVObject_InitializePropertyState(v34); /*0x68228d*/
      NiNode_UpdateDynamicEffectState((NiNode *)v34); /*0x682294*/
      NiAVObject_UpdateNiAVObject(v34, 0.0, 0); /*0x6822a3*/
      sub_6818D0(v7, a1 + 0x28, (int)v13); /*0x6822ae*/
      v45.x = 0.0; /*0x6822b5*/
      v45.y = flt_A3D8F0; /*0x6822c9*/
      qmemcpy(v54, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x6822d4*/
      v45.z = 0.0; /*0x6822d6*/
      NiMatrix33_InitRotationZ((NiMatrix33 *)v54, *(float *)(a1 + 0x18)); /*0x6822eb*/
      v35 = sub_7101F0((NiTransform *)v54, (NiTransform *)a2, &v45); /*0x682301*/
      v45.x = v35->rot.data[0][0]; /*0x68230f*/
      v45.y = v35->rot.data[0][1]; /*0x682316*/
      vtbl = a4->vtbl; /*0x68231d*/
      v45.z = v35->rot.data[0][2]; /*0x68231f*/
      start = *(NiPoint3 *)vtbl->super.GetPos((TESObjectREFR *)a4); /*0x68232f*/
      ScaledCollisionHeight = Actor_GetScaledCollisionHeight(a4); /*0x682343*/
      start.z = ScaledCollisionHeight * dbl_A2FAA0 + start.z; /*0x682352*/
      v52[0] = 1.0; /*0x68235c*/
      v52[1] = 1.0; /*0x682361*/
      v52[2] = 0.0; /*0x68236c*/
      v52[3] = 0.0; /*0x682377*/
      end.x = v45.x + start.x; /*0x68238c*/
      end.y = start.y + v45.y; /*0x682398*/
      end.z = v45.z + start.z; /*0x6823a4*/
      v28 = 1.0; /*0x6823a8*/
      v51[0] = 1.0; /*0x6823aa*/
      v51[1] = 1.0; /*0x6823ae*/
      v51[2] = 0.0; /*0x6823b2*/
      v51[3] = 0.0; /*0x6823b6*/
      v38 = NiLines_CreateSegment(&start, (const NiColorAlpha *)v51, &end, (const NiColorAlpha *)v52); /*0x6823c7*/
      ((void (__thiscall *)(NiNode *, NiAVObject *, int))v13->vtbl->AddObject)(v13, v38, 1); /*0x6823d4*/
      NiAVObject_InitializePropertyState(v38); /*0x6823d8*/
      NiNode_UpdateDynamicEffectState((NiNode *)v38); /*0x6823df*/
      result = 0.0; /*0x6823e4*/
      NiAVObject_UpdateNiAVObject(v38, 0.0, 0); /*0x6823ee*/
      v7 = a4; /*0x6823f3*/
    }
    *(_BYTE *)(a1 + 0xD) = *(_BYTE *)(a1 + 0xC); /*0x682401*/
    v7->vtbl->GetZRotation(v7); /*0x68240e*/
    *(float *)(a1 + 0x14) = v28; /*0x682410*/
  }
  return result; /*0x682413*/
}
