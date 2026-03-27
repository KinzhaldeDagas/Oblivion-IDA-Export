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
  BSExtraDataVtbl *v13; // edi
  ExtraDataList **v14; // esi
  int v15; // edi
  int v16; // eax
  ExtraDataList **v17; // eax
  unsigned int v18; // ecx
  signed __int16 ExtraCount; // ax
  unsigned __int8 *v20; // [esp-28h] [ebp-40h]
  char v21; // [esp+7h] [ebp-11h]
  int **v22; // [esp+8h] [ebp-10h]
  ExtraDataList **v23; // [esp+Ch] [ebp-Ch]
  int v25; // [esp+14h] [ebp-4h]

  v6 = (int ***)a1;
  result = *a1;
  v22 = (int **)*a1;
  if ( *a1 )
  {
    do
    {
      v8 = (int **)result[1];
      if ( !v8 && !*result )
        break;
      v9 = (int)*result;
      v21 = 0;
      if ( *result && (v10 = *(_DWORD *)(v9 + 4), v10 > 0) )
      {
        v23 = *(ExtraDataList ***)v9;
        v25 = *(_DWORD *)(v9 + 8);
        if ( *(_DWORD *)v9 && **(_DWORD **)v9 )
        {
          while ( 1 )
          {
            v11 = *v23;
            if ( !*v23 )
            {
LABEL_21:
              v6 = (int ***)a1;
              goto LABEL_22;
            }
            v12 = 0;
            if ( !ExtraDataList_GetOwner(*v23)
              || (v13 = (BSExtraDataVtbl *)((int (__thiscall *)(TESForm *))a6->vtbl[1].SetQuestItem)(a6),
                  ExtraDataList_GetOwner(v11) == v13) )
            {
              v17 = *(ExtraDataList ***)v9;
              v18 = 0;
              if ( !*(_DWORD *)v9 )
                goto LABEL_29;
              do
              {
                if ( *v17 )
                  ++v18;
                v17 = (ExtraDataList **)v17[1];
              }
              while ( v17 );
              if ( v18 > 1 )
                v12 = 1;
              else
LABEL_29:
                v21 = 1;
              v20 = (unsigned __int8 *)v11;
              ExtraCount = ExtraDataList_GetExtraCount(v11);
              v6 = (int ***)a1;
              ContainerExtraData_RemoveForm((int ***)a1, a2, a4, a3, a5, v25, 0, ExtraCount, v20, 0, a6, 0, 0, 1, 0);
              if ( v21 )
              {
                v8 = (int **)*a1;
                goto LABEL_35;
              }
              if ( v12 )
              {
                v23 = *(ExtraDataList ***)v9;
                goto LABEL_20;
              }
            }
            else
            {
              v14 = *(ExtraDataList ***)v9;
              v15 = 0;
              if ( *(_DWORD *)v9 )
              {
                do
                {
                  if ( !*v14 )
                    break;
                  if ( ExtraDataList_IsExtraDefaultForContainer(*v14, 0) )
                    ++v15;
                  v14 = (ExtraDataList **)v14[1];
                }
                while ( v14 );
              }
              v16 = v15 + InventoryEntryData_Cleanup((ExtraDataList ***)v9);
              if ( v16 > 0 )
                ContainerExtraData_RemoveForm(
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
            v23 = (ExtraDataList **)v23[1];
            if ( !v23 )
            {
              v22 = (int **)v22[1];
LABEL_20:
              if ( !v23 )
                goto LABEL_21;
            }
          }
        }
        ContainerExtraData_RemoveForm(v6, a2, a4, a3, a5, *(_DWORD *)(v9 + 8), 0, v10, 0, 0, a6, 0, 0, 1, 0);
        v22 = *v6;
      }
      else
      {
LABEL_35:
        v22 = v8;
      }
LABEL_22:
      result = (unsigned __int8 ****)v22;
    }
    while ( v22 );
  }
  return result;
}
