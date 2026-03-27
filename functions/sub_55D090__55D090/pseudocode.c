void __thiscall sub_55D090(unsigned __int16 *this, int a2, char a3)
{
  unsigned __int16 *v3; // edi
  unsigned int v4; // esi
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // ebp
  int v8; // eax
  int v9; // edi
  unsigned int v10; // ebx
  unsigned int j; // esi
  int v12; // eax
  unsigned int i; // [esp+8h] [ebp-8h]
  unsigned int v15; // [esp+Ch] [ebp-4h]

  v3 = this;
  if ( a2 )
  {
    v4 = 0;
    v15 = *(this + 0x5B);
    for ( i = 0; v4 < v15; i = ++v4 )
    {
      if ( v3[0x5B] > v4 )
      {
        v5 = *(_DWORD *)(*((_DWORD *)v3 + 0x2C) + 4 * v4);
        if ( v5 )
        {
          v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x10))(v5);
          if ( v6 )
          {
            v7 = *(_DWORD **)(v6 + 0xB8);
            if ( v7 )
            {
              v8 = v7[2];
              if ( v8 )
              {
                v9 = v7[5];
                v10 = *(_DWORD *)(v8 + 0x40);
                if ( v9 && v10 )
                {
                  for ( j = 0; j < v10; ++j )
                  {
                    v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x58))(
                            a2,
                            *(_DWORD *)(*(_DWORD *)(v9 + 4 * j) + 8));
                    if ( v12 )
                    {
                      *(_DWORD *)(v7[5] + 4 * j) = v12;
                    }
                    else if ( a3 )
                    {
                      PrintError(
                        "Could not find bone \"%s\" for the head node.",
                        *(const char **)(*(_DWORD *)(v9 + 4 * j) + 8));
                    }
                  }
                  v4 = i;
                  v7[4] = this;
                  v3 = this;
                }
                else
                {
                  v3 = this;
                }
              }
            }
          }
        }
      }
    }
  }
}
