void __thiscall sub_53B0E0(_DWORD *this, int arg0, float a3)
{
  int v5; // eax
  NiAVObjectVtbl *ChildNiAvNodeVtbl; // eax
  TESObjectREFR *v7; // ecx
  TESObjectCELL *ParentCell; // eax
  int v9; // ecx
  double v10; // st7
  int v11; // edx
  double v12; // st7
  int v13; // edx
  double v14; // st6
  int v15; // eax
  double v16; // st6
  int v17; // ecx
  double v18; // st7
  int v19; // edx
  int v20; // edx
  double v21; // st6
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  _DWORD *v27; // eax
  NiCamera *camera; // edx
  _BYTE a2[28]; // [esp+Ch] [ebp-1Ch] BYREF
  float v30; // [esp+2Ch] [ebp+4h]
  float FarPlane; // [esp+2Ch] [ebp+4h]

  if ( arg0 )
  {
    nullsub_returnVoid_2arg(arg0, LODWORD(a3));
    v5 = *(_DWORD *)(arg0 + 0xDC);
    if ( v5 == 3 || v5 == 2 )
    {
      if ( !*(this + 2) )
        return;
      if ( TESDataHandler_g_PlayerRef
        && TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef)
        && (ChildNiAvNodeVtbl = SceneGraph_GetChildNiAvNodeVtbl(g_worldScenegraph),
            v7 = (TESObjectREFR *)TESDataHandler_g_PlayerRef,
            *(double *)a2 = *(float *)&ChildNiAvNodeVtbl[1].super.Unk_03,
            ParentCell = TESObjectREFR_GetParentCell(v7),
            TESObjectCELL_GetWaterHeight((ExtraDataList *)ParentCell) > *(double *)a2) )// porco il cristo accannate
                                                // 
      {
        *(float *)a2 = *(float *)(arg0 + 0x48);
        *(float *)&a2[4] = *(float *)(arg0 + 0x4C);
        v9 = *(_DWORD *)&a2[4];
        v10 = *(float *)(arg0 + 0x50);
        LODWORD(qword_B431A8) = *(_DWORD *)a2;
        *(float *)&a2[8] = v10;
        v11 = *(_DWORD *)&a2[8];
        v12 = 1.0;
        HIDWORD(qword_B431A8) = v9;
        *(float *)&a2[0xC] = 1.0;
        dword_B431B0 = v11;
        dword_B431B4 = *(_DWORD *)&a2[0xC];
        *(float *)a2 = *(float *)(arg0 + 0x48);
        *(float *)&a2[4] = *(float *)(arg0 + 0x4C);
        v13 = *(_DWORD *)&a2[4];
        v14 = *(float *)(arg0 + 0x50);
        LODWORD(qword_B431B8) = *(_DWORD *)a2;
        *(float *)&a2[8] = v14;
        v15 = *(_DWORD *)&a2[8];
        HIDWORD(qword_B431B8) = v13;
        *(float *)&a2[0xC] = 1.0;
        dword_B431C0 = v15;
        *(float *)&dword_B431C4 = 1.0;
        *(float *)a2 = *(float *)(arg0 + 0x48);
        *(float *)&a2[4] = *(float *)(arg0 + 0x4C);
        v16 = *(float *)(arg0 + 0x50);
      }
      else
      {
        *(float *)a2 = *(float *)(arg0 + 0x9C);
        *(float *)&a2[4] = *(float *)(arg0 + 0xA0);
        v17 = *(_DWORD *)&a2[4];
        v18 = *(float *)(arg0 + 0xA4);
        LODWORD(qword_B431A8) = *(_DWORD *)a2;
        *(float *)&a2[8] = v18;
        v19 = *(_DWORD *)&a2[8];
        v12 = 1.0;
        HIDWORD(qword_B431A8) = v17;
        *(float *)&a2[0xC] = 1.0;
        dword_B431B0 = v19;
        dword_B431B4 = *(_DWORD *)&a2[0xC];
        *(float *)a2 = *(float *)(arg0 + 0x90);
        *(float *)&a2[4] = *(float *)(arg0 + 0x94);
        v20 = *(_DWORD *)&a2[4];
        v21 = *(float *)(arg0 + 0x98);
        LODWORD(qword_B431B8) = *(_DWORD *)a2;
        *(float *)&a2[8] = v21;
        v22 = *(_DWORD *)&a2[8];
        HIDWORD(qword_B431B8) = v20;
        *(float *)&a2[0xC] = 1.0;
        dword_B431C0 = v22;
        *(float *)&dword_B431C4 = 1.0;
        *(float *)a2 = *(float *)(arg0 + 0x3C);
        *(float *)&a2[4] = *(float *)(arg0 + 0x40);
        v16 = *(float *)(arg0 + 0x44);
      }
      *(float *)&a2[8] = v16;
      v23 = *(_DWORD *)&a2[8];
      v24 = *(_DWORD *)&a2[4];
      *(float *)&a2[0xC] = v12;
      LODWORD(qword_B431C8) = *(_DWORD *)a2;
      dword_B431D4 = *(_DWORD *)&a2[0xC];
      dword_B431D0 = v23;
      HIDWORD(qword_B431C8) = v24;
    }
    v25 = *(this + 3);
    if ( v25 )
    {
      if ( *(float *)(arg0 + 0xC8) >= (double)*(float *)(arg0 + 0xCC) )
        *(_WORD *)(v25 + 0x18) &= ~1u;
      else
        *(_WORD *)(v25 + 0x18) |= 1u;
      if ( *((_BYTE *)this + 0x18) )
      {
        v26 = *(this + 3);
        v30 = *(float *)(arg0 + 0xCC);
        *(float *)(v26 + 0x2C) = *(float *)(arg0 + 0xC8);
        *(float *)(v26 + 0x30) = v30;
      }
      v27 = (_DWORD *)(*(this + 3) + 0x20);
      *v27 = *(_DWORD *)(arg0 + 0x48);
      v27[1] = *(_DWORD *)(arg0 + 0x4C);
      v27[2] = *(_DWORD *)(arg0 + 0x50);
    }
    if ( *((_BYTE *)this + 0x18) )
    {
      FarPlane = GetFarPlane(g_worldScenegraph);
      camera = g_worldScenegraph->camera;
      if ( camera )
      {
        qmemcpy(a2, &camera->members.Frustum, sizeof(a2));
        if ( *(float *)&a2[0x14] != FarPlane )
        {
          *(float *)&a2[0x14] = FarPlane;
          camera->members.MaxFarNearRatio = FarPlane / *(float *)&a2[0x10];
          Camera_SetFrustum(camera, (int)a2);
        }
      }
    }
  }
}
