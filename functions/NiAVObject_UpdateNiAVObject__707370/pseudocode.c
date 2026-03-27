int __thiscall NiAVObject_UpdateNiAVObject(NiAVObject *this, float a2, int a3)
{
  int result; // eax

  result = ((int (__thiscall *)(NiAVObject *, _DWORD, int))this->vtbl->UpdateDownwardPass)(this, LODWORD(a2), a3);
  if ( this->members.m_parent )
    return ((int (__thiscall *)(NiNode *))this->members.m_parent->vtbl->Unk_25)(this->members.m_parent);
  return result;
}
