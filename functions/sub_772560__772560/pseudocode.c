// MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
void __thiscall sub_772560(NiD3DTextureStage *this)
{
  int v2; // eax
  NiTexture *v3; // edi
  NiTexture *Texture; // edi
  int v5; // eax
  unsigned int *v6; // ecx
  NiD3DPass *a2; // [esp+Ch] [ebp-4h] BYREF

  if ( *((_BYTE *)this + 0x5B) ) /*0x772567*/
  {
    Texture = this->Texture; /*0x7725bd*/
    if ( Texture ) /*0x7725c2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x7725c8*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x7725de*/
      this->Texture = 0; /*0x7725e0*/
    }
    sub_773240(*((_DWORD **)this + 3)); /*0x7725e6*/
    sub_773270(*((_DWORD **)this + 3)); /*0x7725ee*/
    v5 = *((_DWORD *)this + 5); /*0x7725f3*/
    if ( v5 ) /*0x7725f8*/
      sub_77CB50(*(_DWORD *)(v5 + 8)); /*0x7725fe*/
    *((_DWORD *)this + 5) = 0; /*0x77260a*/
    this->Stage = 0; /*0x77260d*/
    this->Unk08 = 0; /*0x77260f*/
    *((_DWORD *)this + 4) = 0; /*0x772612*/
    *((_BYTE *)this + 0x5A) = 0; /*0x772615*/
    v6 = (unsigned int *)unk_B4275C; /*0x772618*/
    a2 = (NiD3DPass *)this; /*0x77261f*/
    sub_73A5E0(v6, &a2); /*0x772623*/
  }
  else
  {
    v2 = *((_DWORD *)this + 5); /*0x77256d*/
    if ( v2 ) /*0x772572*/
      sub_77CB50(*(_DWORD *)(v2 + 8)); /*0x772578*/
    sub_773620(*((NiD3DPass **)this + 3)); /*0x772584*/
    v3 = this->Texture; /*0x772589*/
    if ( v3 ) /*0x772591*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v3->members) ) /*0x772597*/
        v3->__vftable->super.super.Destructor((NiRefObject *)v3, 1); /*0x7725ad*/
    }
    FormHeapFree((unsigned int)this); /*0x7725b0*/
  }
}
