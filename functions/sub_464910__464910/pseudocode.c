//  Verified load timing: invoked by TESObjectCELL_LinkForm at 4CDA22 after cell records load; returns before ExtraDataList_ResolveLoadedFormIDs at 4CDAB7 and before TESForm_SetIsLinked at 4CDB9E. This restores deferred refs while the owning CELL is being linked.
unsigned __int8 __thiscall TESSaveLoadGame_LoadReferencesForCell(
        TESSaveLoadGame_SerializationView *self,
        TESObjectCELL *cell)
{
  double v2; // st5
  double v3; // st6
  double v4; // st7
  UInt32 mainThreadID; // esi
  unsigned int v7; // eax
  unsigned __int8 result; // al
  TESObjectCELL *v9; // esi
  _DWORD *v10; // edi
  unsigned int *i; // esi
  TESWorldSpace *WorldSpace; // eax
  _DWORD *v13; // edi
  int *v14; // ebp
  _DWORD *v15; // eax
  unsigned int *v16; // esi
  TESWorldSpace *v17; // eax
  char Game_LoadForm; // [esp+Bh] [ebp-Dh]
  _DWORD *v19; // [esp+Ch] [ebp-Ch] BYREF
  int XCoordinate; // [esp+10h] [ebp-8h]
  int YCoordinate; // [esp+14h] [ebp-4h]

  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x46491a*/
  if ( GetCurrentThreadId() == mainThreadID ) /*0x464927*/
    LOBYTE(v7) = self->flags; /*0x464929*/
  else
    v7 = self->flags >> 0x12; /*0x464931*/
  result = v7 & 1; /*0x464934*/
  if ( result ) /*0x464938*/
  {
    v9 = cell; /*0x464942*/
    Game_LoadForm = TESSaveLoadGame_LoadForm(self, v2, v3, v4, (int)cell); /*0x464951*/
    if ( TESObjectCELL_IsInterior(cell) ) /*0x464955*/
    {
      if ( NiTMap_GetAt(&self->interiorNewReferencesMap->vtable, cell->members.super.refID, &v19) ) /*0x46496a*/
      {
        v10 = v19; /*0x464977*/
        for ( i = v19; i; i = (unsigned int *)i[1] ) /*0x46497f*/
        {
          if ( *i ) /*0x464981*/
          {
            TESSaveLoadGame_RestoreChangedReference(self, v2, v3, v4, *i); /*0x46498a*/
            Game_LoadForm = 1; /*0x46498f*/
          }
        }
        NiTMap_RemoveAt(&self->interiorNewReferencesMap->vtable, cell->members.super.refID); /*0x4649a6*/
        BSSimpleList_Clear(v10); /*0x4649ad*/
        FormHeapFree((unsigned int)v10); /*0x4649b3*/
        return Game_LoadForm; /*0x4649c5*/
      }
    }
    else
    {
      WorldSpace = TESObjectCELL_GetWorldSpace(cell); /*0x4649ca*/
      if ( NiTMap_GetAt(&self->exteriorNewReferencesMap->vtable, WorldSpace->super.refID, &v19) ) /*0x4649db*/
      {
        v13 = v19; /*0x4649e8*/
        v14 = 0; /*0x4649ef*/
        XCoordinate = TESObjectCELL_GetXCoordinate(cell); /*0x4649f8*/
        YCoordinate = TESObjectCELL_GetYCoordinate(cell); /*0x464a01*/
        v15 = v13; /*0x464a05*/
        if ( v13 ) /*0x464a09*/
        {
          do /*0x464a6a*/
          {
            v16 = (unsigned int *)*v13; /*0x464a10*/
            if ( *v13 && XCoordinate == v16[1] && YCoordinate == v16[2] ) /*0x464a26*/
            {
              TESSaveLoadGame_RestoreChangedReference(self, v2, v3, v4, *v16); /*0x464a2d*/
              Game_LoadForm = 1; /*0x464a34*/
              if ( v14 ) /*0x464a39*/
              {
                BSSimpleList_Remove(v14, (int)v16); /*0x464a3e*/
                v13 = (_DWORD *)v14[1]; /*0x464a43*/
              }
              else
              {
                BSSimpleList_PopHeadWithoutPayloadFree(v13); /*0x464a53*/
              }
              FormHeapFree((unsigned int)v16); /*0x464a47*/
            }
            else
            {
              v14 = v13; /*0x464a63*/
              v13 = (_DWORD *)v13[1]; /*0x464a65*/
            }
          }
          while ( v13 ); /*0x464a6a*/
          v9 = cell; /*0x464a6c*/
          v15 = v19; /*0x464a70*/
        }
        if ( !v15[1] && !*v15 ) /*0x464a7b*/
        {
          v17 = TESObjectCELL_GetWorldSpace(v9); /*0x464a82*/
          NiTMap_RemoveAt(&self->exteriorNewReferencesMap->vtable, v17->super.refID); /*0x464a8e*/
          FormHeapFree((unsigned int)v19); /*0x464a98*/
        }
      }
    }
    return Game_LoadForm; /*0x464aa0*/
  }
  return result; /*0x46493a*/
}
