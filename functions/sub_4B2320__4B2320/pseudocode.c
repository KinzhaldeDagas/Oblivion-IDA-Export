// Generic TESBoundObject Create3D wrapper: dispatches virtual +0xEC with the reference and a zero mode argument.
NiNode *__thiscall TESBoundObject_Create3D(TESBoundObject *this, TESObjectREFR *reference)
{
  return ((NiNode *(__thiscall *)(TESBoundObject *, TESObjectREFR *, _DWORD))this->vtbl[1].super.super.Destroy)( /*0x4b2331*/
           this,
           reference,
           0);
}
