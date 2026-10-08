bool __usercall sub_49F950@<al>(int a1@<edi>, int a2, LONG a3)
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
  int *sound; // ebp
  float *v15; // edi
  char v16; // bl
  int v17; // ecx
  void *v18; // eax
  int *v19; // eax
  int *v20; // esi
  int v21; // eax
  float *v22; // eax
  size_t v23; // [esp+8h] [ebp-58h]
  bool v24; // [esp+1Fh] [ebp-41h]
  int v25; // [esp+20h] [ebp-40h]
  float v26; // [esp+20h] [ebp-40h]
  unsigned int v27; // [esp+24h] [ebp-3Ch]
  float v28; // [esp+28h] [ebp-38h]
  float v29; // [esp+2Ch] [ebp-34h]
  float v30; // [esp+30h] [ebp-30h]
  int v31; // [esp+30h] [ebp-30h]

  v3 = a2; /*0x49f955*/
  v4 = 0; /*0x49f959*/
  result = 0; /*0x49f95b*/
  if ( a2 && *(_DWORD *)(a2 + 0x44) == 1 )
  {
    v28 = *(float *)(a2 + 0x4C); /*0x49f972*/
    v29 = *(float *)(a2 + 0x3C); /*0x49f979*/
    v30 = -flt_A7DEB4; /*0x49f985*/
    v6 = v28; /*0x49f989*/
    if ( v30 != v28 )
    {
      v7 = v29; /*0x49f9ae*/
      if ( v29 != v30 && v7 != v6 )
      {
        v24 = v7 < v6; /*0x49f9d7*/
        v8 = *(_DWORD *)(a2 + 0x20); /*0x49f9dc*/
        v27 = 0; /*0x49f9e1*/
        v31 = 0; /*0x49f9e5*/
        if ( v8 ) /*0x49f9e9*/
        {
          v27 = *(_DWORD *)(v8 + 0xC); /*0x49f9f1*/
          v31 = *(_DWORD *)(v8 + 0x10); /*0x49f9f5*/
        }
        v25 = 0; /*0x49f9fd*/
        if ( v27 )
        {
          HIDWORD(v23) = a1; /*0x49fa08*/
          while ( 1 )
          {
            v9 = *(_DWORD *)(v31 + 8 * v4 + 4); /*0x49fa1c*/
            if ( v9 )
            {
              if ( (v10 = *(float *)(v31 + 8 * v4), v24) && (v10 > v6 || v10 <= v7) || v10 >= v6 && v7 > v10 )
              {
                LODWORD(v23) = 7; /*0x49fa70*/
                if ( !_strnicmp("Sound: ", (const char *)v9, v23) )
                {
                  v11 = strchr((const char *)v9, 0xD); /*0x49fb11*/
                  v12 = v11; /*0x49fb16*/
                  if ( v11 ) /*0x49fb1d*/
                    *v11 = 0; /*0x49fb1f*/
                  v13 = SoundMap_ResolveAnimSoundNote((_BYTE *)(v9 + 7)); /*0x49fb2c*/
                  if ( v12 ) /*0x49fb33*/
                    *v12 = 0xD; /*0x49fb35*/
                  if ( v13 ) /*0x49fb3a*/
                  {
                    sound = (int *)MEMORY[0xB33398]->sound; /*0x49fb46*/
                    if ( sound ) /*0x49fb4b*/
                    {
                      v15 = 0; /*0x49fb5d*/
                      v16 = (*(_DWORD *)(v13 + 0x3C) & 0x10) != 0; /*0x49fb5f*/
                      if ( a3 ) /*0x49fb74*/
                      {
                        v17 = *(_DWORD *)(v13 + 0x3C); /*0x49fb76*/
                        v18 = *(void **)(v13 + 0xC); /*0x49fb80*/
                        if ( (v17 & 0x40) != 0 ) /*0x49fb8c*/
                        {
                          v19 = OSGLobals_PlaySound(sound, v18, 0x101, 1); /*0x49fb93*/
                          goto LABEL_38; /*0x49fb93*/
                        }
                        v20 = OSGLobals_PlaySound(sound, v18, 0x102, 1); /*0x49fba4*/
                        if ( (*(int (__thiscall **)(LONG))(*(_DWORD *)a3 + 0x154))(a3) ) /*0x49fbae*/
                        {
                          v21 = (*(int (__thiscall **)(LONG))(*(_DWORD *)a3 + 0x154))(a3); /*0x49fbc0*/
                          if ( v16 ) /*0x49fbc4*/
                            v15 = (float *)v21; /*0x49fbc6*/
                          else
                            v15 = (float *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v21 + 0x58))( /*0x49fbd8*/
                                             v21,
                                             "AttachSound");
                        }
                      }
                      else
                      {
                        v19 = OSGLobals_PlaySound(sound, *(void **)(v13 + 0xC), 0x121, 1); /*0x49fbe7*/
LABEL_38:
                        v20 = v19; /*0x49fbec*/
                      }
                      if ( v20 ) /*0x49fbf0*/
                      {
                        if ( v15 ) /*0x49fbf8*/
                        {
                          sub_6B7360(v20, v15[0x22], v15[0x23], v15[0x24]); /*0x49fc34*/
                          sub_6AA980((_DWORD **)sound, *v20, (LONG)v15); /*0x49fc3f*/
                        }
                        else if ( a3 ) /*0x49fc4c*/
                        {
                          v22 = (float *)(*(int (__thiscall **)(LONG))(*(_DWORD *)a3 + 0x154))(a3); /*0x49fc56*/
                          sub_6B7360(v20, v22[0x22], v22[0x23], v22[0x24]); /*0x49fc92*/
                        }
                        sub_6B7190(v20, v16); /*0x49fc9e*/
                        sub_6B73E0(v20); /*0x49fca5*/
                        FormHeapFree((unsigned int)v20); /*0x49fcab*/
                      }
                      v4 = v25; /*0x49fcb3*/
                    }
                    v3 = a2; /*0x49fcb7*/
                  }
                }
                else
                {
                  LODWORD(v23) = 0x11; /*0x49fa88*/
                  if ( !_strnicmp("Enum: StopSounds ", (const char *)v9, v23) )
                  {
                    v26 = atof((const char *)(v9 + 0x11)); /*0x49faa5*/
                    if ( v26 < 1.0 ) /*0x49fab7*/
                      v26 = 1.0; /*0x49fab9*/
                    SoundManager_StopRefLoopingSoundsWithFade((unsigned int **)MEMORY[0xB33398]->sound, a3, v26); /*0x49fad7*/
                  }
                  else
                  {
                    LODWORD(v23) = 0xF; /*0x49fae1*/
                    if ( !_strnicmp("Enum: HitShader", (const char *)v9, v23) )
                      Player_UpdateSoundDistanceFromRef(reference, a3); /*0x49fb04*/
                  }
                }
              }
            }
            v25 = ++v4; /*0x49fcc8*/
            if ( v4 >= v27 ) /*0x49fccc*/
              return *(_DWORD *)(v3 + 0x24) /*0x49fccc*/
                  && -flt_A7DEB4 != *(float *)(v3 + 0x48)
                  && *(float *)(v3 + 0x30) <= (double)*(float *)(v3 + 0x3C);
            v6 = v28; /*0x49fa10*/
            v7 = v29; /*0x49fa14*/
          }
        }
      }
    }
    return *(_DWORD *)(v3 + 0x24) /*0x49fd11*/
        && -flt_A7DEB4 != *(float *)(v3 + 0x48)
        && *(float *)(v3 + 0x30) <= (double)*(float *)(v3 + 0x3C);
  }
  return result; /*0x49fd09*/
}
