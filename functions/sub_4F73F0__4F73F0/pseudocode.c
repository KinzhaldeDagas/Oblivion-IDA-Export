char __cdecl sub_4F73F0(TESChildCELL *a1, int a2, int a3, double *a4)
{
  char *Name; // eax
  char *v6; // eax

  *a4 = 0.0; /*0x4f73fe*/
  if ( a1 ) /*0x4f7400*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))a1->vtbl + 0x64))(a1) ) /*0x4f740c*/
    {
      if ( Actor::GetDeadState((Actor *)a1) == 5 ) /*0x4f741c*/
        *a4 = 1.0; /*0x4f7420*/
      if ( MEMORY[0xB361AC] ) /*0x4f7422*/
      {
        if ( 0.0 != *a4 ) /*0x4f7436*/
        {
          Name = TESObjectREFR_GetName((TESObjectREFR *)a1); /*0x4f7438*/
          Interface_ConsolePrint("%s is restrained", Name); /*0x4f7443*/
          return 1; /*0x4f744f*/
        }
        v6 = TESObjectREFR_GetName((TESObjectREFR *)a1); /*0x4f7450*/
        Interface_ConsolePrint("%s is not restrained", v6); /*0x4f745b*/
      }
    }
  }
  return 1; /*0x4f744b*/
}
