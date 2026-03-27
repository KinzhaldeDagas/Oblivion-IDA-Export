TESForm *__thiscall sub_43F7C0(int *this, float *a2, float *a3, float *a4, float a5)
{
  int v7; // ebx
  int v8[4]; // [esp+1Ch] [ebp-10h] BYREF

  if ( TES->currentInteriorCell )
    return 0;
  v7 = 0;
  sub_43F720(this, v8, a5);
  if ( sub_47E320(v8, a2, a3, a4) )
    return sub_44A270((_DWORD *)TESDataHandler, *a4, a4[1], *(this + 0x1D), 0);
  return (TESForm *)v7;
}
