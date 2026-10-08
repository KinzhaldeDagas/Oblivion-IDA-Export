void __thiscall NiAVObject::~NiAVObject(NiAVObject *this)
{
  NiTList_NiProperty *p_m_propertyList; // ebp
  volatile LONG *m_spCollision; // edi
  LONG (__stdcall *v4)(volatile LONG *); // ebx
  volatile LONG *v5; // edi

  this->vtbl = (NiAVObjectVtbl *)&NiAVObject::`vftable'; /*0x707ccb*/
  p_m_propertyList = &this->members.m_propertyList; /*0x707cd1*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&this->members.m_propertyList); /*0x707ce1*/
  m_spCollision = (volatile LONG *)this->members.m_spCollision; /*0x707ce6*/
  v4 = InterlockedDecrement; /*0x707cee*/
  if ( m_spCollision ) /*0x707cf4*/
  {
    if ( !v4(m_spCollision + 1) ) /*0x707cfa*/
      (**(void (__thiscall ***)(void *, int))m_spCollision)((void *)m_spCollision, 1); /*0x707d0c*/
    this->members.m_spCollision = 0; /*0x707d0e*/
  }
  v5 = (volatile LONG *)this->members.m_spCollision; /*0x707d18*/
  if ( v5 ) /*0x707d25*/
  {
    if ( !v4(v5 + 1) ) /*0x707d2b*/
      (**(void (__thiscall ***)(void *, int))v5)((void *)v5, 1); /*0x707d3d*/
  }
  NiTPointerList<NiPointer<NiProperty>>::~NiTPointerList<NiPointer<NiProperty>>((NiTPointerList__BSImageSpaceShader *)p_m_propertyList); /*0x707d46*/
  NiDitherProperty::~NiDitherProperty((NiDitherProperty *)this); /*0x707d55*/
}
