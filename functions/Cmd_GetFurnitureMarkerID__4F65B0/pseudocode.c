char __usercall Cmd_GetFurnitureMarkerID@<al>(double a1@<st1>, double a2@<st0>, Actor *a3, int a4, int a5, double *a6)
{
  Actor *v7; // ebx
  double v8; // st5
  bool v9; // zf
  char result; // al
  int v11; // [esp+24h] [ebp+10h]

  v7 = 0;
  *a6 = 0.0;
  if ( a3 )
  {
    if ( a3->vtbl->super.super.IsActor((TESObjectREFR *)a3) )
    {
      v7 = a3;
      v11 = ((int (__thiscall *)(LowProcess *))a3->members.super.process->GetFurnitureMarkerID)(a3->members.super.process);
      v8 = (double)v11;
      if ( v11 < 0 )
        v8 = v8 + flt_A2FC78;
      *a6 = v8;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetFurnitureMarkerID >> %0.2f", *a6);
  v9 = ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, double@<st0>, double@<st1>))v7->vtbl->Unk_D6)(v7, a2, a1) == 0;
  result = 1;
  if ( !v9 )
    *a6 = -*a6;
  return result;
}
