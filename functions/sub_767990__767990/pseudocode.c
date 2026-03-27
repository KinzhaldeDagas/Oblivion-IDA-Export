void __thiscall sub_767990(char *this, int a2)
{
  int v2; // ebp
  char *v3; // ebx
  int v4; // eax
  int v5; // esi
  bool v6; // zf
  int v7; // eax
  unsigned int v8; // edi
  int v9; // ebp
  unsigned int v10; // esi
  unsigned int v11; // ebx
  unsigned int v12; // edi
  char *v13; // ecx
  unsigned int v14; // eax
  void (__stdcall *v15)(LPCRITICAL_SECTION); // esi
  int v17; // [esp+Ch] [ebp-14h]
  unsigned int v18; // [esp+10h] [ebp-10h] BYREF
  int v19; // [esp+14h] [ebp-Ch]
  int v20; // [esp+18h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-4h]

  v2 = a2;
  v3 = this;
  if ( a2 )
  {
    v4 = *(_DWORD *)(a2 + 0xC);
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 0x28) )
      {
        if ( *(_DWORD *)(a2 + 8) )
        {
          v17 = *(_DWORD *)(a2 + 0xC);
          v21 = *(_DWORD *)(a2 + 8);
          do
          {
            v5 = *(_DWORD *)(v4 + 0x28);
            v6 = *(_DWORD *)(v5 + 0x1C) == 0;
            v19 = v5;
            if ( !v6 )
            {
              if ( **(_DWORD **)(v5 + 0x24) )
              {
                sub_763FE0((NiDX9Renderer *)v3);
                v7 = *(_DWORD *)(v5 + 0x1C);
                v8 = 0;
                v20 = 0;
                if ( v7 )
                {
                  do
                  {
                    v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 0x24) + 4 * v8) + 4);
                    v18 = 0;
                    if ( NiTMap_GetAt((_DWORD *)v3 + 0x181, v9, &v18) )
                    {
                      v10 = v18;
                      v11 = 0;
                      while ( v10 )
                      {
                        if ( *(_DWORD *)(v10 + 8) == v17 )
                        {
                          v12 = 0;
                          if ( v11 )
                          {
                            *(_DWORD *)(v11 + 0x20) = *(_DWORD *)(v10 + 0x20);
                            v12 = *(_DWORD *)(v10 + 0x20);
                          }
                          else
                          {
                            v13 = this + 0x604;
                            if ( *(_DWORD *)(v10 + 0x20) )
                            {
                              NiTMap_SetAt(v13, v9, *(_DWORD *)(v10 + 0x20));
                              v12 = *(_DWORD *)(v10 + 0x20);
                            }
                            else
                            {
                              NiTMap_RemoveAt(v13, v9);
                            }
                          }
                          *(_DWORD *)(v10 + 0x20) = 0;
                          FormHeapFree(v10);
                          v10 = v12;
                          v8 = v20;
                        }
                        else
                        {
                          v11 = v10;
                          v10 = *(_DWORD *)(v10 + 0x20);
                        }
                      }
                      v5 = v19;
                      v3 = this;
                    }
                    v14 = *(_DWORD *)(v5 + 0x1C);
                    v20 = ++v8;
                  }
                  while ( v8 < v14 );
                  v2 = a2;
                }
                v6 = (*((_DWORD *)v3 + 0x5F))-- == 1;
                if ( v6 )
                  *((_DWORD *)v3 + 0x5E) = 0;
                v15 = LeaveCriticalSection;
                LeaveCriticalSection((LPCRITICAL_SECTION)v3 + 8);
                if ( *((_DWORD *)v3 + 0x3F) == 1 )
                  (*(void (__thiscall **)(char *))(*(_DWORD *)v3 + 0x12C))(v3);
                v6 = (*((_DWORD *)v3 + 0x3F))-- == 1;
                if ( v6 )
                  *((_DWORD *)v3 + 0x3E) = 0;
                v15((LPCRITICAL_SECTION)v3 + 4);
              }
            }
            v4 = v17 + 0x2C;
            v6 = v21-- == 1;
            v17 += 0x2C;
          }
          while ( !v6 );
        }
        sub_778C20(v2);
      }
    }
  }
}
