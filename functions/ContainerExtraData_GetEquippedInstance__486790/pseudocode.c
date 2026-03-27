_DWORD *__thiscall ContainerExtraData_GetEquippedInstance(ExtraDataList *****this, int a2, char a3)
{
  ExtraDataList ***v3; // edi
  ExtraDataList **v4; // esi
  char v5; // bl
  unsigned __int16 *v6; // eax
  unsigned __int16 *v7; // esi
  unsigned __int16 *v8; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  bool v12; // zf
  _DWORD *v13; // eax
  ExtraDataList **v14; // [esp+10h] [ebp-Ch]
  ExtraDataList *v15; // [esp+14h] [ebp-8h]
  ExtraDataList ****i; // [esp+18h] [ebp-4h]

  for ( i = *this; i; i = (ExtraDataList ****)i[1] )
  {
    v3 = *i;
    if ( !*i )
      break;
    v4 = *v3;
    v5 = 0;
    v14 = *v3;
    v15 = 0;
    if ( *v3 )
    {
      while ( *v4 )
      {
        if ( sub_41DEF0((TESForm *)*v4) )
        {
          if ( (int)v3[1] < 0 )
            sub_4853B0((EntryData *)v3, 0, 0, 1);
          break;
        }
        v4 = (ExtraDataList **)v4[1];
        if ( !v4 )
          break;
      }
    }
    if ( v14 )
    {
      do
      {
        if ( !*v14 )
          break;
        if ( v5 )
          goto LABEL_37;
        v15 = *v14;
        if ( ExtraDataList_HasWorn(*v14, 0) )
        {
          switch ( a2 )
          {
            case 6:
            case 7:
              v6 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)v3[2]);
              v7 = v6;
              if ( v6 && (TESBipedModelForm_CoversSlot(v6, 7, 0) || TESBipedModelForm_CoversSlot(v7, 6, 0)) )
              {
                if ( a2 == 7 )
                {
                  if ( ExtraDataList_HasWorn(v15, 1) )
                    goto LABEL_32;
                }
                else if ( a2 == 6 && !ExtraDataList_HasWorn(v15, 1) )
                {
                  goto LABEL_32;
                }
              }
              break;
            case 9:
              if ( *((_BYTE *)v3[2] + 4) == 0x21 )
                goto LABEL_32;
              break;
            case 0xA:
            case 0xB:
              break;
            case 0xC:
              if ( *((_BYTE *)v3[2] + 4) == 0x22 )
                goto LABEL_32;
              break;
            case 0xE:
              if ( *((_BYTE *)v3[2] + 4) == 0x1A )
                goto LABEL_32;
              break;
            default:
              v8 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)v3[2]);
              if ( v8 && TESBipedModelForm_CoversSlot(v8, a2, 0) )
LABEL_32:
                v5 = 1;
              break;
          }
        }
        v14 = (ExtraDataList **)v14[1];
      }
      while ( v14 );
      if ( !v5 )
        continue;
LABEL_37:
      if ( !a3 || *((_BYTE *)v3[2] + 4) == 0x14 )
      {
        v10 = (_DWORD *)FormHeapAlloc(0xCu);
        if ( v10 )
        {
          v10[2] = 0;
          *v10 = 0;
          v10[1] = 0;
          v11 = v10;
        }
        else
        {
          v11 = 0;
        }
        v12 = *v11 == 0;
        v11[2] = v3[2];
        if ( v12 )
        {
          v13 = (_DWORD *)FormHeapAlloc(8u);
          if ( v13 )
          {
            *v13 = 0;
            v13[1] = 0;
          }
          else
          {
            v13 = 0;
          }
          *v11 = v13;
        }
        BSSimpleList_PushFront((_DWORD *)*v11, (int)v15);
        v11[1] = ExtraDataList_GetExtraCount(v15);
        return v11;
      }
      return 0;
    }
  }
  return 0;
}
