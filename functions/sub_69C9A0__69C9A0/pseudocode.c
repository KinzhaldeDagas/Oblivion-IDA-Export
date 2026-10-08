void __thiscall sub_69C9A0(float *this, int a2)
{
  NiRTTI *v3; // eax
  unsigned int j; // esi
  unsigned int i; // edi
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // esi
  int v9; // edx
  NiRTTI *v10; // eax
  char v11; // al
  int v12; // eax
  NiRTTI *v13; // eax
  char v14; // al
  float *v15; // eax
  float v16; // [esp+8h] [ebp-Ch]
  float v17; // [esp+Ch] [ebp-8h]
  float v18; // [esp+10h] [ebp-4h]

  v16 = *(this + 0x20) * flt_B37ED0[0xA]; /*0x69c9b9*/
  v18 = *(this + 0x21) * flt_B37ED0[0xE]; /*0x69c9c9*/
  v17 = *(this + 0x21) * flt_B37ED0[0xC]; /*0x69c9d9*/
  if ( a2 )
  {
    v3 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x69c9eb*/
    if ( v3 )
    {
      while ( v3 != &stru_B40864 ) /*0x69c9f6*/
      {
        v3 = v3->parent; /*0x69c9f8*/
        if ( !v3 ) /*0x69c9fd*/
          goto LABEL_5; /*0x69c9fd*/
      }
      for ( i = 0; i < *(_DWORD *)(a2 + 0xD0); ++i )
      {
        v6 = *(_DWORD **)(a2 + 0xC8); /*0x69ca48*/
        v7 = 0; /*0x69ca4e*/
        if ( v6 )
        {
          while ( 1 ) /*0x69ca58*/
          {
            v8 = v6[2]; /*0x69ca58*/
            v6 = (_DWORD *)*v6; /*0x69ca5e*/
            v9 = v7++; /*0x69ca60*/
            if ( v9 == i ) /*0x69ca67*/
              break; /*0x69ca67*/
            if ( !v6 ) /*0x69ca6b*/
              goto LABEL_26; /*0x69ca6b*/
          }
          if ( v8 )
          {
            v10 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8); /*0x69ca7a*/
            if ( v10 ) /*0x69ca7e*/
            {
              while ( v10 != &stru_B40C84 ) /*0x69ca85*/
              {
                v10 = v10->parent; /*0x69ca87*/
                if ( !v10 ) /*0x69ca8c*/
                  goto LABEL_17; /*0x69ca8c*/
              }
              v11 = 1; /*0x69cb00*/
            }
            else
            {
LABEL_17:
              v11 = 0; /*0x69ca8e*/
            }
            v12 = v11 != 0 ? v8 : 0;
            if ( v12 ) /*0x69ca96*/
              *(float *)(v12 + 0x2C) = *(float *)(v12 + 0x2C) * v16; /*0x69ca9f*/
            v13 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8); /*0x69caa9*/
            if ( v13 ) /*0x69caad*/
            {
              while ( v13 != &stru_B40B50 ) /*0x69cab5*/
              {
                v13 = v13->parent; /*0x69cab7*/
                if ( !v13 ) /*0x69cabc*/
                  goto LABEL_23; /*0x69cabc*/
              }
              v14 = 1; /*0x69cb04*/
            }
            else
            {
LABEL_23:
              v14 = 0; /*0x69cabe*/
            }
            v15 = v14 != 0 ? (float *)v8 : 0;
            if ( v15 ) /*0x69cac6*/
            {
              v15[0x12] = v15[0x12] * v16; /*0x69cacf*/
              v15[6] = v17 * v15[6]; /*0x69cad9*/
              v15[0x10] = v18 * v15[0x10]; /*0x69cae3*/
            }
          }
        }
LABEL_26:
        ; /*0x69cae6*/
      }
    }
    else
    {
LABEL_5:
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) ) /*0x69ca06*/
      {
        for ( j = 0; *(unsigned __int16 *)(a2 + 0xB6) > j; sub_69C9A0( /*0x69ca17*/
                                                             this,
                                                             *(_DWORD *)(*(_DWORD *)(a2 + 0xB0) + 4 * j++)) )
          ; /*0x69cb14*/
      }
    }
  }
}
