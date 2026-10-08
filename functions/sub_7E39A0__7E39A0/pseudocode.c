void __cdecl sub_7E39A0(volatile LONG *a1, NiProperty *a2)
{
  int v2; // eax
  int v3; // ebx
  unsigned int v4; // edi
  NiNode *v5; // ecx
  NiProperty *NiPropertyByID; // eax
  NiProperty *v7; // esi
  NiProperty *v8; // eax
  volatile LONG *v9; // esi
  int v10; // eax
  bool v11; // zf
  int v12; // esi

  if ( a1 )
  {
    v2 = (*(int (__thiscall **)(volatile LONG *))(*a1 + 8))(a1); /*0x7e39b2*/
    v3 = v2; /*0x7e39b4*/
    if ( v2 )
    {
      if ( a2 )
      {
        v4 = 0; /*0x7e39d2*/
        if ( *(_WORD *)(v2 + 0xB6) )
        {
          do
          {
            v5 = *(NiNode **)(*(_DWORD *)(v3 + 0xB0) + 4 * v4); /*0x7e39e6*/
            if ( v5 ) /*0x7e39eb*/
            {
              NiPropertyByID = NiNode_GetNiPropertyByID(v5, 4); /*0x7e39ef*/
              v7 = NiPropertyByID; /*0x7e39f4*/
              if ( NiPropertyByID ) /*0x7e39f8*/
                NiPropertyByID = (NiProperty *)((*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xE); /*0x7e3a13*/
            }
            else
            {
              v7 = 0; /*0x7e39fc*/
              NiPropertyByID = 0; /*0x7e39fe*/
            }
            v8 = NiPropertyByID != 0 ? v7 : 0;
            if ( v8 ) /*0x7e3a1b*/
            {
              if ( v8 == a2 ) /*0x7e3a21*/
              {
                (*(void (__thiscall **)(int, volatile LONG **, unsigned int))(*(_DWORD *)v3 + 0x8C))(v3, &a1, v4); /*0x7e3a33*/
                if ( a1 ) /*0x7e3a3b*/
                {
                  v9 = a1; /*0x7e3a3d*/
                  if ( !InterlockedDecrement(a1 + 1) ) /*0x7e3a43*/
                    (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1); /*0x7e3a59*/
                }
              }
            }
            ++v4; /*0x7e3a62*/
          }
          while ( *(unsigned __int16 *)(v3 + 0xB6) > v4 );
        }
        v10 = unk_B46010 - 1; /*0x7e3a72*/
        v11 = unk_B46010 == 1; /*0x7e3a75*/
        unk_B46010 = v10; /*0x7e3a77*/
        if ( v10 < 0 || v11 ) /*0x7e3a7c*/
        {
          v12 = unk_B46014; /*0x7e3a7e*/
          if ( unk_B46014 ) /*0x7e3a7e*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x7e3a8c*/
            {
              if ( v12 ) /*0x7e3a98*/
                (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7e3aa2*/
            }
            unk_B46014 = 0; /*0x7e3aa4*/
          }
          unk_B46010 = 0; /*0x7e3aae*/
        }
      }
    }
  }
}
