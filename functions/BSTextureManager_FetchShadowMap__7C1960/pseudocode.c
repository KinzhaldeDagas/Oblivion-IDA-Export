// Oblivion frustum-shadow pool borrow. Removes the head BSRenderedTexture from the unused shadowMaps list and appends the same refcounted object to the used pool.
BSRenderedTexture *__thiscall BSTextureManager__BorrowFrustumShadowTexture(BSTextureManager *this)
{
  BSRenderedTexture *v2; // esi
  UInt32 numItems; // eax
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int *v5; // eax
  int *v6; // esi
  int v8; // [esp+10h] [ebp-14h] BYREF
  int *v9; // [esp+14h] [ebp-10h] BYREF
  unsigned int v10; // [esp+20h] [ebp-4h]

  v2 = 0; /*0x7c1988*/
  v8 = 0; /*0x7c198a*/
  numItems = this->shadowMaps.numItems; /*0x7c198e*/
  v4 = InterlockedDecrement; /*0x7c1993*/
  v10 = 0; /*0x7c1999*/
  if ( numItems ) /*0x7c199d*/
  {
    v5 = (int *)NiTRefPointerList__RemoveHead((int ***)&this->shadowMaps, &v9);// Remove the borrowed texture node from the unused frustum-shadow pool. /*0x7c19a7*/
    LOBYTE(v10) = 1; /*0x7c19b1*/
    OB_NiSmartPointer_Assign_010201A0(&v8, v5); /*0x7c19b6*/
    LOBYTE(v10) = 0; /*0x7c19c1*/
    if ( v9 ) /*0x7c19c6*/
    {
      v6 = v9; /*0x7c19c8*/
      if ( !v4(v9 + 1) ) /*0x7c19ce*/
        (*(void (__thiscall **)(int *, int))*v6)(v6, 1); /*0x7c19e0*/
    }
    NiTRefPointerList__AddTail(&this->unk30.__vftable, &v8);// Append the borrowed texture to the used frustum-shadow pool. /*0x7c19ea*/
    v2 = (BSRenderedTexture *)v8; /*0x7c19ef*/
  }
  v10 = 0xFFFFFFFF; /*0x7c19f5*/
  if ( v2 ) /*0x7c19fd*/
  {
    if ( !v4((volatile LONG *)&v2->members) ) /*0x7c1a03*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))v2->vtbl)(v2, 1); /*0x7c1a11*/
  }
  return v2; /*0x7c1a15*/
}
