__int16 __thiscall sub_8976D0(volatile LONG **this, Ni2DBuffer *a2, Ni2DBuffer *a3)
{
  Ni2DBuffer *v4; // edi
  Ni2DBuffer *v5; // ebp
  LONG v6; // eax
  volatile LONG *v7; // esi
  Ni2DBuffer *v8; // eax
  Ni2DBuffer *v9; // edi
  LONG (__stdcall *v10)(volatile LONG *); // ebp

  v4 = a3; /*0x8976f6*/
  v5 = a2; /*0x8976fa*/
  sub_733850(this, (int)a2, a3); /*0x897700*/
  LOWORD(v6) = *((_WORD *)this + 6); /*0x897705*/
  LOWORD(v5->members.height) = v6; /*0x897709*/
  v7 = *(this + 4); /*0x89770d*/
  if ( v7 ) /*0x897716*/
  {
    InterlockedIncrement(v7 + 1); /*0x89771c*/
    a3 = 0; /*0x897732*/
    if ( NiTMap_GetAt(v4->__vftable, (int)v7, &a2) ) /*0x897747*/
      v8 = a2; /*0x897750*/
    else
      v8 = (Ni2DBuffer *)(*(int (__thiscall **)(volatile LONG *, Ni2DBuffer *))(*v7 + 0x18))(v7, v4); /*0x89775e*/
    NiSmartPointer_Set__(&a3, v8); /*0x897765*/
    v9 = a3; /*0x89776a*/
    sub_897670((Ni2DBuffer **)v5, a3); /*0x897771*/
    v10 = InterlockedDecrement; /*0x897778*/
    if ( v9 ) /*0x89777e*/
    {
      if ( !v10((volatile LONG *)&v9->members) ) /*0x897784*/
        (*(void (__thiscall **)(Ni2DBuffer *, int))v9->__vftable)(v9, 1); /*0x897792*/
      a3 = 0; /*0x897796*/
    }
    v6 = v10(v7 + 1); /*0x89779e*/
    if ( !v6 ) /*0x8977a2*/
      LOWORD(v6) = (**(int (__thiscall ***)(volatile LONG *, int))v7)(v7, 1); /*0x8977ac*/
  }
  return v6; /*0x8977f9*/
}
