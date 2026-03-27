Ni2DBuffer **__thiscall sub_4D41A0(TESObjectCELL *this, Ni2DBuffer **a2)
{
  bool v2; // zf
  NiRenderedTexture *InnerTexture; // eax
  BSRenderedTexture *v4; // edi
  BSRenderedTexture *v6; // [esp+Ch] [ebp-14h] BYREF
  int v7; // [esp+10h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-4h]

  v7 = 0;
  *a2 = 0;
  v2 = (this->members.flags0 & 1) == 0;
  v8 = 0;
  v7 = 1;
  if ( v2 )
  {
    sub_4D06C0(this, &v6);
    v8 = 1;
    InnerTexture = BSRenderedTexture::GetInnerTexture(v6);
    NiSmartPointer_Set__(a2, (Ni2DBuffer *)InnerTexture);
    v4 = v6;
    LOBYTE(v8) = 0;
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->members) )
      {
        if ( v4 )
          (*(void (__thiscall **)(BSRenderedTexture *, int))v4->vtbl)(v4, 1);
      }
    }
  }
  return a2;
}
