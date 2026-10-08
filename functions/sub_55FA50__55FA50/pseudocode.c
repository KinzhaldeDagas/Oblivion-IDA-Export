//
// [2026-10-03 projected shadow motion] Native !skipTimeAndWindUpdate encloses sole55E060 call at55FC50. This follows sampling Sky.windSpeed (or zero for interiors) into manager+1C. Plugin wraps this call to advance RT4.1 reference self-shadow phase by strength*40*delta. Extra camera updates taking skip branch do not advance it. Native camera/wind behavior preserved.
// Verified 2026-10-07: source NiCamera forward column is offsets+64/+70/+7C; BSTreeManager negates it (A3D360=-1.0) before passing to SpeedTree SetCamera. Directional generated atlases use camera-to-tree forward azimuth; record this convention explicitly when adapting the native far billboard basis.
void __cdecl BSTreeManager_Update(NiCamera *camera, bool skipTimeAndWindUpdate)
{
  double v2; // rt0
  TES *v3; // ecx
  Sky *sky; // eax
  BSFogProperty *FogProperty; // eax
  int v6; // esi
  int v7; // edi
  int v8; // ebx
  NiMaterialProperty *materialProperty; // eax
  NiMaterialProperty *v10; // eax
  NiMaterialProperty *v11; // eax
  double v12; // st7
  double v13; // st7
  float v14; // [esp+14h] [ebp-24h]
  float v15; // [esp+18h] [ebp-20h]
  float v16; // [esp+1Ch] [ebp-1Ch]
  float direction3[3]; // [esp+20h] [ebp-18h] BYREF
  float position3[3]; // [esp+2Ch] [ebp-Ch] BYREF
  float skipTimeAndWindUpdatea; // [esp+40h] [ebp+8h]

  if ( !skipTimeAndWindUpdate ) /*0x55fa5a*/
  {
    *(float *)&dword_B39F14[1] = *(float *)&MEMORY[0xB33E90][0xC] + *(float *)&dword_B39F14[1]; /*0x55fa69*/
    CSpeedTreeRT__SetTime(*(float *)&dword_B39F14[1]); /*0x55fa78*/
  }
  if ( camera ) /*0x55fa86*/
  {
    position3[0] = camera->members.super.m_worldTransform.pos.x; /*0x55fa96*/
    position3[1] = camera->members.super.m_worldTransform.pos.y; /*0x55faa0*/
    position3[2] = camera->members.super.m_worldTransform.pos.z; /*0x55faaa*/
    v2 = dbl_A3D360; /*0x55fad5*/
    v14 = camera->members.super.m_worldTransform.rot.data[0][0] * v2; /*0x55fad7*/
    v15 = camera->members.super.m_worldTransform.rot.data[1][0] * v2; /*0x55fae1*/
    v16 = v2 * camera->members.super.m_worldTransform.rot.data[2][0]; /*0x55fae9*/
    direction3[0] = v14; /*0x55faf1*/
    direction3[1] = v15; /*0x55faf9*/
    direction3[2] = v16; /*0x55fb01*/
    CSpeedTreeRT__SetCamera(position3, direction3); /*0x55fb05*/
  }
  if ( !skipTimeAndWindUpdate ) /*0x55fb0f*/
  {
    v3 = MEMORY[0xB333A0]; /*0x55fb15*/
    if ( MEMORY[0xB333A0] ) /*0x55fb15*/
    {
      sky = v3->sky; /*0x55fb23*/
      if ( sky ) /*0x55fb28*/
      {
        if ( v3->currentInteriorCell ) /*0x55fb2e*/
        {
          if ( !g_BSTreeManager_Instance ) /*0x55fb34*/
            BSTreeManager_Create(0); /*0x55fb3f*/
          g_BSTreeManager_Instance->windSpeed = 0.0; /*0x55fb4f*/
        }
        else
        {
          skipTimeAndWindUpdatea = sky->windSpeed; /*0x55fb61*/
          if ( !g_BSTreeManager_Instance ) /*0x55fb54*/
            BSTreeManager_Create(0); /*0x55fb69*/
          g_BSTreeManager_Instance->windSpeed = skipTimeAndWindUpdatea; /*0x55fb7a*/
        }
        if ( g_BSTreeManager_Instance->materialProperty ) /*0x55fb83*/
        {
          if ( Sky_GetFogProperty(MEMORY[0xB333A0]->sky) ) /*0x55fb96*/
          {
            FogProperty = Sky_GetFogProperty(MEMORY[0xB333A0]->sky); /*0x55fbad*/
            v6 = *((_DWORD *)FogProperty + 8); /*0x55fbb9*/
            v7 = *((_DWORD *)FogProperty + 9); /*0x55fbbc*/
            v8 = *((_DWORD *)FogProperty + 0xA); /*0x55fbbf*/
            if ( !g_BSTreeManager_Instance ) /*0x55fbb2*/
              BSTreeManager_Create(0); /*0x55fbc6*/
            materialProperty = g_BSTreeManager_Instance->materialProperty; /*0x55fbd4*/
            ++*((_DWORD *)materialProperty + 0x15); /*0x55fbd7*/
            *((_DWORD *)materialProperty + 7) = v6; /*0x55fbdb*/
            *((_DWORD *)materialProperty + 8) = v7; /*0x55fbde*/
            *((_DWORD *)materialProperty + 9) = v8; /*0x55fbe1*/
            if ( !g_BSTreeManager_Instance ) /*0x55fbe4*/
              BSTreeManager_Create(0); /*0x55fbef*/
            v10 = g_BSTreeManager_Instance->materialProperty; /*0x55fbfd*/
            ++*((_DWORD *)v10 + 0x15); /*0x55fc00*/
            *((_DWORD *)v10 + 0xA) = v6; /*0x55fc04*/
            *((_DWORD *)v10 + 0xB) = v7; /*0x55fc07*/
            *((_DWORD *)v10 + 0xC) = v8; /*0x55fc0a*/
            if ( !g_BSTreeManager_Instance ) /*0x55fc0d*/
              BSTreeManager_Create(0); /*0x55fc18*/
            v11 = g_BSTreeManager_Instance->materialProperty; /*0x55fc25*/
            ++*((_DWORD *)v11 + 0x15); /*0x55fc28*/
            *((_DWORD *)v11 + 0x10) = v6; /*0x55fc2c*/
            *((_DWORD *)v11 + 0x11) = v7; /*0x55fc2f*/
            *((_DWORD *)v11 + 0x12) = v8; /*0x55fc33*/
          }
        }
      }
    }
    if ( !g_BSTreeManager_Instance ) /*0x55fc37*/
      BSTreeManager_Create(0); /*0x55fc42*/
    BSTreeManager_UpdateWindMatrices(g_BSTreeManager_Instance); /*0x55fc50*/
  }
  v12 = (double)iCanopyShadowScale_SpeedTree; /*0x55fc5b*/
  if ( iCanopyShadowScale_SpeedTree < 0 ) /*0x55fc63*/
    v12 = v12 + flt_A2FC78; /*0x55fc65*/
  g_CanopyShadowProjectionScale = v12;          // Verified Oblivion dataflow: iCanopyShadowScale.value is converted from signed integer to float (negative values receive a correction constant) and stored in g_CanopyShadowProjectionScale. Fallout's homolog stores the same setting into ShadowProjTransform.w, making that destination role Probable. /*0x55fc6b*/
  v13 = 0.0; /*0x55fc72*/
  if ( fCanopyShadowGrassMult_SpeedTree < 0.0 || (v13 = fCanopyShadowGrassMult_SpeedTree, v13 <= 1.0) ) /*0x55fc8e*/
    g_TallGrassProjectionShadowMultiplier = v13;// Verified: clamps fCanopyShadowGrassMult.value into [0,1] and stores the result in g_TallGrassProjectionShadowMultiplier. Fallout's named homolog is TallGrassShader::fProjShadowMult; exact Oblivion consumer remains Unknown. /*0x55fc9e*/
  else
    g_TallGrassProjectionShadowMultiplier = 1.0; /*0x55fc92*/
}
