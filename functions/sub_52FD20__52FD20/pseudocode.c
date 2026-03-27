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

  if ( a2 )
  {
    v5 = a3;
    if ( a3 )
    {
      if ( ((unsigned int)*(this + 2) & 8) == 0 )
      {
        v6 = sub_52FC40(this, a2, 0);
        v7 = ArgList;
        v8 = (unsigned int *)v6;
        if ( ArgList )
        {
          if ( ArgList == 0xFFFFFFFF )
          {
            if ( *(_WORD *)(v5 + 0x20) == 0xFFFF )
            {
              v18 = v6[4];
              for ( i = v18 - 1; i > 0; --i )
              {
                if ( i < v18 && *(_DWORD *)(v8[2] + 4 * i) )
                  break;
              }
              *(_WORD *)(v5 + 0x20) = i + 1;
              sub_52ED80(v8 + 1, i + 1, &a3);
            }
            goto LABEL_27;
          }
          v9 = *(_WORD *)(v5 + 0x20);
          if ( v9 != 0xFFFF )
          {
            ArgList = 0;
            sub_446C50(v8 + 1, v9, &ArgList);
          }
          TopicInfo = TESTopic_GetTopicInfo__((int *)this, v7, 1);
          if ( TopicInfo )
          {
            v11 = *(_WORD *)(TopicInfo + 0x20);
            v12 = 0xFFFFFFFF;
            if ( v11 == 0xFFFF )
            {
              v13 = v8[4];
              v14 = 0;
              if ( v13 )
              {
                v15 = (_DWORD *)v8[2];
                while ( *v15 != TopicInfo )
                {
                  ++v14;
                  ++v15;
                  if ( v14 >= v13 )
                  {
                    sub_52F3C0(v8 + 1, 0xFFFFFFFF, a3);
                    goto LABEL_27;
                  }
                }
                sub_52F3C0(v8 + 1, v14 + 1, a3);
                goto LABEL_27;
              }
            }
            else
            {
              v12 = v11 + 1;
            }
            sub_52F3C0(v8 + 1, v12, a3);
LABEL_27:
            sub_5A56F0(v8 + 1);
            sub_52F650((char *)this, a2);
            return 1;
          }
          v16 = (int)*(this + 3);
          v17 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B3650C + 0xD4))(
                                dword_B3650C,
                                *(_DWORD *)(dword_B3650C + 0xC));
          PrintError(
            "Could not find previous info (%08X) for TopicInfo (%08X) in Topic \"%s\" (%08X).",
            v7,
            v16,
            v17,
            v21);
          v22 = a3;
        }
        else
        {
          v22 = v5;
        }
        sub_52F3C0(v8 + 1, 0, v22);
        goto LABEL_27;
      }
    }
  }
  return 0;
}
