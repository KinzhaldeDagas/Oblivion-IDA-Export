void __usercall ScriptEffect_Apply(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  char *v5; // ecx
  char **EventList; // eax
  int v7; // ecx
  TESObjectREFR *v8; // eax
  char **v9; // [esp-4h] [ebp-8h]

  v5 = *(char **)(a1 + 0x38);
  if ( v5 )
  {
    EventList = Script_CreateEventList(v5);
    v7 = *(_DWORD *)(a1 + 0x20);
    *(_DWORD *)(a1 + 0x3C) = EventList;
    v9 = EventList;
    v8 = (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
    sub_4F9F00(*(Script **)(a1 + 0x38), a2, a3, v8, v9);
  }
}
