NiParticleMeshesData *__thiscall NiParticleMeshesData::NiParticleMeshesData(NiParticleMeshesData *this)
{
  NiNode *v2; // eax
  NiNode *v3; // ebp
  NiNode *v4; // edi

  sub_73EE80((NiObject *)this);
  *(_DWORD *)this = &NiParticleMeshesData::`vftable';
  *((_DWORD *)this + 0x17) = 0;
  v2 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v2 )
    v3 = NiNode::NiNode(v2, 0);
  else
    v3 = 0;
  v4 = *((NiNode **)this + 0x17);
  if ( v4 != v3 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v4->members) )
        v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1);
    }
    *((_DWORD *)this + 0x17) = v3;
    if ( v3 )
      InterlockedIncrement((volatile LONG *)&v3->members);
  }
  *((_BYTE *)this + 0x60) = 0;
  return this;
}
