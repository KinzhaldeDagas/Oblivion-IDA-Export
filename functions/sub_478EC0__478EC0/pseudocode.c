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

  v5 = a3 + 0xAC;
  v21 = a3 + 0xAC;
  sub_4784A0((_WORD *)(a3 + 0xAC));
  sub_477F90(a3 + 0xAC);
  v6 = *(unsigned __int16 *)(a3 + 0xB6);
  v7 = 0;
  v27 = 0;
  v22 = 0;
  if ( *(_WORD *)(a3 + 0xB6) )
  {
    HIDWORD(v20) = esi0;
    if ( !v6 )
      goto LABEL_31;
    do
    {
      v8 = *(_DWORD **)(*(_DWORD *)(a3 + 0xB0) + 4 * v7);
      v24 = v8;
      if ( v8 )
      {
        v9 = (*(int (__thiscall **)(_DWORD *))(*v8 + 8))(v8);
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
        if ( !v10 )
          goto LABEL_7;
        while ( (_UNKNOWN *)v10 != &unk_B35408 )
        {
          v10 = *(_DWORD *)(v10 + 4);
          if ( !v10 )
            goto LABEL_7;
        }
        if ( v9 )
        {
          sub_478EC0(a1, (int)v8, a4);
        }
        else
        {
LABEL_7:
          if ( (*(int (__thiscall **)(_DWORD *))(*v8 + 0xC))(v8) )
          {
            v12 = (_DWORD *)v8[0x2E];
            v23 = v12;
            if ( v12 )
            {
              v13 = v12[5];
              v14 = 0;
              v26 = *(_DWORD *)(v12[2] + 0x40);
              if ( v26 )
              {
                do
                {
                  v15 = *(_DWORD *)(v13 + 4 * v14);
                  if ( v15 )
                  {
                    v16 = NiObjectNET_LookupObjectByName(a1, *(char **)(v15 + 8));
                    if ( v16 )
                    {
                      *(_DWORD *)(v12[5] + 4 * v14) = v16;
                    }
                    else
                    {
                      LODWORD(v20) = strlen(*(const char **)(*(_DWORD *)(v13 + 4 * v14) + 8));
                      if ( !_strnicmp((const char *)v24[2], *(const char **)(*(_DWORD *)(v13 + 4 * v14) + 8), v20) )
                        PrintError(
                          "Bone '%s' not found for part '%s->%s'.\r\n"
                          "Make sure all the verticies are skinned to a bone in Max.",
                          *(_DWORD *)(*(_DWORD *)(v13 + 4 * v14) + 8),
                          *(_DWORD *)(*(_DWORD *)(a3 + 0x1C) + 8),
                          *(_DWORD *)(a3 + 8));
                      else
                        PrintError(
                          "Bone '%s' not found for part '%s'.\r\nRequested by model '%s'.",
                          *(_DWORD *)(*(_DWORD *)(v13 + 4 * v14) + 8),
                          *(_DWORD *)(a3 + 8),
                          *(_DWORD *)(a1[7] + 8));
                      v12 = v23;
                    }
                  }
                  ++v14;
                }
                while ( v14 < v26 );
              }
              if ( a4 )
              {
                v12[4] = a4;
                (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a4 + 0x84))(a4, v24, 1);
              }
              v7 = v22;
            }
          }
          else
          {
            if ( !v27 )
            {
              if ( v9 )
              {
                if ( *((_WORD *)v8 + 0x5C) )
                {
                  PrintError(
                    "Body part '%s'->'%s' for skeleton '%s' was exported incorectly.\r\n"
                    "Hide the skeleton before you export body parts.",
                    *(const char **)(*(_DWORD *)(a3 + 0x1C) + 8),
                    *(const char **)(a3 + 8),
                    (const char *)a1[2]);
                  v27 = 1;
                }
              }
            }
            (*(void (__thiscall **)(int, int *, _DWORD *))(*(_DWORD *)a3 + 0x88))(a3, &v25, v8);
            if ( v25 )
            {
              v11 = (void (__thiscall ***)(_DWORD, int))v25;
              if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) )
                (**v11)(v11, 1);
            }
          }
        }
        v5 = v21;
      }
LABEL_31:
      v22 = ++v7;
    }
    while ( *(unsigned __int16 *)(a3 + 0xB6) > v7 );
  }
  sub_4784A0((_WORD *)v5);
  if ( *(_WORD *)(v5 + 0xA) )
  {
    v17 = *(_DWORD *)(v5 + 4);
    do
    {
      v18 = *(_WORD *)(v5 + 0xA);
      if ( *(_DWORD *)(v17 + 4 * v18 - 4) )
        break;
      v19 = v18 - 1;
      *(_WORD *)(v5 + 0xA) = v19;
    }
    while ( v19 );
  }
}
