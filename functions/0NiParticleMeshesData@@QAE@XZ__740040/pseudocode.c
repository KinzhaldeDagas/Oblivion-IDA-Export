NiParticleMeshesData *__thiscall NiParticleMeshesData::NiParticleMeshesData(NiParticleMeshesData *this)
{
  NiNode *v2; // eax
  NiNode *v3; // ebp
  NiNode *v4; // edi

  sub_73EE80((NiObject *)this); /*0x74006d*/
  *(_DWORD *)this = &NiParticleMeshesData::`vftable'; /*0x740074*/
  *((_DWORD *)this + 0x17) = 0; /*0x74007e*/
  v2 = (NiNode *)FormHeapAlloc(0xDCu); /*0x74008b*/
  if ( v2 ) /*0x74009e*/
    v3 = NiNode::NiNode(v2, 0); /*0x7400a8*/
  else
    v3 = 0; /*0x7400ac*/
  v4 = *((NiNode **)this + 0x17); /*0x7400ae*/
  if ( v4 != v3 ) /*0x7400b8*/
  {
    if ( v4 ) /*0x7400bc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v4->members) ) /*0x7400c2*/
        v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1); /*0x7400d8*/
    }
    *((_DWORD *)this + 0x17) = v3; /*0x7400dc*/
    if ( v3 ) /*0x7400df*/
      InterlockedIncrement((volatile LONG *)&v3->members); /*0x7400e5*/
  }
  *((_BYTE *)this + 0x60) = 0; /*0x7400eb*/
  return this; /*0x7400f0*/
}
