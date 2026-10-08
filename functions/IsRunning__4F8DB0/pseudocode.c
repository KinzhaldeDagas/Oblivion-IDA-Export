char __usercall IsRunning@<al>(double a1@<st1>, double a2@<st0>, Actor *a3, int a4, int a5, double *a6)
{
  Actor *v6; // esi
  void *v7; // eax
  const char *v8; // eax
  void *v10; // eax
  const char *v11; // eax

  *a6 = 0.0; /*0x4f8db7*/
  v6 = 0; /*0x4f8dbf*/
  if ( a3 ) /*0x4f8dc3*/
  {
    if ( a3->vtbl->super.super.IsActor((TESObjectREFR *)a3) ) /*0x4f8dcf*/
      v6 = a3; /*0x4f8dd5*/
  }
  if ( (((int (__usercall *)@<eax>(LowProcess *@<ecx>, double@<st0>, double@<st1>))v6->members.super.process->GetMovementFlags)( /*0x4f8de8*/
          v6->members.super.process,
          a2,
          a1)
      & 0x200) != 0 )                           // MEF v30 verified ActorWithoutProcessCTD site: Actor +0x58 immediate vtable dereference in IsRunning. Null supplies EAX=0 to vanilla flag test at 0x004F8DE4; non-null resumes 0x004F8DDC.
    *a6 = 1.0; /*0x4f8dec*/
  if ( !MEMORY[0xB361AC] ) /*0x4f8df5*/
    return 1; /*0x4f8df5*/
  if ( 0.0 == *a6 ) /*0x4f8e0f*/
  {
    v10 = OblivionDynamicCast( /*0x4f8e3d*/
            v6,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESFullName `RTTI Type Descriptor',
            0);
    if ( !v10 || (v11 = *((const char **)v10 + 1)) == 0 ) /*0x4f8e4e*/
      v11 = EmptyString; /*0x4f8e50*/
    Interface_ConsolePrint("%s is not running", v11); /*0x4f8e5b*/
    return 1; /*0x4f8e65*/
  }
  v7 = OblivionDynamicCast( /*0x4f8e11*/
         v6,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFullName `RTTI Type Descriptor',
         0);
  if ( !v7 || (v8 = *((const char **)v7 + 1)) == 0 ) /*0x4f8e22*/
    v8 = EmptyString; /*0x4f8e24*/
  Interface_ConsolePrint("%s is running", v8); /*0x4f8e2f*/
  return 1; /*0x4f8e37*/
}
