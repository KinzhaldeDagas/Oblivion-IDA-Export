char __cdecl sub_515330(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a8)
{
  int v8; // eax
  double v9; // st7
  int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  _DWORD *v13; // edx
  _DWORD *v14; // esi
  UInt32 *v15; // eax
  NiPointerList_Node_BSImageSpaceShader *v16; // ecx
  int v17; // eax
  volatile LONG *v18; // esi
  NiRTTI *v19; // eax
  char v20; // al
  int v21; // ebx
  NiPointerList_Node_BSImageSpaceShader *start; // ebp
  NiGeometry *v23; // esi
  bool v24; // zf
  NiGeometry **p_data; // edi
  bool v26; // cc
  int v27; // esi
  NiPointerList_Node_BSImageSpaceShader *v28; // ebp
  int v29; // ebx
  int *v30; // edi
  int v31; // edx
  double v32; // st7
  double v33; // st7
  volatile LONG *v34; // esi
  const char *v36; // [esp+8h] [ebp-460h]
  double v37; // [esp+Ch] [ebp-45Ch]
  int v38; // [esp+28h] [ebp-440h]
  float v39; // [esp+28h] [ebp-440h]
  float v40; // [esp+28h] [ebp-440h]
  char v41; // [esp+2Fh] [ebp-439h]
  NiPointerList_Node_BSImageSpaceShader *v42; // [esp+30h] [ebp-438h] BYREF
  volatile LONG *v43; // [esp+34h] [ebp-434h] BYREF
  UInt32 *a3; // [esp+38h] [ebp-430h] BYREF
  int v45; // [esp+3Ch] [ebp-42Ch] BYREF
  unsigned int v46; // [esp+40h] [ebp-428h]
  NiTPointerList__BSImageSpaceShader v47[9]; // [esp+44h] [ebp-424h] BYREF
  char v48[256]; // [esp+158h] [ebp-310h] BYREF
  UInt16 v49[256]; // [esp+258h] [ebp-210h] BYREF
  unsigned int v50; // [esp+464h] [ebp-4h]

  a3 = a8; /*0x51539c*/
  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v49) ) /*0x5153b3*/
  {
    switch ( LOBYTE(v49[0]) ) /*0x5153d7*/
    {
      case 'c': /*0x5153d7*/
        v38 = 3; /*0x5153fb*/
        break;
      case 'f': /*0x5153d7*/
        v38 = 1; /*0x5153f1*/
        break;
      case 's': /*0x5153d7*/
        v38 = 2; /*0x5153e7*/
        break;
      default:
        v38 = 0; /*0x5153e1*/
        break;
    }
  }
  else
  {
    LOBYTE(v49[0]) = 0; /*0x5153c1*/
    v38 = 0; /*0x5153c8*/
  }
  v41 = bDisableWarning_MESSAGES; /*0x51540d*/
  bDisableWarning_MESSAGES = 1; /*0x515411*/
  PrintError("<<< DUMPTEXTUREPALETTE results"); /*0x515418*/
  v8 = unk_B3FAB8 + unk_B42054; /*0x515429*/
  v48[0] = 0; /*0x515434*/
  if ( (unsigned int)v8 < 0x100000 ) /*0x51543c*/
  {
    if ( (unsigned int)v8 < 0x400 ) /*0x515478*/
    {
      _sprintf(v48, "%i b", v8); /*0x5154bd*/
    }
    else
    {
      v42 = (NiPointerList_Node_BSImageSpaceShader *)v8; /*0x51547c*/
      _sprintf(v48, "%.2f Kb", (double)v8 * dbl_A30550); /*0x5154a5*/
    }
  }
  else
  {
    v42 = (NiPointerList_Node_BSImageSpaceShader *)v8; /*0x515440*/
    v9 = (double)v8; /*0x515444*/
    if ( v8 < 0 ) /*0x515448*/
      v9 = v9 + flt_A2FC78; /*0x51544a*/
    _sprintf(v48, "%.2f Mb", v9 * dbl_A30530); /*0x515469*/
  }
  PrintError("Textures in Palette : %d : %s", *(_DWORD *)(*(_DWORD *)(unk_B35300 + 0xC) + 0xC), v48);
  v43 = 0; /*0x5154e6*/
  v10 = *(_DWORD *)(unk_B35300 + 0xC); /*0x5154ef*/
  v11 = *(_DWORD *)(v10 + 4); /*0x5154f2*/
  v12 = 0; /*0x5154f5*/
  v50 = 0; /*0x5154f9*/
  if ( v11 ) /*0x515500*/
  {
    v13 = *(_DWORD **)(v10 + 8); /*0x515502*/
    v14 = v13; /*0x515505*/
    while ( !*v14 ) /*0x515509*/
    {
      ++v12; /*0x51550f*/
      ++v14; /*0x515512*/
      if ( v12 >= v11 ) /*0x515517*/
        goto LABEL_21; /*0x515517*/
    }
    v15 = (UInt32 *)v13[v12]; /*0x515660*/
  }
  else
  {
LABEL_21:
    v15 = 0; /*0x515519*/
  }
  v16 = 0; /*0x51551b*/
  a3 = v15; /*0x51551d*/
  v47[0].numItems = 0; /*0x515521*/
  v47[0].start = 0; /*0x515525*/
  v47[0].end = 0; /*0x515529*/
  v47[0].__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerList<NiPointer<NiSourceTexture>>::`vftable'; /*0x51552d*/
  LOBYTE(v50) = 1; /*0x515537*/
  if ( v15 )
  {
    do
    {
      sub_7B2600(*(unsigned int ***)(unk_B35300 + 0xC), &a3, &v42, (unsigned int *)&v43); /*0x51555d*/
      if ( v43 )
      {
        v17 = *((_DWORD *)v43 + 1); /*0x515571*/
        if ( v17 )
        {
          if ( v17 != 2 )
          {
            v18 = v43; /*0x515585*/
            v19 = (NiRTTI *)(*(int (__thiscall **)(volatile LONG *))(*v43 + 4))(v43); /*0x51558e*/
            if ( v19 ) /*0x515592*/
            {
              while ( v19 != &stru_B3F95C ) /*0x515599*/
              {
                v19 = v19->parent; /*0x51559f*/
                if ( !v19 ) /*0x5155a4*/
                  goto LABEL_29; /*0x5155a4*/
              }
              v20 = 1; /*0x515668*/
            }
            else
            {
LABEL_29:
              v20 = 0; /*0x5155a6*/
            }
            v21 = v20 != 0 ? (unsigned int)v18 : 0;
            v45 = v21; /*0x5155b0*/
            if ( v21 ) /*0x5155b4*/
              InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x5155ba*/
            start = v47[0].start; /*0x5155c6*/
            v23 = 0; /*0x5155ca*/
            v46 = *(_DWORD *)(*(_DWORD *)(v21 + 0x24) + 0x60); /*0x5155cc*/
            v47[0].unk10 = 0; /*0x5155d0*/
            LOBYTE(v50) = 3; /*0x5155d8*/
            if ( v38 > 0 ) /*0x5155e0*/
            {
              while ( start ) /*0x5155e6*/
              {
                v24 = v23 == (NiGeometry *)start->data; /*0x5155ee*/
                p_data = (NiGeometry **)&start->data; /*0x5155f1*/
                v42 = start; /*0x5155f4*/
                start = start->next; /*0x5155f8*/
                if ( v24 ) /*0x5155fb*/
                {
LABEL_40:
                  if ( v23 ) /*0x51562f*/
                  {
                    if ( v38 == 1 ) /*0x515638*/
                    {
                      if ( strcmp( /*0x515676*/
                             *(const char **)(v21 + 0x38),
                             (const char *)LODWORD(v23->member.super.m_localTransform.rot.data[0][2])) <= 0 )
                        goto LABEL_51; /*0x515676*/
                    }
                    else
                    {
                      if ( v38 == 2 ) /*0x515681*/
                        v26 = v46 <= *(_DWORD *)(LODWORD(v23->member.super.m_kWorldBound.Center.y) + 0x60); /*0x51568a*/
                      else
                        v26 = *(_DWORD *)(v21 + 4) <= v23->member.super.super.super.m_uiRefCount; /*0x51569b*/
                      if ( v26 ) /*0x51569e*/
                      {
LABEL_51:
                        if ( !v42 ) /*0x5156aa*/
                          break; /*0x5156aa*/
                        NiTRefPointerList_InsertBeforePosition(v47, (int)v42, &v45); /*0x5156b6*/
                        goto LABEL_54; /*0x5156bb*/
                      }
                    }
                  }
                }
                else
                {
                  if ( v23 ) /*0x5155ff*/
                  {
                    if ( !InterlockedDecrement((volatile LONG *)&v23->member) ) /*0x515605*/
                      v23->__vftable->super.super.super.Destructor((NiRefObject *)v23, 1); /*0x515617*/
                  }
                  v23 = *p_data; /*0x515619*/
                  v47[0].unk10 = *p_data; /*0x51561d*/
                  if ( v47[0].unk10 ) /*0x515621*/
                  {
                    InterlockedIncrement((volatile LONG *)&v23->member); /*0x515627*/
                    goto LABEL_40; /*0x515627*/
                  }
                }
              }
            }
            NiTRefPointerList__AddTail(v47, &v45); /*0x5156bd*/
LABEL_54:
            LOBYTE(v50) = 2; /*0x5156cb*/
            if ( v23 ) /*0x5156d5*/
            {
              if ( !InterlockedDecrement((volatile LONG *)&v23->member) ) /*0x5156db*/
                v23->__vftable->super.super.super.Destructor((NiRefObject *)v23, 1); /*0x5156ed*/
            }
            LOBYTE(v50) = 1; /*0x5156f3*/
            if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) ) /*0x5156fb*/
              (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x51570d*/
          }
        }
      }
    }
    while ( a3 );
    v16 = v47[0].start; /*0x51571a*/
  }
  v27 = 0; /*0x51571e*/
  v28 = v16; /*0x515720*/
  v42 = 0; /*0x515722*/
  LOBYTE(v50) = 4; /*0x515728*/
  if ( v16 )
  {
    v29 = v38; /*0x515736*/
    do
    {
      v24 = (BSImageSpaceShader *)v27 == v28->data; /*0x51573a*/
      v30 = (int *)&v28->data; /*0x51573d*/
      v28 = v28->next; /*0x515740*/
      if ( !v24 ) /*0x515743*/
      {
        if ( v27 ) /*0x515747*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) ) /*0x51574d*/
            (**(void (__thiscall ***)(int, int))v27)(v27, 1); /*0x51575f*/
        }
        v27 = *v30; /*0x515761*/
        v42 = (NiPointerList_Node_BSImageSpaceShader *)*v30; /*0x515765*/
        if ( !v42 ) /*0x515769*/
          continue; /*0x515769*/
        InterlockedIncrement((volatile LONG *)(v27 + 4)); /*0x515773*/
      }
      if ( v27 )
      {
        LOBYTE(v47[0].renderTarget) = 0; /*0x515781*/
        v31 = *(_DWORD *)(*(_DWORD *)(v27 + 0x24) + 0x60); /*0x515789*/
        v32 = (double)v31; /*0x51578c*/
        if ( v31 < 0 ) /*0x515791*/
          v32 = v32 + flt_A2FC78; /*0x515793*/
        v39 = v32; /*0x515799*/
        v33 = flt_A3F514; /*0x5157a0*/
        if ( v39 < v33 ) /*0x5157b1*/
        {
          _sprintf((char *)&v47[0].renderTarget, "%.2f b", v39); /*0x515801*/
        }
        else
        {
          v40 = v39 * dbl_A30550; /*0x5157bd*/
          if ( v40 < v33 ) /*0x5157ce*/
          {
            v37 = v40; /*0x5157e7*/
            v36 = "%.2f Kb"; /*0x5157ea*/
          }
          else
          {
            v37 = v40 * dbl_A30550; /*0x5157d6*/
            v36 = "%.2f Mb"; /*0x5157d9*/
          }
          _sprintf((char *)&v47[0].renderTarget, v36, v37); /*0x5157df*/
        }
        if ( v29 == 2 )
        {
          PrintError("  s %s : c %i : f %s", &v47[0].renderTarget, *(_DWORD *)(v27 + 4) - 3, *(_DWORD *)(v27 + 0x38));
        }
        else if ( v29 == 3 )
        {
          PrintError("  c %i : s %s : f %s", *(_DWORD *)(v27 + 4) - 3, &v47[0].renderTarget, *(_DWORD *)(v27 + 0x38));
        }
        else
        {
          PrintError("  f %s : c %i : s %s", *(_DWORD *)(v27 + 0x38), *(_DWORD *)(v27 + 4) - 3, &v47[0].renderTarget);
        }
      }
    }
    while ( v28 );
  }
  NiTPointerList::FreeAllNodes(v47); /*0x515868*/
  PrintError(">>> DUMPTEXTUREPALETTE results"); /*0x515876*/
  bDisableWarning_MESSAGES = v41; /*0x515884*/
  LOBYTE(v50) = 1; /*0x51588a*/
  if ( v27 ) /*0x515892*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) ) /*0x515898*/
      (**(void (__thiscall ***)(int, int))v27)(v27, 1); /*0x5158aa*/
  }
  LOBYTE(v50) = 0; /*0x5158b0*/
  NiTPointerList<NiPointer<NiSourceTexture>>::~NiTPointerList<NiPointer<NiSourceTexture>>(v47); /*0x5158b8*/
  v34 = v43; /*0x5158bd*/
  v50 = 0xFFFFFFFF; /*0x5158c3*/
  if ( v43 ) /*0x5158ce*/
  {
    if ( !InterlockedDecrement(v43 + 1) ) /*0x5158d4*/
      (**(void (__thiscall ***)(volatile LONG *, int))v34)(v34, 1); /*0x5158e6*/
  }
  return 1; /*0x5158ea*/
}
