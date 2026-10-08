// MoonSugarEffect decode: single image-space shader helper; ensures fullscreen quad, binds shader temporarily, renders it, then releases quad shader binding.
void __thiscall sub_803570(NiTPointerList__BSImageSpaceShader *this, BSShader *a2, NiDX9Renderer *a3, int a4, char a5)
{
  NiGeometry *unk10; // edi
  NiObject *shader; // esi
  NiObject **p_shader; // edi

  if ( a2 ) /*0x80357a*/
  {
    if ( !this->unk10 ) /*0x80357c*/
      ImageSpaceShaderList::AssignScreenElements(this); /*0x803582*/
    NiGeometry_SetShader(this->unk10, a2); /*0x80358b*/
    a2->__vftable->super.super.super.UpdateInternalVars((NiShader *)a2, this->unk10); /*0x80359b*/
    ((void (__thiscall *)(BSShader *, NiGeometry *, int *, char *, int))a2->__vftable[1].super.super.super.super.Destructor)( /*0x8035b7*/
      a2,
      this->unk10,
      &a4,
      &a5,
      1);
    unk10 = this->unk10; /*0x8035b9*/
    shader = unk10->member.shader; /*0x8035bc*/
    p_shader = &unk10->member.shader; /*0x8035c2*/
    if ( shader ) /*0x8035ca*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->members) ) /*0x8035d0*/
        shader->__vftable->super.Destructor((NiRefObject *)shader, 1); /*0x8035e6*/
      *p_shader = 0; /*0x8035e8*/
    }
  }
}
