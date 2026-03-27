void __cdecl sub_7F4420(int a1, NiProperty *a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  NiNode *v4; // ecx
  NiProperty *NiPropertyByID; // eax
  NiProperty *v6; // esi
  NiProperty *v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // esi
  int v9; // eax
  bool v10; // zf
  int v11; // esi

  v2 = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      v3 = 0;
      if ( *(_WORD *)(a1 + 0xB8) )
      {
        do
        {
          if ( *(unsigned __int16 *)(v2 + 0xB6) > v3 && (v4 = *(NiNode **)(*(_DWORD *)(v2 + 0xB0) + 4 * v3)) != 0 )
          {
            NiPropertyByID = NiNode_GetNiPropertyByID(v4, 4);
            v6 = NiPropertyByID;
            if ( NiPropertyByID )
              NiPropertyByID = (NiProperty *)((*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xD);
          }
          else
          {
            v6 = 0;
            NiPropertyByID = 0;
          }
          v7 = NiPropertyByID != 0 ? v6 : 0;
          if ( v7 )
          {
            if ( v7 == a2 )
            {
              (*(void (__thiscall **)(int, int *, unsigned int))(*(_DWORD *)v2 + 0x8C))(v2, &a1, v3);
              if ( a1 )
              {
                v8 = (void (__thiscall ***)(_DWORD, int))a1;
                if ( !InterlockedDecrement((volatile LONG *)(a1 + 4)) )
                  (**v8)(v8, 1);
              }
            }
          }
          ++v3;
        }
        while ( v3 < *(unsigned __int16 *)(v2 + 0xB8) );
      }
      v9 = dword_B46900 - 1;
      v10 = dword_B46900 == 1;
      dword_B46900 = v9;
      if ( v9 < 0 || v10 )
      {
        v11 = dword_B4690C;
        if ( dword_B4690C )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
          {
            if ( v11 )
              (**(void (__thiscall ***)(int, int))v11)(v11, 1);
          }
          dword_B4690C = 0;
        }
        dword_B46900 = 0;
      }
    }
  }
}
