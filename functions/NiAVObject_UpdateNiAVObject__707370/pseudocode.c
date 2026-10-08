// NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
int __thiscall NiAVObject_UpdateNiAVObject(NiAVObject *this, float a2, int a3)
{
  int result; // eax

  result = ((int (__thiscall *)(NiAVObject *, _DWORD, int))this->vtbl->UpdateDownwardPass)(this, LODWORD(a2), a3); /*0x707387*/
  if ( this->members.m_parent ) /*0x707389*/
    return ((int (__thiscall *)(NiNode *))this->members.m_parent->vtbl->Unk_25)(this->members.m_parent); /*0x70739a*/
  return result; /*0x70739d*/
}
