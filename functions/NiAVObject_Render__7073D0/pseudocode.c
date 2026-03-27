int __thiscall NiAVObject_Render(NiAVObject *this, NiCullingProcess *a2)
{
  int result; // eax

  if ( (this->members.m_flags & 1) == 0 )
    return a2->vtbl->ProcessCull(a2, this);
  return result;
}
