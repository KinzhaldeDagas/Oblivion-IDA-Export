void __userpurge sub_69C850(_DWORD *ecx0@<ecx>, int a2@<ebx>, TESForm a1)
{
  int v4; // edi
  int *v5; // eax
  int v6; // ecx
  bool v7; // cf
  size_t v8; // [esp-10h] [ebp-1Ch]
  size_t v9; // [esp-8h] [ebp-14h]
  size_t v10; // [esp-4h] [ebp-10h]
  size_t v11; // [esp-4h] [ebp-10h]
  size_t v12; // [esp-4h] [ebp-10h]
  size_t v13; // [esp-4h] [ebp-10h]
  size_t v14; // [esp-4h] [ebp-10h]
  size_t v15; // [esp-4h] [ebp-10h]
  size_t v16; // [esp-4h] [ebp-10h]
  int v17; // [esp+0h] [ebp-Ch]
  int v18; // [esp+4h] [ebp-8h]
  int v19; // [esp+8h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h] BYREF

  sub_69C100((MagicFogProjectile *)ecx0);
  (*(void (__thiscall **)(_DWORD *))(*ecx0 + 0x148))(ecx0);
  sub_69F800(ecx0, a1.vtbl, *(_DWORD *)&a1.member.type);
  LODWORD(v10) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x1F), v10);
  LODWORD(v11) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x17), v11);
  LODWORD(v12) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x20), v12);
  LODWORD(v13) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x22, v13);
  LODWORD(v14) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x23), v14);
  if ( ecx0[0x22] == 1 )
  {
    LODWORD(v15) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&a1.member, v15);
    ecx0[0x26] = *(_DWORD *)&a1.member.type;
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x71u )
  {
    LODWORD(v15) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x21), v15);
    LODWORD(v16) = 2;
    TESForm_LoadDataFromCurrentSaveGame(&a1, v16);
    v4 = 0;
    if ( LOWORD(a1.vtbl) )
    {
      HIDWORD(v9) = a2;
      do
      {
        LODWORD(v9) = 4;
        TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&v19, v9, v17, v18, v19);
        LODWORD(v8) = 1;
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)&retaddr, v8);
        v5 = (int *)FormHeapAlloc(0xCu);
        if ( v5 )
        {
          v6 = ecx0[0x25];
          *v5 = v17;
          v5[1] = (unsigned __int8)retaddr;
          v5[2] = v6;
        }
        else
        {
          v5 = 0;
        }
        v7 = ++v4 < (unsigned int)(unsigned __int16)v19;
        ecx0[0x25] = v5;
      }
      while ( v7 );
    }
  }
}
