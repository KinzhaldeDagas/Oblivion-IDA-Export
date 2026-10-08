// 2026-05-19 captured 4.x load pass: installed 4.x tree corpus includes files with retained 73000 collision rotations after sanitizing, but this Havok builder still has no enabled sidecar consumer hook in stock.
// [Collision v143 2026-10-07] The5614D8 wrapper now consumes authored rotations/mixed groups. Native bTreetops==1 remains required. Unchanged single shapes and all-sphere groups retain this stock builder. New shapes use native factories, simple phantom/filter40009 and bhkSPCollisionObject tableA655CC. Scaling matches float(source*double hkFactor A39088)*float(B39E18*instanceScale). Box center=p+R*(0,0,height/2); capsule endpoints=p+R*(0,0,r) and p+R*(0,0,height-r). Approved CAD4.2 CBox/CCylinder/CSphere constructors set order4; CVENode DoLocalTransform then calls Z,X,Y in degrees. Independent IdvVector comparison passed in277 focused checks. Build evidence only: in-game shape alignment and teardown UNVERIFIED. User authorized enabling the existing game bTreeTops setting for manual testing.
void __thiscall BSTreeNode__MakeHavokLeaves(void *this, OB_CSpeedTreeRT_010201A0 *speedTree, float scale)
{                                               // 2026-05-22 OBSE implementation pass: bTreetops global byte is read from 0xB1274C before any collision export. Log-only probe should report this gate and then preserve stock behavior.
  unsigned int CollisionObjectCount; // edi
  int (__thiscall *v5)(void *); // edx
  unsigned int v6; // esi
  double v7; // rt0
  double v8; // st7
  int i; // eax
  double v10; // st6
  bhkRefObject *v11; // eax
  bhkRefObject *v12; // eax
  bhkRefObject *v13; // eax
  bhkRefObject *v14; // eax
  bhkRefObject *v15; // eax
  bhkRefObject *v16; // eax
  bhkRefObject *v17; // eax
  bhkRefObject *v18; // eax
  bhkRefObject *v19; // eax
  double v20; // rtt
  __m128 *v21; // eax
  bhkRefObject *v22; // eax
  bhkRefObject *v23; // eax
  int v24; // ecx
  bhkRefObject *v25; // eax
  bhkRefObject *v26; // edi
  NiObject *v27; // eax
  NiObject *v28; // esi
  Ni2DBuffer **v29; // ecx
  int v30; // ecx
  float v31; // [esp+24h] [ebp-118h]
  float dimOut; // [esp+28h] [ebp-114h] BYREF
  float v33; // [esp+2Ch] [ebp-110h]
  float v34; // [esp+30h] [ebp-10Ch]
  float posOut; // [esp+34h] [ebp-108h] BYREF
  float v36; // [esp+38h] [ebp-104h]
  float v37; // [esp+3Ch] [ebp-100h]
  int typeOut; // [esp+40h] [ebp-FCh] BYREF
  float v39; // [esp+44h] [ebp-F8h]
  NiAVObject *v40; // [esp+48h] [ebp-F4h]
  float v41; // [esp+4Ch] [ebp-F0h] BYREF
  float v42; // [esp+50h] [ebp-ECh]
  float v43; // [esp+5Ch] [ebp-E0h]
  float v44; // [esp+60h] [ebp-DCh]
  float v45; // [esp+64h] [ebp-D8h]
  float v46; // [esp+68h] [ebp-D4h]
  float v47; // [esp+6Ch] [ebp-D0h]
  float v48; // [esp+70h] [ebp-CCh]
  float v49; // [esp+74h] [ebp-C8h]
  float v50; // [esp+78h] [ebp-C4h]
  float v51[4]; // [esp+8Ch] [ebp-B0h] BYREF
  int v52; // [esp+9Ch] [ebp-A0h] BYREF
  hkRefObject *hkObject; // [esp+A0h] [ebp-9Ch]
  _DWORD *v54; // [esp+A8h] [ebp-94h]
  int v55; // [esp+B0h] [ebp-8Ch]
  __m128 v56; // [esp+FCh] [ebp-40h] BYREF
  __m128 v57; // [esp+10Ch] [ebp-30h] BYREF
  unsigned int v58; // [esp+138h] [ebp-4h]

  if ( bTreetops == 1 ) /*0x56555c*/
  {
    CollisionObjectCount = CSpeedTreeRT__GetCollisionObjectCount(speedTree);// 2026-05-21 73000 safety pass: stock path calls GetNumCollisionObjects(speedTree) here; zero count returns before Havok shape work. /*0x565569*/
    if ( CollisionObjectCount ) /*0x56556d*/
    {
      v5 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 0xA4); /*0x56557e*/
      v39 = unk_B39E18 * scale; /*0x565586*/
      v40 = (NiAVObject *)v5(this); /*0x565593*/
      OB_bhkShapePhantomCinfo_InitIdentity_010201A0(&v52); /*0x565597*/
      v6 = 0; /*0x56559c*/
      v58 = 0; /*0x5655a1*/
      if ( CollisionObjectCount != 1 ) /*0x5655a8*/
      {
        v56.m128_u64[0] = 0; /*0x565902*/
        v56.m128_u64[1] = 0x8000000000000000uLL; /*0x565910*/
        LOBYTE(v58) = 6; /*0x565924*/
        do /*0x565a44*/
        {
          CSpeedTreeRT__GetCollisionObject(speedTree, v6, &typeOut, &dimOut, &posOut);// 2026-05-21 73000 safety pass: multi-collision loop calls GetCollisionObject per index and uses stock type/position/dimensions only. /*0x565944*/
          if ( typeOut ) /*0x56594e*/
          {
            PrintError("Multiple bounding volumes around a tree must all be spheres.");// 2026-05-21 73000 safety pass: stock multi-collision path refuses non-spheres with PrintError; do not treat retained 73000 rotations as a way to support multi boxes/capsules here. /*0x565a37*/
          }
          else
          {
            v20 = hkFactor; /*0x565974*/
            v31 = dimOut * v20; /*0x565976*/
            dimOut = v31 * v39; /*0x565988*/
            v31 = v33 * v20; /*0x565992*/
            v33 = v31 * v39; /*0x56599c*/
            v31 = v34 * v20; /*0x5659a6*/
            v34 = v31 * v39; /*0x5659b0*/
            v31 = v20 * posOut; /*0x5659bc*/
            posOut = v39 * v31; /*0x5659c4*/
            v57.m128_f32[0] = dimOut; /*0x5659cc*/
            v57.m128_f32[1] = v33; /*0x5659d7*/
            v57.m128_f32[2] = v34; /*0x5659e2*/
            v57.m128_f32[3] = posOut; /*0x5659ed*/
            if ( v56.m128_i32[2] == (v56.m128_i32[3] & 0x3FFFFFFF) ) /*0x5659f4*/
              sub_8A6EE0((const void **)&v56.m128_i32[1], 0x10); /*0x565a00*/
            v21 = (__m128 *)(v56.m128_i32[1] + 0x10 * v56.m128_i32[2]++); /*0x565a1c*/
            *v21 = v57; /*0x565a2d*/
          }
          ++v6; /*0x565a3f*/
        }
        while ( v6 < CollisionObjectCount ); /*0x565a44*/
        v22 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x565a4c*/
        v31 = *(float *)&v22; /*0x565a54*/
        LOBYTE(v58) = 7; /*0x565a5a*/
        if ( v22 && (v23 = OB_bhkMultiSphereShape_CtorFromSphereVector_010201A0(v22, (int)&v56)) != 0 )// 2026-05-21 73000 safety pass: stock multi-sphere constructor consumes packed {x,y,z,radius} entries. Rotation sidecars are a no-op for this branch. /*0x565a75*/
          hkObject = v23->hkObject; /*0x565a7a*/
        else
          hkObject = 0; /*0x565a83*/
        LOBYTE(v58) = 0; /*0x565a97*/
        if ( v56.m128_i32[3] >= 0 ) /*0x565a9f*/
        {
          v24 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x565ab1*/
          if ( !v24 ) /*0x565ab9*/
            v24 = unk_BA7D9C; /*0x565abb*/
          sub_8A75D0(v24, (_DWORD *)v56.m128_i32[1], 0x10 * v56.m128_i32[3], 0x14); /*0x565ad4*/
        }
        goto LABEL_49; /*0x565ad4*/
      }
      CSpeedTreeRT__GetCollisionObject(speedTree, 0, &typeOut, &posOut, &dimOut);// 2026-05-21 73000 safety pass: single-collision path calls GetCollisionObject(speedTree,1,0,&type,&pos,&dim). Returned stock fields are type/position/dimensions only; no rotation ABI observed. /*0x5655c0*/
      v7 = hkFactor; /*0x5655d7*/
      v31 = posOut * v7; /*0x5655d9*/
      posOut = v31 * v39; /*0x5655eb*/
      v31 = v36 * v7; /*0x5655f5*/
      v36 = v31 * v39; /*0x5655ff*/
      v31 = v37 * v7; /*0x565609*/
      v37 = v31 * v39; /*0x565613*/
      v31 = dimOut * v7; /*0x56561d*/
      dimOut = v31 * v39; /*0x565627*/
      v31 = v33 * v7; /*0x565631*/
      v33 = v31 * v39; /*0x56563b*/
      v31 = v7 * v34; /*0x565647*/
      v34 = v39 * v31; /*0x56564f*/
      switch ( typeOut ) /*0x565653*/
      {                                         // 2026-05-21 73000 safety pass: single-collision branch dispatch by stock type. Functional rotation hook is not validated; first probe should log type/count/sidecar index and preserve stock fallback.
        case 0: /*0x565653*/
          OB_bhkTransformShapeCinfo_InitIdentity_010201A0(&v41);// 2026-05-21 73000 safety pass: single sphere initializes transform-shape cinfo. Candidate rotation point would be after identity init and before transform-shape construction, but keep log-only until validated. /*0x565827*/
          v57.m128_f32[0] = posOut; /*0x565830*/
          v57.m128_f32[1] = v36; /*0x565843*/
          v57.m128_f32[2] = v37; /*0x565855*/
          v57.m128_f32[3] = 0.0; /*0x56585e*/
          sub_47DCD0(v51, &v57); /*0x565865*/
          v16 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x56586c*/
          v31 = *(float *)&v16; /*0x565874*/
          LOBYTE(v58) = 1; /*0x56587a*/
          if ( v16 ) /*0x565882*/
            v17 = bhkSphereShape_CtorRadius(v16, dimOut, 0.0); /*0x56588f*/
          else
            v17 = 0; /*0x565896*/
          LOBYTE(v58) = 0; /*0x56589a*/
          if ( v17 ) /*0x5658a2*/
            v42 = *(float *)&v17->hkObject; /*0x5658a7*/
          else
            v42 = 0.0; /*0x5658ad*/
          v18 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x5658b3*/
          v31 = *(float *)&v18; /*0x5658bb*/
          LOBYTE(v58) = 2; /*0x5658c1*/
          if ( v18 ) /*0x5658c9*/
            v19 = OB_bhkTransformShape_CtorFromCinfo_010201A0(v18, (int)&v41);// 2026-05-21 73000 safety pass: single sphere bhkTransformShape construction consumes cinfo child pointer and matrix after translation is written. /*0x5658d2*/
          else
            v19 = 0; /*0x5658d9*/
          LOBYTE(v58) = 0; /*0x5658dd*/
          if ( v19 ) /*0x5658e5*/
          {
            hkObject = v19->hkObject; /*0x5658ea*/
            goto LABEL_49; /*0x5658f1*/
          }
          goto LABEL_33; /*0x5658e5*/
        case 1: /*0x565653*/
          OB_bhkCapsuleShapeCinfo_InitDefaults_010201A0(&v41);// 2026-05-21 73000 safety pass: single capsule initializes capsule cinfo and stock fills +Z/up-axis endpoints. Rotation would require endpoint rotation or a replacement wrapper; no production hook yet. /*0x565793*/
          v31 = dimOut + v37; /*0x5657aa*/
          v43 = posOut; /*0x5657b2*/
          v44 = v36; /*0x5657ba*/
          v45 = v31; /*0x5657c2*/
          v46 = 0.0; /*0x5657c8*/
          v31 = v37 + v33 - dimOut; /*0x5657d8*/
          v47 = posOut; /*0x5657de*/
          v48 = v36; /*0x5657e2*/
          v49 = v31; /*0x5657ea*/
          v50 = 0.0; /*0x5657ee*/
          v42 = dimOut; /*0x5657f2*/
          v15 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x5657f6*/
          v31 = *(float *)&v15; /*0x5657fe*/
          LOBYTE(v58) = 3; /*0x565804*/
          if ( v15 ) /*0x56580c*/
          {
            v14 = OB_bhkCapsuleShape_CtorFromCinfo_010201A0(v15, (int)&v41);// 2026-05-21 73000 safety pass: single capsule constructor consumes radius/endpoints directly; there is no stock transform wrapper on this branch. /*0x565819*/
LABEL_18:
            LOBYTE(v58) = 0; /*0x565770*/
            if ( v14 ) /*0x56577a*/
            {
              hkObject = v14->hkObject; /*0x565783*/
              goto LABEL_49; /*0x56578a*/
            }
LABEL_33:
            hkObject = 0; /*0x5658f6*/
            goto LABEL_49; /*0x5658fd*/
          }
          break;
        case 2: /*0x565653*/
          OB_bhkTransformShapeCinfo_InitIdentity_010201A0(&v41);// 2026-05-21 73000 safety pass: single box initializes transform-shape cinfo. Candidate rotation point would be after identity init and before transform-shape construction, but matrix order needs runtime validation. /*0x56566d*/
          v8 = dbl_A2FAA0; /*0x565672*/
          for ( i = 0; i < 3; *(&v31 + i) = v10 * v8 ) /*0x565678*/
            v10 = *(&dimOut + i++); /*0x56567a*/
          v31 = v34 + v37; /*0x5656a7*/
          v56.m128_f32[0] = posOut; /*0x5656af*/
          v56.m128_f32[1] = v36; /*0x5656ba*/
          v56.m128_f32[2] = v31; /*0x5656c5*/
          v56.m128_f32[3] = 0.0; /*0x5656ce*/
          v57.m128_f32[0] = dimOut; /*0x5656d9*/
          v57.m128_f32[1] = v33; /*0x5656e4*/
          v57.m128_f32[2] = v34; /*0x5656ed*/
          v57.m128_f32[3] = 0.0; /*0x5656f4*/
          sub_47DCD0(v51, &v56); /*0x5656fb*/
          v11 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x565702*/
          v31 = *(float *)&v11; /*0x56570a*/
          LOBYTE(v58) = 4; /*0x565710*/
          if ( v11 ) /*0x565718*/
            v12 = OB_bhkBoxShape_CtorHalfExtents_010201A0(v11, &v57);// 2026-05-21 73000 safety pass: single box child shape is built from half extents before wrapping in bhkTransformShape. /*0x565724*/
          else
            v12 = 0; /*0x56572b*/
          LOBYTE(v58) = 0; /*0x56572f*/
          if ( v12 ) /*0x565737*/
            v42 = *(float *)&v12->hkObject; /*0x56573c*/
          else
            v42 = 0.0; /*0x565742*/
          v13 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x565748*/
          v31 = *(float *)&v13; /*0x565750*/
          LOBYTE(v58) = 5; /*0x565756*/
          if ( v13 ) /*0x56575e*/
          {
            v14 = OB_bhkTransformShape_CtorFromCinfo_010201A0(v13, (int)&v41);// 2026-05-21 73000 safety pass: single box bhkTransformShape construction consumes cinfo child pointer and 4x4 matrix. Do not ship sidecar rotation until matrix basis/order is logged/tested. /*0x565767*/
            goto LABEL_18; /*0x56576c*/
          }
          break;
        default:
LABEL_49:
          v52 = 0x40009;                        // 2026-05-21 73000 safety pass: final phantom cinfo setup begins after a stock shape pointer is selected. Shape-level rotation, if ever enabled, should be applied before this wrapper unless separately proven. /*0x565adb*/
          v25 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x565ae8*/
          v31 = *(float *)&v25; /*0x565af0*/
          LOBYTE(v58) = 8; /*0x565af6*/
          if ( v25 ) /*0x565afe*/
            v26 = OB_bhkSimpleShapePhantom_CtorFromCinfo_010201A0(v25, (int)&v52);// 2026-05-21 73000 safety pass: simple-shape phantom constructor wraps the selected stock Havok shape; no sidecar rotation is consumed by stock code. /*0x565b0f*/
          else
            v26 = 0; /*0x565b13*/
          LOBYTE(v58) = 0; /*0x565b17*/
          v27 = (NiObject *)FormHeapAlloc(0x14u); /*0x565b1f*/
          v28 = v27; /*0x565b24*/
          v31 = *(float *)&v27; /*0x565b29*/
          LOBYTE(v58) = 9; /*0x565b2f*/
          if ( v27 ) /*0x565b37*/
          {
            sub_897640(v27, v40); /*0x565b40*/
            v28->__vftable = (NiObjectVtbl *)&bhkSPCollisionObject::`vftable'; /*0x565b45*/
            v29 = (Ni2DBuffer **)v28; /*0x565b4b*/
          }
          else
          {
            v29 = 0; /*0x565b4f*/
          }
          LOBYTE(v58) = 0; /*0x565b52*/
          sub_897670(v29, (Ni2DBuffer *)v26);   // 2026-05-21 73000 safety pass: final collision object is attached to the target NiAVObject. A wrong earlier hook would manifest here as missing, misoriented, or invalid collision. /*0x565b5a*/
          v58 = 0xFFFFFFFF; /*0x565b68*/
          if ( v55 >= 0 ) /*0x565b73*/
          {
            v30 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x565b85*/
            if ( !v30 ) /*0x565b8d*/
              v30 = unk_BA7D9C; /*0x565b8f*/
            sub_8A75D0(v30, v54, 8 * v55, 0x14); /*0x565bab*/
          }
          return; /*0x565bab*/
      }
      v14 = 0; /*0x56576e*/
      goto LABEL_18; /*0x56576e*/
    }
  }
}
