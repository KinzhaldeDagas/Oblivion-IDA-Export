int __thiscall sub_4A6070(int *this, int a2, int a3)
{
  int *v3; // edi
  int result; // eax
  int v5; // esi
  int v6; // eax
  bool v7; // zf

  if ( this ) /*0x4a6073*/
    v3 = this + 1; /*0x4a6075*/
  else
    v3 = 0; /*0x4a607a*/
  result = 0; /*0x4a607c*/
  if ( v3 ) /*0x4a6080*/
  {
    while ( 1 ) /*0x4a6090*/
    {
      v5 = *v3; /*0x4a6090*/
      if ( !*v3 ) /*0x4a6094*/
        return 0; /*0x4a60d0*/
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(*v3) + 0xC) == a2 ) /*0x4a60a2*/
      {
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0xC))(v5); /*0x4a60ab*/
        if ( a3 < 0 ) /*0x4a60af*/
        {
          v7 = v6 == 0; /*0x4a60c3*/
        }
        else
        {
          if ( !v6 ) /*0x4a60b3*/
            goto LABEL_12; /*0x4a60b3*/
          v7 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0xC))(v5) + 0xC) == a3; /*0x4a60be*/
        }
        if ( v7 ) /*0x4a60c5*/
          return v5; /*0x4a60d7*/
      }
LABEL_12:
      v3 = (int *)v3[1]; /*0x4a60c7*/
      if ( !v3 ) /*0x4a60cc*/
        return 0; /*0x4a60cc*/
    }
  }
  return result; /*0x4a60d3*/
}
