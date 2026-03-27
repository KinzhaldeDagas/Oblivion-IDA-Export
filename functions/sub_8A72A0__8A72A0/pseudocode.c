_DWORD *__thiscall sub_8A72A0(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  int i; // ecx
  int v7; // eax
  int v8; // ecx
  int *v9; // edx
  int v10; // eax

  *this = &off_A975C8;
  *(this + 5) = 1;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 0xA) = 0xFFFFFFFF;
  *(this + 0xB) = 0;
  *(this + 4) = a2;
  *(this + 0xC) = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0x20))(a2) != 0 ? a3 : 0;
  v4 = this + 0x2E;
  v5 = 0x11;
  do
  {
    v4[0xFFFFFFEF] = 0;
    *v4 = 0;
    v4 += 0xFFFFFFFF;
    --v5;
  }
  while ( v5 );
  for ( i = 0; i <= 0x200; ++i )
  {
    if ( i > 8 )
    {
      if ( i > 0x10 )
      {
        if ( i > 0x20 )
        {
          if ( i > 0x30 )
          {
            if ( i > 0x40 )
            {
              if ( i > 0x60 )
              {
                if ( i > 0x80 )
                {
                  if ( i > 0xA0 )
                  {
                    if ( i > 0xC0 )
                    {
                      if ( i > 0x100 )
                      {
                        if ( i > 0x140 )
                          v7 = 0xC;
                        else
                          v7 = 0xB;
                      }
                      else
                      {
                        v7 = 0xA;
                      }
                    }
                    else
                    {
                      v7 = 9;
                    }
                  }
                  else
                  {
                    v7 = 8;
                  }
                }
                else
                {
                  v7 = 7;
                }
              }
              else
              {
                v7 = 6;
              }
            }
            else
            {
              v7 = 5;
            }
          }
          else
          {
            v7 = 4;
          }
        }
        else
        {
          v7 = 3;
        }
      }
      else
      {
        v7 = 2;
      }
    }
    else
    {
      v7 = 1;
    }
    *((_BYTE *)this + i + 0x100) = v7;
    *(this + v7 + 0x2F) = i;
  }
  v8 = 0x400;
  v9 = this + 0xC1;
  do
  {
    if ( v8 > 8 )
    {
      if ( v8 > 0x10 )
      {
        if ( v8 > 0x20 )
        {
          if ( v8 > 0x30 )
          {
            if ( v8 > 0x40 )
            {
              if ( v8 > 0x60 )
              {
                if ( v8 > 0x80 )
                {
                  if ( v8 > 0xA0 )
                  {
                    if ( v8 > 0xC0 )
                    {
                      if ( v8 > 0x100 )
                      {
                        if ( v8 > 0x140 )
                        {
                          if ( v8 > 0x200 )
                          {
                            if ( v8 > 0x400 )
                            {
                              if ( v8 > 0x800 )
                              {
                                if ( v8 > 0x1000 )
                                {
                                  if ( v8 > 0x2000 )
                                  {
                                    __debugbreak();
                                    v10 = 0xFFFFFFFF;
                                  }
                                  else
                                  {
                                    v10 = 0x10;
                                  }
                                }
                                else
                                {
                                  v10 = 0xF;
                                }
                              }
                              else
                              {
                                v10 = 0xE;
                              }
                            }
                            else
                            {
                              v10 = 0xD;
                            }
                          }
                          else
                          {
                            v10 = 0xC;
                          }
                        }
                        else
                        {
                          v10 = 0xB;
                        }
                      }
                      else
                      {
                        v10 = 0xA;
                      }
                    }
                    else
                    {
                      v10 = 9;
                    }
                  }
                  else
                  {
                    v10 = 8;
                  }
                }
                else
                {
                  v10 = 7;
                }
              }
              else
              {
                v10 = 6;
              }
            }
            else
            {
              v10 = 5;
            }
          }
          else
          {
            v10 = 4;
          }
        }
        else
        {
          v10 = 3;
        }
      }
      else
      {
        v10 = 2;
      }
    }
    else
    {
      v10 = 1;
    }
    *v9 = v10;
    *(this + v10 + 0x2F) = v8;
    v8 += 0x400;
    ++v9;
  }
  while ( v8 < 0x2400 );
  return this;
}
