void __userpurge MobileObject_PreLoadModifiedForm(
        int a1@<ecx>,
        int a2@<ebx>,
        char a3@<bpl>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        int a7)
{
  int v8; // ecx
  UInt32 v9; // eax
  int v10; // ecx
  int v11; // eax
  void (__thiscall ***v12)(_DWORD, int); // ecx

  if ( (a7 & 0x8000000) != 0 )
  {
    UnequipWeapon((TESObjectREFR *)a1, a2, a7, a4, a5, a6);
    sub_4DCCF0((TESObjectREFR *)a1, a3, a4, a5, a6);
    a6 = sub_4DC8F0((TESObjectREFR *)a1, a6, a4, a5, a3, 0);
    UnequipLight((TESObjectREFR *)a1, a4, a5, a6);
  }
  TESObjectREFR_PreLoadModifiedForm((Actor *)a1, a2, a3, a4, a5, a6, a7);
  v8 = *(_DWORD *)(a1 + 0x58);
  if ( v8 )
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 0x404))(v8, a7, a1);
  v9 = SaveLoad_CurrentSavegame->unk030[5];
  if ( (v9 == 0x60000000 || v9 == 0x7FFFF000) && (SaveLoad_CurrentSavegame->flags & 0x40) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 0x58);
    if ( v10 )
    {
      if ( (*(_DWORD *)(a1 + 8) & 0x800) != 0 || (*(_DWORD *)(a1 + 8) & 0x20) != 0 )
      {
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
        sub_674550(a3, a4, a5, a6, a1, v11);
        v12 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x58);
        if ( v12 )
          (**v12)(v12, 1);
        *(_DWORD *)(a1 + 0x58) = 0;
      }
    }
  }
}
