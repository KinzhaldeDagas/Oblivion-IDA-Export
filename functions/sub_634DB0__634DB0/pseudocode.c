void __userpurge sub_634DB0(int *a1@<ecx>, int a2@<ebp>, TESObjectREFR *a3)
{
  int v4; // ebp
  ActorAnimData *v5; // eax
  ActorAnimData *v6; // ebx
  PowerListEntry *v7; // eax
  int v8; // ebx
  signed int v9; // eax
  int v10; // ebx
  signed int v11; // eax
  double v13; // [esp+18h] [ebp-8h]
  float v14; // [esp+24h] [ebp+4h]
  float v15; // [esp+28h] [ebp+8h]
  float v16; // [esp+28h] [ebp+8h]

  if ( flt_B36CC8 >= TesObjectREF_GetDistance(a3, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0) )
  {
    v4 = (*(int (__thiscall **)(int *))(*a1 + 0x184))(a1);
    v5 = a3->vtbl->GetAnimData(a3);
    v6 = v5;
    if ( v5 )
    {
      if ( sub_472EA0(v5) && !sub_5E6FA0(a3) && !sub_5E0F30(a3) && !a3->vtbl->HasFatigue(a3) )
      {
        v7 = sub_4706E0(v6, 0);
        if ( v7 && sub_51AF00((unsigned __int8 *)v7[0xD].data)
          || a3 != (TESObjectREFR *)TESDataHandler_g_PlayerRef
          && v4
          && (v8 = *(_DWORD *)(v4 + 0x18), v8 != 0xFFFFFFFF)
          && *(_DWORD *)(*(_DWORD *)(4 * v8 + 0xB152B0) + 4 * (*(int (__thiscall **)(int *))(*a1 + 0x180))(a1)) == 1 )
        {
          v15 = ((double (__thiscall *)(int *, int))*(_DWORD *)(*a1 + 0x220))(a1, a2);
          if ( v15 >= 0.0 || (v9 = sub_5E1F90(a3), sub_546770(v9) == *(float *)&SrcStr) )
          {
            v16 = v15 - flt_B33E9C;
            (*(void (__thiscall **)(int *, _DWORD))(*a1 + 0x224))(a1, LODWORD(v16));
          }
          else
          {
            (*(void (__thiscall **)(int *, TESObjectREFR *))(*a1 + 0x48))(a1, a3);
            v10 = *a1;
            v11 = sub_5E1F90(a3);
            v13 = sub_546770(v11);
            v14 = (double)(GetRandomLargeInteger_(0) % 0x1388) * dbl_A30E40 + v13;
            (*(void (__thiscall **)(int *, _DWORD))(v10 + 0x224))(a1, LODWORD(v14));
          }
        }
      }
    }
  }
}
