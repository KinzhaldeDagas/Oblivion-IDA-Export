void __thiscall sub_5378B0(float *this, _DWORD *arg0, float arg4)
{
  double v5; // st7
  int v6; // eax
  int v7; // eax
  __m128 *v8; // eax
  TES *v9; // ecx
  int *sound; // edi
  int *v11; // esi
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v13; // eax
  TESWaterForm *WaterForm; // eax
  TESObjectCELL *v15; // eax
  NiNode *v16; // edi
  BSTempEffectParticle *v17; // esi
  TESObjectCELL *v18; // eax
  BSTempEffectParticle *v19; // eax
  const char *v20; // [esp+8h] [ebp-60h]
  float x; // [esp+Ch] [ebp-5Ch]
  __int64 v22; // [esp+10h] [ebp-58h]
  float v23; // [esp+18h] [ebp-50h]
  char *unknownChildName[2]; // [esp+1Ch] [ebp-4Ch]
  signed int scale; // [esp+24h] [ebp-44h]
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

  if ( arg0 ) /*0x5378de*/
  {
    v5 = 0.0; /*0x5378e4*/
    if ( *(this + 5) <= 0.0 ) /*0x5378ee*/
    {
      v6 = arg0[2]; /*0x5378f4*/
      if ( v6 ) /*0x5378f9*/
        v5 = sub_89DA90((float *)*(_DWORD *)(v6 + 0x50)); /*0x537900*/
      v7 = arg0[2]; /*0x537905*/
      if ( v7 ) /*0x53790e*/
        v8 = (__m128 *)(*(_DWORD *)(v7 + 0x50) + 0xD0); /*0x537913*/
      else
        v8 = (__m128 *)&unk_BA7A40; /*0x53791a*/
      HavokVector_ToWorldVector(v31, v8); /*0x537925*/
      v26 = fabs(v32); /*0x537935*/
      v34 = v5; /*0x537908*/
      *(float *)&v35 = MEMORY[0xB37A58][0x34] * v26 + v34; /*0x53794f*/
      if ( v32 > 0.0 ) /*0x53795c*/
        *(float *)&v35 = MEMORY[0xB37A58][0x36] * *(float *)&v35; /*0x537968*/
      sub_4D6900(arg0, &a2); /*0x537973*/
      v9 = MEMORY[0xB333A0]; /*0x53797c*/
      a3 = arg4; /*0x537982*/
      if ( v9->currentInteriorCell || !GetTerrainHeight(v9, &a2, &a3) || arg4 >= (double)a3 ) /*0x5379ae*/
      {
        sound = (int *)MEMORY[0xB33398]->sound; /*0x5379ba*/
        if ( sound ) /*0x5379bf*/
        {
          if ( MEMORY[0xB37A58][0x2C] < (double)*(float *)&v35 /*0x537a79*/
            && (v11 = PlaySound___(sound, "CWaterLarge", 0x102, 1), v27 = MEMORY[0xB37A58][0x3A], v11)
            || MEMORY[0xB37A58][0x2E] < (double)*(float *)&v35
            && (v11 = PlaySound___(sound, "CWaterMedium", 0x102, 1),
                v27 = *(float *)GameSetting_GetSafeFloatPointer((int *)&MEMORY[0xB37A58][0x3C]),
                v11)
            || MEMORY[0xB37A58][0x30] < (double)*(float *)&v35
            && (v11 = PlaySound___(sound, "CWaterSmall", 0x102, 1),
                v27 = *(float *)GameSetting_GetSafeFloatPointer((int *)&MEMORY[0xB37A58][0x3E]),
                v11) )
          {
            *((float *)&v30 + 1) = arg4; /*0x537a86*/
            sub_6B7360(v11, a2, *(float *)&v30, arg4); /*0x537a9f*/
            sub_6B7190(v11, 0); /*0x537aa8*/
            if ( v27 > 0.0 ) /*0x537ab8*/
            {
              if ( Shared_GetDwordAtOffset40(reference) ) /*0x537ac4*/
              {
                DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x537ad7*/
                if ( TESObjectCELL::GetWaterForm(DwordAtOffset40) ) /*0x537ade*/
                {
                  v13 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x537af1*/
                  WaterForm = TESObjectCELL::GetWaterForm(v13); /*0x537af8*/
                  if ( !((unsigned __int8 (__thiscall *)(TESWaterForm *))WaterForm->vtbl->Unk_22)(WaterForm) ) /*0x537b07*/
                  {
                    Shared_GetDwordAtOffset40(reference); /*0x537b17*/
                    scale = sub_4C9BE0((TESObjectREFR *)reference); /*0x537b33*/
                    v15 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x537b34*/
                    v16 = (NiNode *)sub_441800(v15, scale, 3u); /*0x537b42*/
                    v17 = (BSTempEffectParticle *)FormHeapAlloc(0x20u); /*0x537b49*/
                    v33 = 0; /*0x537b54*/
                    if ( v17 ) /*0x537b5c*/
                    {
                      v23 = a2; /*0x537b77*/
                      *(_QWORD *)unknownChildName = v30; /*0x537b7d*/
                      x = stru_B258DC.x; /*0x537b94*/
                      v22 = *(_QWORD *)&stru_B258DC.y; /*0x537b9c*/
                      v20 = (const char *)LODWORD(MEMORY[0xB37A58][0x38]); /*0x537ba5*/
                      v18 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x537bb4*/
                      v19 = BSTempEffectParticle_Constructor( /*0x537bbc*/
                              v17,
                              v18,
                              1.0,
                              v16,
                              v20,
                              x,
                              *(float *)&v22,
                              *((float *)&v22 + 1),
                              v23,
                              *(float *)unknownChildName,
                              *(float *)&unknownChildName[1],
                              v27,
                              1);
                    }
                    else
                    {
                      v19 = 0; /*0x537bc3*/
                    }
                    v33 = 0xFFFFFFFF; /*0x537bcb*/
                    ActorProcessManager_RegisterTempEffect((int *)&qword_B3BB2C[0x75], (volatile LONG *)v19); /*0x537bd3*/
                  }
                }
              }
            }
          }
        }
        *(this + 5) = MEMORY[0xB37A58][0x32]; /*0x537bde*/
      }
    }
  }
}
