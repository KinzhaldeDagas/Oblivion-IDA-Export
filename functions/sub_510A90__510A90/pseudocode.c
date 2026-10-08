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
  bool v9; // zf
  int v10; // eax
  ActorAnimData *v11; // edi
  signed int j; // esi
  int v13; // eax
  NiNode *v14; // eax
  NiNode *v15; // esi
  NiAVObject *ChildAtIndex; // eax
  NiObject *v17; // eax
  unsigned int i; // ecx
  int v19; // edx

  *a9 = 0.0; /*0x510a97*/
  if ( a5 ) /*0x510aa0*/
  {
    v9 = (*(int (__usercall **)@<eax>(int *@<ecx>, double@<st0>, double@<st1>))(*a5 + 0x164))(a5, a2, a1) == 0; /*0x510ab2*/
    v10 = *a5; /*0x510ab4*/
    if ( v9 ) /*0x510ab8*/
    {
      v13 = (*(int (__thiscall **)(int *))(v10 + 0x154))(a5); /*0x510aeb*/
      if ( v13 ) /*0x510aef*/
      {
        v14 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13); /*0x510af8*/
        v15 = v14; /*0x510afa*/
        if ( v14 ) /*0x510afe*/
        {
          if ( v14->members.children.end ) /*0x510b00*/
          {
            if ( *v14->members.children.data ) /*0x510b10*/
            {
              if ( NiNode_GetChildAtIndex(v14, 0)->members.super.m_controller ) /*0x510b1e*/
              {
                ChildAtIndex = NiNode_GetChildAtIndex(v15, 0); /*0x510b28*/
                v17 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, (NiObject *)ChildAtIndex->members.super.m_controller); /*0x510b36*/
                if ( v17 ) /*0x510b40*/
                {
                  for ( i = 0; i < HIWORD(v17[8].members.m_uiRefCount); ++i ) /*0x510b44*/
                  {
                    v19 = *((_DWORD *)&v17[8].__vftable->super.Destructor + i); /*0x510b4f*/
                    if ( v19 ) /*0x510b54*/
                    {
                      if ( *(_DWORD *)(v19 + 0x44) ) /*0x510b56*/
                        *a9 = 1.0; /*0x510b5c*/
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
      v11 = (ActorAnimData *)(*(int (__thiscall **)(int *))(v10 + 0x164))(a5); /*0x510ac3*/
      for ( j = 0; j < 5; ++j ) /*0x510ac5*/
      {
        if ( ActorAnimData_GetNormalizedSequenceSlot(v11, j) ) /*0x510aca*/
          *a9 = 1.0; /*0x510ad5*/
      }
    }
    if ( MEMORY[0xB361AC] ) /*0x510b6b*/
      Interface_ConsolePrint("IsAnimPlaying -> %1.0f", *a9); /*0x510b81*/
  }
  return 1; /*0x510b89*/
}
