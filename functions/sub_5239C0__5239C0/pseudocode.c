void __thiscall sub_5239C0(int *this)
{
  int *v2; // edi
  int v3; // esi
  int i; // esi
  _DWORD *v5; // ecx
  int v6; // esi
  int v7; // eax
  int *v8; // edi
  int v9; // esi
  int j; // esi
  _DWORD *v11; // ecx
  int v12; // esi
  int v13; // esi
  int v14; // eax
  float v15; // [esp+4h] [ebp-8h]

  if ( *(this + 3) != 7 )
  {
    v15 = 0.0;
    v2 = this + 0x16;
    if ( this != (int *)0xFFFFFFA8 )
    {
      do
      {
        if ( !v2[1] && !*v2 )
          break;
        v3 = *v2;
        if ( *v2 )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 0x18) + 0x18))(v3 + 0x18) == 4 )
          {
            for ( i = v3 + 0x24; i; i = v6 - 4 )
            {
              if ( !*(_DWORD *)(i + 8) && !*(_DWORD *)(i + 4) )
                break;
              v5 = *(_DWORD **)(i + 4);
              if ( v5 )
              {
                if ( *v5 == 0x504D4156 )
                  v15 = (double)EffectItem_GetMagnitude(v5) + v15;
              }
              v6 = *(_DWORD *)(i + 8);
              if ( !v6 )
                break;
            }
          }
        }
        v2 = (int *)v2[1];
      }
      while ( v2 );
    }
    v7 = *(this + 0x3A);
    if ( v7 )
    {
      v8 = (int *)(v7 + 0x30);
      if ( v7 != 0xFFFFFFD0 )
      {
        do
        {
          if ( !v8[1] && !*v8 )
            break;
          v9 = *v8;
          if ( *v8 )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v9 + 0x18) + 0x18))(v9 + 0x18) == 4 )
            {
              for ( j = v9 + 0x24; j; j = v12 - 4 )
              {
                if ( !*(_DWORD *)(j + 8) && !*(_DWORD *)(j + 4) )
                  break;
                v11 = *(_DWORD **)(j + 4);
                if ( v11 )
                {
                  if ( *v11 == 0x504D4156 )
                    v15 = (double)EffectItem_GetMagnitude(v11) + v15;
                }
                v12 = *(_DWORD *)(j + 8);
                if ( !v12 )
                  break;
              }
            }
          }
          v8 = (int *)v8[1];
        }
        while ( v8 );
      }
    }
    v13 = *this;
    v14 = Double_To_SInt32(v15);
    (*(void (__thiscall **)(int *, int, int))(v13 + 0x134))(this, 0x45, v14);
  }
}
