// Reorder existing property-side ShadowSceneLight nodes after the receiver bound changes.
void __thiscall BSShaderProperty_ReorderShadowLightsForReceiverBound(
        MEF_PropertyShadowLightListView32 *self,
        const MEF_ReceiverBound32 *bound)
{
  MEF_RefListNode32 *lightListHead_70; // edi
  _DWORD *payload; // ebp
  MEF_RefListNode32 *v4; // esi
  void (__thiscall ***v5)(_DWORD, int); // ebx
  float *v6; // eax
  const MEF_ReceiverBound32 *v7; // ebx
  double v8; // st7
  void (__thiscall ***v9)(_DWORD, int); // ebp
  _DWORD *v10; // ebp
  void (__thiscall ***v11)(_DWORD, int); // ebx
  float *v12; // eax
  double v13; // st7
  void (__thiscall ***v14)(_DWORD, int); // ebp
  float v15; // ecx
  struct MEF_RefListNode32 *previous; // eax
  struct MEF_RefListNode32 *v17; // eax
  char v18; // [esp+11h] [ebp-41h]
  MEF_PropertyShadowLightListView32 *v19; // [esp+12h] [ebp-40h]
  MEF_RefListNode32 *next; // [esp+16h] [ebp-3Ch]
  int v21; // [esp+1Ah] [ebp-38h] BYREF
  float v22; // [esp+1Eh] [ebp-34h]
  float v23; // [esp+22h] [ebp-30h]
  int v24; // [esp+26h] [ebp-2Ch] BYREF
  int v25; // [esp+2Ah] [ebp-28h] BYREF
  int v26; // [esp+2Eh] [ebp-24h] BYREF
  float v27; // [esp+32h] [ebp-20h]
  MEF_RefListNode32 *v28; // [esp+36h] [ebp-1Ch]
  float v29; // [esp+3Ah] [ebp-18h]
  float v30; // [esp+3Eh] [ebp-14h]
  float v31; // [esp+42h] [ebp-10h]
  float v32; // [esp+46h] [ebp-Ch]
  float v33; // [esp+4Ah] [ebp-8h]
  float v34; // [esp+4Eh] [ebp-4h]

  lightListHead_70 = self->lightListHead_70; /*0x7ecec4*/
  v19 = self; /*0x7ecec9*/
  v18 = 0; /*0x7ececd*/
  if ( lightListHead_70 ) /*0x7eced2*/
  {
    while ( 1 ) /*0x7ecee8*/
    {
      payload = lightListHead_70->payload; /*0x7ecee8*/
      v4 = self->lightListHead_70; /*0x7eceed*/
      next = lightListHead_70->next; /*0x7ecefa*/
      v23 = *(float *)(*ShadowSceneLight_GetLightRef(payload, &v21) + 0xF8); /*0x7ecf11*/
      if ( v21 ) /*0x7ecf15*/
      {
        v5 = (void (__thiscall ***)(_DWORD, int))v21; /*0x7ecf17*/
        if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) ) /*0x7ecf1d*/
          (**v5)(v5, 1); /*0x7ecf33*/
      }
      v6 = (float *)*ShadowSceneLight_GetLightRef(payload, &v24); /*0x7ecf41*/
      v7 = bound; /*0x7ecf43*/
      v8 = v6[0x22] - bound->centerX; /*0x7ecf4d*/
      v6 += 0x22; /*0x7ecf4f*/
      v29 = v8; /*0x7ecf54*/
      v30 = v6[1] - bound->centerY; /*0x7ecf5e*/
      v31 = v6[2] - bound->centerZ; /*0x7ecf68*/
      v22 = v30 * v30 + v29 * v29 + v31 * v31; /*0x7ecf88*/
      v22 = sqrt(v22); /*0x7ecf95*/
      v27 = (v22 - bound->radius) / v23; /*0x7ecfaa*/
      if ( v24 ) /*0x7ecfae*/
      {
        v9 = (void (__thiscall ***)(_DWORD, int))v24; /*0x7ecfb0*/
        if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) ) /*0x7ecfb6*/
          (**v9)(v9, 1); /*0x7ecfcd*/
      }
      while ( v4 != lightListHead_70 ) /*0x7ecfd1*/
      {
        if ( !v4 ) /*0x7ecfd9*/
          break; /*0x7ecfd9*/
        v10 = v4->payload; /*0x7ecfdf*/
        v28 = v4; /*0x7ecfea*/
        v4 = v4->next; /*0x7ecfee*/
        v22 = *(float *)(*ShadowSceneLight_GetLightRef(v10, &v25) + 0xF8); /*0x7ed005*/
        if ( v25 ) /*0x7ed009*/
        {
          v11 = (void (__thiscall ***)(_DWORD, int))v25; /*0x7ed00b*/
          if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) ) /*0x7ed011*/
            (**v11)(v11, 1); /*0x7ed027*/
          v7 = bound; /*0x7ed029*/
        }
        v12 = (float *)*ShadowSceneLight_GetLightRef(v10, &v26); /*0x7ed039*/
        v13 = v12[0x22]; /*0x7ed03b*/
        v12 += 0x22; /*0x7ed041*/
        v32 = v13 - v7->centerX; /*0x7ed048*/
        v33 = v12[1] - v7->centerY; /*0x7ed052*/
        v34 = v12[2] - v7->centerZ; /*0x7ed05c*/
        v23 = v33 * v33 + v32 * v32 + v34 * v34; /*0x7ed07c*/
        v23 = sqrt(v23); /*0x7ed089*/
        v23 = (v23 - v7->radius) / v22; /*0x7ed09e*/
        if ( v26 ) /*0x7ed0a2*/
        {
          v14 = (void (__thiscall ***)(_DWORD, int))v26; /*0x7ed0a4*/
          if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x7ed0aa*/
            (**v14)(v14, 1); /*0x7ed0c1*/
        }
        if ( v23 > (double)v27 ) /*0x7ed0d2*/
        {
          v15 = *(float *)&v28; /*0x7ed0d4*/
          if ( lightListHead_70 != v28 ) /*0x7ed0da*/
          {
            if ( v19->lightListHead_70 == lightListHead_70 ) /*0x7ed0e3*/
              v19->lightListHead_70 = lightListHead_70->next; /*0x7ed0e7*/
            if ( v19->lightListHead_70 == (MEF_RefListNode32 *)LODWORD(v15) ) /*0x7ed0ed*/
              v19->lightListHead_70 = lightListHead_70; /*0x7ed0ef*/
            if ( v19->lightListTail_74 == lightListHead_70 ) /*0x7ed0f5*/
              v19->lightListTail_74 = lightListHead_70->previous; /*0x7ed0fa*/
            if ( lightListHead_70->next ) /*0x7ed0fd*/
              lightListHead_70->next->previous = lightListHead_70->previous; /*0x7ed106*/
            previous = lightListHead_70->previous; /*0x7ed109*/
            if ( previous ) /*0x7ed10e*/
              previous->next = lightListHead_70->next; /*0x7ed112*/
            v17 = *(struct MEF_RefListNode32 **)(LODWORD(v15) + 4); /*0x7ed114*/
            lightListHead_70->previous = v17; /*0x7ed119*/
            *(float *)&lightListHead_70->next = v15; /*0x7ed11c*/
            if ( v17 ) /*0x7ed11e*/
              v17->next = lightListHead_70; /*0x7ed120*/
            *(_DWORD *)(LODWORD(v15) + 4) = lightListHead_70; /*0x7ed122*/
          }
          v4 = 0; /*0x7ed125*/
          v18 = 1; /*0x7ed127*/
        }
      }
      if ( !next ) /*0x7ed139*/
        break; /*0x7ed139*/
      lightListHead_70 = next; /*0x7ecee0*/
      self = v19; /*0x7ecee4*/
    }
    if ( v18 ) /*0x7ed147*/
      v19->invalidatedState_24 = 0; /*0x7ed14d*/
  }
}
