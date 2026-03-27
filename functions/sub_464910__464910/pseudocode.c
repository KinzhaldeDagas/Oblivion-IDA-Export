char __userpurge sub_464910@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectCELL *a5)
{
  UInt32 mainThreadID; // esi
  int v7; // eax
  char result; // al
  TESObjectCELL *v9; // esi
  _DWORD *v10; // edi
  int *i; // esi
  TESWorldSpace *WorldSpace; // eax
  _DWORD *v13; // edi
  _DWORD *v14; // ebp
  _DWORD *v15; // eax
  int *v16; // esi
  TESWorldSpace *v17; // eax
  char Game_LoadForm; // [esp+Bh] [ebp-Dh]
  _DWORD *v19; // [esp+Ch] [ebp-Ch] BYREF
  int XCoordinate; // [esp+10h] [ebp-8h]
  int YCoordinate; // [esp+14h] [ebp-4h]

  mainThreadID = OSGlobals->mainThreadID;
  if ( GetCurrentThreadId() == mainThreadID )
    LOBYTE(v7) = *(_BYTE *)(a1 + 0x18);
  else
    v7 = *(_DWORD *)(a1 + 0x18) >> 0x12;
  result = v7 & 1;
  if ( result )
  {
    v9 = a5;
    Game_LoadForm = TESSaveLoadGame_LoadForm((_DWORD **)a1, a2, a3, a4, (int)a5);
    if ( TESObjectCELL_IsInterior(a5) )
    {
      if ( NiTMap_GetAt(*(_DWORD **)(a1 + 8), a5->members.super.refID, &v19) )
      {
        v10 = v19;
        for ( i = v19; i; i = (int *)i[1] )
        {
          if ( *i )
          {
            sub_463D70((char *)a1, a2, a3, a4, *i);
            Game_LoadForm = 1;
          }
        }
        NiTMap_RemoveAt(*(_DWORD **)(a1 + 8), a5->members.super.refID);
        BSSimpleList_Clear(v10);
        FormHeapFree((unsigned int)v10);
        return Game_LoadForm;
      }
    }
    else
    {
      WorldSpace = TESObjectCELL_GetWorldSpace(a5);
      if ( NiTMap_GetAt(*(_DWORD **)(a1 + 0xC), WorldSpace->super.refID, &v19) )
      {
        v13 = v19;
        v14 = 0;
        XCoordinate = TESObjectCELL_GetXCoordinate(a5);
        YCoordinate = TESObjectCELL_GetYCoordinate(a5);
        v15 = v13;
        if ( v13 )
        {
          do
          {
            v16 = (int *)*v13;
            if ( *v13 && XCoordinate == v16[1] && YCoordinate == v16[2] )
            {
              sub_463D70((char *)a1, a2, a3, a4, *v16);
              Game_LoadForm = 1;
              if ( v14 )
              {
                BSSimpleList_Remove(v14, (int)v16);
                v13 = (_DWORD *)v14[1];
              }
              else
              {
                sub_67F100(v13);
              }
              FormHeapFree((unsigned int)v16);
            }
            else
            {
              v14 = v13;
              v13 = (_DWORD *)v13[1];
            }
          }
          while ( v13 );
          v9 = a5;
          v15 = v19;
        }
        if ( !v15[1] && !*v15 )
        {
          v17 = TESObjectCELL_GetWorldSpace(v9);
          NiTMap_RemoveAt(*(_DWORD **)(a1 + 0xC), v17->super.refID);
          FormHeapFree((unsigned int)v19);
        }
      }
    }
    return Game_LoadForm;
  }
  return result;
}
