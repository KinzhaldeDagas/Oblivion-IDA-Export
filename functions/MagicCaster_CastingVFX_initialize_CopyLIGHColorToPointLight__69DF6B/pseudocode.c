// positive sp value has been detected, the output may be wrong!
int __userpurge MagicCaster_CastingVFX_initialize___::CopyLIGHColorToPointLight@<eax>(
        Ni2DBuffer *a1@<eax>,
        int a2@<edi>,
        int a3,
        int a4,
        int a5,
        Ni2DBuffer *a6)
{
  int *v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  double v10; // rt0
  int v11; // eax
  int v12; // eax
  double v13; // st7
  _DWORD *ShadowSceneNode; // eax
  float v16; // [esp-10h] [ebp-10h]
  float v17; // [esp-10h] [ebp-10h]
  float v18; // [esp-10h] [ebp-10h]
  float v19; // [esp-Ch] [ebp-Ch]
  float v20; // [esp-Ch] [ebp-Ch]
  float v21; // [esp-8h] [ebp-8h]
  float v22; // [esp-8h] [ebp-8h]
  int v23; // [esp+Ch] [ebp+Ch]

  v6 = (int *)(a2 + 8); /*0x69df6b*/
  NiSmartPointer_Set__((Ni2DBuffer **)(a2 + 8), a1); /*0x69df79*/
  v7 = *(_DWORD *)(a2 + 4); /*0x69df80*/
  *(float *)(a2 + 0xC) = 1.0; /*0x69df83*/
  v8 = *(_DWORD *)(v7 + 0x78); /*0x69df86*/
  v16 = (float)(unsigned __int8)v8; /*0x69df9b*/
  v19 = (float)BYTE1(v8); /*0x69dfa9*/
  v23 = BYTE2(v8); /*0x69dfad*/
  v9 = *(_DWORD *)(a2 + 8); /*0x69dfb1*/
  ++*(_DWORD *)(v9 + 0xB8); /*0x69dfb7*/
  v21 = (float)v23; /*0x69dfc0*/
  v10 = dbl_A3DDD8; /*0x69dfd0*/
  v17 = v16 / v10; /*0x69dfd2*/
  *(float *)(v9 + 0xEC) = v17; /*0x69dfe0*/
  v20 = v19 / v10; /*0x69dfe6*/
  *(float *)(v9 + 0xF0) = v20; /*0x69dfee*/
  v22 = v21 / v10; /*0x69dff8*/
  v18 = flt_A34A80; /*0x69e006*/
  *(float *)(v9 + 0xF4) = v22; /*0x69e00c*/
  v11 = *(_DWORD *)(a2 + 8); /*0x69e012*/
  ++*(_DWORD *)(v11 + 0xB8); /*0x69e01c*/
  *(float *)(v11 + 0xF8) = v18; /*0x69e02b*/
  *(float *)(v11 + 0xFC) = 0.0; /*0x69e035*/
  *(float *)(v11 + 0x100) = 0.0; /*0x69e03b*/
  v12 = *(_DWORD *)(a2 + 8); /*0x69e044*/
  v13 = *(float *)(*(_DWORD *)(a2 + 4) + 0x88); /*0x69e046*/
  ++*(_DWORD *)(v12 + 0xB8); /*0x69e04c*/
  *(float *)(v12 + 0xDC) = v13; /*0x69e053*/
  ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x69e059*/
  if ( ShadowSceneNode ) /*0x69e063*/
    ShadowSceneNode_FindOrCreateFullLightForSource(ShadowSceneNode, *v6, (ShadowSceneLight *)1);// Magic-casting VFX NiPointLight registration uses trackBackingPosition=true. /*0x69e06c*/
  NiSmartPointer_Set__((Ni2DBuffer **)a2, a6); /*0x69e078*/
  return (*(int (__cdecl **)(int))(**(_DWORD **)a2 + 0x84))(*v6); /*0x69e09f*/
}
