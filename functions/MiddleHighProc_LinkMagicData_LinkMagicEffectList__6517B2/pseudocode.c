// positive sp value has been detected, the output may be wrong!
TESSaveLoad *__userpurge MiddleHighProc_LinkMagicData__::LinkMagicEffectList@<eax>(
        int a1@<edi>,
        int a2,
        int a3,
        int a4)
{
  UInt32 *v4; // esi
  UInt32 *v5; // ebp
  UInt32 v6; // ebx
  TESForm *v7; // eax
  void *v8; // eax
  TESSaveLoad *result; // eax
  UInt32 *v10; // eax
  int v11; // [esp-Ch] [ebp-10h]

  ActiveEffect_Base_LinkAEList(*(_DWORD **)(a1 + 0x174), v11);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x65u )
  {
    v4 = (UInt32 *)(a1 + 0xA8);
    v5 = 0;
    if ( a1 != 0xFFFFFF58 )
    {
      do
      {
        if ( !v4[1] && !*v4 )
          break;
        v6 = *v4;
        if ( *v4
          && (v7 = TESForm_LookupByFormID(v6),
              (v8 = OblivionDynamicCast(
                      v7,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                      0)) != 0) )
        {
          *v4 = (UInt32)v8;
          v5 = v4;
          v4 = (UInt32 *)v4[1];
        }
        else if ( v5 )
        {
          BSSimpleList_Remove(v5, v6);
          v4 = (UInt32 *)v5[1];
        }
        else
        {
          v10 = (UInt32 *)v4[1];
          if ( v10 )
          {
            v4[1] = v10[1];
            *v4 = *v10;
            FormHeapFree((unsigned int)v10);
          }
          else
          {
            *v4 = 0;
          }
        }
      }
      while ( v4 );
    }
  }
  result = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x71u )
  {
    result = *(TESSaveLoad **)(a1 + 0x148);
    if ( result )
    {
      result = (TESSaveLoad *)MagicItem_LookupByFormID(*(_DWORD *)(a1 + 0x148));
      *(_DWORD *)(a1 + 0x148) = result;
    }
  }
  return result;
}
