// Verified: accepts only IDs8..10, converts integer delta to float and adjusts LowProcess collection +0x70 with allowPositive=0.
void __thiscall LowProcess_ModAViCur(LowProcess *self, int context, int actorValue, int delta)
{
  float deltaa; // [esp+0h] [ebp-8h]

  if ( actorValue >= 8 && actorValue <= 0xA ) /*0x6434cc*/
  {
    deltaa = (float)delta; /*0x6434d8*/
    AVCollection_AdjustValue(&self->avDamageModifiers, actorValue, deltaa, 0); /*0x6434dc*/
  }
}
