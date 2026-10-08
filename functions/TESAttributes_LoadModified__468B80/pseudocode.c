// Verified: ECX component receiver; one stack mask for save (RET 4), two stack words for load (RET 8). No extra register parameters. Mask 0x8 transfers the 8 attribute bytes at component +4.
void __thiscall TESAttributes_LoadModified(
        TESAttributes *self,
        ActorBaseSaveChangeMask changeMask,
        unsigned int currentFlags)
{
  if ( (changeMask & 8) != 0 ) /*0x468b85*/
    SaveLoad_LoadData(g_TESSaveLoadGame, self->attributes, 8u); /*0x468b9c*/
}
