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
  void *data; // [esp+4h] [ebp-4h] BYREF
  char *v10; // [esp+Ch] [ebp+4h]

  switch ( a1[4] ) /*0x5c1def*/
  {
    case 0x10u: /*0x5c1def*/
      goto LABEL_6;
    case 0x13u: /*0x5c1def*/
    case 0x26u: /*0x5c1def*/
      goto LABEL_5;
    case 0x14u: /*0x5c1def*/
    case 0x16u: /*0x5c1def*/
      v2 = (unsigned __int16 *)OblivionDynamicCast( /*0x5c1e7a*/
                                 a1,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESBipedModelForm `RTTI Type Descriptor',
                                 0);
      if ( v2 ) /*0x5c1e81*/
      {
        v3 = unk_B3B44C[4 * sub_5C1100()]; /*0x5c1e90*/
        v4 = (_DWORD *)unk_B3B444[4 * sub_5C1100()]; /*0x5c1ea0*/
        if ( v3 ) /*0x5c1ea6*/
        {
          v10 = (char *)v3; /*0x5c1ea8*/
          do /*0x5c1f23*/
          {
            v5 = (void *)v4[2]; /*0x5c1eba*/
            v4 = (_DWORD *)*v4; /*0x5c1ebc*/
            data = v5; /*0x5c1ec6*/
            v6 = (unsigned __int16 *)OblivionDynamicCast( /*0x5c1ecf*/
                                       v5,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       &TESBipedModelForm `RTTI Type Descriptor',
                                       0);
            if ( v6 ) /*0x5c1ed6*/
            {
              for ( i = 0; i < 0x10; ++i ) /*0x5c1ed8*/
              {
                if ( TESBipedModelForm_CoversSlot(v2, i, 0) && TESBipedModelForm_CoversSlot(v6, i, 0) ) /*0x5c1ef3*/
                {
                  v8 = sub_5C1100(); /*0x5c1f01*/
                  NiTPointerList_RemoveByData(&MEMORY[0xB3B440][0x10 * v8], &data); /*0x5c1f11*/
                }
              }
            }
            --v10; /*0x5c1f1e*/
          }
          while ( v10 ); /*0x5c1f23*/
        }
      }
      return; /*0x5c1f23*/
    case 0x15u: /*0x5c1def*/
      v1 = OblivionDynamicCast( /*0x5c1e05*/
             a1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESObjectBOOK `RTTI Type Descriptor',
             0);
      if ( !v1 ) /*0x5c1e0f*/
        return; /*0x5c1e0f*/
      if ( (v1[0x88] & 1) != 0 && *((_DWORD *)v1 + 0x19) ) /*0x5c1e1e*/
      {
LABEL_6:
        sub_5C1A70(0x15, (_BYTE *)1); /*0x5c1e4a*/
        sub_5C1A70(0x10, 0); /*0x5c1e5b*/
      }
      else
      {
LABEL_5:
        sub_5C1A70(0x13, 0); /*0x5c1e24*/
        sub_5C1A70(0x26, 0); /*0x5c1e35*/
        sub_5C1A70(0x15, 0); /*0x5c1e40*/
      }
      return;
    default:
      sub_5C1A70(a1[4], 0); /*0x5c1f32*/
      return; /*0x5c1f32*/
  }
}
