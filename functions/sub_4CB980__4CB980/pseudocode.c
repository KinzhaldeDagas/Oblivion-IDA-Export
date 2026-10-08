// Verified: scans only the supplied persistent cell's object list under the cell list lock, filters base-form type kFormType_SubSpace (0x29), and inserts each candidate into the owning WorldSpace index. Sole direct caller is TESWorldSpace_IndexPersistentCellSubSpaces.
double __usercall TESObjectCELL_IndexSubSpaceReferences@<st0>(
        TESObjectCELL *persistentCell@<ecx>,
        double carry@<st0>,
        TESWorldSpace *worldspace)
{
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi

  if ( worldspace ) /*0x4cb98a*/
  {
    sub_496EA0((char *)&unk_B35C80, persistentCell); /*0x4cb993*/
    p_objectList = &persistentCell->members.objectList; /*0x4cb998*/
    if ( persistentCell != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cb99d*/
    {
      do /*0x4cb9c5*/
      {
        refr = p_objectList->refr; /*0x4cb9a0*/
        if ( p_objectList->refr ) /*0x4cb9a0*/
        {
          if ( refr->vtbl->GetBaseForm(p_objectList->refr)->member.type == kFormType_SubSpace ) /*0x4cb9b6*/
            carry = TESWorldSpace_IndexSubSpaceReference(worldspace, carry, refr); /*0x4cb9bb*/
        }
        p_objectList = p_objectList->next; /*0x4cb9c0*/
      }
      while ( p_objectList ); /*0x4cb9c5*/
    }
    sub_496F50(&unk_B35C80, persistentCell); /*0x4cb9ce*/
  }
  return carry; /*0x4cb9d4*/
}
