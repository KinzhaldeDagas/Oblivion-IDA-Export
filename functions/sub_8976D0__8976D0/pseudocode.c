__int16 __thiscall sub_8976D0(volatile LONG **this, Ni2DBuffer *a2, _DWORD **a3)
{
  _DWORD **v4; // edi
  Ni2DBuffer *v5; // ebp
  LONG v6; // eax
  volatile LONG *v7; // esi
  Ni2DBuffer *v8; // eax
  volatile LONG *v9; // edi
  LONG (__stdcall *v10)(volatile LONG *); // ebp

  v4 = a3;
  v5 = a2;
  sub_733850(this, (int)a2, a3);
  LOWORD(v6) = *((_WORD *)this + 6);
  LOWORD(v5->members.height) = v6;
  v7 = *(this + 4);
  if ( v7 )
  {
    InterlockedIncrement(v7 + 1);
    a3 = 0;
    if ( NiTMap_GetAt(*v4, (int)v7, &a2) )
      v8 = a2;
    else
      v8 = (Ni2DBuffer *)(*(int (__thiscall **)(volatile LONG *, _DWORD **))(*v7 + 0x18))(v7, v4);
    NiSmartPointer_Set__((Ni2DBuffer **)&a3, v8);
    v9 = (volatile LONG *)a3;
    sub_897670((Ni2DBuffer **)v5, (Ni2DBuffer *)a3);
    v10 = InterlockedDecrement;
    if ( v9 )
    {
      if ( !v10(v9 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
      a3 = 0;
    }
    v6 = v10(v7 + 1);
    if ( !v6 )
      LOWORD(v6) = (**(int (__thiscall ***)(volatile LONG *, int))v7)(v7, 1);
  }
  return v6;
}
