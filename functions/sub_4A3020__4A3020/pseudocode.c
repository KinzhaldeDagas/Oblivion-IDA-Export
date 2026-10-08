__int16 sub_4A3020()
{
  TESSaveLoadGame_SerializationView *v1; // ecx
  unsigned __int8 *bufferCursor; // ebx
  TESRegionList *regionListOwner; // eax
  OblivionRegionListNode *p_regions; // esi
  TESForm *regionForm; // eax
  bool v6; // zf
  int Src; // [esp+4h] [ebp-Ch] BYREF
  unsigned int source; // [esp+8h] [ebp-8h] BYREF
  Data *data; // [esp+Ch] [ebp-4h] BYREF

  v1 = g_TESSaveLoadGame; /*0x4a3023*/
  Src = 0; /*0x4a3030*/
  bufferCursor = v1->bufferCursor; /*0x4a3038*/
  SaveLoad_SaveData(v1, &Src, 2u); /*0x4a303c*/
  regionListOwner = g_TESDataHandler->regionListOwner; /*0x4a3047*/
  if ( regionListOwner ) /*0x4a304f*/
  {
    p_regions = &regionListOwner->regions; /*0x4a3056*/
    if ( regionListOwner == (TESRegionList *)0xFFFFFFFC ) /*0x4a305b*/
    {
      *(_WORD *)bufferCursor = Src; /*0x4a30e0*/
    }
    else
    {
      while ( p_regions->next || p_regions->regionForm ) /*0x4a306a*/
      {
        regionForm = p_regions->regionForm; /*0x4a306c*/
        v6 = p_regions->regionForm == 0; /*0x4a3070*/
        *(float *)&data = 0.0; /*0x4a3072*/
        source = 0; /*0x4a3076*/
        if ( !v6 ) /*0x4a307e*/
        {
          source = regionForm->member.refID; /*0x4a3083*/
          data = regionForm[1].member.modlist.data; /*0x4a308a*/
        }
        SaveLoad_SaveFormID(g_TESSaveLoadGame, &source, 4u); /*0x4a309b*/
        LOWORD(regionListOwner) = (unsigned __int16)SaveLoad_SaveData(g_TESSaveLoadGame, &data, 4u); /*0x4a30ad*/
        ++Src; /*0x4a30b2*/
        p_regions = p_regions->next; /*0x4a30b7*/
        if ( !p_regions ) /*0x4a30bc*/
        {
          *(_WORD *)bufferCursor = Src; /*0x4a30c4*/
          return (__int16)regionListOwner; /*0x4a30cb*/
        }
      }
      LOWORD(regionListOwner) = Src; /*0x4a30cc*/
      *(_WORD *)bufferCursor = Src; /*0x4a30d2*/
    }
  }
  else
  {
    *(_WORD *)bufferCursor = Src; /*0x4a30ed*/
  }
  return (__int16)regionListOwner; /*0x4a30c7*/
}
