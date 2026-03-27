char __usercall IsRunning@<al>(double a1@<st1>, double a2@<st0>, Actor *a3, int a4, int a5, double *a6)
{
  Actor *v6; // esi
  void *v7; // eax
  const char *v8; // eax
  void *v10; // eax
  const char *v11; // eax

  *a6 = 0.0;
  v6 = 0;
  if ( a3 )
  {
    if ( a3->vtbl->super.super.IsActor((TESObjectREFR *)a3) )
      v6 = a3;
  }
  if ( (((int (__usercall *)@<eax>(LowProcess *@<ecx>, double@<st0>, double@<st1>))v6->members.super.process->GetMovementFlags)(
          v6->members.super.process,
          a2,
          a1)
      & 0x200) != 0 )
    *a6 = 1.0;
  if ( !IsConsoleMode )
    return 1;
  if ( 0.0 == *a6 )
  {
    v10 = OblivionDynamicCast(
            v6,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESFullName `RTTI Type Descriptor',
            0);
    if ( !v10 || (v11 = *((const char **)v10 + 1)) == 0 )
      v11 = EmptyString;
    Interface_ConsolePrint("%s is not running", v11);
    return 1;
  }
  v7 = OblivionDynamicCast(
         v6,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFullName `RTTI Type Descriptor',
         0);
  if ( !v7 || (v8 = *((const char **)v7 + 1)) == 0 )
    v8 = EmptyString;
  Interface_ConsolePrint("%s is running", v8);
  return 1;
}
