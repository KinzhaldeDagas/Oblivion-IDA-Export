// GetDisposition_Eval (index 76 / opcode 0x104C): for valid actor subject and Actor parameter, returns the subject's disposition toward that target. A global one-pair cache reuses the last result; non-actor inputs leave numeric result 0.
char __cdecl GetDisposition_Eval(TESObjectREFR *subject, TESObjectREFR *target, TESForm *param2, double *value)
{
  TESObjectREFR *v4; // esi
  TESObjectREFR *v5; // edi
  double v6; // st7
  char *v7; // eax
  char *Name; // [esp+0h] [ebp-18h]
  double v10; // [esp+4h] [ebp-14h]

  *value = 0.0; /*0x4f4e27*/
  v4 = 0; /*0x4f4e30*/
  if ( subject ) /*0x4f4e34*/
  {
    if ( subject->vtbl->IsActor(subject) ) /*0x4f4e40*/
      v4 = subject; /*0x4f4e46*/
  }
  v5 = 0; /*0x4f4e4d*/
  if ( target ) /*0x4f4e51*/
  {
    if ( target->vtbl->IsActor(target) ) /*0x4f4e5d*/
      v5 = target; /*0x4f4e63*/
  }
  if ( v4 ) /*0x4f4e68*/
  {
    if ( v5 ) /*0x4f4e6c*/
    {
      if ( v4 == (TESObjectREFR *)unk_B36180 && v5 == (TESObjectREFR *)unk_B36184 ) /*0x4f4e7c*/
      {
        *value = unk_B36188; /*0x4f4e84*/
      }
      else
      {
        v6 = (double)((int (__thiscall *)(TESObjectREFR *, TESObjectREFR *))v4->vtbl[1].super.Unk_1F)(v4, v5); /*0x4f4e9a*/
        unk_B36184 = (int)v5; /*0x4f4e9e*/
        unk_B36180 = (int)v4; /*0x4f4ea4*/
        *value = v6; /*0x4f4eaa*/
        unk_B36188 = v6; /*0x4f4ead*/
      }
      if ( MEMORY[0xB361AC] ) /*0x4f4eb3*/
      {
        v10 = *value; /*0x4f4ec4*/
        Name = TESObjectREFR_GetName(v5); /*0x4f4ecc*/
        v7 = TESObjectREFR_GetName(v4); /*0x4f4ecf*/
        Interface_ConsolePrint("%.20s disposition to %.20s is %.1f", v7, Name, v10); /*0x4f4eda*/
      }
    }
  }
  return 1; /*0x4f4ee6*/
}
