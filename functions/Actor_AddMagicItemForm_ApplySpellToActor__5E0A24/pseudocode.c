int __userpurge Actor_AddMagicItemForm_::ApplySpellToActor@<eax>(int a1@<ebp>, int a2@<esi>, int a3, int a4)
{
  void (__thiscall *v4)(int, int, _DWORD); // edx
  int v5; // esi
  int v7; // [esp+0h] [ebp-4h]

  if ( !(unsigned __int8)MagicTarget_HasMagicItem((void *)(a2 + 0x68), v7) )
  {
    v4 = **(void (__thiscall ***)(int, int, _DWORD))(a2 + 0x5C);
    v5 = a2 + 0x5C;
    v4(v5, a1, 0);
    (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v5 + 4))(v5, a1, a4, 0);
  }
  return Actor_AddMagicItemForm_::Done(a3);
}
