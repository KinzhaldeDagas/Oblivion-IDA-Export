void __thiscall sub_69C9A0(float *this, int a2)
{
  int v3; // eax
  unsigned int j; // esi
  unsigned int i; // edi
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // esi
  int v9; // edx
  int v10; // eax
  char v11; // al
  int v12; // eax
  int v13; // eax
  char v14; // al
  float *v15; // eax
  float v16; // [esp+8h] [ebp-Ch]
  float v17; // [esp+Ch] [ebp-8h]
  float v18; // [esp+10h] [ebp-4h]

  v16 = *(this + 0x20) * flt_B37EF8;
  v18 = *(this + 0x21) * flt_B37F08;
  v17 = *(this + 0x21) * flt_B37F00;
  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    if ( v3 )
    {
      while ( (char *)v3 != dword_B40864 )
      {
        v3 = *(_DWORD *)(v3 + 4);
        if ( !v3 )
          goto LABEL_5;
      }
      for ( i = 0; i < *(_DWORD *)(a2 + 0xD0); ++i )
      {
        v6 = *(_DWORD **)(a2 + 0xC8);
        v7 = 0;
        if ( v6 )
        {
          while ( 1 )
          {
            v8 = v6[2];
            v6 = (_DWORD *)*v6;
            v9 = v7++;
            if ( v9 == i )
              break;
            if ( !v6 )
              goto LABEL_26;
          }
          if ( v8 )
          {
            v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
            if ( v10 )
            {
              while ( (char *)v10 != dword_B40C84 )
              {
                v10 = *(_DWORD *)(v10 + 4);
                if ( !v10 )
                  goto LABEL_17;
              }
              v11 = 1;
            }
            else
            {
LABEL_17:
              v11 = 0;
            }
            v12 = v11 != 0 ? v8 : 0;
            if ( v12 )
              *(float *)(v12 + 0x2C) = *(float *)(v12 + 0x2C) * v16;
            v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
            if ( v13 )
            {
              while ( (char *)v13 != dword_B40B50 )
              {
                v13 = *(_DWORD *)(v13 + 4);
                if ( !v13 )
                  goto LABEL_23;
              }
              v14 = 1;
            }
            else
            {
LABEL_23:
              v14 = 0;
            }
            v15 = v14 != 0 ? (float *)v8 : 0;
            if ( v15 )
            {
              v15[0x12] = v15[0x12] * v16;
              v15[6] = v17 * v15[6];
              v15[0x10] = v18 * v15[0x10];
            }
          }
        }
LABEL_26:
        ;
      }
    }
    else
    {
LABEL_5:
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) )
      {
        for ( j = 0; *(unsigned __int16 *)(a2 + 0xB6) > j; sub_69C9A0(
                                                             this,
                                                             *(_DWORD *)(*(_DWORD *)(a2 + 0xB0) + 4 * j++)) )
          ;
      }
    }
  }
}
