bool __usercall sub_49F950@<al>(int a1@<edi>, int a2, int a3)
{
  int v3; // ebp
  unsigned int v4; // ebx
  bool result; // al
  double v6; // st7
  double v7; // st6
  int v8; // eax
  int v9; // esi
  double v10; // st5
  char *v11; // eax
  char *v12; // edi
  int v13; // eax
  _DWORD **sound; // ebp
  float *v15; // edi
  char v16; // bl
  int v17; // ecx
  int v18; // eax
  int *v19; // eax
  int *v20; // eax
  int *v21; // esi
  int v22; // eax
  float *v23; // eax
  size_t v24; // [esp+8h] [ebp-58h]
  bool v25; // [esp+1Fh] [ebp-41h]
  int v26; // [esp+20h] [ebp-40h]
  float v27; // [esp+20h] [ebp-40h]
  unsigned int v28; // [esp+24h] [ebp-3Ch]
  float v29; // [esp+28h] [ebp-38h]
  float v30; // [esp+2Ch] [ebp-34h]
  float v31; // [esp+30h] [ebp-30h]
  int v32; // [esp+30h] [ebp-30h]

  v3 = a2;
  v4 = 0;
  result = 0;
  if ( a2 && *(_DWORD *)(a2 + 0x44) == 1 )
  {
    v29 = *(float *)(a2 + 0x4C);
    v30 = *(float *)(a2 + 0x3C);
    v31 = -flt_A7DEB4;
    v6 = v29;
    if ( v31 != v29 )
    {
      v7 = v30;
      if ( v30 != v31 && v7 != v6 )
      {
        v25 = v7 < v6;
        v8 = *(_DWORD *)(a2 + 0x20);
        v28 = 0;
        v32 = 0;
        if ( v8 )
        {
          v28 = *(_DWORD *)(v8 + 0xC);
          v32 = *(_DWORD *)(v8 + 0x10);
        }
        v26 = 0;
        if ( v28 )
        {
          HIDWORD(v24) = a1;
          while ( 1 )
          {
            v9 = *(_DWORD *)(v32 + 8 * v4 + 4);
            if ( v9 )
            {
              if ( (v10 = *(float *)(v32 + 8 * v4), v25) && (v10 > v6 || v10 <= v7) || v10 >= v6 && v7 > v10 )
              {
                LODWORD(v24) = 7;
                if ( !_strnicmp("Sound: ", (const char *)v9, v24) )
                {
                  v11 = strchr((const char *)v9, 0xD);
                  v12 = v11;
                  if ( v11 )
                    *v11 = 0;
                  v13 = sub_447490((_BYTE *)(v9 + 7));
                  if ( v12 )
                    *v12 = 0xD;
                  if ( v13 )
                  {
                    sound = (_DWORD **)OSGlobals->sound;
                    if ( sound )
                    {
                      v15 = 0;
                      v16 = (*(_DWORD *)(v13 + 0x3C) & 0x10) != 0;
                      if ( a3 )
                      {
                        v17 = *(_DWORD *)(v13 + 0x3C);
                        v18 = *(_DWORD *)(v13 + 0xC);
                        if ( (v17 & 0x40) != 0 )
                        {
                          OSGLobals_PlaySound(v18, 0x101, 1);
                          goto LABEL_38;
                        }
                        OSGLobals_PlaySound(v18, 0x102, 1);
                        v21 = v20;
                        if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3) )
                        {
                          v22 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3);
                          if ( v16 )
                            v15 = (float *)v22;
                          else
                            v15 = (float *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v22 + 0x58))(
                                             v22,
                                             "AttachSound");
                        }
                      }
                      else
                      {
                        OSGLobals_PlaySound(*(_DWORD *)(v13 + 0xC), 0x121, 1);
LABEL_38:
                        v21 = v19;
                      }
                      if ( v21 )
                      {
                        if ( v15 )
                        {
                          sub_6B7360(v21, v15[0x22], v15[0x23], v15[0x24]);
                          sub_6AA980(sound, *v21, (LONG)v15);
                        }
                        else if ( a3 )
                        {
                          v23 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3);
                          sub_6B7360(v21, v23[0x22], v23[0x23], v23[0x24]);
                        }
                        sub_6B7190(v21, v16);
                        sub_6B73E0(v21);
                        FormHeapFree((unsigned int)v21);
                      }
                      v4 = v26;
                    }
                    v3 = a2;
                  }
                }
                else
                {
                  LODWORD(v24) = 0x11;
                  if ( !_strnicmp("Enum: StopSounds ", (const char *)v9, v24) )
                  {
                    v27 = atof((const char *)(v9 + 0x11));
                    if ( v27 < 1.0 )
                      v27 = 1.0;
                    sub_6AC420((_DWORD **)OSGlobals->sound, a3, v27);
                  }
                  else
                  {
                    LODWORD(v24) = 0xF;
                    if ( !_strnicmp("Enum: HitShader", (const char *)v9, v24) )
                      sub_65DC50(TESDataHandler_g_PlayerRef, a3);
                  }
                }
              }
            }
            v26 = ++v4;
            if ( v4 >= v28 )
              return *(_DWORD *)(v3 + 0x24)
                  && -flt_A7DEB4 != *(float *)(v3 + 0x48)
                  && *(float *)(v3 + 0x30) <= (double)*(float *)(v3 + 0x3C);
            v6 = v29;
            v7 = v30;
          }
        }
      }
    }
    return *(_DWORD *)(v3 + 0x24)
        && -flt_A7DEB4 != *(float *)(v3 + 0x48)
        && *(float *)(v3 + 0x30) <= (double)*(float *)(v3 + 0x3C);
  }
  return result;
}
