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

  v2 = a1; /*0x7f4421*/
  if ( a1 )
  {
    if ( a2 )
    {
      v3 = 0; /*0x7f4439*/
      if ( *(_WORD *)(a1 + 0xB8) )
      {
        do
        {
          if ( *(unsigned __int16 *)(v2 + 0xB6) > v3 && (v4 = *(NiNode **)(*(_DWORD *)(v2 + 0xB0) + 4 * v3)) != 0 ) /*0x7f4466*/
          {
            NiPropertyByID = NiNode_GetNiPropertyByID(v4, 4); /*0x7f446a*/
            v6 = NiPropertyByID; /*0x7f446f*/
            if ( NiPropertyByID ) /*0x7f4473*/
              NiPropertyByID = (NiProperty *)((*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xD); /*0x7f448e*/
          }
          else
          {
            v6 = 0; /*0x7f4477*/
            NiPropertyByID = 0; /*0x7f4479*/
          }
          v7 = NiPropertyByID != 0 ? v6 : 0;
          if ( v7 ) /*0x7f4496*/
          {
            if ( v7 == a2 ) /*0x7f449c*/
            {
              (*(void (__thiscall **)(int, int *, unsigned int))(*(_DWORD *)v2 + 0x8C))(v2, &a1, v3); /*0x7f44ae*/
              if ( a1 ) /*0x7f44b6*/
              {
                v8 = (void (__thiscall ***)(_DWORD, int))a1; /*0x7f44b8*/
                if ( !InterlockedDecrement((volatile LONG *)(a1 + 4)) ) /*0x7f44be*/
                  (**v8)(v8, 1); /*0x7f44d4*/
              }
            }
          }
          ++v3; /*0x7f44dd*/
        }
        while ( v3 < *(unsigned __int16 *)(v2 + 0xB8) );
      }
      v9 = unk_B46900 - 1; /*0x7f44ed*/
      v10 = unk_B46900 == 1; /*0x7f44f0*/
      unk_B46900 = v9; /*0x7f44f2*/
      if ( v9 < 0 || v10 ) /*0x7f44f7*/
      {
        v11 = unk_B4690C; /*0x7f44f9*/
        if ( unk_B4690C ) /*0x7f44f9*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x7f4507*/
          {
            if ( v11 ) /*0x7f4513*/
              (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7f451d*/
          }
          unk_B4690C = 0; /*0x7f451f*/
        }
        unk_B46900 = 0; /*0x7f4529*/
      }
    }
  }
}
