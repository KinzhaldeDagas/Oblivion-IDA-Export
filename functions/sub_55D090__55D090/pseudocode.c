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

  v3 = this; /*0x55d099*/
  if ( a2 ) /*0x55d09f*/
  {
    v4 = 0; /*0x55d0ad*/
    v15 = *(this + 0x5B); /*0x55d0b1*/
    for ( i = 0; v4 < v15; i = ++v4 ) /*0x55d0a5*/
    {
      if ( v3[0x5B] > v4 ) /*0x55d0ca*/
      {
        v5 = *(_DWORD *)(*((_DWORD *)v3 + 0x2C) + 4 * v4); /*0x55d0d6*/
        if ( v5 ) /*0x55d0db*/
        {
          v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x10))(v5); /*0x55d0e6*/
          if ( v6 ) /*0x55d0ea*/
          {
            v7 = *(_DWORD **)(v6 + 0xB8); /*0x55d0f0*/
            if ( v7 ) /*0x55d0f8*/
            {
              v8 = v7[2]; /*0x55d0fa*/
              if ( v8 ) /*0x55d0ff*/
              {
                v9 = v7[5]; /*0x55d101*/
                v10 = *(_DWORD *)(v8 + 0x40); /*0x55d106*/
                if ( v9 && v10 ) /*0x55d10d*/
                {
                  for ( j = 0; j < v10; ++j ) /*0x55d10f*/
                  {
                    v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x58))( /*0x55d125*/
                            a2,
                            *(_DWORD *)(*(_DWORD *)(v9 + 4 * j) + 8));
                    if ( v12 ) /*0x55d129*/
                    {
                      *(_DWORD *)(v7[5] + 4 * j) = v12; /*0x55d12e*/
                    }
                    else if ( a3 ) /*0x55d138*/
                    {
                      PrintError( /*0x55d146*/
                        "Could not find bone \"%s\" for the head node.",
                        *(const char **)(*(_DWORD *)(v9 + 4 * j) + 8));
                    }
                  }
                  v4 = i; /*0x55d159*/
                  v7[4] = this; /*0x55d15d*/
                  v3 = this; /*0x55d160*/
                }
                else
                {
                  v3 = this; /*0x55d164*/
                }
              }
            }
          }
        }
      }
    }
  }
}
