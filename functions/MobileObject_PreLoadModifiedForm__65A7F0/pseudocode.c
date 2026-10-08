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
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  void (__thiscall ***v12)(_DWORD, int); // ecx

  if ( (a7 & 0x8000000) != 0 ) /*0x65a7fe*/
  {
    UnequipWeapon((TESObjectREFR *)a1, a2, a7, a4, a5, a6); /*0x65a800*/
    TESObjectREFR_ClearEquippedAmmo3D((TESObjectREFR *)a1); /*0x65a807*/
    a6 = sub_4DC8F0((TESObjectREFR *)a1, a6, a4, a5, a3, 0); /*0x65a810*/
    UnequipLight((TESObjectREFR *)a1); /*0x65a817*/
  }
  TESObjectREFR_PreLoadModifiedForm((Actor *)a1, a2, a3, a4, a5, a6, a7); /*0x65a81f*/
  v8 = *(_DWORD *)(a1 + 0x58); /*0x65a824*/
  if ( v8 ) /*0x65a829*/
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 0x404))(v8, a7, a1); /*0x65a835*/
  v9 = *(_DWORD *)&g_TESSaveLoadGame->unknown1C[0x28]; /*0x65a83d*/
  if ( (v9 == 0x60000000 || v9 == 0x7FFFF000) && (g_TESSaveLoadGame->flags & 0x40) != 0 ) /*0x65a856*/
  {
    v10 = *(_DWORD *)(a1 + 0x58); /*0x65a858*/
    if ( v10 ) /*0x65a85d*/
    {
      if ( (*(_DWORD *)(a1 + 8) & 0x800) != 0 || (*(_DWORD *)(a1 + 8) & 0x20) != 0 ) /*0x65a871*/
      {
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x65a878*/
        sub_674550(a1, v11); /*0x65a881*/
        v12 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x58); /*0x65a886*/
        if ( v12 ) /*0x65a88b*/
          (**v12)(v12, 1); /*0x65a893*/
        *(_DWORD *)(a1 + 0x58) = 0; /*0x65a895*/
      }
    }
  }
}
