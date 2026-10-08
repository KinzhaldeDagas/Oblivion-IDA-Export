char __thiscall sub_52FD20(int **this, int a2, unsigned int a3, int ArgList)
{
  unsigned int v5; // ebx
  int *v6; // eax
  int v7; // edi
  unsigned int *v8; // esi
  unsigned __int16 v9; // ax
  int TopicInfo; // eax
  unsigned __int16 v11; // cx
  unsigned int v12; // ebx
  unsigned int v13; // edi
  unsigned int v14; // ecx
  _DWORD *v15; // edx
  int v16; // ebx
  const char *v17; // eax
  unsigned int v18; // ecx
  int i; // eax
  int v21; // [esp-Ch] [ebp-14h]
  unsigned int v22; // [esp-Ch] [ebp-14h]

  if ( a2 ) /*0x52fd2a*/
  {
    v5 = a3; /*0x52fd30*/
    if ( a3 ) /*0x52fd36*/
    {
      if ( ((unsigned int)*(this + 2) & 8) == 0 ) /*0x52fd45*/
      {
        v6 = sub_52FC40(this, a2, 0); /*0x52fd52*/
        v7 = ArgList; /*0x52fd57*/
        v8 = (unsigned int *)v6; /*0x52fd5d*/
        if ( ArgList ) /*0x52fd5f*/
        {
          if ( ArgList == 0xFFFFFFFF ) /*0x52fd68*/
          {
            if ( *(_WORD *)(v5 + 0x20) == 0xFFFF ) /*0x52fe26*/
            {
              v18 = v6[4]; /*0x52fe28*/
              for ( i = v18 - 1; i > 0; --i ) /*0x52fe30*/
              {
                if ( i < v18 && *(_DWORD *)(v8[2] + 4 * i) ) /*0x52fe39*/
                  break; /*0x52fe3d*/
              }
              *(_WORD *)(v5 + 0x20) = i + 1; /*0x52fe52*/
              sub_52ED80(v8 + 1, i + 1, &a3); /*0x52fe56*/
            }
            goto LABEL_27; /*0x52fe5b*/
          }
          v9 = *(_WORD *)(v5 + 0x20); /*0x52fd6e*/
          if ( v9 != 0xFFFF ) /*0x52fd76*/
          {
            ArgList = 0; /*0x52fd84*/
            NiTLargeArray32_SetSlot(v8 + 1, v9, &ArgList); /*0x52fd8c*/
          }
          TopicInfo = TESTopic_GetTopicInfo__((int *)this, v7, 1); /*0x52fd96*/
          if ( TopicInfo ) /*0x52fd9d*/
          {
            v11 = *(_WORD *)(TopicInfo + 0x20); /*0x52fd9f*/
            v12 = 0xFFFFFFFF; /*0x52fda3*/
            if ( v11 == 0xFFFF ) /*0x52fdab*/
            {
              v13 = v8[4]; /*0x52fdad*/
              v14 = 0; /*0x52fdb0*/
              if ( v13 ) /*0x52fdb4*/
              {
                v15 = (_DWORD *)v8[2]; /*0x52fdb6*/
                while ( *v15 != TopicInfo ) /*0x52fdc2*/
                {
                  ++v14; /*0x52fdc4*/
                  ++v15; /*0x52fdc7*/
                  if ( v14 >= v13 ) /*0x52fdcc*/
                  {
                    sub_52F3C0(v8 + 1, 0xFFFFFFFF, a3); /*0x52fdd4*/
                    goto LABEL_27; /*0x52fdd4*/
                  }
                }
                sub_52F3C0(v8 + 1, v14 + 1, a3); /*0x52fde2*/
                goto LABEL_27; /*0x52fde2*/
              }
            }
            else
            {
              v12 = v11 + 1; /*0x52fde7*/
            }
            sub_52F3C0(v8 + 1, v12, a3); /*0x52fdf0*/
LABEL_27:
            sub_5A56F0(v8 + 1); /*0x52fe68*/
            sub_52F650((char *)this, a2); /*0x52fe77*/
            return 1; /*0x52fe82*/
          }
          v16 = (int)*(this + 3); /*0x52fdfd*/
          v17 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)unk_B3650C + 0xD4))( /*0x52fe07*/
                                unk_B3650C,
                                *(_DWORD *)(unk_B3650C + 0xC));
          PrintError( /*0x52fe11*/
            "Could not find previous info (%08X) for TopicInfo (%08X) in Topic \"%s\" (%08X).",
            v7,
            v16,
            v17,
            v21);
          v22 = a3; /*0x52fe1d*/
        }
        else
        {
          v22 = v5; /*0x52fe5d*/
        }
        sub_52F3C0(v8 + 1, 0, v22); /*0x52fe63*/
        goto LABEL_27; /*0x52fe63*/
      }
    }
  }
  return 0; /*0x52fe7e*/
}
