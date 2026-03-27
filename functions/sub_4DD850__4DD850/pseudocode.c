void __usercall sub_4DD850(
        int a1@<ecx>,
        int a2@<ebx>,
        char a3@<bpl>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>)
{
  TESObjectREFR *v7; // edi
  int v8; // edx
  LowProcess *v9; // eax
  LowProcess *v10; // eax
  int v11; // eax
  signed int v12; // eax
  BSExtraDataVtbl *v13; // eax
  void (__thiscall *Destructor)(BSExtraData *); // eax
  _DWORD *ShadowSceneNode; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  double v17; // st7
  BSExtraData *i; // esi
  BSExtraDataVtbl *v19; // edi
  int v20; // [esp+2Ch] [ebp-20h]

  if ( (*(_DWORD *)(a1 + 8) & 0x800) != 0 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x90))(a1, 1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x40))(a1, 0x40000000);
    TESForm_SetEnabled_((TESForm *)a1, 0);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x184))(a1, 1);
    v7 = 0;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x188))(a1) )
    {
      v7 = (TESObjectREFR *)a1;
      if ( !*(_DWORD *)(a1 + 0x58) )
      {
        v9 = (LowProcess *)FormHeapAlloc(0x90u);
        if ( v9 )
          v10 = LowProcess::LowProcess(v9);
        else
          v10 = 0;
        *(_DWORD *)(a1 + 0x58) = v10;
        sub_673A90(a1, 3, 0, 0, 0);
      }
    }
    v11 = *(_DWORD *)(a1 + 0x40);
    if ( v11 )
    {
      if ( *(_BYTE *)(v11 + 0x26) == 6
        && !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1)
        && !sub_4354F0(ModelLoaderPtr, a1) )
      {
        if ( v7 )
        {
          if ( v7->vtbl->IsActor(v7) )
            v7->vtbl->IsParalyzed(v7);
        }
        sub_4D9310((char *)a1, 1);
        if ( (*(_DWORD *)(a1 + 8) & 0x20) == 0 )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) )
          {
            if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x1A
              || *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x12
              || !sub_4364E0((int *)a1) )
            {
              v12 = sub_440C80(TES, *(TESObjectCELL **)(a1 + 0x40), 0);
              sub_438060((_DWORD **)ModelLoaderPtr, a3, a4, a5, a6, (TESObjectREFR *)a1, v12);
            }
          }
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1) )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) )
          {
            if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x1A )
            {
              v13 = sub_41E650((ExtraDataList *)(a1 + 0x44));
              if ( v13 )
              {
                Destructor = v13->Destructor;
                if ( Destructor )
                {
                  v20 = (int)Destructor;
                  ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
                  sub_7C6FF0(ShadowSceneNode, v20);
                }
              }
            }
          }
        }
      }
    }
    if ( v7 )
    {
      ((void (__thiscall *)(TESObjectREFR *))v7->vtbl[1].super.LoadForm)(v7);
      if ( v7->vtbl->IsActor(v7) )
      {
        vtbl = v7[1].vtbl;
        if ( vtbl )
        {
          v17 = ((double (__thiscall *)(TESObjectREFRVtbl *, TESObjectREFR *, int))*((_DWORD *)vtbl->super.super.InitializeComponent
                                                                                   + 5))(
                  vtbl,
                  v7,
                  1);
          a6 = EvaluatePackage(v7, a2, a3, (int)v7, v17, a4, a5);
          if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))v7[1].vtbl->super.super.InitializeComponent + 2))(v7[1].vtbl) )
            a6 = ((double (__thiscall *)(TESObjectREFR *, _DWORD))v7->vtbl[1].super.Unk_06)(v7, 0.0);
        }
      }
    }
    sub_665260((TESObjectREFR *)TESDataHandler_g_PlayerRef, a6, v8, (PlayerCharacter *)a1);
    for ( i = sub_4203A0((ExtraDataList *)(a1 + 0x44)); i; i = *(BSExtraData **)&i->members.type )
    {
      if ( !*(_DWORD *)&i->members.type && !i->vtbl )
        break;
      v19 = i->vtbl;
      if ( sub_420340((ExtraDataList *)&i->vtbl[8].CompareTo) )
        sub_4E4690(v19);
      else
        sub_4DD850(v19);
    }
  }
}
