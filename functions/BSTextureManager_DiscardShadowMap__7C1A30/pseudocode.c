// Oblivion frustum-shadow pool return. Finds the texture in the used pool, appends it to the unused shadowMaps list, removes the used-list node, and balances strong references.
void __thiscall BSTextureManager__ReturnFrustumShadowTexture(BSTextureManager *this, BSRenderedTexture *texture)
{
  BSRenderedTexture *v3; // esi
  int *start; // edi
  void (__stdcall *v5)(volatile LONG *); // ebp
  BSRenderedTexture *v6; // edi
  int *v7; // [esp+14h] [ebp-14h] BYREF
  BSRenderedTexture *v8; // [esp+18h] [ebp-10h] BYREF
  unsigned int v9; // [esp+24h] [ebp-4h]

  if ( texture ) /*0x7c1a5e*/
  {
    v3 = 0; /*0x7c1a64*/
    v8 = 0; /*0x7c1a66*/
    start = (int *)this->unk30.start; /*0x7c1a6a*/
    v9 = 0; /*0x7c1a6f*/
    v7 = start; /*0x7c1a73*/
    if ( start ) /*0x7c1a77*/
    {
      v5 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x7c1a7d*/
      while ( 1 ) /*0x7c1a83*/
      {
        if ( v3 != (BSRenderedTexture *)start[2] ) /*0x7c1a86*/
        {
          if ( v3 ) /*0x7c1a8a*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v3->members) ) /*0x7c1a90*/
              (*(void (__thiscall **)(BSRenderedTexture *, int))v3->vtbl)(v3, 1); /*0x7c1aa2*/
          }
          v8 = (BSRenderedTexture *)start[2]; /*0x7c1aa9*/
          v3 = v8; /*0x7c1aa4*/
          if ( v8 ) /*0x7c1aad*/
            v5((volatile LONG *)&v8->members); /*0x7c1ab3*/
        }
        if ( v3 == texture ) /*0x7c1ab9*/
          break; /*0x7c1ab9*/
        start = (int *)*start; /*0x7c1abb*/
        if ( !start ) /*0x7c1abf*/
        {
          v7 = 0; /*0x7c1ac1*/
          goto LABEL_18; /*0x7c1ac5*/
        }
      }
      v7 = start; /*0x7c1ac9*/
      NiTRefPointerList__AddTail(&this->shadowMaps.__vftable, (int *)&v8); /*0x7c1ad7*/
      NiTRefPointerList__RemovePosition((int ***)&this->unk30, (int **)&texture, &v7); /*0x7c1ae9*/
      v6 = texture; /*0x7c1aee*/
      if ( texture ) /*0x7c1af4*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&texture->members) ) /*0x7c1afa*/
        {
          if ( v6 ) /*0x7c1b06*/
            (*(void (__thiscall **)(BSRenderedTexture *, int))v6->vtbl)(v6, 1); /*0x7c1b10*/
        }
      }
    }
LABEL_18:
    v9 = 0xFFFFFFFF; /*0x7c1b12*/
    if ( v3 ) /*0x7c1b1c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v3->members) ) /*0x7c1b22*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v3->vtbl)(v3, 1); /*0x7c1b34*/
    }
  }
}
