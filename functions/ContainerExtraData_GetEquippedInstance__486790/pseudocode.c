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

  for ( i = *this; i; i = (ExtraDataList ****)i[1] ) /*0x48679d*/
  {
    v3 = *i; /*0x4867ab*/
    if ( !*i ) /*0x4867ab*/
      break; /*0x4867ab*/
    v4 = *v3; /*0x4867b5*/
    v5 = 0; /*0x4867b7*/
    v14 = *v3; /*0x4867bb*/
    v15 = 0; /*0x4867bf*/
    if ( *v3 ) /*0x4867b5*/
    {
      while ( *v4 ) /*0x4867c9*/
      {
        if ( sub_41DEF0((TESForm *)*v4) ) /*0x4867cb*/
        {
          if ( (int)v3[1] < 0 ) /*0x4867e0*/
            sub_4853B0((EntryData *)v3, 0, 0, 1); /*0x4867e8*/
          break; /*0x4867e8*/
        }
        v4 = (ExtraDataList **)v4[1]; /*0x4867d4*/
        if ( !v4 ) /*0x4867d9*/
          break; /*0x4867d9*/
      }
    }
    if ( v14 ) /*0x4867f1*/
    {
      do /*0x4868f8*/
      {
        if ( !*v14 ) /*0x4867fb*/
          break; /*0x4867ff*/
        if ( v5 ) /*0x486807*/
          goto LABEL_37; /*0x486807*/
        v15 = *v14; /*0x486810*/
        if ( ExtraDataList_HasWorn(*v14, 0) ) /*0x486814*/
        {
          switch ( a2 ) /*0x486831*/
          {
            case 6: /*0x486831*/
            case 7: /*0x486831*/
              v6 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)v3[2]); /*0x486872*/
              v7 = v6; /*0x486877*/
              if ( v6 && (TESBipedModelForm_CoversSlot(v6, 7, 0) || TESBipedModelForm_CoversSlot(v7, 6, 0)) ) /*0x486893*/
              {
                if ( a2 == 7 ) /*0x4868a3*/
                {
                  if ( ExtraDataList_HasWorn(v15, 1) ) /*0x4868ab*/
                    goto LABEL_32; /*0x4868b2*/
                }
                else if ( a2 == 6 && !ExtraDataList_HasWorn(v15, 1) ) /*0x4868c1*/
                {
                  goto LABEL_32; /*0x4868c8*/
                }
              }
              break; /*0x4868b2*/
            case 9: /*0x486831*/
              if ( *((_BYTE *)v3[2] + 4) == 0x21 ) /*0x48683f*/
                goto LABEL_32; /*0x48683f*/
              break; /*0x48683f*/
            case 0xA: /*0x486831*/
            case 0xB: /*0x486831*/
              break;
            case 0xC: /*0x486831*/
              if ( *((_BYTE *)v3[2] + 4) == 0x22 ) /*0x486863*/
                goto LABEL_32; /*0x486863*/
              break; /*0x486863*/
            case 0xE: /*0x486831*/
              if ( *((_BYTE *)v3[2] + 4) == 0x1A ) /*0x486851*/
                goto LABEL_32; /*0x486851*/
              break; /*0x486851*/
            default:
              v8 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)v3[2]); /*0x4868d0*/
              if ( v8 && TESBipedModelForm_CoversSlot(v8, a2, 0) ) /*0x4868e0*/
LABEL_32:
                v5 = 1; /*0x4868e9*/
              break; /*0x4868e9*/
          }
        }
        v14 = (ExtraDataList **)v14[1]; /*0x4868f4*/
      }
      while ( v14 ); /*0x4868f8*/
      if ( !v5 ) /*0x486900*/
        continue; /*0x486900*/
LABEL_37:
      if ( !a3 || *((_BYTE *)v3[2] + 4) == 0x14 ) /*0x48692f*/
      {
        v10 = (_DWORD *)FormHeapAlloc(0xCu); /*0x486933*/
        if ( v10 ) /*0x48693d*/
        {
          v10[2] = 0; /*0x48693f*/
          *v10 = 0; /*0x486942*/
          v10[1] = 0; /*0x486944*/
          v11 = v10; /*0x486947*/
        }
        else
        {
          v11 = 0; /*0x48694b*/
        }
        v12 = *v11 == 0; /*0x48694d*/
        v11[2] = v3[2]; /*0x486952*/
        if ( v12 ) /*0x486955*/
        {
          v13 = (_DWORD *)FormHeapAlloc(8u); /*0x486959*/
          if ( v13 ) /*0x486963*/
          {
            *v13 = 0; /*0x486965*/
            v13[1] = 0; /*0x486967*/
          }
          else
          {
            v13 = 0; /*0x48696c*/
          }
          *v11 = v13; /*0x48696e*/
        }
        BSSimpleList_PushFront((_DWORD *)*v11, (int)v15); /*0x486977*/
        v11[1] = ExtraDataList_GetExtraCount(v15); /*0x486987*/
        return v11; /*0x48698a*/
      }
      return 0; /*0x48692f*/
    }
  }
  return 0; /*0x486915*/
}
