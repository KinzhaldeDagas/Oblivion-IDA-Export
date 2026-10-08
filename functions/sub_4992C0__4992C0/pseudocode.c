void __thiscall sub_4992C0(WaterShader *this, NiRenderedTexture *a2)
{
  NiRenderedTexture *v3; // esi

  v3 = (NiRenderedTexture *)this->Unk104[0]; /*0x4992c4*/
  if ( v3 != a2 ) /*0x4992d1*/
  {
    if ( v3 ) /*0x4992d5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v3->member) ) /*0x4992db*/
        v3->__vftable->super.super.super.Destructor((NiRefObject *)v3, 1); /*0x4992f1*/
    }
    this->Unk104[0] = (UInt32)a2; /*0x4992f5*/
    if ( a2 ) /*0x4992fb*/
      InterlockedIncrement((volatile LONG *)&a2->member); /*0x499301*/
  }
}
