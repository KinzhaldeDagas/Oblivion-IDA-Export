// Verified frees the PGRI record list header at TESPathGrid+0x28 and each allocated 16-byte record in that list.
void __thiscall TESPathGrid_ClearPGRIRecords(TESPathGrid *this)
{
  BSSimpleList_VoidPtr::NodeVoid *next; // eax

  while ( this->PGRIRecords.firstNode.next || this->PGRIRecords.firstNode.data ) /*0x4e4edd*/
  {
    FormHeapFree((unsigned int)this->PGRIRecords.firstNode.data); /*0x4e4ee3*/
    next = this->PGRIRecords.firstNode.next; /*0x4e4ee8*/
    if ( next ) /*0x4e4ef0*/
    {
      this->PGRIRecords.firstNode.next = next->next; /*0x4e4ef5*/
      this->PGRIRecords.firstNode.data = next->data; /*0x4e4efb*/
      FormHeapFree((unsigned int)next); /*0x4e4efe*/
    }
    else
    {
      this->PGRIRecords.firstNode.data = 0; /*0x4e4f08*/
    }
  }
}
