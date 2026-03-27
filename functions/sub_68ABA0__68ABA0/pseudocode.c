char __userpurge sub_68ABA0@<al>(int *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR *a5)
{
  _BYTE *v6; // ebx
  _BYTE *v8; // ecx
  int *v9; // ebp
  TESObjectREFR *v10; // eax
  _BYTE *v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // eax
  void *v15; // eax
  int v16; // eax
  int v17; // ebx
  float *v18; // eax
  const char *v19; // eax
  const char *v20; // eax
  int v22; // [esp-4h] [ebp-138h]
  const char *v23; // [esp-4h] [ebp-138h]
  char v24; // [esp+17h] [ebp-11Dh]
  TESObjectREFR *v25; // [esp+18h] [ebp-11Ch]
  char Format[260]; // [esp+20h] [ebp-114h] BYREF
  unsigned int v27; // [esp+130h] [ebp-4h]

  v6 = 0;
  v24 = 0;
  if ( a5 )
  {
    v8 = (_BYTE *)a1[1];
    v9 = a1 + 1;
    if ( v8 && (v10 = (TESObjectREFR *)sub_68B0F0(v8), (v25 = v10) != 0) && GetTeleportExtraData(v10) )
    {
      (*(void (__thiscall **)(int *))(*a1 + 0x10))(a1);
      if ( ((int (__thiscall *)(TESObjectREFR *))a5->vtbl[2].super.Unk_0C)(a5) )
        sub_5F0410(a5, (int)v9);
      v11 = (_BYTE *)FormHeapAlloc(8u);
      v27 = 0;
      if ( v11 )
        v6 = sub_68B0C0(v11);
      v22 = *v9;
      v27 = 0xFFFFFFFF;
      sub_68B240(v6, v22);
      sub_689C10(a1);
      sub_4D8AF0((TESObjectCELL **)a5);
      v13 = v12;
      if ( ActivateRef(v25, a2, a3, a4, a5, 0, 0, 1) && (sub_4D8AF0((TESObjectCELL **)a5), v14 != v13)
        || (v15 = OblivionDynamicCast(
                    a5[1].vtbl,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                    &HighProcess `RTTI Type Descriptor',
                    0)) != 0
        && (*(int (__thiscall **)(void *))(*(_DWORD *)v15 + 0x47C))(v15) == 4 )
      {
        v24 = 1;
        if ( ((int (__thiscall *)(TESObjectREFR *))a5->vtbl[2].super.Unk_0C)(a5) )
        {
          v16 = ((int (__thiscall *)(TESObjectREFR *))a5->vtbl[2].super.Unk_0C)(a5);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 0x38C))(v16, 0);
          ((void (__thiscall *)(TESObjectREFR *, _DWORD))a5->vtbl[2].super.Unk_0D)(a5, 0);
        }
        if ( v6 )
        {
          sub_68B1C0((int)v6);
          FormHeapFree((unsigned int)v6);
        }
      }
      else
      {
        BSSimpleList_PushFront(v9, (int)v6);
        sub_5F7CF0((Actor *)a5, v25, 0);
      }
    }
    else
    {
      sub_689C10(a1);
      if ( a1[2] || *v9 )
      {
        v17 = (*((unsigned __int16 (__thiscall **)(TESObjectREFRVtbl *))a5[1].vtbl->super.super.InitializeComponent
               + 0xB0))(a5[1].vtbl);
        if ( *v9 )
          sub_68B110((float **)*v9);
        else
          v18 = &Vector3_InitValue_;
        (*(void (__thiscall **)(int *, TESObjectREFR *, float *, _DWORD))(*a1 + 0x14))(a1, a5, v18, 0);
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))a5->vtbl->Unk_60)(a5, 0);
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int))a5[1].vtbl->super.super.InitializeComponent + 0xB2))(
          a5[1].vtbl,
          v17);
      }
      v24 = 1;
    }
  }
  if ( srcObj == (TESChildCELL *)a5 )
  {
    v19 = "SUCCESS";
    if ( !v24 )
      v19 = "FAILED";
    v20 = (const char *)((int (__thiscall *)(TESObjectREFR *, const char *))a5->vtbl->super.GetEditorName)(a5, v19);
    _sprintf(Format, "Actor '%s' MoveToNextLowPathStep: %s.", v20, v23);
    Interface_ConsolePrint(Format);
  }
  return v24;
}
