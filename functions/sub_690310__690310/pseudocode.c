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

  if ( a2 ) /*0x69033b*/
    v11 = (unsigned __int16 *)OblivionDynamicCast( /*0x690357*/
                                *(void **)(a2 + 8),
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                &TESBipedModelForm `RTTI Type Descriptor',
                                0);
  else
    v11 = 0; /*0x69035d*/
  if ( a1 ) /*0x69036b*/
  {
    if ( v11 ) /*0x690376*/
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 0x68) + 8))(a1 + 0x68); /*0x690386*/
      v12 = v3; /*0x69038a*/
      if ( v3 ) /*0x69038e*/
      {
        while ( *(_DWORD *)(v3 + 4) || *(_DWORD *)v3 ) /*0x69039d*/
        {
          v4 = (void **)OblivionDynamicCast( /*0x6903b4*/
                          *(void **)v3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
                          &BoundItemEffect `RTTI Type Descriptor',
                          0);
          v5 = v4; /*0x6903b9*/
          if ( v4 ) /*0x6903c0*/
          {
            if ( v4 != a3 ) /*0x6903c6*/
            {
              v6 = (unsigned __int16 *)OblivionDynamicCast( /*0x6903df*/
                                         v4[0xE],
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         &TESObjectARMO `RTTI Type Descriptor',
                                         0);
              if ( v6 ) /*0x6903e6*/
              {
                v7 = 0; /*0x6903e8*/
                v8 = v5 + 0x10; /*0x6903ea*/
                while ( !TESBipedModelForm_CoversSlot(v11, v7, 0) /*0x690412*/
                     || !TESBipedModelForm_CoversSlot(v6 + 0x32, v7, 0)
                     || *v8 )
                {
                  ++v7; /*0x690414*/
                  ++v8; /*0x690417*/
                  if ( v7 >= 0x10 ) /*0x69041d*/
                  {
                    v3 = v12; /*0x69041f*/
                    goto LABEL_18; /*0x69041f*/
                  }
                }
                v9 = (unsigned __int8 ***)FormHeapAlloc(0xCu); /*0x690435*/
                if ( v9 ) /*0x69044b*/
                  v5[v7 + 0x10] = sub_4844A0(v9, a2); /*0x690459*/
                else
                  v5[v7 + 0x10] = 0; /*0x690475*/
                return 1; /*0x690472*/
              }
            }
          }
LABEL_18:
          v3 = *(_DWORD *)(v3 + 4); /*0x690423*/
          v12 = v3; /*0x690428*/
          if ( !v3 ) /*0x69042c*/
            return 0; /*0x69042c*/
        }
      }
    }
  }
  return 0; /*0x69045f*/
}
