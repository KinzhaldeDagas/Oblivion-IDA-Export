char __usercall sub_5097A0@<al>(double a1@<st0>, int a2, int a3, TESObjectREFR *a4)
{
  TESObjectREFR *v6; // esi
  int v7; // eax
  int *v8; // eax
  int *v9; // edi
  ExtraScript *v10; // ebx
  int *v11; // eax
  const char *v12; // eax
  int v13; // esi
  const char *v14; // eax
  bool v15; // zf
  int v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  int ***ContainerExtraDataForRef; // ebx
  TESForm *v20; // esi
  int *EntryForItem; // eax
  int *v22; // edi
  int v23; // eax
  int *v24; // eax
  int *v25; // esi
  ExtraScript *v26; // eax
  int *v27; // ecx
  ScriptEventList *v28; // ebx
  const char *v29; // eax
  int *v30; // edi
  int v31; // esi
  char v32; // al
  const char *v33; // eax
  int v34; // eax
  int v35; // edi
  int v36; // eax
  const char *v37; // eax
  unsigned __int64 v38; // st4
  const char *v39; // eax
  int (__thiscall *v40)(int, _DWORD, _DWORD); // eax
  const char *v41; // eax
  const char *v43; // [esp-4h] [ebp-4Ch]
  const char *v44; // [esp-4h] [ebp-4Ch]
  int v45; // [esp+0h] [ebp-48h]
  const char *v46; // [esp+0h] [ebp-48h]
  int v47; // [esp+0h] [ebp-48h]
  const char *v48; // [esp+0h] [ebp-48h]
  double v49; // [esp+0h] [ebp-48h]
  const char *v50; // [esp+0h] [ebp-48h]
  double v51; // [esp+0h] [ebp-48h]
  double v52; // [esp+0h] [ebp-48h]
  int v53; // [esp+4h] [ebp-44h]
  int v54; // [esp+4h] [ebp-44h]
  int v55; // [esp+4h] [ebp-44h]
  int v56; // [esp+4h] [ebp-44h]
  int v57; // [esp+4h] [ebp-44h]
  int v58; // [esp+4h] [ebp-44h]
  char v59; // [esp+33h] [ebp-15h]
  int *v60; // [esp+34h] [ebp-14h]
  TESForm *i; // [esp+34h] [ebp-14h]
  int *v62; // [esp+38h] [ebp-10h] BYREF
  int ***v63; // [esp+3Ch] [ebp-Ch]
  double v64; // [esp+40h] [ebp-8h] BYREF

  v6 = a4;
  v59 = 1;
  if ( !a4 )
    goto LABEL_50;
  sub_4D7240(a4);
  if ( v7 )
  {
    sub_4D7240(a4);
    v9 = v8;
    v10 = sub_4D7250(a4);
    v11 = v9 + 0x12;
    if ( v9[0x13] || *v11 )
    {
      if ( v10 )
      {
        while ( v11 )
        {
          v13 = *v11;
          if ( !*v11 )
            break;
          v60 = (int *)v11[1];
          if ( sub_4FA1B0(v10, *(_DWORD *)v13) )
          {
            v45 = *(_DWORD *)v13;
            v62 = 0;
            a1 = sub_4FA110((ScriptEventList *)v10, v45, 0);
            v64 = a1;
            sub_4F9FC0(&v62, &v64);
            v14 = (const char *)(*(int (__thiscall **)(int *, _DWORD, int *))(*v9 + 0xD4))(
                                  v9,
                                  *(_DWORD *)(v13 + 0x18),
                                  v62);
            Interface_ConsolePrint("%s->%s = (%08X)", v14, v46, v53);
            v11 = v60;
          }
          else
          {
            v15 = *(_BYTE *)(v13 + 0x10) == 0;
            v47 = *(_DWORD *)v13;
            v62 = *(int **)(v13 + 0x18);
            if ( v15 )
            {
              a1 = sub_4FA110((ScriptEventList *)v10, v47, 0);
              v18 = (const char *)(*(int (__thiscall **)(int *, int *, _DWORD, _DWORD))(*v9 + 0xD4))(
                                    v9,
                                    v62,
                                    LODWORD(a1),
                                    HIDWORD(*(unsigned __int64 *)&a1));
              Interface_ConsolePrint("%s->%s = %0.4f", v18, v43, v49);
            }
            else
            {
              a1 = sub_4FA110((ScriptEventList *)v10, v47, 0);
              v16 = Double_To_SInt32(a1);
              v17 = (const char *)(*(int (__thiscall **)(int *, int *, int))(*v9 + 0xD4))(v9, v62, v16);
              Interface_ConsolePrint("%s->%s = %d", v17, v48, v54);
            }
            v11 = v60;
          }
        }
      }
      v6 = a4;
    }
    else
    {
      v12 = (const char *)(*(int (__thiscall **)(int *))(*v9 + 0xD4))(v9);
      Interface_ConsolePrint("No variables in script %s", v12);
    }
    v59 = 0;
  }
  if ( TESObjectREFR_GetContainer(v6) )
  {
    ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(v6);
    v63 = ContainerExtraDataForRef;
    v20 = 0;
    LODWORD(v64) = ContainerExtraData_GetCount(ContainerExtraDataForRef);
    for ( i = 0; (int)v20 < SLODWORD(v64); i = v20 )
    {
      EntryForItem = ContainerExtraData_GetEntryForItem((ExtraContainerChanges_Data *)ContainerExtraDataForRef, v20);
      v22 = EntryForItem;
      if ( EntryForItem )
      {
        sub_484F20(EntryForItem);
        if ( v23 )
        {
          sub_484F20(v22);
          v25 = v24;
          v26 = sub_484F50(v22);
          v27 = v25 + 0x12;
          v28 = (ScriptEventList *)v26;
          if ( v25[0x13] || *v27 )
          {
            if ( v26 )
            {
              while ( v27 )
              {
                v34 = *v27;
                if ( !*v27 )
                  break;
                v15 = *(_BYTE *)(v34 + 0x10) == 0;
                v35 = *(_DWORD *)(v34 + 0x18);
                v62 = (int *)v27[1];
                if ( v15 )
                {
                  *(double *)&v38 = sub_4FA110(v28, *(_DWORD *)v34, 0);
                  v39 = (const char *)(*(int (__thiscall **)(int *, int, _DWORD, _DWORD))(*v25 + 0xD4))(
                                        v25,
                                        v35,
                                        v38,
                                        HIDWORD(v38));
                  Interface_ConsolePrint("%s->%s = %0.4f", v39, v44, v51);
                }
                else
                {
                  sub_4FA110(v28, *(_DWORD *)v34, 0);
                  v36 = Double_To_SInt32(a1);
                  v37 = (const char *)(*(int (__thiscall **)(int *, int, int))(*v25 + 0xD4))(v25, v35, v36);
                  Interface_ConsolePrint("%s->%s = %d", v37, v50, v57);
                }
                v27 = v62;
              }
            }
          }
          else
          {
            v29 = (const char *)(*(int (__thiscall **)(int *))(*v25 + 0xD4))(v25);
            Interface_ConsolePrint("No variables in script %s", v29);
          }
          ContainerExtraDataForRef = v63;
          v20 = i;
          v59 = 0;
        }
      }
      v20 = (TESForm *)((char *)v20 + 1);
    }
  }
  if ( v59 )
  {
LABEL_50:
    v30 = (int *)(TESDataHandler + 0x74);
    if ( TESDataHandler != 0xFFFFFF8C && (*(_DWORD *)(TESDataHandler + 0x78) || *v30) )
    {
      Interface_ConsolePrint("--- Global Variables -----------------------------");
      do
      {
        v31 = *v30;
        if ( *v30 )
        {
          v32 = *(_BYTE *)(v31 + 0x20);
          switch ( v32 )
          {
            case 'f':
              v40 = *(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v31 + 0xD4);
              *(float *)&v64 = *(float *)(v31 + 0x24);
              v41 = (const char *)v40(
                                    v31,
                                    COERCE_UNSIGNED_INT64(*(float *)&v64),
                                    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v64)));
              Interface_ConsolePrint("%s = %0.4f", v41, v52);
              break;
            case 'l':
              *(float *)&v64 = *(float *)(v31 + 0x24);
              v58 = Double_To_SInt32(a1);
              v33 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v31 + 0xD4))(v31, v58);
              goto LABEL_36;
            case 's':
              *(float *)&v64 = *(float *)(v31 + 0x24);
              v55 = (__int16)Double_To_SInt32(a1);
              v33 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v31 + 0xD4))(v31, v55);
LABEL_36:
              Interface_ConsolePrint("%s = %d", v33, v56);
              break;
          }
        }
        v30 = (int *)v30[1];
      }
      while ( v30 );
    }
  }
  return 1;
}
