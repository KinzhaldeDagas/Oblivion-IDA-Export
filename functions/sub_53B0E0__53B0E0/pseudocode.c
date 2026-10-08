// Fog decode: Atmosphere update copies final Sky fog fields into active B333E4/Atmosphere BSFogProperty; sources include exterior weather, interior cell lighting, and water/underwater.
void __thiscall sub_53B0E0(_DWORD *this, int arg0, int a3)
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

  if ( arg0 ) /*0x53b0ed*/
  {
    nullsub_returnVoid_2arg(arg0, a3); /*0x53b0fc*/
    v5 = *(_DWORD *)(arg0 + 0xDC); /*0x53b101*/
    if ( v5 == 3 || v5 == 2 ) /*0x53b10f*/
    {
      if ( !*(this + 2) ) /*0x53b119*/
        return; /*0x53b119*/
      if ( reference /*0x53b16f*/
        && Shared_GetDwordAtOffset40((TESObjectREFR *)reference)
        && (ChildNiAvNodeVtbl = SceneGraph_GetChildNiAvNodeVtbl(g_WorldSceneReceiverRoot),
            v7 = (TESObjectREFR *)reference,
            *(double *)a2 = *(float *)&ChildNiAvNodeVtbl[1].super.Unk_03,
            ParentCell = Shared_GetDwordAtOffset40(v7),
            TESObjectCELL_GetWaterHeight((ExtraDataList *)ParentCell) > *(double *)a2) )// Fog water decode: Atmosphere update repeats exterior water-height check before choosing underwater versus regular atmosphere color vectors.
      {
        *(float *)a2 = *(float *)(arg0 + 0x48); // Fog water decode: underwater atmosphere color vectors use active Sky fog color at +0x48/+0x4C/+0x50. /*0x53b178*/
        *(float *)&a2[4] = *(float *)(arg0 + 0x4C); /*0x53b183*/
        v9 = *(_DWORD *)&a2[4]; /*0x53b187*/
        v10 = *(float *)(arg0 + 0x50); /*0x53b18b*/
        LODWORD(qword_B43178[6]) = *(_DWORD *)a2; /*0x53b18e*/
        *(float *)&a2[8] = v10; /*0x53b193*/
        v11 = *(_DWORD *)&a2[8]; /*0x53b197*/
        v12 = 1.0; /*0x53b19b*/
        HIDWORD(qword_B43178[6]) = v9; /*0x53b19d*/
        *(float *)&a2[0xC] = 1.0; /*0x53b1a3*/
        LODWORD(qword_B43178[7]) = v11; /*0x53b1a7*/
        HIDWORD(qword_B43178[7]) = *(_DWORD *)&a2[0xC]; /*0x53b1b1*/
        *(float *)a2 = *(float *)(arg0 + 0x48); /*0x53b1b9*/
        *(float *)&a2[4] = *(float *)(arg0 + 0x4C); /*0x53b1c4*/
        v13 = *(_DWORD *)&a2[4]; /*0x53b1c8*/
        v14 = *(float *)(arg0 + 0x50); /*0x53b1cc*/
        LODWORD(qword_B43178[8]) = *(_DWORD *)a2; /*0x53b1cf*/
        *(float *)&a2[8] = v14; /*0x53b1d5*/
        v15 = *(_DWORD *)&a2[8]; /*0x53b1d9*/
        HIDWORD(qword_B43178[8]) = v13; /*0x53b1dd*/
        *(float *)&a2[0xC] = 1.0; /*0x53b1e3*/
        LODWORD(qword_B43178[9]) = v15; /*0x53b1eb*/
        *((float *)&qword_B43178[9] + 1) = 1.0; /*0x53b1f0*/
        *(float *)a2 = *(float *)(arg0 + 0x48); /*0x53b1f9*/
        *(float *)&a2[4] = *(float *)(arg0 + 0x4C); /*0x53b200*/
        v16 = *(float *)(arg0 + 0x50); /*0x53b204*/
      }
      else
      {
        *(float *)a2 = *(float *)(arg0 + 0x9C); // Fog water decode: non-underwater atmosphere color vectors use regular Sky color slots instead of active fog RGB. /*0x53b212*/
        *(float *)&a2[4] = *(float *)(arg0 + 0xA0); /*0x53b220*/
        v17 = *(_DWORD *)&a2[4]; /*0x53b224*/
        v18 = *(float *)(arg0 + 0xA4); /*0x53b228*/
        LODWORD(qword_B43178[6]) = *(_DWORD *)a2; /*0x53b22e*/
        *(float *)&a2[8] = v18; /*0x53b233*/
        v19 = *(_DWORD *)&a2[8]; /*0x53b237*/
        v12 = 1.0; /*0x53b23b*/
        HIDWORD(qword_B43178[6]) = v17; /*0x53b23d*/
        *(float *)&a2[0xC] = 1.0; /*0x53b243*/
        LODWORD(qword_B43178[7]) = v19; /*0x53b247*/
        HIDWORD(qword_B43178[7]) = *(_DWORD *)&a2[0xC]; /*0x53b251*/
        *(float *)a2 = *(float *)(arg0 + 0x90); /*0x53b25c*/
        *(float *)&a2[4] = *(float *)(arg0 + 0x94); /*0x53b26a*/
        v20 = *(_DWORD *)&a2[4]; /*0x53b26e*/
        v21 = *(float *)(arg0 + 0x98); /*0x53b272*/
        LODWORD(qword_B43178[8]) = *(_DWORD *)a2; /*0x53b278*/
        *(float *)&a2[8] = v21; /*0x53b27e*/
        v22 = *(_DWORD *)&a2[8]; /*0x53b282*/
        HIDWORD(qword_B43178[8]) = v20; /*0x53b286*/
        *(float *)&a2[0xC] = 1.0; /*0x53b28c*/
        LODWORD(qword_B43178[9]) = v22; /*0x53b294*/
        *((float *)&qword_B43178[9] + 1) = 1.0; /*0x53b299*/
        *(float *)a2 = *(float *)(arg0 + 0x3C); /*0x53b2a2*/
        *(float *)&a2[4] = *(float *)(arg0 + 0x40); /*0x53b2a9*/
        v16 = *(float *)(arg0 + 0x44); /*0x53b2ad*/
      }
      *(float *)&a2[8] = v16; /*0x53b2b4*/
      v23 = *(_DWORD *)&a2[8]; /*0x53b2b8*/
      v24 = *(_DWORD *)&a2[4]; /*0x53b2bc*/
      *(float *)&a2[0xC] = v12; /*0x53b2c0*/
      LODWORD(qword_B43178[0xA]) = *(_DWORD *)a2; /*0x53b2c4*/
      HIDWORD(qword_B43178[0xB]) = *(_DWORD *)&a2[0xC]; /*0x53b2ce*/
      LODWORD(qword_B43178[0xB]) = v23; /*0x53b2d4*/
      HIDWORD(qword_B43178[0xA]) = v24; /*0x53b2da*/
    }
    v25 = *(this + 3); /*0x53b2df*/
    if ( v25 ) /*0x53b2e4*/
    {                                           // Fog property decode: compare Sky fogStart/fogEnd to determine active BSFogProperty enable bit.
      if ( *(float *)(arg0 + 0xC8) >= (double)*(float *)(arg0 + 0xCC) ) /*0x53b303*/
        *(_WORD *)(v25 + 0x18) &= ~1u;          // Fog property decode: clear BSFogProperty flags bit 0 when Sky fogStart >= fogEnd, disabling active fog. /*0x53b30c*/
      else
        *(_WORD *)(v25 + 0x18) |= 1u;           // Fog property decode: set BSFogProperty flags bit 0 when Sky fogStart < fogEnd. /*0x53b305*/
      if ( *((_BYTE *)this + 0x18) )            // Fog property decode: Atmosphere+0x18 gate for copying Sky fogStart/fogEnd into BSFogProperty and updating camera far plane. /*0x53b312*/
      {
        v26 = *(this + 3); /*0x53b31e*/
        v30 = *(float *)(arg0 + 0xCC); /*0x53b321*/
        *(float *)(v26 + 0x2C) = *(float *)(arg0 + 0xC8);// Fog decode: active BSFogProperty fogStart write, B333E4+0x2C = Sky+0x0C8 produced by weather, interior, or water fog source. /*0x53b32b*/
        *(float *)(v26 + 0x30) = v30;           // Fog decode: active BSFogProperty fogEnd write, B333E4+0x30 = Sky+0x0CC produced by weather, interior, or water fog source. /*0x53b332*/
      }
      v27 = (_DWORD *)(*(this + 3) + 0x20); /*0x53b33e*/
      *v27 = *(_DWORD *)(arg0 + 0x48);          // Fog decode: active BSFogProperty color.r = Sky+0x48 produced by interior cell fog color, exterior weather color, or water fog blend. /*0x53b341*/
      v27[1] = *(_DWORD *)(arg0 + 0x4C);        // Fog decode: active BSFogProperty color.g = Sky+0x4C produced by interior cell fog color, exterior weather color, or water fog blend. /*0x53b346*/
      v27[2] = *(_DWORD *)(arg0 + 0x50);        // Fog decode: active BSFogProperty color.b = Sky+0x50 produced by interior cell fog color, exterior weather color, or water fog blend. /*0x53b34c*/
    }
    if ( *((_BYTE *)this + 0x18) )              // Fog property decode: Atmosphere+0x18 also gates camera far-plane synchronization after fog property writes. /*0x53b34f*/
    {
      FarPlane = GetFarPlane(g_WorldSceneReceiverRoot);// Fog property decode: read active GetFarPlane result for camera frustum synchronization. /*0x53b360*/
      camera = g_WorldSceneReceiverRoot->camera; /*0x53b36a*/
      if ( camera ) /*0x53b372*/
      {
        qmemcpy(a2, &camera->members.Frustum, sizeof(a2)); /*0x53b389*/
        if ( *(float *)&a2[0x14] != FarPlane ) /*0x53b396*/
        {
          *(float *)&a2[0x14] = FarPlane;       // Fog property decode: write camera frustum far plane when it differs from active GetFarPlane. /*0x53b398*/
          camera->members.MaxFarNearRatio = FarPlane / *(float *)&a2[0x10];// Fog property decode: update camera MaxFarNearRatio = FarPlane / near after far-plane change. /*0x53b3a7*/
          Camera_SetFrustum(camera, (int)a2); /*0x53b3ad*/
        }
      }
    }
  }
}
