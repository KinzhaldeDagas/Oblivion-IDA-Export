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
  float v8; // eax
  int v9; // ecx
  int v10; // edx
  unsigned __int8 (__cdecl *v11)(TESObjectREFR *, int); // ebp
  NiPointerList_Node_BSImageSpaceShader *start; // edi
  double v13; // st7
  ObjectListEntry *p_objectList; // ebx
  float *refr; // esi
  bool v16; // zf
  float *v17; // eax
  float *v18; // eax
  TESObjectREFR **TeleportExtraData; // eax
  TESObjectREFR **v20; // edi
  TESWorldSpace *v21; // ebp
  TESObjectCELL *v22; // eax
  double v23; // st6
  double v24; // st7
  double v25; // st7
  double v26; // st7
  _DWORD *v27; // eax
  _DWORD *v28; // ecx
  _DWORD *v29; // esi
  float *data; // esi
  double v32; // st6
  double v33; // st7
  double v34; // st7
  double v35; // st7
  char *v36; // eax
  TESObjectREFR **v37; // esi
  TESObjectCELL *v38; // eax
  int v39; // [esp-4h] [ebp-58h]
  int v40; // [esp+4h] [ebp-50h]
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

  v7 = a2;
  if ( a2 )
    sub_496EA0((char *)&stru_B35C80, a2);
  if ( (dword_B35E48 & 1) == 0 )
  {
    dword_B35E48 |= 1u;
    dword_B35E44 = 0;
    dword_B35E3C = 0;
    dword_B35E40 = 0;
    dword_B35E38 = (int)&NiTList<TESObjectCELL *>::`vftable';
    atexit(sub_A1BC20);
  }
  if ( (dword_B35E48 & 2) == 0 )
    dword_B35E48 |= 2u;
  v47 = 0;
  if ( !dword_B35E34 )
  {
    v8 = Vector3_InitValue_;
    v9 = *((_DWORD *)&Vector3_InitValue_ + 1);
    flt_B097B4 = flt_A32048;
    v10 = LODWORD(dword_B3F9B0);
    *(float *)&qword_B35E28 = v8;
    HIDWORD(qword_B35E28) = v9;
    dword_B35E30 = v10;
    dword_B35E24 = 0;
  }
  if ( v7 )
  {
    v11 = a6;
    if ( a6 )
    {
      ++dword_B35E34;
      sub_5B1E20((BSTextureManager *)&dword_B35E38, (void **)&a2);
      start = 0;
      memset(&v51.start, 0, 0xC);
      v51.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTList<TESObjectREFR *>::`vftable';
      v13 = a3;
      p_objectList = &v7->members.objectList;
      v51.unk18 = 0;
      if ( p_objectList )
      {
        do
        {
          if ( v47 )
            break;
          refr = (float *)p_objectList->refr;
          v16 = p_objectList->refr == 0;
          p_objectList = p_objectList->next;
          LODWORD(v50) = refr;
          if ( !v16 )
          {
            if ( v13 == dbl_A3A5B0
              || (v44 = v13,
                  v42 = arg4,
                  v17 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)refr + 0x174))(refr),
                  sub_480520(v17, v42, v44) < 0) )
            {
              if ( a5 == dbl_A3A5B0
                || a3 == a5 && sub_8AA350(arg4, a4)
                || (v45 = a5,
                    v43 = a4,
                    v18 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)refr + 0x174))(refr),
                    sub_480520(v18, v43, v45) < 0) )
              {
                if ( v11((TESObjectREFR *)refr, a7) )
                  v47 = 1;
                if ( *(_BYTE *)((*(int (__thiscall **)(float *))(*(_DWORD *)refr + 0x170))(refr) + 4) == 0x18
                  && (*(int (__thiscall **)(float *))(*(_DWORD *)refr + 0x170))(refr) != TESDataHandler_g_PrisonMarker )
                {
                  TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(refr);
                  v20 = TeleportExtraData;
                  if ( TeleportExtraData )
                  {
                    v21 = sub_42B470(TeleportExtraData);
                    v22 = sub_42B460(v20);
                    if ( v22 )
                    {
                      if ( (v22->members.flags0 & 1) == 0 )
                        v22 = 0;
                    }
                    if ( v21 )
                    {
                      v48 = flt_A32048;
                      v23 = dbl_A3A5B0;
                      if ( v23 == a3
                        || (v50 = a3,
                            v24 = sub_4D7E30(refr, arg4),
                            *(float *)&v50 = v50 - v24,
                            v23 = dbl_A3A5B0,
                            v23 <= *(float *)&v50) )
                      {
                        v25 = v23;
                      }
                      else
                      {
                        v25 = v23;
                        v48 = *(float *)&v50;
                      }
                      if ( a5 != v25 && a3 != a5 )
                      {
                        v50 = a5;
                        v26 = sub_4D7E30(refr, a4);
                        *(float *)&v50 = v50 - v26;
                        if ( v48 > (double)*(float *)&v50 )
                          v48 = *(float *)&v50;
                      }
                      if ( !dword_B35E24 || flt_B097B4 < (double)v48 )
                      {
                        flt_B097B4 = v48;
                        v27 = (_DWORD *)sub_6899C0((char *)v20);
                        LODWORD(qword_B35E28) = *v27;
                        HIDWORD(qword_B35E28) = v27[1];
                        dword_B35E30 = v27[2];
                        dword_B35E24 = (int)v21;
                      }
                    }
                    else if ( v22 )
                    {
                      v28 = (_DWORD *)dword_B35E3C;
                      if ( !dword_B35E3C )
                        goto LABEL_46;
                      while ( 1 )
                      {
                        v16 = v22 == (TESObjectCELL *)v28[2];
                        v29 = v28;
                        v28 = (_DWORD *)*v28;
                        if ( v16 )
                          break;
                        if ( !v28 )
                          goto LABEL_46;
                      }
                      if ( !v29 )
LABEL_46:
                        sub_5B1E20((BSTextureManager *)&v51, (void **)&v50);
                    }
                  }
                }
              }
            }
          }
          v13 = a3;
          v11 = a6;
        }
        while ( p_objectList );
        start = v51.start;
      }
      if ( start )
      {
        while ( !v47 )
        {
          data = (float *)start->data;
          start = start->next;
          if ( data )
          {
            v49 = flt_A32048;
            v32 = dbl_A3A5B0;
            if ( v32 == v13
              || (v50 = v13,
                  v33 = sub_4D7E30(data, arg4),
                  *(float *)&v50 = v50 - v33,
                  v32 = dbl_A3A5B0,
                  v32 <= *(float *)&v50) )
            {
              v34 = v32;
            }
            else
            {
              v34 = v32;
              v49 = *(float *)&v50;
            }
            if ( a5 != v34 && a3 != a5 )
            {
              v50 = a5;
              v35 = sub_4D7E30(data, a4);
              *(float *)&v50 = v50 - v35;
              if ( v49 > (double)*(float *)&v50 )
                v49 = *(float *)&v50;
            }
            v36 = (char *)GetTeleportExtraData(data);
            v46 = a7;
            v41 = flt_A32048;
            v40 = (int)a4;
            v37 = (TESObjectREFR **)v36;
            v39 = sub_6899C0(v36);
            v38 = sub_42B460(v37);
            if ( !sub_4D5E30((int)v38, v39, v49, v40, v41, (int)v11, v46) )
              v47 = 1;
          }
          if ( !start )
            break;
          v13 = a3;
        }
      }
      --dword_B35E34;
      v51.unk18 = (BSShader *)0xFFFFFFFF;
      NiTList<TESObjectREFR *>::~NiTList<TESObjectREFR *>(&v51);
      v7 = a2;
    }
  }
  if ( !dword_B35E34 )
  {
    NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&dword_B35E38);
    if ( !v47 )
    {
      if ( dword_B35E24 )
      {
        sub_4F0750((_DWORD *)dword_B35E24, (float *)&qword_B35E28, flt_B097B4, a4, flt_A32048, a6, a7);
        v47 = 1;
      }
    }
  }
  if ( v7 )
    sub_496F50(&stru_B35C80, v7);
  return v47 == 0;
}
