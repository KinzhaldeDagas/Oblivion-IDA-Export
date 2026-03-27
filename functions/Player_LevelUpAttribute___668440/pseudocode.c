void __userpurge Player_LevelUpAttribute_(int *a1@<ecx>, int edi0@<edi>, unsigned int a2)
{
  int BaseCalcAVi; // edi
  signed int v9; // eax
  int v10; // edi
  TESForm *ActorBaseForm; // eax

  if ( a2 <= 7 )
  {
    BaseCalcAVi = Actor_GetBaseCalcAVi(a1, (int)a1, edi0, a2, a2);
    v9 = sub_664970(a1, a2);
    v10 = sub_5480A0(v9) + BaseCalcAVi;
    if ( v10 > 0x64 )
      v10 = 0x64;
    ActorBaseForm = Actor_GetActorBaseForm((Actor *)a1, 0);
    ((void (__thiscall *)(TESForm *, unsigned int, int))ActorBaseForm->vtbl[1].Unk_16)(ActorBaseForm, a2, v10);
    sub_57A6F0(a2);
    sub_5E2670((PlayerCharacter *)a1, a2, 1);
  }
}
