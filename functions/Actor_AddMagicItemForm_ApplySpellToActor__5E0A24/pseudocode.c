char __userpurge Actor_AddMagicItemForm_::ApplySpellToActor@<al>(
        int a1@<ebp>,
        int a2@<esi>,
        char a3@<bl>,
        int a4,
        int a5,
        int a6)
{
  void (__thiscall *v6)(int, int, _DWORD); // edx
  int v7; // esi
  int v9; // [esp+0h] [ebp-4h]

  if ( !(unsigned __int8)MagicTarget_HasMagicItem((void *)(a2 + 0x68), v9) ) /*0x5e0a2c*/
  {
    v6 = **(void (__thiscall ***)(int, int, _DWORD))(a2 + 0x5C); /*0x5e0a38*/
    v7 = a2 + 0x5C; /*0x5e0a3a*/
    a3 = 1; /*0x5e0a42*/
    v6(v7, a1, 0); /*0x5e0a44*/
    (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v7 + 4))(v7, a1, a6, 0); /*0x5e0a55*/
  }
  return Actor_AddMagicItemForm_::Done(a3, a4);
}
