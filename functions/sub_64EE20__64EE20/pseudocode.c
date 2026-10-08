char __userpurge sub_64EE20@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, PlayerCharacter *a5)
{
  int v6; // eax
  BaseExtraList *v7; // ecx

  sub_5E4400(a5); /*0x64ee2a*/
  if ( v6 ) /*0x64ee31*/
  {
    v7 = 0; /*0x64ee35*/
    if ( *(_DWORD *)v6 ) /*0x64ee33*/
      v7 = **(BaseExtraList ***)v6; /*0x64ee3b*/
    Actor_EquipIngredient_(a5, a2, a3, a4, *(TESForm **)(v6 + 8), v7, 1); /*0x64ee46*/
    ++*(_DWORD *)(a1 + 4); /*0x64ee4b*/
  }
  return 0; /*0x64ee4f*/
}
