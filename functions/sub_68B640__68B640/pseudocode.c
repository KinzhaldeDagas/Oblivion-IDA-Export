void __userpurge sub_68B640(int *a1@<ecx>, double st6_0@<st1>, double a3@<st0>, TESChildCELL *a4, float a5)
{
  _DWORD *v6; // eax
  bool v7; // zf
  TESWorldSpace *WorldSpace; // edi
  double v9; // st5
  double v10; // st7
  int (__thiscall *v11)(TESChildCELL *); // eax
  int v12; // eax
  TESWorldSpace *v13; // ebx
  TESObjectREFR *LinkedDoor; // edi
  char *Head; // eax
  TESWorldSpace *CurrentWorldspace; // eax
  TESObjectREFR *v17; // eax
  double v18; // st7
  const char *v19; // eax
  const char *v20; // eax
  float *v21; // eax
  char *v22; // ebp
  const char *v23; // eax
  float *v24; // eax
  void (__thiscall **vtbl)(TESChildCELL *, _DWORD); // ebp
  const char *v26; // eax
  const char *v27; // eax
  TESObjectREFR *v28; // ebp
  UInt32 DwordAtOffset40; // eax
  TESObjectCELL *v30; // edi
  TESObjectCELL **v31; // eax
  TESObjectCELL **v32; // eax
  double v33; // [esp+4h] [ebp-19Ch]
  double v34; // [esp+Ch] [ebp-194h]
  double a2_4; // [esp+14h] [ebp-18Ch]
  float radians; // [esp+1Ch] [ebp-184h]
  float radiansa; // [esp+1Ch] [ebp-184h]
  const char *radiansb; // [esp+1Ch] [ebp-184h]
  float v39; // [esp+30h] [ebp-170h]
  float v40; // [esp+30h] [ebp-170h]
  float v41; // [esp+30h] [ebp-170h]
  float v42; // [esp+30h] [ebp-170h]
  float v43; // [esp+30h] [ebp-170h]
  char v44; // [esp+36h] [ebp-16Ah]
  bool v45; // [esp+37h] [ebp-169h]
  int a2; // [esp+38h] [ebp-168h] BYREF
  float v47; // [esp+3Ch] [ebp-164h]
  float v48; // [esp+40h] [ebp-160h]
  float v49; // [esp+44h] [ebp-15Ch]
  float v50; // [esp+48h] [ebp-158h]
  NiPoint3 v51; // [esp+4Ch] [ebp-154h] BYREF
  float v52; // [esp+58h] [ebp-148h]
  float v53; // [esp+5Ch] [ebp-144h]
  int v54; // [esp+60h] [ebp-140h] BYREF
  float v55; // [esp+64h] [ebp-13Ch]
  float v56; // [esp+68h] [ebp-138h]
  int v57; // [esp+6Ch] [ebp-134h] BYREF
  float v58; // [esp+70h] [ebp-130h]
  float v59; // [esp+74h] [ebp-12Ch]
  int v60; // [esp+78h] [ebp-128h]
  float v61; // [esp+7Ch] [ebp-124h]
  NiPoint3 v62; // [esp+80h] [ebp-120h]
  int v63; // [esp+8Ch] [ebp-114h] BYREF
  float v64; // [esp+90h] [ebp-110h]
  float v65; // [esp+94h] [ebp-10Ch]
  char Format[260]; // [esp+98h] [ebp-108h] BYREF

  if ( a4 ) /*0x68b663*/
  {
    if ( a5 > 0.0 && IsWeaponReady(a4) ) /*0x68b67f*/
    {
      if ( !(*((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0xE0))(a4) /*0x68b6aa*/
        || (v6 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0xE0))(a4), IsWeaponReady(v6)) )
      {
        if ( Shared_GetDwordAtOffset40(a4) ) /*0x68b6b9*/
        {
          v7 = MEMORY[0xB333A0]->currentInteriorCell == 0; /*0x68b6df*/
          v60 = 0; /*0x68b6e3*/
          v45 = 0; /*0x68b6eb*/
          if ( v7 ) /*0x68b6f0*/
          {
            WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a4); /*0x68b6ff*/
            v45 = WorldSpace == TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x68b70a*/
          }
          v53 = 0.0; /*0x68b713*/
          v44 = 0; /*0x68b717*/
          v9 = sub_5E65B0((TESObjectREFR *)a4); // High-path movement uses sub_5E65B0(actor) as segment speed; direction bits are not required for the speed selector's walk fallback. /*0x68b71c*/
          v61 = a3; /*0x68b721*/
          v10 = a5; /*0x68b727*/
          v11 = *((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0x5D); /*0x68b72e*/
          v50 = a5; /*0x68b734*/
          v12 = v11(a4); /*0x68b73a*/
          a2 = *(int *)v12; /*0x68b73e*/
          v47 = *(float *)(v12 + 4); /*0x68b745*/
          v13 = (TESWorldSpace *)(a1 + 5); /*0x68b74c*/
          v48 = *(float *)(v12 + 8); /*0x68b751*/
          LinkedDoor = TeleportData_GetLinkedDoor((TeleportData *)(a1 + 5)); /*0x68b75a*/
          while ( LinkedDoor ) /*0x68b762*/
          {
            v44 = sub_68CA20(LinkedDoor); /*0x68b771*/
            Head = EmbeddedList_GetHead((char *)LinkedDoor); /*0x68b775*/
            v57 = *(int *)Head; /*0x68b781*/
            v58 = *((float *)Head + 1); /*0x68b788*/
            v59 = *((float *)Head + 2); /*0x68b78f*/
            if ( v45 ) /*0x68b793*/
            {
              if ( sub_43F7C0((int *)MEMORY[0xB333A0], (float *)&a2, (float *)&v57, (float *)&v63, flt_A427E4) ) /*0x68b7b4*/
              {
                CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x68b7c5*/
                v60 = (int)sub_44A270((TESWorldSpace **)g_TESDataHandler, *(float *)&v63, v64, CurrentWorldspace, 0); /*0x68b7f0*/
                v57 = v63; /*0x68b7f8*/
                v58 = v64; /*0x68b7fc*/
                v59 = v65; /*0x68b800*/
              }
            }
            v51.x = *(float *)&a2 - *(float *)&v57; /*0x68b80c*/
            v51.y = v47 - v58; /*0x68b818*/
            v51.z = v48 - v59; /*0x68b824*/
            v49 = v51.y * v51.y + v51.x * v51.x + v51.z * v51.z; /*0x68b844*/
            v49 = sqrt(v49); /*0x68b851*/
            v39 = v49 / v61; /*0x68b867*/
            st6_0 = v50; /*0x68b86b*/
            v9 = v39; /*0x68b86f*/
            if ( v39 > (double)v50 ) /*0x68b87a*/
            {
              if ( MEMORY[0xB333B4] == a4 ) /*0x68ba61*/
              {
                v23 = (const char *)(*((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0x35))(a4); /*0x68ba6d*/
                _sprintf(Format, "Actor '%s' placed along segment.", v23); /*0x68ba7a*/
                Interface_ConsolePrint(Format); /*0x68ba87*/
              }
              v43 = v50; /*0x68ba95*/
              v50 = 0.0; /*0x68ba9b*/
              v24 = (float *)EmbeddedList_GetHead((char *)LinkedDoor); /*0x68ba9f*/
              v49 = v24[1] - v47; /*0x68baaf*/
              v52 = v24[2] - v48; /*0x68baba*/
              v51.x = *v24 - *(float *)&a2; /*0x68bac4*/
              v51.y = v49; /*0x68bacc*/
              v51.z = v52; /*0x68bad4*/
              Vector3_NormalizeInPlace(&v51.x); /*0x68bad8*/
              *(float *)&v54 = v51.x * v61; /*0x68baed*/
              v55 = v51.y * v61; /*0x68baf7*/
              v56 = v61 * v51.z; /*0x68baff*/
              v62.x = *(float *)&v54 * v43; /*0x68bb11*/
              v62.y = v55 * v43; /*0x68bb23*/
              v62.z = v43 * v56; /*0x68bb33*/
              v51 = v62; /*0x68bb3f*/
              *(float *)&v54 = v62.x + *(float *)&a2; /*0x68bb49*/
              a2 = v54; /*0x68bb55*/
              v55 = v62.y + v47; /*0x68bb5f*/
              v47 = v55; /*0x68bb6b*/
              v56 = v62.z + v48; /*0x68bb75*/
              v48 = v56; /*0x68bb7f*/
              v9 = v62.y * v62.y; /*0x68bb89*/
              st6_0 = v62.z * v62.z; /*0x68bb8d*/
              v52 = v62.x * v62.x + v9 + st6_0; /*0x68bb91*/
              v52 = sqrt(v52); /*0x68bb9e*/
              vtbl = (void (__thiscall **)(TESChildCELL *, _DWORD))a4->vtbl; /*0x68bbaa*/
              v53 = v52 + v53; /*0x68bbb1*/
              v10 = Vector3_CalculateHeadingRadiansXY(&v51.x); /*0x68bbbb*/
              radiansa = v10; /*0x68bbc0*/
              vtbl[0x7A](a4, LODWORD(radiansa)); /*0x68bbc8*/
              break; /*0x68bbc8*/
            }
            v53 = v49 + v53; /*0x68b895*/
            a2 = v57; /*0x68b899*/
            v47 = v58; /*0x68b89d*/
            v48 = v59; /*0x68b8a1*/
            if ( v60 ) /*0x68b8a5*/
            {
              if ( MEMORY[0xB333B4] == a4 ) /*0x68b9cd*/
              {
                v20 = (const char *)(*((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0x35))(a4); /*0x68b9d9*/
                _sprintf(Format, "Actor '%s' placed at edge of world.", v20); /*0x68b9e6*/
                Interface_ConsolePrint(Format); /*0x68b9f3*/
              }
              v50 = 0.0; /*0x68b9ff*/
              v21 = (float *)EmbeddedList_GetHead((char *)LinkedDoor); /*0x68ba03*/
              v22 = (char *)a4->vtbl + 0x1E8; /*0x68ba16*/
              v49 = v21[1] - v47; /*0x68ba1c*/
              v42 = v21[2] - v48; /*0x68ba27*/
              *(float *)&v54 = *v21 - *(float *)&a2; /*0x68ba31*/
              v55 = v49; /*0x68ba39*/
              v56 = v42; /*0x68ba41*/
              v10 = Vector3_CalculateHeadingRadiansXY((float *)&v54); /*0x68ba45*/
              radians = v10; /*0x68ba4d*/
              (*(void (__thiscall **)(TESChildCELL *, _DWORD))v22)(a4, LODWORD(radians)); /*0x68ba52*/
              break; /*0x68ba54*/
            }
            sub_68C170((NiSurfaceData **)a1 + 5, (NiDX92DBufferData *)LinkedDoor); /*0x68b8ae*/
            v17 = TeleportData_GetLinkedDoor((TeleportData *)(a1 + 5)); /*0x68b8b5*/
            v18 = v50 - v39; /*0x68b8be*/
            LinkedDoor = v17; /*0x68b8c2*/
            v50 = v18; /*0x68b8c6*/
            if ( !v17 ) /*0x68b8ca*/
            {
              if ( MEMORY[0xB333B4] == a4 ) /*0x68b8d6*/
              {
                v19 = (const char *)(*((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0x35))(a4); /*0x68b8e2*/
                _sprintf(Format, "Actor '%s' completed high path.", v19); /*0x68b8ef*/
                Interface_ConsolePrint(Format); /*0x68b8fc*/
              }
              sub_68B4F0(a1, v9, v18, (float ***)a4); /*0x68b907*/
              LinkedDoor = TeleportData_GetLinkedDoor((TeleportData *)(a1 + 5)); /*0x68b913*/
              if ( !LinkedDoor && sub_68A140(a1) ) /*0x68b91f*/
              {
                v40 = sub_6899D0((float *)a1); /*0x68b933*/
                st6_0 = v40; /*0x68b939*/
                if ( v40 > 0.0 ) /*0x68b946*/
                {
                  v41 = v40 - dbl_A2FC80; /*0x68b94e*/
                  st6_0 = v49; /*0x68b956*/
                  if ( v49 < (double)v41 ) /*0x68b963*/
                    v41 = v49; /*0x68b965*/
                  Vector3_NormalizeInPlace(&v51.x); /*0x68b971*/
                  NiPoint3::MutliplyByValue(&v51, v41); /*0x68b984*/
                  *(float *)&a2 = v51.x + *(float *)&a2; /*0x68b991*/
                  v47 = v51.y + v47; /*0x68b99d*/
                  v48 = v51.z + v48; /*0x68b9a9*/
                }
              }
            }
            v10 = 0.0; /*0x68b9b1*/
            if ( 0.0 == v50 ) /*0x68b9bc*/
              break; /*0x68b9bc*/
          }
          if ( MEMORY[0xB333B4] == a4 ) /*0x68bbd0*/
          {
            v7 = TeleportData_GetLinkedDoor((TeleportData *)v13) == 0; /*0x68bbd9*/
            v26 = "INCOMPLETE"; /*0x68bbdb*/
            if ( v7 ) /*0x68bbe0*/
              v26 = "COMPLETE"; /*0x68bbe2*/
            v10 = v61; /*0x68bc08*/
            v27 = (const char *)(*((int (__thiscall **)(TESChildCELL *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, const char *))a4->vtbl /*0x68bc0f*/
                                 + 0x35))(
                                  a4,
                                  COERCE_UNSIGNED_INT64(v61),
                                  HIDWORD(COERCE_UNSIGNED_INT64(v61)),
                                  COERCE_UNSIGNED_INT64(v53),
                                  HIDWORD(COERCE_UNSIGNED_INT64(v53)),
                                  COERCE_UNSIGNED_INT64(a5),
                                  HIDWORD(COERCE_UNSIGNED_INT64(a5)),
                                  v26);
            _sprintf( /*0x68bc1f*/
              Format,
              "Actor '%s' with speed %.2f pathed in MiddleHigh %.2f units in delta %.2f. (%s)",
              v27,
              v33,
              v34,
              a2_4,
              radiansb);
            Interface_ConsolePrint(Format); /*0x68bc2c*/
          }
          TESObjectREFR_SetPosition((TESObjectREFR *)a4, *(float *)&a2, v47, v48); /*0x68bc4f*/
          v28 = (TESObjectREFR *)(*((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0xE0))(a4); /*0x68bc60*/
          if ( v28 ) /*0x68bc64*/
            TESObjectREFR_SetPosition(v28, *(float *)&a2, v47, v48); /*0x68bc81*/
          if ( !v44 /*0x68bca3*/
            || (v13 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a4),
                v13 != TES::GetCurrentWorldspace(MEMORY[0xB333A0])) )
          {
            v9 = flt_A32048; /*0x68bca5*/
            TESObjectREFR_SetRotationX((TESObjectREFR *)a4, flt_A32048); /*0x68bcb1*/
            if ( v28 ) /*0x68bcb8*/
            {
              v9 = flt_A32048; /*0x68bcba*/
              TESObjectREFR_SetRotationX(v28, flt_A32048); /*0x68bcc6*/
            }
          }
          if ( !LinkedDoor ) /*0x68bccd*/
            (*((void (__thiscall **)(TESChildCELL *, int))a4->vtbl + 0x60))(a4, 1); /*0x68bcdb*/
          DwordAtOffset40 = Shared_GetDwordAtOffset40(a4); /*0x68bcdf*/
          v30 = (TESObjectCELL *)v57; /*0x68bce4*/
          if ( v57 != DwordAtOffset40 ) /*0x68bcea*/
          {
            if ( v28 ) /*0x68bcee*/
            {
              v31 = (TESObjectCELL **)TESObjectREFR_GetWorldSpace(v28); /*0x68bcf2*/
              sub_4DD4B0((int)v13, v9, st6_0, v10, (Actor *)v28, v30, v31); /*0x68bcfa*/
            }
            v32 = (TESObjectCELL **)TESObjectREFR_GetWorldSpace((TESObjectREFR *)a4); /*0x68bd04*/
            sub_4DD4B0((int)v13, v9, st6_0, v10, (Actor *)a4, v30, v32); /*0x68bd0c*/
          }
        }
        else
        {
          sub_68A300((const TravelPathNode **)a1, (TESObjectREFR *)a4, a5); /*0x68b6d0*/
        }
      }
    }
  }
}
