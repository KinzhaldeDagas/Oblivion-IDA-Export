BOOL __cdecl sub_4D5E30(
        TESObjectCELL *a2,
        float *arg4,
        float a3,
        float *a4,
        float a5,
        unsigned __int8 (__cdecl *a6)(TESObjectREFR *, int),
        int a7)
{
  TESObjectCELL *v7; // ebx
  float x; // eax
  float y; // ecx
  float z; // edx
  unsigned __int8 (__cdecl *v11)(TESObjectREFR *, int); // ebp
  NiPointerList_Node_BSImageSpaceShader *start; // edi
  double v13; // st7
  ObjectListEntry *p_objectList; // ebx
  TESObjectREFR *refr; // esi
  bool v16; // zf
  float *v17; // eax
  float *v18; // eax
  TeleportData *TeleportData; // eax
  TESObjectREFR **p_linkedDoor; // edi
  TESWorldSpace *LinkedDoorWorldspace; // ebp
  TESObjectCELL *v22; // eax
  double v23; // st6
  double DistanceToPoint; // st7
  double v25; // st7
  double v26; // st7
  char *Head; // eax
  _DWORD *v28; // ecx
  _DWORD *v29; // esi
  TESObjectREFR *data; // esi
  double v32; // st6
  double v33; // st7
  double v34; // st7
  double v35; // st7
  char *v36; // eax
  TESObjectREFR **v37; // esi
  TESObjectCELL *v38; // eax
  float *v39; // [esp-4h] [ebp-58h]
  float *v40; // [esp+4h] [ebp-50h]
  float v41; // [esp+8h] [ebp-4Ch]
  float *v42; // [esp+Ch] [ebp-48h]
  float *v43; // [esp+Ch] [ebp-48h]
  float v44; // [esp+10h] [ebp-44h]
  float v45; // [esp+10h] [ebp-44h]
  int v46; // [esp+10h] [ebp-44h]
  char v47; // [esp+2Bh] [ebp-29h]
  float v48; // [esp+2Ch] [ebp-28h]
  float v49; // [esp+2Ch] [ebp-28h]
  double v50; // [esp+30h] [ebp-24h] BYREF
  NiTPointerList__BSImageSpaceShader v51; // [esp+38h] [ebp-1Ch] BYREF

  v7 = a2; /*0x4d5e57*/
  if ( a2 ) /*0x4d5e5f*/
    sub_496EA0((char *)&unk_B35C80, a2); /*0x4d5e67*/
  if ( (unk_B35E48 & 1) == 0 ) /*0x4d5e73*/
  {
    unk_B35E48 |= 1u; /*0x4d5e75*/
    unk_B35E44 = 0; /*0x4d5e81*/
    unk_B35E3C = 0; /*0x4d5e87*/
    unk_B35E40 = 0; /*0x4d5e8d*/
    unk_B35E38 = (int)&NiTList<TESObjectCELL *>::`vftable'; /*0x4d5e93*/
    atexit(sub_A1BC20); /*0x4d5e9d*/
  }
  if ( (unk_B35E48 & 2) == 0 ) /*0x4d5eb0*/
    unk_B35E48 |= 2u; /*0x4d5eb2*/
  v47 = 0; /*0x4d5ebe*/
  if ( !LODWORD(flt_B35E2C[2]) ) /*0x4d5eb8*/
  {
    x = g_zeroNiPoint3.x; /*0x4d5ec5*/
    y = g_zeroNiPoint3.y; /*0x4d5ed0*/
    flt_B097B4 = flt_A32048; /*0x4d5ed6*/
    z = g_zeroNiPoint3.z; /*0x4d5edc*/
    *(float *)&unk_B35E28 = x; /*0x4d5ee2*/
    flt_B35E2C[0] = y; /*0x4d5ee7*/
    flt_B35E2C[1] = z; /*0x4d5eed*/
    unk_B35E24 = 0; /*0x4d5ef3*/
  }
  if ( v7 ) /*0x4d5efb*/
  {
    v11 = a6; /*0x4d5f01*/
    if ( a6 ) /*0x4d5f07*/
    {
      ++LODWORD(flt_B35E2C[2]); /*0x4d5f0d*/
      NiTPointerList__AddTail((BSTextureManager *)&unk_B35E38, (void **)&a2); /*0x4d5f1e*/
      start = 0; /*0x4d5f23*/
      memset(&v51.start, 0, 0xC); /*0x4d5f29*/
      v51.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTList<TESObjectREFR *>::`vftable'; /*0x4d5f31*/
      v13 = a3; /*0x4d5f39*/
      p_objectList = &v7->members.objectList; /*0x4d5f3d*/
      v51.unk18 = 0; /*0x4d5f42*/
      if ( p_objectList ) /*0x4d5f46*/
      {
        do /*0x4d61c0*/
        {
          if ( v47 ) /*0x4d5f55*/
            break; /*0x4d5f55*/
          refr = p_objectList->refr; /*0x4d5f5b*/
          v16 = p_objectList->refr == 0; /*0x4d5f5d*/
          p_objectList = p_objectList->next; /*0x4d5f5f*/
          LODWORD(v50) = refr; /*0x4d5f62*/
          if ( !v16 ) /*0x4d5f66*/
          {
            if ( v13 == dbl_A3A5B0 /*0x4d5f99*/
              || (v44 = v13, v42 = arg4, v17 = refr->vtbl->GetPos(refr), sub_480520(v17, v42, v44) < 0) )
            {
              if ( a5 == dbl_A3A5B0 /*0x4d5ff7*/
                || a3 == a5 && sub_8AA350(arg4, a4)
                || (v45 = a5, v43 = a4, v18 = refr->vtbl->GetPos(refr), sub_480520(v18, v43, v45) < 0) )
              {
                if ( v11(refr, a7) ) /*0x4d6007*/
                  v47 = 1; /*0x4d6010*/
                if ( refr->vtbl->GetBaseForm(refr)->member.type == kFormType_Door /*0x4d603d*/
                  && refr->vtbl->GetBaseForm(refr) != (TESForm *)MEMORY[0xB35EBC] )
                {
                  TeleportData = TESObjectREFR_GetTeleportData(refr); /*0x4d6045*/
                  p_linkedDoor = &TeleportData->linkedDoor; /*0x4d604a*/
                  if ( TeleportData ) /*0x4d604e*/
                  {
                    LinkedDoorWorldspace = TeleportData_GetLinkedDoorWorldspace(&TeleportData->linkedDoor); /*0x4d605d*/
                    v22 = sub_42B460(p_linkedDoor); /*0x4d605f*/
                    if ( v22 ) /*0x4d6066*/
                    {
                      if ( (v22->members.flags0 & 1) == 0 ) /*0x4d606c*/
                        v22 = 0; /*0x4d606e*/
                    }
                    if ( LinkedDoorWorldspace ) /*0x4d6072*/
                    {
                      v48 = flt_A32048; /*0x4d607e*/
                      v23 = dbl_A3A5B0; /*0x4d6092*/
                      if ( v23 == a3 /*0x4d60c4*/
                        || (v50 = a3,
                            DistanceToPoint = TESObjectREFR::GetDistanceToPoint(refr, arg4),
                            *(float *)&v50 = v50 - DistanceToPoint,
                            v23 = dbl_A3A5B0,
                            v23 <= *(float *)&v50) )
                      {
                        v25 = v23; /*0x4d60ce*/
                      }
                      else
                      {
                        v25 = v23; /*0x4d60c6*/
                        v48 = *(float *)&v50; /*0x4d60c8*/
                      }
                      if ( a5 != v25 && a3 != a5 ) /*0x4d60ee*/
                      {
                        v50 = a5; /*0x4d60f4*/
                        v26 = TESObjectREFR::GetDistanceToPoint(refr, a4); /*0x4d60fb*/
                        *(float *)&v50 = v50 - v26; /*0x4d6104*/
                        if ( v48 > (double)*(float *)&v50 ) /*0x4d6117*/
                          v48 = *(float *)&v50; /*0x4d6119*/
                      }
                      if ( !unk_B35E24 || flt_B097B4 < (double)v48 ) /*0x4d613b*/
                      {
                        flt_B097B4 = v48; /*0x4d6143*/
                        Head = EmbeddedList_GetHead((char *)p_linkedDoor); /*0x4d6149*/
                        LODWORD(unk_B35E28) = *(_DWORD *)Head; /*0x4d6150*/
                        flt_B35E2C[0] = *((float *)Head + 1); /*0x4d6159*/
                        flt_B35E2C[1] = *((float *)Head + 2); /*0x4d6162*/
                        unk_B35E24 = (int)LinkedDoorWorldspace; /*0x4d6167*/
                      }
                    }
                    else if ( v22 ) /*0x4d6171*/
                    {
                      v28 = (_DWORD *)unk_B35E3C; /*0x4d6173*/
                      if ( !unk_B35E3C ) /*0x4d6173*/
                        goto LABEL_46; /*0x4d6173*/
                      while ( 1 ) /*0x4d6180*/
                      {
                        v16 = v22 == (TESObjectCELL *)v28[2]; /*0x4d6180*/
                        v29 = v28; /*0x4d6186*/
                        v28 = (_DWORD *)*v28; /*0x4d6188*/
                        if ( v16 ) /*0x4d618a*/
                          break; /*0x4d618a*/
                        if ( !v28 ) /*0x4d618e*/
                          goto LABEL_46; /*0x4d618e*/
                      }
                      if ( !v29 ) /*0x4d61a2*/
LABEL_46:
                        NiTPointerList__AddTail((BSTextureManager *)&v51, (void **)&v50); /*0x4d61a4*/
                    }
                  }
                }
              }
            }
          }
          v13 = a3; /*0x4d61b8*/
          v11 = a6; /*0x4d61bc*/
        }
        while ( p_objectList ); /*0x4d61c0*/
        start = v51.start; /*0x4d61c6*/
      }
      if ( start ) /*0x4d61ce*/
      {
        while ( !v47 ) /*0x4d6289*/
        {
          data = (TESObjectREFR *)start->data; /*0x4d628f*/
          start = start->next; /*0x4d6297*/
          if ( data ) /*0x4d6299*/
          {
            v49 = flt_A32048; /*0x4d62a5*/
            v32 = dbl_A3A5B0; /*0x4d62b5*/
            if ( v32 == v13 /*0x4d62e7*/
              || (v50 = v13,
                  v33 = TESObjectREFR::GetDistanceToPoint(data, arg4),
                  *(float *)&v50 = v50 - v33,
                  v32 = dbl_A3A5B0,
                  v32 <= *(float *)&v50) )
            {
              v34 = v32; /*0x4d62f1*/
            }
            else
            {
              v34 = v32; /*0x4d62e9*/
              v49 = *(float *)&v50; /*0x4d62eb*/
            }
            if ( a5 != v34 && a3 != a5 ) /*0x4d6311*/
            {
              v50 = a5; /*0x4d6317*/
              v35 = TESObjectREFR::GetDistanceToPoint(data, a4); /*0x4d631e*/
              *(float *)&v50 = v50 - v35; /*0x4d6327*/
              if ( v49 > (double)*(float *)&v50 ) /*0x4d633a*/
                v49 = *(float *)&v50; /*0x4d633c*/
            }
            v36 = (char *)TESObjectREFR_GetTeleportData(data); /*0x4d6346*/
            v46 = a7; /*0x4d6359*/
            v41 = flt_A32048; /*0x4d635c*/
            v40 = a4; /*0x4d635f*/
            v37 = (TESObjectREFR **)v36; /*0x4d6364*/
            v39 = (float *)EmbeddedList_GetHead(v36); /*0x4d6371*/
            v38 = sub_42B460(v37); /*0x4d6374*/
            if ( !sub_4D5E30(v38, v39, v49, v40, v41, v11, v46) ) /*0x4d637a*/
              v47 = 1; /*0x4d6386*/
          }
          if ( !start ) /*0x4d6391*/
            break; /*0x4d6391*/
          v13 = a3; /*0x4d6280*/
        }
      }
      --LODWORD(flt_B35E2C[2]); /*0x4d61d6*/
      v51.unk18 = (BSShader *)0xFFFFFFFF; /*0x4d61e1*/
      NiTList<TESObjectREFR *>::~NiTList<TESObjectREFR *>(&v51); /*0x4d61e9*/
      v7 = a2; /*0x4d61ee*/
    }
  }
  if ( !LODWORD(flt_B35E2C[2]) ) /*0x4d61f4*/
  {
    NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&unk_B35E38); /*0x4d6201*/
    if ( !v47 ) /*0x4d620b*/
    {
      if ( unk_B35E24 ) /*0x4d620d*/
      {
        sub_4F0750((_DWORD *)unk_B35E24, (float *)&unk_B35E28, flt_B097B4, a4, flt_A32048, a6, a7); /*0x4d623f*/
        v47 = 1; /*0x4d6244*/
      }
    }
  }
  if ( v7 ) /*0x4d624b*/
    sub_496F50(&unk_B35C80, v7); /*0x4d6253*/
  return v47 == 0; /*0x4d6261*/
}
