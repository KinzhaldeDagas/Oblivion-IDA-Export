Ni2DBuffer **__thiscall sub_4D4250(TESObjectCELL *this, Ni2DBuffer **a2, int a3, BSRenderedTexture *a4)
{
  NiRenderedTexture *InnerTexture; // eax
  BSRenderedTexture *v5; // edi

  *a2 = 0;
  if ( (this->members.flags0 & 1) != 0 )
  {
    sub_4D0C20(this, &a4, a3, (int)a4);
    InnerTexture = BSRenderedTexture::GetInnerTexture(a4);
    NiSmartPointer_Set__(a2, (Ni2DBuffer *)InnerTexture);
    v5 = a4;
    if ( a4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&a4->members) )
      {
        if ( v5 )
          (*(void (__thiscall **)(BSRenderedTexture *, int))v5->vtbl)(v5, 1);
      }
    }
  }
  return a2;
}
