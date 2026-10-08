// Verified: integer max-value delta goes to MiddleLowProcess +0x94 with allowPositive=1.
void __thiscall MiddleProcess_ModAViMax(MiddleLowProcess *self, int context, int actorValue, int delta)
{
  float deltaa; // [esp+0h] [ebp-8h]

  deltaa = (float)delta; /*0x65883b*/
  AVCollection_AdjustValue(&self->maxAVModifiers, actorValue, deltaa, 1u); /*0x658845*/
}
