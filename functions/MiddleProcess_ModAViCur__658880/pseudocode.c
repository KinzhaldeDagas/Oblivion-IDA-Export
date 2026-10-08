// Verified: integer current-value delta goes to inherited LowProcess +0x70 with allowPositive=0.
void __thiscall MiddleProcess_ModAViCur(MiddleLowProcess *self, int context, int actorValue, int delta)
{
  float deltaa; // [esp+0h] [ebp-8h]

  deltaa = (float)delta; /*0x65888b*/
  AVCollection_AdjustValue(&self->avDamageModifiers, actorValue, deltaa, 0); /*0x658892*/
}
