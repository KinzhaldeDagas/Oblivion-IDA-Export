char __cdecl sub_4F7370(TESChildCELL *a1, int a2, int a3, double *a4)
{
  char *Name; // eax
  char *v6; // eax

  *a4 = 0.0; /*0x4f737e*/
  if ( a1 ) /*0x4f7380*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))a1->vtbl + 0x64))(a1) ) /*0x4f738c*/
    {
      if ( Actor::GetDeadState((Actor *)a1) == 3 ) /*0x4f739c*/
        *a4 = 1.0; /*0x4f73a0*/
      if ( MEMORY[0xB361AC] ) /*0x4f73a2*/
      {
        if ( 0.0 != *a4 ) /*0x4f73b6*/
        {
          Name = TESObjectREFR_GetName((TESObjectREFR *)a1); /*0x4f73b8*/
          Interface_ConsolePrint("%s is unconscious", Name); /*0x4f73c3*/
          return 1; /*0x4f73cf*/
        }
        v6 = TESObjectREFR_GetName((TESObjectREFR *)a1); /*0x4f73d0*/
        Interface_ConsolePrint("%s is not unconscious", v6); /*0x4f73db*/
      }
    }
  }
  return 1; /*0x4f73cb*/
}
