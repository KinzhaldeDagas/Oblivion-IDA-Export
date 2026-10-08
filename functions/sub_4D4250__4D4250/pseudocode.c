Ni2DBuffer **__thiscall sub_4D4250(TESObjectCELL *this, Ni2DBuffer **a2, int a3, BSRenderedTexture *a4)
{
  NiRenderedTexture *InnerTexture; // eax
  BSRenderedTexture *v5; // edi

  *a2 = 0; /*0x4d427f*/
  if ( (this->members.flags0 & 1) != 0 ) /*0x4d4299*/
  {
    sub_4D0C20(this, &a4, a3, (int)a4); /*0x4d42aa*/
    InnerTexture = BSRenderedTexture::GetInnerTexture(a4); /*0x4d42bb*/
    NiSmartPointer_Set__(a2, (Ni2DBuffer *)InnerTexture); /*0x4d42c3*/
    v5 = a4; /*0x4d42c8*/
    if ( a4 ) /*0x4d42d3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&a4->members) ) /*0x4d42d9*/
      {
        if ( v5 ) /*0x4d42e5*/
          (*(void (__thiscall **)(BSRenderedTexture *, int))v5->vtbl)(v5, 1); /*0x4d42ef*/
      }
    }
  }
  return a2; /*0x4d42f3*/
}
