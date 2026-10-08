void __thiscall sub_6786A0(_DWORD *this, int *a2, char a3)
{
  int *v3; // edi
  int v5; // esi
  int v6; // eax
  int ProcessLevel; // eax

  v3 = a2; /*0x6786a3*/
  while ( v3 ) /*0x6786ad*/
  {
    if ( !*v3 ) /*0x6786b4*/
      break; /*0x6786b8*/
    v5 = 0; /*0x6786c6*/
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)*v3 + 0x188))(*v3) ) /*0x6786c8*/
      v5 = *v3; /*0x6786ce*/
    v3 = (int *)v3[1]; /*0x6786d2*/
    if ( v5 ) /*0x6786d5*/
    {
      if ( a3 ) /*0x6786dc*/
      {
        v6 = *(_DWORD *)(v5 + 8); /*0x6786de*/
        if ( (v6 & 0x20) != 0 || (v6 & 0x800) != 0 ) /*0x6786f0*/
        {
          if ( *(_DWORD *)(v5 + 0x58) ) /*0x678714*/
          {
            ProcessLevel = Actor::GetProcessLevel((Actor *)v5); /*0x67871c*/
            sub_674550(v5, ProcessLevel); /*0x678728*/
            sub_659BC0((_DWORD *)v5); /*0x67872f*/
          }
        }
        else if ( (PlayerCharacter *)v5 != reference ) /*0x6786f8*/
        {
          if ( *(_DWORD *)(v5 + 0x58) ) /*0x6786fa*/
          {
            if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 0x1C4))(v5) ) /*0x67870a*/
              v3 = a2; /*0x678710*/
          }
        }
      }
      else
      {
        sub_6748B0(this, (MobileObject *)v5); /*0x678739*/
      }
    }
  }
}
