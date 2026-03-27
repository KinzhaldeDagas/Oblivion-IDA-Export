void __thiscall sub_5378B0(float *this, _DWORD *arg0, float arg4)
{
  double v5; // st7
  int v6; // eax
  int v7; // eax
  __m128 *v8; // eax
  TES *v9; // ecx
  _DWORD *sound; // edi
  int *v11; // esi
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v13; // eax
  TESWaterForm *WaterForm; // eax
  TESObjectCELL *v15; // eax
  int v16; // edi
  void *v17; // esi
  TESObjectCELL *v18; // eax
  float *v19; // eax
  const char *v20; // [esp+8h] [ebp-60h]
  float v21; // [esp+Ch] [ebp-5Ch]
  __int64 v22; // [esp+10h] [ebp-58h]
  float v23; // [esp+18h] [ebp-50h]
  __int64 v24; // [esp+1Ch] [ebp-4Ch]
  signed int v25; // [esp+24h] [ebp-44h]
  float v26; // [esp+3Ch] [ebp-2Ch]
  float v27; // [esp+3Ch] [ebp-2Ch]
  float a3; // [esp+40h] [ebp-28h] BYREF
  float a2; // [esp+44h] [ebp-24h] BYREF
  __int64 v30; // [esp+48h] [ebp-20h]
  float v31[2]; // [esp+50h] [ebp-18h] BYREF
  float v32; // [esp+58h] [ebp-10h]
  unsigned int v33; // [esp+64h] [ebp-4h]
  float v34; // [esp+6Ch] [ebp+4h]
  int v35; // [esp+6Ch] [ebp+4h]

  if ( arg0 )
  {
    v5 = 0.0;
    if ( *(this + 5) <= 0.0 )
    {
      v6 = arg0[2];
      if ( v6 )
        v5 = sub_89DA90((float *)*(_DWORD *)(v6 + 0x50));
      v7 = arg0[2];
      if ( v7 )
        v8 = (__m128 *)(*(_DWORD *)(v7 + 0x50) + 0xD0);
      else
        v8 = (__m128 *)&stru_BA7A40;
      sub_43F3E0(v31, v8);
      v26 = fabs(v32);
      v34 = v5;
      *(float *)&v35 = flt_B37B28 * v26 + v34;
      if ( v32 > 0.0 )
        *(float *)&v35 = flt_B37B30 * *(float *)&v35;
      sub_4D6900(arg0, &a2);
      v9 = TES;
      a3 = arg4;
      if ( v9->currentInteriorCell || !GetTerrainHeight(v9, &a2, &a3) || arg4 >= (double)a3 )
      {
        sound = OSGlobals->sound;
        if ( sound )
        {
          if ( flt_B37B08 < (double)*(float *)&v35
            && (v11 = PlaySound___(sound, "CWaterLarge", 0x102, 1), v27 = flt_B37B40, v11)
            || flt_B37B10 < (double)*(float *)&v35
            && (v11 = PlaySound___(sound, "CWaterMedium", 0x102, 1),
                v27 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B37B48),
                v11)
            || flt_B37B18 < (double)*(float *)&v35
            && (v11 = PlaySound___(sound, "CWaterSmall", 0x102, 1),
                v27 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fSplashScale3),
                v11) )
          {
            *((float *)&v30 + 1) = arg4;
            sub_6B7360(v11, a2, *(float *)&v30, arg4);
            sub_6B7190(v11, 0);
            if ( v27 > 0.0 )
            {
              if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
              {
                ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
                if ( TESObjectCELL::GetWaterForm(ParentCell) )
                {
                  v13 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
                  WaterForm = TESObjectCELL::GetWaterForm(v13);
                  if ( !((unsigned __int8 (__thiscall *)(TESWaterForm *))WaterForm->vtbl->Unk_22)(WaterForm) )
                  {
                    TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
                    v25 = sub_4C9BE0((TESObjectREFR *)TESDataHandler_g_PlayerRef);
                    v15 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
                    v16 = sub_441800(v15, v25, 3u);
                    v17 = (void *)FormHeapAlloc(0x20u);
                    v33 = 0;
                    if ( v17 )
                    {
                      v23 = a2;
                      v24 = v30;
                      v21 = *(float *)&dword_B258DC;
                      v22 = qword_B258E0;
                      v20 = (const char *)LODWORD(dword_B37B38);
                      v18 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
                      v19 = sub_5713F0(
                              v17,
                              (int)v18,
                              1.0,
                              v16,
                              v20,
                              v21,
                              *(float *)&v22,
                              SHIDWORD(v22),
                              v23,
                              v24,
                              (const char *)HIDWORD(v24),
                              v27,
                              1);
                    }
                    else
                    {
                      v19 = 0;
                    }
                    v33 = 0xFFFFFFFF;
                    sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v19);
                  }
                }
              }
            }
          }
        }
        *(this + 5) = flt_B37B20;
      }
    }
  }
}
