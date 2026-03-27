void __thiscall NiAVObject::~NiAVObject(NiAVObject *this)
{
  NiTList_NiProperty *p_m_propertyList; // ebp
  volatile LONG *m_spCollision; // edi
  LONG (__stdcall *v4)(volatile LONG *); // ebx
  volatile LONG *v5; // edi

  this->vtbl = (NiAVObjectVtbl *)&NiAVObject::`vftable';
  p_m_propertyList = &this->members.m_propertyList;
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&this->members.m_propertyList);
  m_spCollision = (volatile LONG *)this->members.m_spCollision;
  v4 = InterlockedDecrement;
  if ( m_spCollision )
  {
    if ( !v4(m_spCollision + 1) )
      (**(void (__thiscall ***)(void *, int))m_spCollision)((void *)m_spCollision, 1);
    this->members.m_spCollision = 0;
  }
  v5 = (volatile LONG *)this->members.m_spCollision;
  if ( v5 )
  {
    if ( !v4(v5 + 1) )
      (**(void (__thiscall ***)(void *, int))v5)((void *)v5, 1);
  }
  NiTPointerList<NiPointer<NiProperty>>::~NiTPointerList<NiPointer<NiProperty>>((NiTPointerList__BSImageSpaceShader *)p_m_propertyList);
  NiDitherProperty::~NiDitherProperty((NiDitherProperty *)this);
}
