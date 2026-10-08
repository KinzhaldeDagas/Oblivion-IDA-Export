void __usercall sub_478EC0(int esi0@<esi>, _DWORD *a1, int a3, int a4)
{
  int v5; // ebp
  int v6; // eax
  unsigned int v7; // edi
  _DWORD *v8; // esi
  int v9; // ebp
  int v10; // eax
  void (__thiscall ***v11)(_DWORD, int); // esi
  _DWORD *v12; // ebp
  int v13; // edi
  unsigned int v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // edx
  unsigned __int16 v18; // ax
  __int16 v19; // ax
  size_t v20; // [esp-8h] [ebp-2Ch]
  int v21; // [esp+Ch] [ebp-18h]
  unsigned int v22; // [esp+10h] [ebp-14h]
  _DWORD *v23; // [esp+14h] [ebp-10h]
  _DWORD *v24; // [esp+18h] [ebp-Ch]
  int v25; // [esp+1Ch] [ebp-8h] BYREF
  unsigned int v26; // [esp+20h] [ebp-4h]
  char v27; // [esp+2Ch] [ebp+8h]

  v5 = a3 + 0xAC; /*0x478ec9*/
  v21 = a3 + 0xAC; /*0x478ed2*/
  sub_4784A0((_WORD *)(a3 + 0xAC)); /*0x478ed6*/
  sub_477F90(a3 + 0xAC); /*0x478edd*/
  v6 = *(unsigned __int16 *)(a3 + 0xB6); /*0x478ee2*/
  v7 = 0; /*0x478ee9*/
  v27 = 0; /*0x478eed*/
  v22 = 0; /*0x478ef2*/
  if ( *(_WORD *)(a3 + 0xB6) ) /*0x478ee2*/
  {
    HIDWORD(v20) = esi0; /*0x478efe*/
    if ( !v6 ) /*0x478eff*/
      goto LABEL_31; /*0x478eff*/
    do /*0x4790f8*/
    {
      v8 = *(_DWORD **)(*(_DWORD *)(a3 + 0xB0) + 4 * v7); /*0x478f0b*/
      v24 = v8; /*0x478f10*/
      if ( v8 ) /*0x478f14*/
      {
        v9 = (*(int (__thiscall **)(_DWORD *))(*v8 + 8))(v8); /*0x478f25*/
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3); /*0x478f2c*/
        if ( !v10 ) /*0x478f30*/
          goto LABEL_7; /*0x478f30*/
        while ( (BSStringT *)v10 != &stru_B35408 ) /*0x478f37*/
        {
          v10 = *(_DWORD *)(v10 + 4); /*0x478f3d*/
          if ( !v10 ) /*0x478f42*/
            goto LABEL_7; /*0x478f42*/
        }
        if ( v9 ) /*0x478fd8*/
        {
          sub_478EC0((int)v8, a1, (int)v8, a4); /*0x478fe9*/
        }
        else
        {
LABEL_7:
          if ( (*(int (__thiscall **)(_DWORD *))(*v8 + 0xC))(v8) ) /*0x478f4b*/
          {
            v12 = (_DWORD *)v8[0x2E]; /*0x478ff6*/
            v23 = v12; /*0x478ffe*/
            if ( v12 ) /*0x479002*/
            {
              v13 = v12[5]; /*0x47900e*/
              v14 = 0; /*0x479011*/
              v26 = *(_DWORD *)(v12[2] + 0x40); /*0x479015*/
              if ( v26 ) /*0x479019*/
              {
                do /*0x4790bb*/
                {
                  v15 = *(_DWORD *)(v13 + 4 * v14); /*0x479020*/
                  if ( v15 ) /*0x479025*/
                  {
                    v16 = NiObjectNET_LookupObjectByName(a1, *(char **)(v15 + 8)); /*0x479034*/
                    if ( v16 ) /*0x47903e*/
                    {
                      *(_DWORD *)(v12[5] + 4 * v14) = v16; /*0x479043*/
                    }
                    else
                    {
                      LODWORD(v20) = strlen(*(const char **)(*(_DWORD *)(v13 + 4 * v14) + 8)); /*0x479050*/
                      if ( !_strnicmp((const char *)v24[2], *(const char **)(*(_DWORD *)(v13 + 4 * v14) + 8), v20) ) /*0x479068*/
                        PrintError( /*0x47908b*/
                          "Bone '%s' not found for part '%s->%s'.\r\n"
                          "Make sure all the verticies are skinned to a bone in Max.",
                          *(_DWORD *)(*(_DWORD *)(v13 + 4 * v14) + 8),
                          *(_DWORD *)(*(_DWORD *)(a3 + 0x1C) + 8),
                          *(_DWORD *)(a3 + 8));
                      else
                        PrintError( /*0x4790a8*/
                          "Bone '%s' not found for part '%s'.\r\nRequested by model '%s'.",
                          *(_DWORD *)(*(_DWORD *)(v13 + 4 * v14) + 8),
                          *(_DWORD *)(a3 + 8),
                          *(_DWORD *)(a1[7] + 8));
                      v12 = v23; /*0x4790ad*/
                    }
                  }
                  ++v14; /*0x4790b4*/
                }
                while ( v14 < v26 ); /*0x4790bb*/
              }
              if ( a4 ) /*0x4790c6*/
              {
                v12[4] = a4; /*0x4790d0*/
                (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a4 + 0x84))(a4, v24, 1); /*0x4790de*/
              }
              v7 = v22; /*0x4790e0*/
            }
          }
          else
          {
            if ( !v27 ) /*0x478f59*/
            {
              if ( v9 ) /*0x478f5d*/
              {
                if ( *((_WORD *)v8 + 0x5C) ) /*0x478f5f*/
                {
                  PrintError( /*0x478f80*/
                    "Body part '%s'->'%s' for skeleton '%s' was exported incorectly.\r\n"
                    "Hide the skeleton before you export body parts.",
                    *(const char **)(*(_DWORD *)(a3 + 0x1C) + 8),
                    *(const char **)(a3 + 8),
                    (const char *)a1[2]);
                  v27 = 1; /*0x478f88*/
                }
              }
            }
            (*(void (__thiscall **)(int, int *, _DWORD *))(*(_DWORD *)a3 + 0x88))(a3, &v25, v8); /*0x478f9d*/
            if ( v25 ) /*0x478fa5*/
            {
              v11 = (void (__thiscall ***)(_DWORD, int))v25; /*0x478fab*/
              if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) ) /*0x478fb1*/
                (**v11)(v11, 1); /*0x478fcf*/
            }
          }
        }
        v5 = v21; /*0x4790e4*/
      }
LABEL_31:
      v22 = ++v7; /*0x4790f4*/
    }
    while ( *(unsigned __int16 *)(a3 + 0xB6) > v7 ); /*0x4790f8*/
  }
  sub_4784A0((_WORD *)v5); /*0x479101*/
  if ( *(_WORD *)(v5 + 0xA) ) /*0x479106*/
  {
    v17 = *(_DWORD *)(v5 + 4); /*0x47910d*/
    do /*0x47912d*/
    {
      v18 = *(_WORD *)(v5 + 0xA); /*0x479110*/
      if ( *(_DWORD *)(v17 + 4 * v18 - 4) ) /*0x479117*/
        break; /*0x479121*/
      v19 = v18 - 1; /*0x479123*/
      *(_WORD *)(v5 + 0xA) = v19; /*0x479129*/
    }
    while ( v19 ); /*0x47912d*/
  }
}
