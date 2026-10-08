Ni2DBuffer **__thiscall sub_4D41A0(TESObjectCELL *this, Ni2DBuffer **a2)
{
  bool v2; // zf
  NiRenderedTexture *InnerTexture; // eax
  BSRenderedTexture *v4; // edi
  BSRenderedTexture *v6; // [esp+Ch] [ebp-14h] BYREF
  int v7; // [esp+10h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-4h]

  v7 = 0; /*0x4d41c5*/
  *a2 = 0; /*0x4d41d1*/
  v2 = (this->members.flags0 & 1) == 0; /*0x4d41d7*/
  v8 = 0; /*0x4d41db*/
  v7 = 1; /*0x4d41e3*/
  if ( v2 ) /*0x4d41eb*/
  {
    sub_4D06C0(this, &v6); /*0x4d41f2*/
    v8 = 1; /*0x4d41fb*/
    InnerTexture = BSRenderedTexture::GetInnerTexture(v6); /*0x4d4203*/
    NiSmartPointer_Set__(a2, (Ni2DBuffer *)InnerTexture); /*0x4d420b*/
    v4 = v6; /*0x4d4210*/
    LOBYTE(v8) = 0; /*0x4d4216*/
    if ( v6 ) /*0x4d421b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->members) ) /*0x4d4221*/
      {
        if ( v4 ) /*0x4d422d*/
          (*(void (__thiscall **)(BSRenderedTexture *, int))v4->vtbl)(v4, 1); /*0x4d4237*/
      }
    }
  }
  return a2; /*0x4d423b*/
}
