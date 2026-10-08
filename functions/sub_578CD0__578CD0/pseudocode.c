void __usercall sub_578CD0(double a1@<st1>, double a2@<st0>)
{
  InterfaceManager *Singleton; // ecx
  int v3; // ebp
  volatile LONG *v4; // eax
  NiNode *v5; // eax
  volatile LONG *v6; // eax
  ShadowSceneNode *v7; // eax
  volatile LONG *v8; // eax
  BSShaderProperty *v9; // esi
  NiNode *v10; // ecx
  volatile LONG *v11; // eax
  NiObjectNET *v12; // eax
  float *v13; // eax
  float v14; // ecx
  float v15; // edx
  double v16; // st5
  float v17; // ecx
  float *v18; // eax
  float v19; // edx
  float v20; // ecx
  double v21; // st5
  double v22; // st5
  float v23; // edx
  volatile LONG *v24; // esi
  float v25; // [esp+0h] [ebp-60h]
  float v26; // [esp+4h] [ebp-5Ch]
  float v27; // [esp+8h] [ebp-58h]
  float v28; // [esp+8h] [ebp-58h]
  volatile LONG *v29; // [esp+20h] [ebp-40h] BYREF
  float v30; // [esp+24h] [ebp-3Ch]
  float v31; // [esp+28h] [ebp-38h]
  float v32; // [esp+2Ch] [ebp-34h]
  float v33[11]; // [esp+30h] [ebp-30h] BYREF
  int v34; // [esp+5Ch] [ebp-4h]

  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x578cdc*/
  v34 = 0xFFFFFFFF; /*0x57e510*/
  LODWORD(v33[0xA]) = &loc_9BEA2C; /*0x57e512*/
  v33[9] = *(float *)&NtCurrentTeb()->Tib.ExceptionList; /*0x57e51d*/
  v3 = (int)Singleton; /*0x57e537*/
  v4 = (volatile LONG *)FormHeapAlloc(0xDCu); /*0x57e53e*/
  v29 = v4; /*0x57e546*/
  v34 = 0; /*0x57e54c*/
  if ( v4 ) /*0x57e554*/
    v5 = NiNode::NiNode((NiNode *)v4, 0); /*0x57e55a*/
  else
    v5 = 0; /*0x57e561*/
  v27 = flt_A68FCC; /*0x57e56c*/
  v34 = 0xFFFFFFFF; /*0x57e576*/
  *(_DWORD *)(v3 + 0x60) = v5; /*0x57e582*/
  sub_711580(v33, 0.0, 0.0, v27); /*0x57e588*/
  qmemcpy((void *)(*(_DWORD *)(v3 + 0x60) + 0x30), v33, 0x24u); /*0x57e5a1*/
  v6 = (volatile LONG *)FormHeapAlloc(0x130u); /*0x57e5a3*/
  v29 = v6; /*0x57e5ab*/
  v34 = 1; /*0x57e5b6*/
  if ( v6 ) /*0x57e5ba*/
    v7 = ShadowSceneNode::ShadowSceneNode((ShadowSceneNode *)v6); /*0x57e5be*/
  else
    v7 = 0; /*0x57e5c5*/
  *(_DWORD *)(v3 + 0x64) = v7; /*0x57e5cb*/
  v34 = 0xFFFFFFFF; /*0x57e5cf*/
  *((_BYTE *)v7 + 0x11C) = 1; /*0x57e5d3*/
  sub_7B4270(1, (int)v7); /*0x57e5d9*/
  v8 = (volatile LONG *)FormHeapAlloc(0x1Cu); /*0x57e5e0*/
  v9 = (BSShaderProperty *)v8; /*0x57e5e5*/
  v29 = v8; /*0x57e5ea*/
  v34 = 2; /*0x57e5f0*/
  if ( v8 ) /*0x57e5f8*/
  {
    NiObjectNET::NiObjectNET((NiObjectNET *)v8); /*0x57e5fc*/
    v9->vtbl = &NiAlphaProperty::`vftable'; /*0x57e601*/
    v9->member.super.flags = 0xEC; /*0x57e607*/
    v9->member.super.pad01A[0] = 0; /*0x57e60d*/
  }
  else
  {
    v9 = 0; /*0x57e613*/
  }
  v9->member.super.flags &= ~1u; /*0x57e615*/
  v10 = *(NiNode **)(v3 + 0x64); /*0x57e61b*/
  v34 = 0xFFFFFFFF; /*0x57e61f*/
  sub_405680(v10, v9); /*0x57e623*/
  v11 = (volatile LONG *)FormHeapAlloc(0x114u); /*0x57e62d*/
  v29 = v11; /*0x57e635*/
  v34 = 3; /*0x57e63b*/
  if ( v11 ) /*0x57e643*/
    v12 = (NiObjectNET *)sub_719760((NiLight *)v11); /*0x57e647*/
  else
    v12 = 0; /*0x57e64e*/
  v34 = 0xFFFFFFFF; /*0x57e657*/
  *(_DWORD *)(v3 + 0x18) = v12; /*0x57e65b*/
  NiObjectNET_SetName(v12, "PlayerSceneLight"); // Name the interface-scene backing light PlayerSceneLight; this is later wrapped at ShadowSceneNode+0x118. /*0x57e65e*/
  v13 = *(float **)(v3 + 0x18); /*0x57e669*/
  v30 = flt_B135E0; /*0x57e66c*/
  v14 = v30; /*0x57e676*/
  v31 = flt_B135E8; /*0x57e67a*/
  v15 = v31; /*0x57e67e*/
  v16 = flt_B135F0; /*0x57e682*/
  ++*((_DWORD *)v13 + 0x2E); /*0x57e688*/
  v13[0x3B] = v14; /*0x57e68e*/
  v32 = v16; /*0x57e694*/
  v17 = v32; /*0x57e698*/
  v13[0x3C] = v15; /*0x57e69c*/
  v13[0x3D] = v17; /*0x57e6a2*/
  v18 = *(float **)(v3 + 0x18); /*0x57e6ae*/
  v30 = flt_B135C8; /*0x57e6b1*/
  v19 = v30; /*0x57e6bb*/
  v31 = flt_B135D0; /*0x57e6bf*/
  v20 = v31; /*0x57e6c3*/
  v21 = flt_B135D8; /*0x57e6c7*/
  ++*((_DWORD *)v18 + 0x2E); /*0x57e6cd*/
  v32 = v21; /*0x57e6d3*/
  v22 = flt_A68FB4; /*0x57e6da*/
  v18[0x38] = v19; /*0x57e6e0*/
  v23 = v32; /*0x57e6e6*/
  v28 = v22; /*0x57e6ea*/
  v18[0x39] = v20; /*0x57e6ee*/
  v26 = v22; /*0x57e6f4*/
  v25 = v22; /*0x57e6fc*/
  v18[0x3A] = v23; /*0x57e6ff*/
  sub_711580(v33, v25, v26, v28); /*0x57e705*/
  qmemcpy((void *)(*(_DWORD *)(v3 + 0x18) + 0x30), v33, 0x24u); /*0x57e719*/
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v3 + 0x64) + 0x84))( /*0x57e72b*/
    *(_DWORD *)(v3 + 0x64),
    *(_DWORD *)(v3 + 0x18),
    1);
  ShadowSceneNode_RecreateLightLevelReference(*(_DWORD **)(v3 + 0x64), *(_DWORD *)(v3 + 0x18));// Create/replace the interface ShadowSceneNode+0x118 light-level reference wrapper using PlayerSceneLight. /*0x57e734*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(v3 + 4) + 0x84))( /*0x57e74a*/
    *(_DWORD *)(v3 + 4),
    *(_DWORD *)(v3 + 0x64),
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(v3 + 0x64) + 0x84))( /*0x57e75d*/
    *(_DWORD *)(v3 + 0x64),
    *(_DWORD *)(v3 + 0x60),
    0);
  sub_708560(*(int ***)(v3 + 0x60), &v29, 2); /*0x57e769*/
  if ( v29 ) /*0x57e774*/
  {
    v24 = v29; /*0x57e776*/
    if ( !InterlockedDecrement(v29 + 1) ) /*0x57e77c*/
      a2 = ((double (__thiscall *)(volatile LONG *, int))**(_DWORD **)v24)(v24, 1); /*0x57e791*/
  }
  *(_WORD *)(*(_DWORD *)(v3 + 0x60) + 0x18) |= 1u; /*0x57e796*/
  *(_BYTE *)(v3 + 8) = 1; /*0x57e79c*/
  sub_57D480(v3, 1, v3, a1, a2); /*0x57e79f*/
}
