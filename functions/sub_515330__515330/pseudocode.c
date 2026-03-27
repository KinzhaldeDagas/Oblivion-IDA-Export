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
  int v19; // eax
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

  a3 = a8;
  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v49) )
  {
    switch ( LOBYTE(v49[0]) )
    {
      case 'c':
        v38 = 3;
        break;
      case 'f':
        v38 = 1;
        break;
      case 's':
        v38 = 2;
        break;
      default:
        v38 = 0;
        break;
    }
  }
  else
  {
    LOBYTE(v49[0]) = 0;
    v38 = 0;
  }
  v41 = bDisableWarning_MESSAGES;
  bDisableWarning_MESSAGES = 1;
  PrintError("<<< DUMPTEXTUREPALETTE results");
  v8 = dword_B3FAB8 + dword_B42054;
  v48[0] = 0;
  if ( (unsigned int)v8 < 0x100000 )
  {
    if ( (unsigned int)v8 < 0x400 )
    {
      _sprintf(v48, "%i b", v8);
    }
    else
    {
      v42 = (NiPointerList_Node_BSImageSpaceShader *)v8;
      _sprintf(v48, "%.2f Kb", (double)v8 * dbl_A30550);
    }
  }
  else
  {
    v42 = (NiPointerList_Node_BSImageSpaceShader *)v8;
    v9 = (double)v8;
    if ( v8 < 0 )
      v9 = v9 + flt_A2FC78;
    _sprintf(v48, "%.2f Mb", v9 * dbl_A30530);
  }
  PrintError("Textures in Palette : %d : %s", *(_DWORD *)(*(_DWORD *)(dword_B35300 + 0xC) + 0xC), v48);
  v43 = 0;
  v10 = *(_DWORD *)(dword_B35300 + 0xC);
  v11 = *(_DWORD *)(v10 + 4);
  v12 = 0;
  v50 = 0;
  if ( v11 )
  {
    v13 = *(_DWORD **)(v10 + 8);
    v14 = v13;
    while ( !*v14 )
    {
      ++v12;
      ++v14;
      if ( v12 >= v11 )
        goto LABEL_21;
    }
    v15 = (UInt32 *)v13[v12];
  }
  else
  {
LABEL_21:
    v15 = 0;
  }
  v16 = 0;
  a3 = v15;
  v47[0].numItems = 0;
  v47[0].start = 0;
  v47[0].end = 0;
  v47[0].__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerList<NiPointer<NiSourceTexture>>::`vftable';
  LOBYTE(v50) = 1;
  if ( v15 )
  {
    do
    {
      sub_7B2600(*(_DWORD **)(dword_B35300 + 0xC), &a3, &v42, (unsigned int *)&v43);
      if ( v43 )
      {
        v17 = *((_DWORD *)v43 + 1);
        if ( v17 )
        {
          if ( v17 != 2 )
          {
            v18 = v43;
            v19 = (*(int (__thiscall **)(volatile LONG *))(*v43 + 4))(v43);
            if ( v19 )
            {
              while ( (char *)v19 != dword_B3F95C )
              {
                v19 = *(_DWORD *)(v19 + 4);
                if ( !v19 )
                  goto LABEL_29;
              }
              v20 = 1;
            }
            else
            {
LABEL_29:
              v20 = 0;
            }
            v21 = v20 != 0 ? (unsigned int)v18 : 0;
            v45 = v21;
            if ( v21 )
              InterlockedIncrement((volatile LONG *)(v21 + 4));
            start = v47[0].start;
            v23 = 0;
            v46 = *(_DWORD *)(*(_DWORD *)(v21 + 0x24) + 0x60);
            v47[0].unk10 = 0;
            LOBYTE(v50) = 3;
            if ( v38 > 0 )
            {
              while ( start )
              {
                v24 = v23 == (NiGeometry *)start->data;
                p_data = (NiGeometry **)&start->data;
                v42 = start;
                start = start->next;
                if ( v24 )
                {
LABEL_40:
                  if ( v23 )
                  {
                    if ( v38 == 1 )
                    {
                      if ( strcmp(
                             *(const char **)(v21 + 0x38),
                             (const char *)LODWORD(v23->member.super.m_localTransform.rot.data[0][2])) <= 0 )
                        goto LABEL_51;
                    }
                    else
                    {
                      if ( v38 == 2 )
                        v26 = v46 <= *(_DWORD *)(LODWORD(v23->member.super.m_kWorldBound.Center.y) + 0x60);
                      else
                        v26 = *(_DWORD *)(v21 + 4) <= v23->member.super.super.super.m_uiRefCount;
                      if ( v26 )
                      {
LABEL_51:
                        if ( !v42 )
                          break;
                        sub_7C6A20(v47, (int)v42, &v45);
                        goto LABEL_54;
                      }
                    }
                  }
                }
                else
                {
                  if ( v23 )
                  {
                    if ( !InterlockedDecrement((volatile LONG *)&v23->member) )
                      v23->__vftable->super.super.super.Destructor((NiRefObject *)v23, 1);
                  }
                  v23 = *p_data;
                  v47[0].unk10 = *p_data;
                  if ( v47[0].unk10 )
                  {
                    InterlockedIncrement((volatile LONG *)&v23->member);
                    goto LABEL_40;
                  }
                }
              }
            }
            sub_7C16B0(v47, &v45);
LABEL_54:
            LOBYTE(v50) = 2;
            if ( v23 )
            {
              if ( !InterlockedDecrement((volatile LONG *)&v23->member) )
                v23->__vftable->super.super.super.Destructor((NiRefObject *)v23, 1);
            }
            LOBYTE(v50) = 1;
            if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) )
              (**(void (__thiscall ***)(int, int))v21)(v21, 1);
          }
        }
      }
    }
    while ( a3 );
    v16 = v47[0].start;
  }
  v27 = 0;
  v28 = v16;
  v42 = 0;
  LOBYTE(v50) = 4;
  if ( v16 )
  {
    v29 = v38;
    do
    {
      v24 = (BSImageSpaceShader *)v27 == v28->data;
      v30 = (int *)&v28->data;
      v28 = v28->next;
      if ( !v24 )
      {
        if ( v27 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) )
            (**(void (__thiscall ***)(int, int))v27)(v27, 1);
        }
        v27 = *v30;
        v42 = (NiPointerList_Node_BSImageSpaceShader *)*v30;
        if ( !v42 )
          continue;
        InterlockedIncrement((volatile LONG *)(v27 + 4));
      }
      if ( v27 )
      {
        LOBYTE(v47[0].renderTarget) = 0;
        v31 = *(_DWORD *)(*(_DWORD *)(v27 + 0x24) + 0x60);
        v32 = (double)v31;
        if ( v31 < 0 )
          v32 = v32 + flt_A2FC78;
        v39 = v32;
        v33 = flt_A3F514;
        if ( v39 < v33 )
        {
          _sprintf((char *)&v47[0].renderTarget, "%.2f b", v39);
        }
        else
        {
          v40 = v39 * dbl_A30550;
          if ( v40 < v33 )
          {
            v37 = v40;
            v36 = "%.2f Kb";
          }
          else
          {
            v37 = v40 * dbl_A30550;
            v36 = "%.2f Mb";
          }
          _sprintf((char *)&v47[0].renderTarget, v36, v37);
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
  NiTPointerList::FreeAllNodes(v47);
  PrintError(">>> DUMPTEXTUREPALETTE results");
  bDisableWarning_MESSAGES = v41;
  LOBYTE(v50) = 1;
  if ( v27 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) )
      (**(void (__thiscall ***)(int, int))v27)(v27, 1);
  }
  LOBYTE(v50) = 0;
  NiTPointerList<NiPointer<NiSourceTexture>>::~NiTPointerList<NiPointer<NiSourceTexture>>(v47);
  v34 = v43;
  v50 = 0xFFFFFFFF;
  if ( v43 )
  {
    if ( !InterlockedDecrement(v43 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v34)(v34, 1);
  }
  return 1;
}
