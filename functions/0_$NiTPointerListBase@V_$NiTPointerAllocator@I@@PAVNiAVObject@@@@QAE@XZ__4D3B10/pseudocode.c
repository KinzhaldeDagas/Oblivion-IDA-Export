// [Verified] This Oblivion scene-projection path creates/registers BSTempEffect decal effects after its geometry/raycast work; it is a transient decal path and does not establish population of BSShaderLightingProperty+0x80's DECAL_DATA* list. Fallout contrast: Fallout's AddDecalRef path stores reference/intersection/normal metadata in ExtraDecalRefs (ExtraData type 0x57). Equivalence between these paths: Unknown.
void __userpurge Decal_ProjectToSceneGeometry(
        ExtraDataList *this@<ecx>,
        char a2@<bpl>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        float a10,
        float a11,
        int a12)
{
  _DWORD *v13; // edi
  int v14; // eax
  NiObject *v15; // eax
  FreeEntry *v16; // eax
  unsigned __int8 v17; // cl
  float *v18; // eax
  float *inited; // eax
  int *v20; // eax
  double v21; // rt0
  int v22; // eax
  double v23; // rt1
  double v24; // rt2
  hkAllCdPointCollector *v25; // ecx
  UInt32 v26; // ebp
  float v27; // ebx
  NiAVObject *v28; // eax
  NiObject *v29; // esi
  _DWORD *v30; // eax
  bool v31; // zf
  _DWORD *v32; // edx
  _DWORD *v33; // eax
  _DWORD *v34; // esi
  _DWORD *v35; // eax
  TES *v36; // ecx
  NiObject *v37; // eax
  NiObject *v38; // esi
  TES *v39; // ecx
  double v40; // rtt
  NiObject *v41; // eax
  _DWORD *v42; // esi
  _DWORD *v43; // eax
  int v44; // [esp+Ch] [ebp-5Ch]
  float v45; // [esp+20h] [ebp-48h]
  float v46; // [esp+20h] [ebp-48h]
  int v47; // [esp+20h] [ebp-48h]
  float v48; // [esp+20h] [ebp-48h]
  float v49; // [esp+20h] [ebp-48h]
  float v50; // [esp+20h] [ebp-48h]
  float v51; // [esp+20h] [ebp-48h]
  float v52; // [esp+20h] [ebp-48h]
  float v53; // [esp+24h] [ebp-44h]
  float v54; // [esp+28h] [ebp-40h]
  float v55; // [esp+28h] [ebp-40h]
  int v56; // [esp+28h] [ebp-40h]
  float v58; // [esp+30h] [ebp-38h]
  float v59; // [esp+30h] [ebp-38h]
  float v60; // [esp+30h] [ebp-38h]
  float v61; // [esp+30h] [ebp-38h]
  float v62; // [esp+30h] [ebp-38h]
  float v63; // [esp+30h] [ebp-38h]
  float v64; // [esp+30h] [ebp-38h]
  int v65; // [esp+34h] [ebp-34h] BYREF
  float v66; // [esp+38h] [ebp-30h]
  float v67; // [esp+3Ch] [ebp-2Ch]
  float v68[3]; // [esp+40h] [ebp-28h] BYREF
  void **v69; // [esp+4Ch] [ebp-1Ch] BYREF
  _DWORD *v70; // [esp+50h] [ebp-18h]
  _DWORD *v71; // [esp+54h] [ebp-14h]
  int v72; // [esp+58h] [ebp-10h]
  int v73; // [esp+64h] [ebp-4h]

  v53 = Rand5(flt_A46B14);                      // BloodOnDeath decode 2026-05-30: Decal_ProjectToSceneGeometry randomizes decal rotation in [0, 2pi) and decal variant floor(rand[0,4)); these do not increase the number of decals. /*0x4d3b4c*/
  v54 = Rand5(flt_A46B10); /*0x4d3b5e*/
  v55 = floor(v54); /*0x4d3b7f*/
  v13 = 0; /*0x4d3b90*/
  v56 = (int)v55; /*0x4d3b9b*/
  if ( a10 == 0.0 ) /*0x4d3bab*/
  {
    Vector3_NormalizeInPlace((float *)&a6); /*0x4d3c4b*/
    if ( !unk_B35C08 ) /*0x4d3c52*/
    {
      v16 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x1000001C0uLL, v44); /*0x4d3c66*/
      v17 = 0x10 - ((unsigned __int8)v16 & 0xF); /*0x4d3c72*/
      v18 = (float *)((char *)v16 + v17); /*0x4d3c77*/
      *((_BYTE *)v18 + 0xFFFFFFFF) = v17; /*0x4d3c79*/
      a10 = *(float *)&v18; /*0x4d3c7c*/
      inited = bhkSphereShapeProbeCollector_InitLayer1C(v18, flt_A427E4, 0); /*0x4d3c91*/
      v73 = 0xFFFFFFFF; /*0x4d3c96*/
      unk_B35C08 = (hkAllCdPointCollector *)inited; /*0x4d3c9e*/
    }
    bhkCollisionLayer_SetInteraction(0x1C, 8, 0); /*0x4d3ca8*/
    if ( (*((_BYTE *)this + 0x24) & 1) != 0 ) /*0x4d3cb4*/
      v20 = (int *)sub_424180(this + 2); /*0x4d3cb9*/
    else
      v20 = (int *)MEMORY[0xB35C24]; /*0x4d3cc0*/
    sub_5337E0((int *)unk_B35C08, v20); /*0x4d3ccc*/
    v21 = dbl_A46B08;                           // BloodOnDeath v1.1.6: each custom moved-limb trail point still calls the native 80-unit scene projection path, so interpolated corpse/Havok trails stay within the same ray-length constraint. /*0x4d3ce2*/
    a10 = *(float *)&a6 * v21; /*0x4d3ce8*/
    v45 = *(float *)&a7 * v21; /*0x4d3cf5*/
    v58 = v21 * *(float *)&a8; /*0x4d3cfd*/
    a10 = a10 + *(float *)&a3; /*0x4d3d0c*/
    v46 = *(float *)&a4 + v45; /*0x4d3d1b*/
    v59 = *(float *)&a5 + v58; /*0x4d3d27*/
    *(float *)&v65 = a10; /*0x4d3d32*/
    v66 = v46; /*0x4d3d3a*/
    v67 = v59; /*0x4d3d42*/
    v22 = sub_533830((int)unk_B35C08, (float *)&a3, (float *)&v65, flt_A427E4); /*0x4d3d57*/
    v47 = v22; /*0x4d3d5e*/
    if ( !v22 ) /*0x4d3d62*/
    {
      a10 = -*(float *)&rhs; /*0x4d3d74*/
      v60 = -*(float *)&MEMORY[0xB258EC]; /*0x4d3d80*/
      v48 = -*(float *)&MEMORY[0xB258F0]; /*0x4d3d8c*/
      v23 = dbl_A3D0C0; /*0x4d3d9c*/
      a10 = a10 * v23; /*0x4d3d9e*/
      v61 = v60 * v23; /*0x4d3da8*/
      v49 = v23 * v48; /*0x4d3db0*/
      a10 = a10 + *(float *)&a6; /*0x4d3dbc*/
      v62 = *(float *)&a7 + v61; /*0x4d3dc8*/
      v50 = *(float *)&a8 + v49; /*0x4d3dd4*/
      *(float *)&v65 = a10; /*0x4d3ddc*/
      v66 = v62; /*0x4d3de4*/
      v67 = v50; /*0x4d3dec*/
      Vector3_NormalizeInPlace((float *)&v65); /*0x4d3df0*/
      v24 = dbl_A46B08; /*0x4d3e10*/
      a6 = v65; /*0x4d3e12*/
      a10 = *(float *)&v65 * v24; /*0x4d3e1a*/
      *(float *)&a7 = v66; /*0x4d3e21*/
      *(float *)&a8 = v67; /*0x4d3e2f*/
      v25 = unk_B35C08; /*0x4d3e33*/
      v63 = v66 * v24; /*0x4d3e39*/
      v51 = v24 * v67; /*0x4d3e41*/
      a10 = a10 + *(float *)&a3; /*0x4d3e50*/
      v64 = *(float *)&a4 + v63; /*0x4d3e5f*/
      v52 = *(float *)&a5 + v51; /*0x4d3e6b*/
      *(float *)&v65 = a10; /*0x4d3e76*/
      v66 = v64; /*0x4d3e7e*/
      v67 = v52; /*0x4d3e86*/
      v22 = sub_533830((int)v25, (float *)&a3, (float *)&v65, flt_A427E4); /*0x4d3e95*/
      v47 = v22; /*0x4d3e9a*/
    }
    v72 = 0; /*0x4d3e9e*/
    v70 = 0; /*0x4d3ea2*/
    v71 = 0; /*0x4d3ea6*/
    v69 = &NiTPointerList<NiAVObject *>::`vftable'; /*0x4d3eaa*/
    v26 = a12; /*0x4d3eb4*/
    v27 = a9; /*0x4d3ebb*/
    v73 = 1; /*0x4d3ebf*/
    a10 = 0.0; /*0x4d3ec7*/
    if ( v22 > 0 ) /*0x4d3ecb*/
    {
      do /*0x4d3fb4*/
      {
        v28 = sub_533930(unk_B35C08, SLODWORD(a10));// BloodOnDeath decode 2026-05-30: null-target scene projection iterates Havok collector hits and attaches to each unique geometry object. More left-behind blood can come from more projection calls, not from selector/rotation. /*0x4d3edc*/
        v13 = v70; /*0x4d3ee1*/
        v29 = (NiObject *)v28; /*0x4d3ee7*/
        v30 = v70; /*0x4d3ee9*/
        if ( !v70 ) /*0x4d3eeb*/
          goto LABEL_18; /*0x4d3eeb*/
        while ( 1 ) /*0x4d3ef0*/
        {
          v31 = v29 == (NiObject *)v30[2]; /*0x4d3ef0*/
          v32 = v30; /*0x4d3ef6*/
          v30 = (_DWORD *)*v30; /*0x4d3ef8*/
          if ( v31 ) /*0x4d3efa*/
            break; /*0x4d3efa*/
          if ( !v30 ) /*0x4d3efe*/
            goto LABEL_18; /*0x4d3efe*/
        }
        if ( !v32 ) /*0x4d3f04*/
        {
LABEL_18:
          Decal_AttachToGeometryRecursive( /*0x4d3f0a*/
            this,
            a3,
            a4,
            a5,
            *(float *)&a6,
            a7,
            a8,
            (const char *)LODWORD(v27),
            v29,
            (int *)&a11,
            v26,
            v53,
            v56);
          v33 = (_DWORD *)((int (__thiscall *)(void ***))v69[1])(&v69); /*0x4d3f74*/
          v33[2] = v29; /*0x4d3f76*/
          *v33 = 0; /*0x4d3f79*/
          v33[1] = v71; /*0x4d3f83*/
          if ( v71 ) /*0x4d3f8c*/
          {
            *v71 = v33; /*0x4d3f8e*/
            v13 = v70; /*0x4d3f90*/
          }
          else
          {
            v13 = v33; /*0x4d3f96*/
            v70 = v33; /*0x4d3f98*/
          }
          ++v72; /*0x4d3f9c*/
          v71 = v33; /*0x4d3fa1*/
        }
        ++LODWORD(a10);                         // BloodOnDeath v1.1.6: additional moved-limb trail points create additional projection calls; this is the reliable way to leave more blood along a dragged path. /*0x4d3fb0*/
      }
      while ( SLODWORD(a10) < v47 ); /*0x4d3fb4*/
    }
    v34 = v13; /*0x4d3fbe*/
    while ( v34 ) /*0x4d3fc0*/
    {
      v35 = v34; /*0x4d3fc6*/
      v34 = (_DWORD *)*v34; /*0x4d3fc8*/
      ((void (__thiscall *)(void ***, _DWORD *))v69[2])(&v69, v35); /*0x4d3fd2*/
    }
    v36 = MEMORY[0xB333A0]; /*0x4d3fdf*/
    v72 = 0; /*0x4d3fe5*/
    v70 = 0; /*0x4d3fe9*/
    v71 = 0; /*0x4d3fed*/
    v37 = (NiObject *)sub_440880(v36, (float *)&a3); /*0x4d3ff1*/
    v38 = v37; /*0x4d3ff6*/
    if ( v37 ) /*0x4d3ffa*/
    {
      Decal_AttachToGeometryRecursive( /*0x4d405d*/
        this,
        a3,
        a4,
        a5,
        *(float *)&a6,
        a7,
        a8,
        (const char *)LODWORD(v27),
        v37,
        (int *)&a11,
        v26,
        v53,
        v56);                                   // BloodOnDeath decode 2026-05-30: after Havok hits, projection also tries loaded cell geometry at the source point.
      v39 = MEMORY[0xB333A0]; /*0x4d406c*/
      v40 = dbl_A3F428; /*0x4d4078*/
      *(float *)&a12 = *(float *)&a6 * v40; /*0x4d407b*/
      a9 = *(float *)&a7 * v40; /*0x4d4088*/
      a10 = v40 * *(float *)&a8; /*0x4d4090*/
      *(float *)&a12 = *(float *)&a12 + *(float *)&a3; /*0x4d40a2*/
      a9 = *(float *)&a4 + a9; /*0x4d40b1*/
      a10 = *(float *)&a5 + a10; /*0x4d40c0*/
      v68[0] = *(float *)&a12; /*0x4d40ce*/
      v68[1] = a9; /*0x4d40d6*/
      v68[2] = a10; /*0x4d40e1*/
      v41 = (NiObject *)sub_440880(v39, v68);   // BloodOnDeath v1.1.2: projector also samples cell geometry farther along the ray, so outward limb spurts can mark nearby world geometry as well as floor hits. /*0x4d40e5*/
      if ( v38 != v41 ) /*0x4d40ec*/
        Decal_AttachToGeometryRecursive( /*0x4d4147*/
          this,
          a3,
          a4,
          a5,
          *(float *)&a6,
          a7,
          a8,
          (const char *)LODWORD(v27),
          v41,
          (int *)&a11,
          v26,
          v53,
          v56);
    }
    sub_5337E0((int *)unk_B35C08, 0); /*0x4d4154*/
    v69 = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>::`vftable'; /*0x4d4159*/
    v42 = v70; /*0x4d4161*/
    v73 = 2; /*0x4d4167*/
    while ( v42 ) /*0x4d416f*/
    {
      v43 = v42; /*0x4d4175*/
      v42 = (_DWORD *)*v42; /*0x4d4177*/
      ((void (__thiscall *)(void ***, _DWORD *))v69[2])(&v69, v43); /*0x4d4181*/
    }
  }
  else
  {
    v14 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(a10) + 0x154))(LODWORD(a10)); /*0x4d3bb9*/
    if ( v14 ) /*0x4d3bbd*/
    {
      v15 = (NiObject *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 8))(v14); /*0x4d3bca*/
      if ( v15 ) /*0x4d3bce*/
        Decal_AttachToGeometryRecursive( /*0x4d3c3d*/
          this,
          a3,
          a4,
          a5,
          *(float *)&a6,
          a7,
          a8,
          (const char *)LODWORD(a9),
          v15,
          (int *)&a11,
          a12,
          v53,
          v56);
    }
  }
}
