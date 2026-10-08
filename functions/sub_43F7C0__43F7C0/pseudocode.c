TESForm *__thiscall sub_43F7C0(int *this, float *a2, float *a3, float *a4, float a5)
{
  int v7; // ebx
  int v8[4]; // [esp+1Ch] [ebp-10h] BYREF

  if ( MEMORY[0xB333A0]->currentInteriorCell ) /*0x43f7c8*/
    return 0; /*0x43f7d1*/
  v7 = 0; /*0x43f7eb*/
  sub_43F720(this, v8, a5); /*0x43f7ed*/
  if ( sub_47E320(v8, a2, a3, a4) ) /*0x43f806*/
    return sub_44A270((TESWorldSpace **)g_TESDataHandler, *a4, a4[1], (TESWorldSpace *)*(this + 0x1D), 0); /*0x43f831*/
  return (TESForm *)v7; /*0x43f7d3*/
}
