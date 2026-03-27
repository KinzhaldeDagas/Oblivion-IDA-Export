void __stdcall sub_5C1DD0(unsigned __int8 *a1)
{
  _BYTE *v1; // eax
  unsigned __int16 *v2; // ebp
  int v3; // esi
  _DWORD *v4; // ebx
  void *v5; // eax
  unsigned __int16 *v6; // edi
  int i; // esi
  int v8; // eax
  void *v9; // [esp+4h] [ebp-4h] BYREF
  char *v10; // [esp+Ch] [ebp+4h]

  switch ( a1[4] )
  {
    case 0x10u:
      goto LABEL_6;
    case 0x13u:
    case 0x26u:
      goto LABEL_5;
    case 0x14u:
    case 0x16u:
      v2 = (unsigned __int16 *)OblivionDynamicCast(
                                 a1,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESBipedModelForm `RTTI Type Descriptor',
                                 0);
      if ( v2 )
      {
        v3 = dword_B3B44C[4 * sub_5C1100()];
        v4 = (_DWORD *)dword_B3B444[4 * sub_5C1100()];
        if ( v3 )
        {
          v10 = (char *)v3;
          do
          {
            v5 = (void *)v4[2];
            v4 = (_DWORD *)*v4;
            v9 = v5;
            v6 = (unsigned __int16 *)OblivionDynamicCast(
                                       v5,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       &TESBipedModelForm `RTTI Type Descriptor',
                                       0);
            if ( v6 )
            {
              for ( i = 0; i < 0x10; ++i )
              {
                if ( TESBipedModelForm_CoversSlot(v2, i, 0) && TESBipedModelForm_CoversSlot(v6, i, 0) )
                {
                  v8 = sub_5C1100();
                  sub_776690((_DWORD *)&quickKeyList_ptr + 4 * v8, (int *)&v9);
                }
              }
            }
            --v10;
          }
          while ( v10 );
        }
      }
      return;
    case 0x15u:
      v1 = OblivionDynamicCast(
             a1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESObjectBOOK `RTTI Type Descriptor',
             0);
      if ( !v1 )
        return;
      if ( (v1[0x88] & 1) != 0 && *((_DWORD *)v1 + 0x19) )
      {
LABEL_6:
        sub_5C1A70(0x15, (_BYTE *)1);
        sub_5C1A70(0x10, 0);
      }
      else
      {
LABEL_5:
        sub_5C1A70(0x13, 0);
        sub_5C1A70(0x26, 0);
        sub_5C1A70(0x15, 0);
      }
      return;
    default:
      sub_5C1A70(a1[4], 0);
      return;
  }
}
