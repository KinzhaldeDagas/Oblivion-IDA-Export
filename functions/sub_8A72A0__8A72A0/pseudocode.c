_DWORD *__thiscall sub_8A72A0(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  int i; // ecx
  int v7; // eax
  int v8; // ecx
  int *v9; // edx
  int v10; // eax

  *this = &off_A975C8; /*0x8a72a8*/
  *(this + 5) = 1; /*0x8a72ae*/
  *(this + 8) = 0; /*0x8a72b7*/
  *(this + 9) = 0; /*0x8a72ba*/
  *(this + 0xA) = 0xFFFFFFFF; /*0x8a72bd*/
  *(this + 0xB) = 0; /*0x8a72c4*/
  *(this + 4) = a2; /*0x8a72c7*/
  *(this + 0xC) = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0x20))(a2) != 0 ? a3 : 0;
  v4 = this + 0x2E; /*0x8a72dc*/
  v5 = 0x11; /*0x8a72e2*/
  do /*0x8a72f0*/
  {
    v4[0xFFFFFFEF] = 0; /*0x8a72e7*/
    *v4 = 0; /*0x8a72ea*/
    v4 += 0xFFFFFFFF; /*0x8a72ec*/
    --v5; /*0x8a72ef*/
  }
  while ( v5 ); /*0x8a72f0*/
  for ( i = 0; i <= 0x200; ++i ) /*0x8a72f2*/
  {
    if ( i > 8 ) /*0x8a72f7*/
    {
      if ( i > 0x10 ) /*0x8a7306*/
      {
        if ( i > 0x20 ) /*0x8a7315*/
        {
          if ( i > 0x30 ) /*0x8a7324*/
          {
            if ( i > 0x40 ) /*0x8a7333*/
            {
              if ( i > 0x60 ) /*0x8a7342*/
              {
                if ( i > 0x80 ) /*0x8a7354*/
                {
                  if ( i > 0xA0 ) /*0x8a7366*/
                  {
                    if ( i > 0xC0 ) /*0x8a7375*/
                    {
                      if ( i > 0x100 ) /*0x8a7384*/
                      {
                        if ( i > 0x140 ) /*0x8a7393*/
                          v7 = 0xC; /*0x8a73a4*/
                        else
                          v7 = 0xB; /*0x8a7395*/
                      }
                      else
                      {
                        v7 = 0xA; /*0x8a7386*/
                      }
                    }
                    else
                    {
                      v7 = 9; /*0x8a7377*/
                    }
                  }
                  else
                  {
                    v7 = 8; /*0x8a7368*/
                  }
                }
                else
                {
                  v7 = 7; /*0x8a7356*/
                }
              }
              else
              {
                v7 = 6; /*0x8a7344*/
              }
            }
            else
            {
              v7 = 5; /*0x8a7335*/
            }
          }
          else
          {
            v7 = 4; /*0x8a7326*/
          }
        }
        else
        {
          v7 = 3; /*0x8a7317*/
        }
      }
      else
      {
        v7 = 2; /*0x8a7308*/
      }
    }
    else
    {
      v7 = 1; /*0x8a72f9*/
    }
    *((_BYTE *)this + i + 0x100) = v7; /*0x8a73eb*/
    *(this + v7 + 0x2F) = i; /*0x8a73f2*/
  }
  v8 = 0x400; /*0x8a7406*/
  v9 = this + 0xC1; /*0x8a740b*/
  do /*0x8a7520*/
  {
    if ( v8 > 8 ) /*0x8a7414*/
    {
      if ( v8 > 0x10 ) /*0x8a7423*/
      {
        if ( v8 > 0x20 ) /*0x8a7432*/
        {
          if ( v8 > 0x30 ) /*0x8a7441*/
          {
            if ( v8 > 0x40 ) /*0x8a7450*/
            {
              if ( v8 > 0x60 ) /*0x8a745f*/
              {
                if ( v8 > 0x80 ) /*0x8a7471*/
                {
                  if ( v8 > 0xA0 ) /*0x8a7483*/
                  {
                    if ( v8 > 0xC0 ) /*0x8a7492*/
                    {
                      if ( v8 > 0x100 ) /*0x8a74a1*/
                      {
                        if ( v8 > 0x140 ) /*0x8a74b0*/
                        {
                          if ( v8 > 0x200 ) /*0x8a74bf*/
                          {
                            if ( v8 > 0x400 ) /*0x8a74ce*/
                            {
                              if ( v8 > 0x800 ) /*0x8a74dd*/
                              {
                                if ( v8 > 0x1000 ) /*0x8a74ec*/
                                {
                                  if ( v8 > 0x2000 ) /*0x8a74fb*/
                                  {
                                    __debugbreak(); /*0x8a7504*/
                                    v10 = 0xFFFFFFFF; /*0x8a7505*/
                                  }
                                  else
                                  {
                                    v10 = 0x10; /*0x8a74fd*/
                                  }
                                }
                                else
                                {
                                  v10 = 0xF; /*0x8a74ee*/
                                }
                              }
                              else
                              {
                                v10 = 0xE; /*0x8a74df*/
                              }
                            }
                            else
                            {
                              v10 = 0xD; /*0x8a74d0*/
                            }
                          }
                          else
                          {
                            v10 = 0xC; /*0x8a74c1*/
                          }
                        }
                        else
                        {
                          v10 = 0xB; /*0x8a74b2*/
                        }
                      }
                      else
                      {
                        v10 = 0xA; /*0x8a74a3*/
                      }
                    }
                    else
                    {
                      v10 = 9; /*0x8a7494*/
                    }
                  }
                  else
                  {
                    v10 = 8; /*0x8a7485*/
                  }
                }
                else
                {
                  v10 = 7; /*0x8a7473*/
                }
              }
              else
              {
                v10 = 6; /*0x8a7461*/
              }
            }
            else
            {
              v10 = 5; /*0x8a7452*/
            }
          }
          else
          {
            v10 = 4; /*0x8a7443*/
          }
        }
        else
        {
          v10 = 3; /*0x8a7434*/
        }
      }
      else
      {
        v10 = 2; /*0x8a7425*/
      }
    }
    else
    {
      v10 = 1; /*0x8a7416*/
    }
    *v9 = v10; /*0x8a7508*/
    *(this + v10 + 0x2F) = v8; /*0x8a750a*/
    v8 += 0x400; /*0x8a7511*/
    ++v9; /*0x8a7517*/
  }
  while ( v8 < 0x2400 ); /*0x8a7520*/
  return this; /*0x8a7528*/
}
