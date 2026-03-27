void __userpurge sub_5F2530(PlayerCharacter *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  double AVModifierf; // st7
  LowProcess *process; // ecx
  float v7; // [esp+18h] [ebp-Ch]
  float v8; // [esp+1Ch] [ebp-8h]
  float v9; // [esp+1Ch] [ebp-8h]

  v7 = 0.0;
  if ( a1 == TESDataHandler_g_PlayerRef )
  {
    AVModifierf = Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 8);
  }
  else
  {
    process = a1->super.super.super.process;
    if ( !process )
      goto LABEL_6;
    AVModifierf = ((double (__thiscall *)(LowProcess *, int))process->Unk_119)(process, 8);
  }
  v7 = AVModifierf;
LABEL_6:
  v8 = (double)Actor_GetBaseCalcAVi((int *)a1, a2, a3, (int)a1, 8) + v7;
  if ( v8 > ((double (__thiscall *)(PlayerCharacter *, int))a1->vtbl->super.GetAV_F)(a1, 8) )
  {
    v9 = v8 - ((double (__thiscall *)(PlayerCharacter *, int))a1->vtbl->super.GetAV_F)(a1, 8);
    if ( v9 > 0.0 )
      a1->vtbl->super.DamageAV_F((Actor *)a1, 8, COERCE_FLOAT(LODWORD(v9)), 0);
  }
}
