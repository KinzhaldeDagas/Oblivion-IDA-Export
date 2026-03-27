char __cdecl sub_690310(int a1, int a2, void **a3)
{
  int v3; // esi
  void **v4; // eax
  void **v5; // ebx
  unsigned __int16 *v6; // ebp
  int v7; // esi
  _DWORD *v8; // edi
  unsigned __int8 ***v9; // eax
  unsigned __int16 *v11; // [esp+14h] [ebp-10h]
  int v12; // [esp+28h] [ebp+4h]

  if ( a2 )
    v11 = (unsigned __int16 *)OblivionDynamicCast(
                                *(void **)(a2 + 8),
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                &TESBipedModelForm `RTTI Type Descriptor',
                                0);
  else
    v11 = 0;
  if ( a1 )
  {
    if ( v11 )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 0x68) + 8))(a1 + 0x68);
      v12 = v3;
      if ( v3 )
      {
        while ( *(_DWORD *)(v3 + 4) || *(_DWORD *)v3 )
        {
          v4 = (void **)OblivionDynamicCast(
                          *(void **)v3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
                          &BoundItemEffect `RTTI Type Descriptor',
                          0);
          v5 = v4;
          if ( v4 )
          {
            if ( v4 != a3 )
            {
              v6 = (unsigned __int16 *)OblivionDynamicCast(
                                         v4[0xE],
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         &TESObjectARMO `RTTI Type Descriptor',
                                         0);
              if ( v6 )
              {
                v7 = 0;
                v8 = v5 + 0x10;
                while ( !TESBipedModelForm_CoversSlot(v11, v7, 0)
                     || !TESBipedModelForm_CoversSlot(v6 + 0x32, v7, 0)
                     || *v8 )
                {
                  ++v7;
                  ++v8;
                  if ( v7 >= 0x10 )
                  {
                    v3 = v12;
                    goto LABEL_18;
                  }
                }
                v9 = (unsigned __int8 ***)FormHeapAlloc(0xCu);
                if ( v9 )
                  v5[v7 + 0x10] = sub_4844A0(v9, a2);
                else
                  v5[v7 + 0x10] = 0;
                return 1;
              }
            }
          }
LABEL_18:
          v3 = *(_DWORD *)(v3 + 4);
          v12 = v3;
          if ( !v3 )
            return 0;
        }
      }
    }
  }
  return 0;
}
