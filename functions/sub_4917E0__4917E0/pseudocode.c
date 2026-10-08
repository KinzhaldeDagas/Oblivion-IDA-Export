unsigned __int8 ****__userpurge sub_4917E0@<eax>(
        unsigned __int8 *****a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        TESForm *a6)
{
  int ***v6; // esi
  unsigned __int8 ****result; // eax
  int **v8; // ecx
  int v9; // ebp
  signed int v10; // eax
  ExtraDataList *v11; // esi
  char v12; // bl
  TESForm *v13; // edi
  ExtraDataList **v14; // esi
  int v15; // edi
  int v16; // eax
  ExtraDataList **v17; // eax
  unsigned int v18; // ecx
  signed __int16 ExtraCount; // ax
  ExtraDataList *v20; // [esp-28h] [ebp-40h]
  char v21; // [esp+7h] [ebp-11h]
  int **v22; // [esp+8h] [ebp-10h]
  ExtraDataList **v23; // [esp+Ch] [ebp-Ch]
  TESForm *v25; // [esp+14h] [ebp-4h]

  v6 = (int ***)a1; /*0x4917e4*/
  result = *a1; /*0x4917e6*/
  v22 = (int **)*a1; /*0x4917ee*/
  if ( *a1 ) /*0x4917e6*/
  {
    do /*0x491800*/
    {
      v8 = (int **)result[1]; /*0x491800*/
      if ( !v8 && !*result ) /*0x491807*/
        break; /*0x491807*/
      v9 = (int)*result; /*0x49180f*/
      v21 = 0; /*0x491813*/
      if ( *result && (v10 = *(_DWORD *)(v9 + 4), v10 > 0) ) /*0x491823*/
      {
        v23 = *(ExtraDataList ***)v9; /*0x491831*/
        v25 = *(TESForm **)(v9 + 8); /*0x491835*/
        if ( *(_DWORD *)v9 && **(_DWORD **)v9 ) /*0x49183f*/
        {
          while ( 1 ) /*0x49184c*/
          {
            v11 = *v23; /*0x49184c*/
            if ( !*v23 ) /*0x491850*/
            {
LABEL_21:
              v6 = (int ***)a1; /*0x49190d*/
              goto LABEL_22; /*0x49190d*/
            }
            v12 = 0; /*0x491858*/
            if ( !ExtraDataList_GetOwner(*v23) /*0x491880*/
              || (v13 = (TESForm *)((int (__thiscall *)(TESForm *))a6->vtbl[1].SetQuestItem)(a6),
                  ExtraDataList_GetOwner(v11) == v13) )
            {
              v17 = *(ExtraDataList ***)v9; /*0x491927*/
              v18 = 0; /*0x49192a*/
              if ( !*(_DWORD *)v9 ) /*0x491927*/
                goto LABEL_29; /*0x491927*/
              do /*0x49193d*/
              {
                if ( *v17 ) /*0x491930*/
                  ++v18; /*0x491935*/
                v17 = (ExtraDataList **)v17[1]; /*0x491938*/
              }
              while ( v17 ); /*0x49193d*/
              if ( v18 > 1 ) /*0x491942*/
                v12 = 1; /*0x49194b*/
              else
LABEL_29:
                v21 = 1; /*0x491944*/
              v20 = v11; /*0x49195c*/
              ExtraCount = ExtraDataList_GetExtraCount(v11); /*0x49195f*/
              v6 = (int ***)a1; /*0x49196c*/
              ContainerExtraData_RemoveForm((int ***)a1, a2, a4, a3, a5, v25, 0, ExtraCount, v20, 0, a6, 0, 0, 1, 0); /*0x49197a*/
              if ( v21 ) /*0x491984*/
              {
                v8 = (int **)*a1; /*0x49199a*/
                goto LABEL_35; /*0x49199a*/
              }
              if ( v12 ) /*0x491988*/
              {
                v23 = *(ExtraDataList ***)v9; /*0x491991*/
                goto LABEL_20; /*0x491995*/
              }
            }
            else
            {
              v14 = *(ExtraDataList ***)v9; /*0x491886*/
              v15 = 0; /*0x491889*/
              if ( *(_DWORD *)v9 ) /*0x491886*/
              {
                do /*0x4918a9*/
                {
                  if ( !*v14 ) /*0x491890*/
                    break; /*0x491894*/
                  if ( ExtraDataList_IsExtraDefaultForContainer(*v14, 0) ) /*0x491898*/
                    ++v15; /*0x4918a1*/
                  v14 = (ExtraDataList **)v14[1]; /*0x4918a4*/
                }
                while ( v14 ); /*0x4918a9*/
              }
              v16 = v15 + InventoryEntryData_Cleanup((ExtraDataList ***)v9); /*0x4918b2*/
              if ( v16 > 0 ) /*0x4918b6*/
                ContainerExtraData_RemoveForm( /*0x4918df*/
                  (int ***)a1,
                  a2,
                  a4,
                  a3,
                  a5,
                  v25,
                  0,
                  *(_DWORD *)(v9 + 4) - v16,
                  0,
                  0,
                  a6,
                  0,
                  0,
                  1,
                  0);
            }
            v23 = (ExtraDataList **)v23[1]; /*0x4918ed*/
            if ( !v23 ) /*0x4918f1*/
            {
              v22 = (int **)v22[1]; /*0x4918fe*/
LABEL_20:
              if ( !v23 ) /*0x491907*/
                goto LABEL_21; /*0x491907*/
            }
          }
        }
        ContainerExtraData_RemoveForm(v6, a2, a4, a3, a5, *(TESForm **)(v9 + 8), 0, v10, 0, 0, a6, 0, 0, 1, 0); /*0x4919c1*/
        v22 = *v6; /*0x4919c8*/
      }
      else
      {
LABEL_35:
        v22 = v8; /*0x49199c*/
      }
LABEL_22:
      result = (unsigned __int8 ****)v22; /*0x491911*/
    }
    while ( v22 ); /*0x491800*/
  }
  return result; /*0x491920*/
}
