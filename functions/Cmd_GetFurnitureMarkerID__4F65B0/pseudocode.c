char __usercall Cmd_GetFurnitureMarkerID@<al>(double a1@<st1>, double a2@<st0>, Actor *a3, int a4, int a5, double *a6)
{
  Actor *v7; // ebx
  double v8; // st5
  bool v9; // zf
  char result; // al
  int v11; // [esp+24h] [ebp+10h]

  v7 = 0; /*0x4f65bd*/
  *a6 = 0.0; /*0x4f65bf*/
  if ( a3 ) /*0x4f65c3*/
  {
    if ( a3->vtbl->super.super.IsActor((TESObjectREFR *)a3) ) /*0x4f65cf*/
    {
      v7 = a3; /*0x4f65e0*/
      v11 = ((int (__thiscall *)(LowProcess *))a3->members.super.process->GetFurnitureMarkerID)(a3->members.super.process);// MEF v30 verified ActorWithoutProcessCTD site: Actor +0x58 is dereferenced without a null test. Null uses existing no-result path 0x004F65F8; non-null resumes at 0x004F65DA. /*0x4f65e6*/
      v8 = (double)v11; /*0x4f65ea*/
      if ( v11 < 0 ) /*0x4f65ee*/
        v8 = v8 + flt_A2FC78; /*0x4f65f0*/
      *a6 = v8; /*0x4f65f6*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f65f8*/
    Interface_ConsolePrint("GetFurnitureMarkerID >> %0.2f", *a6); /*0x4f660e*/
  v9 = ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, double@<st0>, double@<st1>))v7->vtbl->Unk_D6)(v7, a2, a1) == 0; /*0x4f6622*/
  result = 1; /*0x4f6624*/
  if ( !v9 ) /*0x4f6626*/
    *a6 = -*a6; /*0x4f662c*/
  return result; /*0x4f662e*/
}
