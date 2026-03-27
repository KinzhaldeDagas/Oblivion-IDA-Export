char __cdecl sub_88EE20(int a1)
{
  char v1; // bl
  int v2; // eax
  int v3; // esi
  const char *v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  volatile LONG *v8; // eax
  __int16 v9; // ax
  _DWORD *v10; // eax
  int v11; // esi
  const char *v12; // esi
  char v13; // dl
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  unsigned int i; // edi
  char v18; // [esp+0h] [ebp-238h]
  size_t v19; // [esp+4h] [ebp-234h] BYREF
  _DWORD v20[4]; // [esp+18h] [ebp-220h] BYREF
  char v21[512]; // [esp+28h] [ebp-210h] BYREF
  unsigned int v22; // [esp+234h] [ebp-4h]

  v1 = 0;
  if ( a1 )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v3 = v2;
    if ( v2 )
    {
      v4 = *(const char **)(v2 + 8);
      if ( v4 && (LODWORD(v19) = 3, !_strnicmp(v4, off_A738A4, v19)) )
      {
        if ( strlen(v4) == 5 )
        {
          v5 = sub_405790(v3, 0);
          v6 = v5;
          if ( v5 )
            v7 = *(_DWORD *)(v5 + 8);
          else
            v7 = 0;
          if ( v7 )
          {
            if ( !_strcmp((char *)(v7 + 6), "NonAccum") )
            {
              v8 = (volatile LONG *)sub_497420(v3);
              if ( v8 )
              {
                sub_435CE0((NiAVObject *)v6, v8);
                sub_435CE0((NiAVObject *)v3, 0);
                v9 = *(_WORD *)(v6 + 0x18) & 0xFFE9 | 6;
                LODWORD(v19) = dword_BA7F3C;
                *(_WORD *)(v6 + 0x18) = v9;
                v1 = 1;
                v10 = sub_700010((_DWORD *)v3, v19);
                if ( v10 )
                  (*(void (__thiscall **)(_DWORD *, int))(*v10 + 0x58))(v10, v6);
                v11 = *(_DWORD *)(v3 + 0x1C);
                if ( v11 )
                {
                  v12 = *(const char **)(v11 + 8);
                  if ( !v12 )
                    v12 = "Unknown";
                  v20[3] = &v19;
                  sub_8BBFB0((int)v20, 1, v21, 0x200u, 1);
                  v13 = *v12;
                  LODWORD(v19) = " should be re-exported.\n";
                  v18 = v13;
                  v22 = 0;
                  v14 = sub_8BBDB0(v20, "A very old skeleton for ");
                  v15 = sub_8BBD90((_DWORD **)v14, v18);
                  sub_8BBDB0(v15, (const char *)v19);
                  (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
                    dword_BA7FB0,
                    1,
                    0x234F224F,
                    v21,
                    ".\\bhkBlendCollisionObject.cpp",
                    0x23A);
                  v22 = 0xFFFFFFFF;
                  sub_8BC000(v20);
                }
              }
            }
          }
        }
      }
      else
      {
        for ( i = 0; *(unsigned __int16 *)(v3 + 0xB6) > i; v1 = sub_88EE20(*(_DWORD *)(*(_DWORD *)(v3 + 0xB0) + 4 * i++)) )
          ;
      }
    }
  }
  return v1;
}
