void __thiscall sub_803570(NiTPointerList__BSImageSpaceShader *this, BSShader *a2, NiDX9Renderer *a3, int a4, char a5)
{
  NiGeometry *unk10; // edi
  NiObject *shader; // esi
  NiObject **p_shader; // edi

  if ( a2 )
  {
    if ( !this->unk10 )
      ImageSpaceShaderList::AssignScreenElements(this);
    sub_4EC910(this->unk10, a2);
    a2->__vftable->super.super.super.UpdateInternalVars((NiShader *)a2, this->unk10);
    ((void (__thiscall *)(BSShader *, NiGeometry *, int *, char *, int))a2->__vftable[1].super.super.super.super.Destructor)(
      a2,
      this->unk10,
      &a4,
      &a5,
      1);
    unk10 = this->unk10;
    shader = unk10->member.shader;
    p_shader = &unk10->member.shader;
    if ( shader )
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->members) )
        shader->__vftable->super.Destructor((NiRefObject *)shader, 1);
      *p_shader = 0;
    }
  }
}
