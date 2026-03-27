char __userpurge sub_5E46C0@<al>(
        int a1@<ecx>,
        int a2@<edi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        ExtraDataList ***a6,
        int a7,
        TESWorldSpace *a8,
        _BYTE *a9)
{
  int *v12; // eax
  int *v13; // edi
  TESWorldSpace *ParentWorldpsace; // eax
  TESWorldSpace *v15; // edi
  double v16; // st4
  ExtraContainerChanges_Data *ContainerChanges; // eax
  int *v18; // ebp
  _DWORD *v19; // esi
  int v20; // eax
  _DWORD *v21; // esi
  int v22; // eax
  _DWORD *v23; // esi
  int v24; // eax
  double v25; // st7
  float v26; // [esp+Ch] [ebp-20h]
  ExtraDataList *v27; // [esp+Ch] [ebp-20h]
  int v28; // [esp+10h] [ebp-1Ch]
  float v30; // [esp+24h] [ebp-8h]
  float v31; // [esp+28h] [ebp-4h]
  float v32; // [esp+28h] [ebp-4h]
  int v33; // [esp+38h] [ebp+Ch]
  BSExtraDataVtbl *v34; // [esp+3Ch] [ebp+10h]

  *a9 = 0;
  if ( !a6 && !a8 )
    return 0;
  v28 = a2;
  if ( !a6 || (v12 = (int *)a6[2]) == 0 || *((_BYTE *)v12 + 4) != 0x21 )
  {
    if ( !a8 )
      return 0;
    goto LABEL_8;
  }
  v13 = (int *)a6[2];
  if ( a8 )
  {
LABEL_8:
    v34 = (BSExtraDataVtbl *)sub_607410(a8);
    ParentWorldpsace = TESWorldSpace_GetParentWorldpsace(a8);
    goto LABEL_14;
  }
  v34 = sub_484DF0(a6);
  ParentWorldpsace = (TESWorldSpace *)v13[0x19];
LABEL_14:
  v15 = ParentWorldpsace;
  if ( a8 )
    v33 = sub_607400(a8);
  else
    v33 = 0;
  if ( !v15 && !v34 && !v33 )
    return 0;
  if ( a8 )
  {
    ((void (__usercall *)(TESWorldSpace *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))a8->vtbl->Unk_23)(
      a8,
      1,
      a5,
      a4,
      a3);
    v18 = (int *)((int (__thiscall *)(TESWorldSpace *))a8->vtbl[1].SetQuestItem)(a8);
  }
  else
  {
    if ( v15 )
    {
      v16 = sub_4849C0((void **)a6);
      v30 = a5;
      v26 = ((double (__thiscall *)(TESTexture *, _DWORD))v15->texture.vtbl->InitializeComponent)(&v15->texture, 0);
      a5 = FloatFloor(v26);
      v31 = v16;
      if ( v31 > (double)v30 )
      {
        *a9 = 1;
        v15 = 0;
      }
      else
      {
        v27 = **a6;
        ContainerChanges = ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x44));
        v32 = v30 - v31;
        sub_488AA0((void **)a6, (BSExtraDataVtbl *)LODWORD(v32), ContainerChanges, v27);
      }
    }
    v18 = (int *)a6[2];
  }
  if ( v15 )
  {
    v19 = (_DWORD *)(a1 + 0x5C);
    (*(void (__usercall **)(int@<ecx>, TESFullName *, int, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)(a1 + 0x5C) + 0x34))(
      a1 + 0x5C,
      &v15->fullName,
      v28,
      a5,
      a4,
      a3);
    if ( a7 )
      v20 = a7 + 0x68;
    else
      v20 = 0;
    a5 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*v19 + 0x3C))(v19, v20);
    MagicCaster_UseActiveMagicItem(v19, a3, a5, a4, (int)v18);
  }
  if ( v34 )
  {
    v21 = (_DWORD *)(a1 + 0x5C);
    (*(void (__usercall **)(int@<ecx>, bool (__thiscall **)(BSExtraData *, BSExtraData *), int, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)(a1 + 0x5C) + 0x34))(
      a1 + 0x5C,
      &v34[4].CompareTo,
      v28,
      a5,
      a4,
      a3);
    if ( a7 )
      v22 = a7 + 0x68;
    else
      v22 = 0;
    a5 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*v21 + 0x3C))(v21, v22);
    MagicCaster_UseActiveMagicItem(v21, a3, a5, a4, (int)v18);
    if ( a6 )
      sub_484E50(a6, (char)v18, a3, a4, a5);
  }
  if ( v33 )
  {
    v23 = (_DWORD *)(a1 + 0x5C);
    (*(void (__usercall **)(int@<ecx>, int, int, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)(a1 + 0x5C) + 0x34))(
      a1 + 0x5C,
      v33 + 0x18,
      v28,
      a5,
      a4,
      a3);
    if ( a7 )
      v24 = a7 + 0x68;
    else
      v24 = 0;
    v25 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*v23 + 0x3C))(v23, v24);
    MagicCaster_UseActiveMagicItem(v23, a3, v25, a4, (int)v18);
  }
  return 1;
}
