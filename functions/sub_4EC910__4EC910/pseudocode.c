void __thiscall sub_4EC910(NiGeometry *this, BSShader *a2)
{
  BSShader *shader; // esi

  shader = (BSShader *)this->member.shader;
  if ( shader != a2 )
  {
    if ( shader )
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->member) )
        shader->__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1);
    }
    this->member.shader = (NiObject *)a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)&a2->member);
  }
}
