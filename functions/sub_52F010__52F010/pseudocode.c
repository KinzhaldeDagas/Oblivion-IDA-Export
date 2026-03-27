int __thiscall sub_52F010(TESTopic *this, _BYTE *a2, Actor *a3, TESObjectREFR *a4, int a5, int a6, _DWORD *a7)
{
  TESTopic *v7; // ebp
  unsigned int v8; // ecx
  int result; // eax
  tListTopic *v10; // eax
  tListTopic *v11; // ecx
  QuestInfoData **p_firstEntry; // eax
  int topicType; // ecx
  int *v14; // edi
  int v15; // ebp
  int v16; // esi
  int *v17; // eax
  int *v18; // ecx
  int v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // edx
  _DWORD *v22; // eax
  tListTopic *next; // eax
  unsigned int i; // esi
  unsigned int v25; // edx
  int *v26; // ecx
  int v27; // edi
  int v28; // edx
  char v29; // [esp+Ah] [ebp-12h]
  char v30; // [esp+Bh] [ebp-11h] BYREF
  TESTopic *v31; // [esp+Ch] [ebp-10h]
  QuestInfoData **v32; // [esp+10h] [ebp-Ch]
  int v33; // [esp+14h] [ebp-8h]
  unsigned int v34; // [esp+18h] [ebp-4h]

  v7 = this;
  *a2 = 0;
  v8 = (unsigned int)this->super.flags >> 5;
  v31 = v7;
  if ( (v8 & 1) != 0 )
    return 0;
  if ( dword_B36510 )
  {
    BSSimpleList_Clear(dword_B36510);
  }
  else
  {
    v10 = (tListTopic *)FormHeapAlloc(8u);
    if ( v10 )
    {
      v10->node.data = 0;
      v10->node.next = 0;
    }
    else
    {
      v10 = 0;
    }
    dword_B36510 = v10;
  }
  v11 = dword_B36510;
  p_firstEntry = &v7->firstEntry;
  v29 = 0;
  v33 = 0;
  if ( v7 == (TESTopic *)0xFFFFFFD8 )
    goto LABEL_10;
  while ( 1 )
  {
    v14 = (int *)*p_firstEntry;
    if ( !*p_firstEntry || v29 )
      break;
    v32 = (QuestInfoData **)p_firstEntry[1];
    if ( v14 )
    {
      if ( *v14 )
      {
        if ( (*(_BYTE *)(*v14 + 0x3C) & 1) != 0 )
        {
          v15 = 0;
          v34 = v14[4];
          if ( v34 )
          {
            while ( 1 )
            {
              v16 = *(_DWORD *)(v14[2] + 4 * v15);
              v30 = 0;
              if ( !v16 || !sub_530830(v16, &v30, *v14, a3, a4) )
                goto LABEL_55;
              *a2 = 0;
              if ( !(_BYTE)a5 )
                goto LABEL_48;
              v17 = *(int **)(v16 + 0x30);
              if ( !v17 )
                goto LABEL_38;
              if ( a6 )
              {
                while ( 1 )
                {
                  v18 = (int *)v17[1];
                  if ( !v18 && !*v17 )
                    goto LABEL_55;
                  v19 = *v17;
                  if ( v19 == a6 || *(_DWORD *)(v19 + 0xC) == 0xD3 )
                    goto LABEL_38;
                  v17 = v18;
                  if ( !v18 )
                    goto LABEL_55;
                }
              }
              if ( BSSimpleList_IsEmpty(*(BSSimpleList_VoidPtr **)(v16 + 0x30))
                || a4 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
              {
LABEL_38:
                if ( (*(_BYTE *)(v16 + 0x25) & 0x20) != 0 )
                  v29 = 1;
                v20 = a7;
                if ( a7 )
                {
                  do
                  {
                    v21 = (_DWORD *)v20[1];
                    if ( !v21 && !*v20 )
                      break;
                    v22 = (_DWORD *)*v20;
                    if ( v22[3] == v16
                      || (*(_BYTE *)(*v14 + 0x3C) & 4) == 0 && v22[5] == *v14 && (TESTopic *)v22[4] == v31 )
                    {
                      goto LABEL_55;
                    }
                    v20 = v21;
                  }
                  while ( v21 );
                }
LABEL_48:
                if ( (*(_BYTE *)(v16 + 0x25) & 0x20) != 0 )
                  v29 = 1;
                v11 = dword_B36510;
                if ( !dword_B36510->node.next && !v11->node.data && (*(_BYTE *)(v16 + 0x25) & 2) == 0 )
                  return v16;
                if ( (*(_BYTE *)(v16 + 0x25) & 2) == 0 )
                {
                  v29 = 1;
                  break;
                }
                BSSimpleList_PushFront(v11, v16);
              }
LABEL_55:
              if ( !(_BYTE)a5 )
              {
                if ( v30 )
                {
                  v33 = v16;
                  *a2 = 1;
                }
              }
              if ( !v29 && ++v15 < v34 )
                continue;
              v11 = dword_B36510;
              break;
            }
          }
        }
      }
    }
    v7 = v31;
    if ( !v32 )
      break;
    p_firstEntry = v32;
  }
LABEL_10:
  if ( v11->node.next || v11->node.data )
  {
    next = v11;
    for ( i = 0; next; next = (tListTopic *)next->node.next )
    {
      if ( next->node.data )
        ++i;
    }
    v25 = GetRandomLargeInteger_(0) % i;
    v26 = (int *)dword_B36510;
    v27 = 0;
    result = 0;
    v28 = v25 + 1;
    if ( v28 > 0 )
    {
      do
      {
        if ( !v26 )
          break;
        if ( *v26 )
        {
          result = *v26;
          ++v27;
        }
        v26 = (int *)v26[1];
      }
      while ( v27 < v28 );
    }
  }
  else if ( (_BYTE)a5 )
  {
    result = 0;
    if ( TESDataHandler_g_PlayerRef->isInSEWorld )
    {
      topicType = (char)v7->topicType;
      if ( topicType >= 2 && (topicType <= 4 || topicType == 6) )
      {
        TESDataHandler_g_PlayerRef->isInSEWorld = 0;
        result = sub_52F010(v7, a2, a3, a4, a5, a6, a7);
        TESDataHandler_g_PlayerRef->isInSEWorld = 1;
      }
    }
  }
  else
  {
    return v33;
  }
  return result;
}
