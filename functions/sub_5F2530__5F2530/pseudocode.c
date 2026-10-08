// Fast-travel loop player AV update: clamps/restores health toward base+modifier over travel time.
void __userpurge sub_5F2530(PlayerCharacter *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  double AVModifierf; // st7
  LowProcess *process; // ecx
  float v7; // [esp+18h] [ebp-Ch]
  float v8; // [esp+1Ch] [ebp-8h]
  float v9; // [esp+1Ch] [ebp-8h]

  v7 = 0.0; /*0x5f2538*/
  if ( a1 == reference ) /*0x5f2544*/
  {
    AVModifierf = Player_GetAVModifierf((float *)reference, 0, 8); /*0x5f254a*/
  }
  else
  {
    process = a1->super.super.super.process; /*0x5f2551*/
    if ( !process ) /*0x5f2556*/
      goto LABEL_6; /*0x5f2556*/
    AVModifierf = ((double (__thiscall *)(LowProcess *, int))process->Unk_119)(process, 8); /*0x5f2562*/
  }
  v7 = AVModifierf; /*0x5f2564*/
LABEL_6:
  v8 = (double)Actor_GetBaseCalcAVi((int *)a1, a2, a3, (int)a1, 8) + v7; /*0x5f2568*/
  if ( v8 > ((double (__thiscall *)(PlayerCharacter *, int))a1->vtbl->super.GetAV_F)(a1, 8) ) /*0x5f259c*/
  {
    v9 = v8 - ((double (__thiscall *)(PlayerCharacter *, int))a1->vtbl->super.GetAV_F)(a1, 8); /*0x5f25b4*/
    if ( v9 > 0.0 ) /*0x5f25c7*/
      ((void (__thiscall *)(PlayerCharacter *, int, _DWORD, _DWORD))a1->vtbl->super.DamageAV_F)(a1, 8, LODWORD(v9), 0); /*0x5f25db*/
  }
}
