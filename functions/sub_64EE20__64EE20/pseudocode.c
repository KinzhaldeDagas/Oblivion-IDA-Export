char __userpurge sub_64EE20@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, PlayerCharacter *a5)
{
  int v7; // eax
  BaseExtraList *v8; // ecx

  sub_5E4400(a5);
  if ( v7 )
  {
    v8 = 0;
    if ( *(_DWORD *)v7 )
      v8 = **(BaseExtraList ***)v7;
    Actor_EquipIngredient_(a5, a2, a3, a4, *(TESForm **)(v7 + 8), v8, 1);
    ++*(_DWORD *)(a1 + 4);
  }
  return 0;
}
