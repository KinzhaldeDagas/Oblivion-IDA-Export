void __thiscall sub_772560(NiD3DTextureStage *this)
{
  int v2; // eax
  NiTexture *v3; // edi
  NiTexture *Texture; // edi
  int v5; // eax
  unsigned int *v6; // ecx
  NiD3DPass *a2; // [esp+Ch] [ebp-4h] BYREF

  if ( *((_BYTE *)this + 0x5B) )
  {
    Texture = this->Texture;
    if ( Texture )
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) )
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1);
      this->Texture = 0;
    }
    sub_773240(*((_DWORD **)this + 3));
    sub_773270(*((_DWORD **)this + 3));
    v5 = *((_DWORD *)this + 5);
    if ( v5 )
      sub_77CB50(*(_DWORD *)(v5 + 8));
    *((_DWORD *)this + 5) = 0;
    this->Stage = 0;
    this->Unk08 = 0;
    *((_DWORD *)this + 4) = 0;
    *((_BYTE *)this + 0x5A) = 0;
    v6 = (unsigned int *)dword_B4275C;
    a2 = (NiD3DPass *)this;
    sub_73A5E0(v6, &a2);
  }
  else
  {
    v2 = *((_DWORD *)this + 5);
    if ( v2 )
      sub_77CB50(*(_DWORD *)(v2 + 8));
    sub_773620(*((_DWORD *)this + 3));
    v3 = this->Texture;
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v3->members) )
        v3->__vftable->super.super.Destructor((NiRefObject *)v3, 1);
    }
    FormHeapFree((unsigned int)this);
  }
}
