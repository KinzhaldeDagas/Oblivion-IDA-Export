unsigned int __userpurge sub_6113B0@<eax>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        TESObjectREFR *a4,
        int a5,
        int a6)
{
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  unsigned int v9; // edi
  unsigned int *v10; // eax
  unsigned int v11; // esi
  int *v12; // ebp
  int v13; // esi
  TESObjectREFR *v14; // ecx
  char v15; // al
  char v16; // al
  int v17; // eax
  signed int v18; // eax
  char v19; // al
  int v20; // ebp
  char *Name; // eax
  bool v23; // [esp+Ch] [ebp-168h]
  int *v24; // [esp+20h] [ebp-154h]
  float v25; // [esp+24h] [ebp-150h]
  int v26; // [esp+28h] [ebp-14Ch]
  int *v27; // [esp+2Ch] [ebp-148h]
  char Format[300]; // [esp+38h] [ebp-13Ch] BYREF
  unsigned int v29; // [esp+170h] [ebp-4h]

  if ( (Actor::GetRaceIfNPC((Actor *)a1)->isPlayable & 1) != 0 )
  {
    if ( a6 == 0xFFFFFFFF )
    {
      v7 = (_DWORD *)FormHeapAlloc(0x30u);
      v29 = 0;
      v8 = v7 ? sub_6070B0(v7, 2u, (int)a4, (int)a1, 0, 0, a5) : 0;
      v29 = 0xFFFFFFFF;
    }
    else
    {
      v8 = (_DWORD *)sub_675BB0(&ActorProcessManager_ptr, 2u, a6);
    }
    v9 = (unsigned int)v8;
    if ( v8 )
    {
      if ( a1 != (TESObjectREFR *)TESDataHandler_g_PlayerRef
        && ((int (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_37)(a1, 0x1F) == 0x64
        && Actor_IsSneaking(a1)
        || (v12 = sub_67A290((int)&ActorProcessManager_ptr, a2, a3, v9), v24 = v12, (v27 = v12) == 0) )
      {
        v10 = (unsigned int *)sub_675BB0(&ActorProcessManager_ptr, 2u, a6);
      }
      else
      {
        do
        {
          v13 = *v12;
          if ( !*v12 )
            break;
          v14 = *(TESObjectREFR **)(v9 + 8);
          LOBYTE(v26) = 0;
          if ( (TESObjectREFR *)v13 == v14 || TESObjectREFR_GetOwner(v14) == (BSExtraDataVtbl *)v13 )
            LOBYTE(v26) = 1;
          sub_4DB760(a4);
          if ( v15 )
          {
            sub_4DB760((TESObjectREFR *)v13);
            if ( !v16 )
              continue;
          }
          sub_605F60((int *)v9, v13, v26);
          v25 = (float)v17;
          if ( !sub_5E6C60((Actor *)v13) )
            (*(void (__thiscall **)(int, _DWORD, float))(*(_DWORD *)v13 + 0x374))(
              v13,
              *(_DWORD *)(v9 + 0xC),
              COERCE_FLOAT(LODWORD(v25)));
          v18 = (*(int (__thiscall **)(int, TESObjectREFR *))(*(_DWORD *)v13 + 0x224))(v13, a1);
          if ( sub_605E20(v18, v13) )
          {
            (*(void (__thiscall **)(int, unsigned int, _DWORD, int, _DWORD))(*(_DWORD *)v13 + 0x310))(v13, v9, 0, 1, 0);
            sub_4DB760(a1);
            if ( !v19 )
              sub_605F00((_DWORD *)v9, (int)a1);
          }
          else
          {
            dword_B361C4 = a5;
            *(_DWORD *)(v13 + 0xE4) = *(_DWORD *)(v9 + 0xC);
            v20 = TESTopic::GEtTopic(2, 0xF);
            if ( *(_DWORD *)(v9 + 0xC) && sub_5EA050((TESObjectREFR *)v13, *(TESObjectREFR **)(v9 + 0xC), v23) )
              (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v13 + 0x32C))(
                v13,
                *(_DWORD *)(v9 + 0xC),
                0,
                0,
                0,
                0,
                1);
            else
              (*(void (__thiscall **)(_DWORD, int, int, _DWORD, _DWORD, int))(**(_DWORD **)(v13 + 0x58) + 0x1A4))(
                *(_DWORD *)(v13 + 0x58),
                v13,
                v20,
                0,
                0,
                1);
            v12 = v24;
            dword_B361C4 = 0;
          }
          Name = TESObjectREFR_GetName((TESObjectREFR *)v13);
          _sprintf(Format, "alarm Trespass sent to  %s ", Name);
          Interface_ConsolePrint(Format);
          v24 = (int *)v12[1];
          v12 = v24;
        }
        while ( v24 );
        BSSimpleList_Clear(v27);
        FormHeapFree((unsigned int)v27);
        if ( sub_605F30((_DWORD *)v9) )
        {
          sub_675B30(&ActorProcessManager_ptr, (_DWORD *)v9);
          FormHeapFree((unsigned int)v12);
          return *(_DWORD *)(v9 + 0x28);
        }
        v10 = (unsigned int *)sub_675BB0(&ActorProcessManager_ptr, 2u, a6);
      }
      v11 = (unsigned int)v10;
      if ( v10 == (unsigned int *)v9 )
      {
        if ( v10 )
        {
          sub_605E80(v10);
          FormHeapFree(v11);
        }
      }
      else
      {
        sub_605E80((unsigned int *)v9);
        FormHeapFree(v9);
      }
    }
  }
  return 0xFFFFFFFF;
}
