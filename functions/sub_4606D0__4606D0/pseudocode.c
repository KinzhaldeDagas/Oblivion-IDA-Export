void __thiscall sub_4606D0(TESSaveLoadGame_SerializationView *this, UInt32 a1)
{
  TESForm *v3; // eax

  v3 = TESForm_LookupByFormID(a1); /*0x4606d9*/
  if ( v3 ) /*0x4606e3*/
    TESSaveLoadGame_DeleteForm(this, v3); /*0x4606e8*/
  else
    SaveLoadChangesMap_RemoveChanges(this->currentChangesMap, a1, 1); /*0x4606f7*/
}
