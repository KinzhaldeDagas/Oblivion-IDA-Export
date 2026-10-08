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

  v2 = a2; /*0x767995*/
  v3 = this; /*0x76799b*/
  if ( a2 ) /*0x7679a1*/
  {
    v4 = *(_DWORD *)(a2 + 0xC); /*0x7679a7*/
    if ( v4 ) /*0x7679ac*/
    {
      if ( *(_DWORD *)(v4 + 0x28) ) /*0x7679b2*/
      {
        if ( *(_DWORD *)(a2 + 8) ) /*0x7679bc*/
        {
          v17 = *(_DWORD *)(a2 + 0xC); /*0x7679c8*/
          v21 = *(_DWORD *)(a2 + 8); /*0x7679cc*/
          do /*0x767b19*/
          {
            v5 = *(_DWORD *)(v4 + 0x28); /*0x7679d1*/
            v6 = *(_DWORD *)(v5 + 0x1C) == 0; /*0x7679d4*/
            v19 = v5; /*0x7679d8*/
            if ( !v6 ) /*0x7679dc*/
            {
              if ( **(_DWORD **)(v5 + 0x24) ) /*0x7679e5*/
              {
                NiDX9Renderer_EnterRendererAndPrecache((NiDX9Renderer *)v3); /*0x7679f0*/
                v7 = *(_DWORD *)(v5 + 0x1C); /*0x7679f5*/
                v8 = 0; /*0x7679f8*/
                v20 = 0; /*0x7679fc*/
                if ( v7 ) /*0x767a00*/
                {
                  do /*0x767ab4*/
                  {
                    v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 0x24) + 4 * v8) + 4); /*0x767a14*/
                    v18 = 0; /*0x767a23*/
                    if ( NiTMap_GetAt((_DWORD *)v3 + 0x181, v9, &v18) ) /*0x767a2b*/
                    {
                      v10 = v18; /*0x767a34*/
                      v11 = 0; /*0x767a38*/
                      while ( v10 ) /*0x767a3c*/
                      {
                        if ( *(_DWORD *)(v10 + 8) == v17 ) /*0x767a47*/
                        {
                          v12 = 0; /*0x767a49*/
                          if ( v11 ) /*0x767a4d*/
                          {
                            *(_DWORD *)(v11 + 0x20) = *(_DWORD *)(v10 + 0x20); /*0x767a52*/
                            v12 = *(_DWORD *)(v10 + 0x20); /*0x767a55*/
                          }
                          else
                          {
                            v13 = this + 0x604; /*0x767a5e*/
                            if ( *(_DWORD *)(v10 + 0x20) ) /*0x767a64*/
                            {
                              NiTMap_SetAt(v13, v9, *(_DWORD *)(v10 + 0x20)); /*0x767a6f*/
                              v12 = *(_DWORD *)(v10 + 0x20); /*0x767a74*/
                            }
                            else
                            {
                              NiTMap_RemoveAt(v13, v9); /*0x767a7a*/
                            }
                          }
                          *(_DWORD *)(v10 + 0x20) = 0; /*0x767a80*/
                          FormHeapFree(v10); /*0x767a87*/
                          v10 = v12; /*0x767a8c*/
                          v8 = v20; /*0x767a8e*/
                        }
                        else
                        {
                          v11 = v10; /*0x767a97*/
                          v10 = *(_DWORD *)(v10 + 0x20); /*0x767a99*/
                        }
                      }
                      v5 = v19; /*0x767aa0*/
                      v3 = this; /*0x767aa4*/
                    }
                    v14 = *(_DWORD *)(v5 + 0x1C); /*0x767aa8*/
                    v20 = ++v8; /*0x767ab0*/
                  }
                  while ( v8 < v14 ); /*0x767ab4*/
                  v2 = a2; /*0x767aba*/
                }
                v6 = (*((_DWORD *)v3 + 0x5F))-- == 1; /*0x767ac7*/
                if ( v6 ) /*0x767aca*/
                  *((_DWORD *)v3 + 0x5E) = 0; /*0x767acc*/
                v15 = LeaveCriticalSection; /*0x767ad3*/
                LeaveCriticalSection((LPCRITICAL_SECTION)v3 + 8); /*0x767ada*/
                if ( *((_DWORD *)v3 + 0x3F) == 1 ) /*0x767ae3*/
                  (*(void (__thiscall **)(char *))(*(_DWORD *)v3 + 0x12C))(v3); /*0x767aef*/
                v6 = (*((_DWORD *)v3 + 0x3F))-- == 1; /*0x767af1*/
                if ( v6 ) /*0x767afd*/
                  *((_DWORD *)v3 + 0x3E) = 0; /*0x767aff*/
                v15((LPCRITICAL_SECTION)v3 + 4); /*0x767b07*/
              }
            }
            v4 = v17 + 0x2C; /*0x767b0d*/
            v6 = v21-- == 1; /*0x767b10*/
            v17 += 0x2C; /*0x767b15*/
          }
          while ( !v6 ); /*0x767b19*/
        }
        sub_778C20(v2); /*0x767b28*/
      }
    }
  }
}
