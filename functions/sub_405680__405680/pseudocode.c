LONG __thiscall sub_405680(NiNode *this, BSShaderProperty *a2)
{
  BSShaderProperty *v3; // esi
  LONG result; // eax

  v3 = a2;
  result = (*((int (__thiscall **)(BSShaderProperty *))a2->vtbl + 0x13))(a2);
  if ( result < 0xA )
  {
    a2 = v3;
    InterlockedIncrement((volatile LONG *)&v3->member);
    sub_749800(&this->members.super.m_propertyList.vtlb, (int *)&a2);
    result = InterlockedDecrement((volatile LONG *)&v3->member);
    if ( !result )
      return (*(LONG (__thiscall **)(BSShaderProperty *, int))v3->vtbl)(v3, 1);
  }
  return result;
}
