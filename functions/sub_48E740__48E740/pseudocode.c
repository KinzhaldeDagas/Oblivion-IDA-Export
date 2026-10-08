char __userpurge sub_48E740@<al>(int **this@<ecx>, double a2@<st1>, double a3@<st0>, TESChildCELL *a4)
{
  UInt32 DwordAtOffset40; // eax
  int *v7; // edi
  int *v8; // ecx
  int v9; // edx
  int *v10; // ecx
  int j; // edx
  int v12; // ebp
  ExtraDataList **v13; // ecx
  int v14; // edx
  ExtraDataList **v15; // eax
  int v16; // ebx
  ExtraDataList *v17; // esi
  BSExtraDataVtbl *ExtraScript; // eax
  Script *v19; // edi
  char **ExtraScriptEventList; // eax
  char v21; // al
  int *v22; // eax
  int k; // ecx
  ExtraDataList **v24; // eax
  int v25; // ecx
  int *v26; // eax
  int v27; // ecx
  char v28; // [esp+13h] [ebp-19h]
  int v29; // [esp+14h] [ebp-18h]
  int v30; // [esp+18h] [ebp-14h]
  int *i; // [esp+1Ch] [ebp-10h]
  ExtraDataList **v32; // [esp+20h] [ebp-Ch]
  int v33; // [esp+24h] [ebp-8h]

  if ( !a4 ) /*0x48e753*/
    return 0; /*0x48e753*/
  DwordAtOffset40 = Shared_GetDwordAtOffset40(a4); /*0x48e763*/
  v7 = *this; /*0x48e768*/
  v8 = v7; /*0x48e76a*/
  v9 = 0; /*0x48e76c*/
  for ( i = v7; v8; v8 = (int *)v8[1] ) /*0x48e774*/
  {
    if ( *v8 ) /*0x48e776*/
      ++v9; /*0x48e77b*/
  }
  v29 = v9; /*0x48e785*/
  v10 = v7; /*0x48e789*/
  for ( j = 0; v10; v10 = (int *)v10[1] ) /*0x48e78f*/
  {
    if ( *v10 ) /*0x48e791*/
      ++j; /*0x48e796*/
  }
  v30 = j; /*0x48e7a2*/
  if ( !DwordAtOffset40 ) /*0x48e7a6*/
    return 0; /*0x48e755*/
  v28 = 0; /*0x48e7b7*/
  (*(void (__usercall **)(_DWORD@<ecx>, UInt32, double@<st0>, double@<st1>))(**(_DWORD **)&MEMORY[0xB33E90][0x598] /*0x48e7bc*/
                                                                           + 0x194))(
    *(_DWORD *)&MEMORY[0xB33E90][0x598],
    DwordAtOffset40,
    a3,
    a2);
  TESObjectREFR_SetPosition( /*0x48e7dd*/
    *(TESObjectREFR **)&MEMORY[0xB33E90][0x598],
    *(float *)&a4[0xB].vtbl,
    *(float *)&a4[0xC].vtbl,
    *(float *)&a4[0xD].vtbl);
  if ( v7 ) /*0x48e7e4*/
  {
    do /*0x48e969*/
    {
      v12 = *i; /*0x48e7f4*/
      if ( !*i ) /*0x48e7f4*/
        break; /*0x48e7f8*/
      v13 = *(ExtraDataList ***)v12; /*0x48e7fe*/
      v14 = 0; /*0x48e801*/
      v15 = *(ExtraDataList ***)v12; /*0x48e803*/
      v32 = *(ExtraDataList ***)v12; /*0x48e807*/
      v33 = 0; /*0x48e80b*/
      if ( *(_DWORD *)v12 ) /*0x48e7fe*/
      {
        do /*0x48e81e*/
        {
          if ( *v15 ) /*0x48e811*/
            ++v14; /*0x48e816*/
          v15 = (ExtraDataList **)v15[1]; /*0x48e819*/
        }
        while ( v15 ); /*0x48e81e*/
        v33 = v14; /*0x48e820*/
      }
      v16 = 0; /*0x48e824*/
      if ( v13 ) /*0x48e828*/
      {
        while ( 1 ) /*0x48e834*/
        {
          v17 = *v13; /*0x48e834*/
          if ( !*v13 ) /*0x48e834*/
            break; /*0x48e834*/
          ExtraScript = ExtraDataList_GetExtraScript(*v13); /*0x48e840*/
          v19 = (Script *)ExtraScript; /*0x48e845*/
          if ( ExtraScript && ((int)ExtraScript[1].Destructor & 8) != 0 ) /*0x48e858*/
          {
            if ( LOBYTE(ExtraScript->CompareTo) == 0xD ) /*0x48e862*/
            {
              sub_4D7620(v17); /*0x48e86f*/
              TESObjectREFR_SetBaseForm(*(TESObjectREFR **)&MEMORY[0xB33E90][0x598], *(TESForm **)(v12 + 8)); /*0x48e87e*/
              ExtraScriptEventList = (char **)ExtraDataList_GetExtraScriptEventList(v17); /*0x48e88c*/
              a3 = Script_Run( /*0x48e89b*/
                     v19,
                     a3,
                     a2,
                     (TESObjectREFR *)*(_DWORD *)&MEMORY[0xB33E90][0x598],
                     ExtraScriptEventList,
                     (int)a4,
                     0);
              if ( v21 ) /*0x48e8a2*/
                v28 = 1; /*0x48e8a4*/
              v22 = *this; /*0x48e8ad*/
              for ( k = 0; v22; v22 = (int *)v22[1] ) /*0x48e8ad*/
              {
                if ( *v22 ) /*0x48e8b5*/
                  ++k; /*0x48e8ba*/
              }
              v30 = k; /*0x48e8c8*/
              if ( v29 == k ) /*0x48e8cc*/
              {
                v24 = *(ExtraDataList ***)v12; /*0x48e8ce*/
                v25 = 0; /*0x48e8d1*/
                if ( *(_DWORD *)v12 ) /*0x48e8ce*/
                {
                  do /*0x48e8e4*/
                  {
                    if ( *v24 ) /*0x48e8d7*/
                      ++v25; /*0x48e8dc*/
                    v24 = (ExtraDataList **)v24[1]; /*0x48e8df*/
                  }
                  while ( v24 ); /*0x48e8e4*/
                }
                v16 = v25; /*0x48e8e6*/
              }
              ExtraDataList_SetScriptEventList((ExtraDataList *)(*(_DWORD *)&MEMORY[0xB33E90][0x598] + 0x44), 0); /*0x48e8f3*/
              ExtraDataList_RemoveAllCopyableExtraData((ExtraDataList *)(*(_DWORD *)&MEMORY[0xB33E90][0x598] + 0x44), 1); /*0x48e903*/
            }
            if ( v16 != v33 ) /*0x48e90c*/
              break; /*0x48e90c*/
            if ( v29 != v30 ) /*0x48e916*/
              goto LABEL_43; /*0x48e916*/
          }
          v32 = (ExtraDataList **)v32[1]; /*0x48e921*/
          if ( !v32 ) /*0x48e925*/
            break; /*0x48e925*/
          v13 = v32; /*0x48e830*/
        }
      }
      if ( v29 != v30 ) /*0x48e933*/
      {
LABEL_43:
        v26 = *this; /*0x48e935*/
        v27 = 0; /*0x48e93b*/
        for ( i = *this; v26; v26 = (int *)v26[1] ) /*0x48e93f*/
        {
          if ( *v26 ) /*0x48e945*/
            ++v27; /*0x48e94a*/
        }
        v29 = v27; /*0x48e954*/
        v30 = v27; /*0x48e958*/
      }
      i = (int *)i[1]; /*0x48e965*/
    }
    while ( i ); /*0x48e969*/
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&MEMORY[0xB33E90][0x598] + 0x194))( /*0x48e97f*/
    *(_DWORD *)&MEMORY[0xB33E90][0x598],
    0);
  TESObjectREFR_SetBaseForm(*(TESObjectREFR **)&MEMORY[0xB33E90][0x598], 0); /*0x48e989*/
  return v28; /*0x48e757*/
}
