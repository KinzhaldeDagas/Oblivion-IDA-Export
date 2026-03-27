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
    v2 = (*(int (__thiscall **)(volatile LONG *))(*a1 + 8))(a1);
    v3 = v2;
    if ( v2 )
    {
      if ( a2 )
      {
        v4 = 0;
        if ( *(_WORD *)(v2 + 0xB6) )
        {
          do
          {
            v5 = *(NiNode **)(*(_DWORD *)(v3 + 0xB0) + 4 * v4);
            if ( v5 )
            {
              NiPropertyByID = NiNode_GetNiPropertyByID(v5, 4);
              v7 = NiPropertyByID;
              if ( NiPropertyByID )
                NiPropertyByID = (NiProperty *)((*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xE);
            }
            else
            {
              v7 = 0;
              NiPropertyByID = 0;
            }
            v8 = NiPropertyByID != 0 ? v7 : 0;
            if ( v8 )
            {
              if ( v8 == a2 )
              {
                (*(void (__thiscall **)(int, volatile LONG **, unsigned int))(*(_DWORD *)v3 + 0x8C))(v3, &a1, v4);
                if ( a1 )
                {
                  v9 = a1;
                  if ( !InterlockedDecrement(a1 + 1) )
                    (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
                }
              }
            }
            ++v4;
          }
          while ( *(unsigned __int16 *)(v3 + 0xB6) > v4 );
        }
        v10 = dword_B46010 - 1;
        v11 = dword_B46010 == 1;
        dword_B46010 = v10;
        if ( v10 < 0 || v11 )
        {
          v12 = dword_B46014;
          if ( dword_B46014 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
            {
              if ( v12 )
                (**(void (__thiscall ***)(int, int))v12)(v12, 1);
            }
            dword_B46014 = 0;
          }
          dword_B46010 = 0;
        }
      }
    }
  }
}
