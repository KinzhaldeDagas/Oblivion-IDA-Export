int __userpurge MobileObject_LoadModifiedForm@<eax>(
        _DWORD *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  int v8; // ecx
  int v9; // eax
  void (__thiscall ***v10)(_DWORD, int); // ecx
  int v12; // ecx
  HighProcess *v13; // eax
  HighProcess *v14; // eax
  int v15; // ecx
  MiddleHighProcess *v16; // eax
  int v17; // ecx
  MiddleLowProcess *v18; // eax
  int v19; // ecx
  LowProcess *v20; // eax
  int v21; // [esp-10h] [ebp-34h]
  size_t v22; // [esp-4h] [ebp-28h]
  char v23; // [esp+13h] [ebp-11h] BYREF
  HighProcess *v24; // [esp+14h] [ebp-10h]
  int v25; // [esp+20h] [ebp-4h]

  LODWORD(v22) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v23, v22);
  switch ( v23 )
  {
    case 0xFF:
      v8 = a1[0x16];
      if ( !v8 )
        goto MobileObject_LoadModifiedForm___def_659CD5;
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
      sub_674550(a2, a3, a4, a5, (int)a1, v9);
      v10 = (void (__thiscall ***)(_DWORD, int))a1[0x16];
      if ( v10 )
        (**v10)(v10, 1);
      a1[0x16] = 0;
      return MobileObject_LoadModifiedForm_::def_659CD5(a6, a7);
    case 0:
      v12 = a1[0x16];
      if ( v12 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12) )
        {
          (*(void (__thiscall **)(_DWORD *))(*a1 + 0x1A4))(a1);
          return MobileObject_LoadModifiedForm_::def_659CD5(a6, a7);
        }
MobileObject_LoadModifiedForm___def_659CD5:
        JUMPOUT(0x659EA3);
      }
      v13 = (HighProcess *)FormHeapAlloc(0x2ECu);
      v24 = v13;
      v25 = 0;
      if ( v13 )
        v14 = HighProcess::HighProcess(v13);
      else
        v14 = 0;
      v21 = 0;
      goto LABEL_34;
    case 1:
      v15 = a1[0x16];
      if ( !v15 )
      {
        v16 = (MiddleHighProcess *)FormHeapAlloc(0x18Cu);
        v24 = (HighProcess *)v16;
        v25 = 1;
        if ( v16 )
          v14 = (HighProcess *)MiddleHighProcess::MiddleHighProcess(v16);
        else
          v14 = 0;
        v21 = 1;
        goto LABEL_34;
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15) == 1 )
        goto MobileObject_LoadModifiedForm___def_659CD5;
      (*(void (__thiscall **)(_DWORD *))(*a1 + 0x1B0))(a1);
      return MobileObject_LoadModifiedForm_::def_659CD5(a6, a7);
    case 2:
      v17 = a1[0x16];
      if ( !v17 )
      {
        v18 = (MiddleLowProcess *)FormHeapAlloc(0xA8u);
        v24 = (HighProcess *)v18;
        v25 = 2;
        if ( v18 )
          v14 = (HighProcess *)MiddleLowProcess::MiddleLowProcess(v18);
        else
          v14 = 0;
        v21 = 2;
        goto LABEL_34;
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 8))(v17) == 2 )
        goto MobileObject_LoadModifiedForm___def_659CD5;
      (*(void (__thiscall **)(_DWORD *))(*a1 + 0x1AC))(a1);
      return MobileObject_LoadModifiedForm_::def_659CD5(a6, a7);
    case 3:
      v19 = a1[0x16];
      if ( v19 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19) == 3 )
          goto MobileObject_LoadModifiedForm___def_659CD5;
        (*(void (__thiscall **)(_DWORD *))(*a1 + 0x1A8))(a1);
        return MobileObject_LoadModifiedForm_::def_659CD5(a6, a7);
      }
      else
      {
        v20 = (LowProcess *)FormHeapAlloc(0x90u);
        v24 = (HighProcess *)v20;
        v25 = 3;
        if ( v20 )
          v14 = (HighProcess *)LowProcess::LowProcess(v20);
        else
          v14 = 0;
        v21 = 3;
LABEL_34:
        v25 = 0xFFFFFFFF;
        a1[0x16] = v14;
        sub_673A90((int)a1, v21, 0, 0, 0);
        return MobileObject_LoadModifiedForm_::def_659CD5(a6, a7);
      }
    default:
      goto MobileObject_LoadModifiedForm___def_659CD5;
  }
}
