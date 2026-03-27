char __usercall sub_510A90@<al>(
        double a1@<st1>,
        double a2@<st0>,
        int a3,
        int a4,
        int *a5,
        int a6,
        int a7,
        int a8,
        double *a9)
{
  bool v11; // zf
  int v12; // eax
  ActorAnimData *v13; // edi
  int j; // esi
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // eax
  NiObject *v19; // eax
  unsigned int i; // ecx
  int v21; // edx

  *a9 = 0.0;
  if ( a5 )
  {
    v11 = (*(int (__usercall **)@<eax>(int *@<ecx>, double@<st0>, double@<st1>))(*a5 + 0x164))(a5, a2, a1) == 0;
    v12 = *a5;
    if ( v11 )
    {
      v15 = (*(int (__thiscall **)(int *))(v12 + 0x154))(a5);
      if ( v15 )
      {
        v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15);
        v17 = v16;
        if ( v16 )
        {
          if ( *(_WORD *)(v16 + 0xB6) )
          {
            if ( **(_DWORD **)(v16 + 0xB0) )
            {
              if ( *(_DWORD *)(sub_405790(v16, 0) + 0xC) )
              {
                v18 = sub_405790(v17, 0);
                v19 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v18 + 0xC));
                if ( v19 )
                {
                  for ( i = 0; i < HIWORD(v19[8].members.m_uiRefCount); ++i )
                  {
                    v21 = *((_DWORD *)&v19[8].__vftable->super.Destructor + i);
                    if ( v21 )
                    {
                      if ( *(_DWORD *)(v21 + 0x44) )
                        *a9 = 1.0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v13 = (ActorAnimData *)(*(int (__thiscall **)(int *))(v12 + 0x164))(a5);
      for ( j = 0; j < 5; ++j )
      {
        if ( sub_4706E0(v13, j) )
          *a9 = 1.0;
      }
    }
    if ( IsConsoleMode )
      Interface_ConsolePrint("IsAnimPlaying -> %1.0f", *a9);
  }
  return 1;
}
