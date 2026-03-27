void __usercall sub_694980(_EXCEPTION_REGISTRATION_RECORD *a1@<esi>, int a2)
{
  float *v2; // ebp
  MagicTarget *v3; // ecx
  Actor *ParentActor; // esi
  int *v5; // edi
  int v6; // ebx
  NiLight *v7; // eax
  NiLight *v8; // eax
  int v9; // eax
  _DWORD *v10; // ecx
  double v11; // rt0
  int *SafeFloatPointer; // eax
  int *v13; // eax
  _DWORD *v14; // ecx
  int v15; // eax
  double v16; // st7
  _DWORD *ShadowSceneNode; // eax
  int *v18; // eax
  float (__thiscall *GetScale)(TESObjectREFR *); // edx
  double v20; // st7
  float *v21; // ebx
  int *v22; // eax
  float (__thiscall *v23)(TESObjectREFR *); // edx
  double v24; // st7
  int v25; // eax
  void (__thiscall *v26)(_DWORD, int, int); // eax
  float *v27; // ebx
  int *v28; // edi
  int v29; // eax
  float *v30; // eax
  float *v31; // esi
  _EXCEPTION_REGISTRATION_RECORD *v32; // esi
  void *v33; // edi
  float *v34; // ecx
  int v35; // ebx
  int v36; // [esp+8h] [ebp-48h]
  unsigned int v37; // [esp+10h] [ebp-40h]
  _DWORD v38[4]; // [esp+14h] [ebp-3Ch] BYREF
  double v39; // [esp+24h] [ebp-2Ch] BYREF
  double v40; // [esp+2Ch] [ebp-24h] BYREF
  float v41; // [esp+34h] [ebp-1Ch]
  int v42[3]; // [esp+38h] [ebp-18h] BYREF
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+44h] [ebp-Ch]
  void *v44; // [esp+48h] [ebp-8h]
  int v45; // [esp+4Ch] [ebp-4h]

  if ( a2 )
  {
    v27 = 0;
    v28 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    if ( v28 )
    {
      ExceptionList = a1;
      while ( 1 )
      {
        if ( !v28[1] && !*v28 )
        {
LABEL_15:
          v32 = ExceptionList;
          if ( v27 )
          {
            v33 = v44;
            v34 = v27;
            v35 = v45;
            v45 = 0xFFFFFFFF;
            v44 = &loc_9C5853;
            ExceptionList = NtCurrentTeb()->Tib.ExceptionList;
            v38[3] = v35;
            v38[1] = v32;
            v38[0] = v33;
            v37 = (unsigned int)v38 ^ __security_cookie;
            v2 = v34;
            v3 = *((MagicTarget **)v34 + 8);
            if ( v3 )
              ParentActor = MagicTarget_GetParentActor(v3);
            else
              ParentActor = 0;
            v5 = (int *)(v2 + 0xE);
            if ( !*((_DWORD *)v2 + 0xE) )
            {
              if ( ParentActor )
              {
                if ( !sub_4D7FD0(ParentActor) && dword_B3C0B4 <= iMagicLightMaxCount )
                {
                  v6 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v2 + 3) + 0x1C) + 0x70);
                  if ( v6 )
                  {
                    v7 = (NiLight *)FormHeapAlloc(0x114u);
                    LODWORD(v40) = v7;
                    v45 = 0;
                    if ( v7 )
                      v8 = sub_4B0BF0(v7);
                    else
                      v8 = 0;
                    v45 = 0xFFFFFFFF;
                    NiSmartPointer_Set__((Ni2DBuffer **)v2 + 0xE, (Ni2DBuffer *)v8);
                    v9 = *(_DWORD *)(v6 + 0x78);
                    *(float *)&v40 = (float)(unsigned __int8)v9;
                    *((float *)&v40 + 1) = (float)BYTE1(v9);
                    LODWORD(v39) = BYTE2(v9);
                    v10 = (_DWORD *)*v5;
                    v41 = (float)BYTE2(v9);
                    v11 = dbl_A3DDD8;
                    *(float *)&v40 = *(float *)&v40 / v11;
                    *((float *)&v40 + 1) = *((float *)&v40 + 1) / v11;
                    v41 = v41 / v11;
                    sub_482120(v10, &v40);
                    *(float *)&v39 = v2[6];
                    SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&fMagicLightRadiusBase);
                    v40 = *(float *)SafeFloatPointer + *(float *)&v39;
                    v13 = GameSetting_GetSafeFloatPointer((int *)&fMagicUnitsPerFoot);
                    v14 = (_DWORD *)*v5;
                    *(float *)&v40 = *(float *)v13 * v40;
                    *((float *)&v40 + 1) = 0.0;
                    v41 = 0.0;
                    sub_4B0BC0(v14, &v40);
                    v15 = *v5;
                    *(float *)&v39 = *(float *)(v6 + 0x88);
                    v16 = *(float *)&v39;
                    ++*(_DWORD *)(v15 + 0xB8);
                    *(float *)(v15 + 0xDC) = v16;
                    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
                    if ( ShadowSceneNode )
                      sub_7C6AE0(ShadowSceneNode, *v5, (ShadowSceneLight *)1);
                    v40 = *(float *)(((int (__thiscall *)(Actor *, int *))ParentActor->vtbl->super.super.Unk_57)(
                                       ParentActor,
                                       v42)
                                   + 4);
                    v18 = GameSetting_GetSafeFloatPointer((int *)&fMagicLightForwardOffset);
                    GetScale = ParentActor->vtbl->super.super.GetScale;
                    v40 = *(float *)v18 + v40;
                    v20 = ((double (__thiscall *)(Actor *, unsigned int))GetScale)(ParentActor, v37);
                    v21 = (float *)*v5;
                    *(float *)&v40 = v20 * v40;
                    v39 = sub_5E0660(ParentActor);
                    v22 = GameSetting_GetSafeFloatPointer((int *)&fMagicLightHeightOffset);
                    v23 = ParentActor->vtbl->super.super.GetScale;
                    v39 = *(float *)v22 + v39;
                    v24 = ((double (__thiscall *)(Actor *))v23)(ParentActor);
                    *(float *)&v39 = v24 * v39;
                    sub_404CF0(v21, 0.0, *(float *)&v40, *(float *)&v39);
                    v25 = (int)ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor);
                    sub_405070(&v39, v25);
                    v36 = *v5;
                    v26 = *(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)LODWORD(v39) + 0x84);
                    v45 = 1;
                    v26(LODWORD(v39), v36, 1);
                    sub_4D7FE0((int)ParentActor, *v5);
                    ++dword_B3C0B4;
                    v45 = 0xFFFFFFFF;
                    sub_7016A0((NiD3DVertexShader *)&v39);
                  }
                  else
                  {
                    PrintError(
                      "Light Effect has no Light object associated with it. Use the editor to select a light in the Magic"
                      " Effects window for the Light effect.");
                  }
                }
              }
            }
          }
          return;
        }
        v29 = *v28;
        if ( *v28
          && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v29 + 0xC) + 0x1C) + 0x98) == 0x5448474C
          && !*(_BYTE *)(v29 + 0x11) )
        {
          v30 = (float *)OblivionDynamicCast(
                           (void *)v29,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
                           &LightEffect `RTTI Type Descriptor',
                           0);
          v31 = v30;
          if ( !v27 )
            goto LABEL_13;
          if ( v30[6] > (double)v27[6] )
          {
            sub_6948B0((int *)v27);
LABEL_13:
            v27 = v31;
            goto LABEL_14;
          }
          sub_6948B0((int *)v30);
        }
LABEL_14:
        v28 = (int *)v28[1];
        if ( !v28 )
          goto LABEL_15;
      }
    }
  }
}
