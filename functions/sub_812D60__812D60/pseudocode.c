void __thiscall sub_812D60(unsigned int *this)
{
  int v2; // eax
  int v3; // ecx
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  void (__thiscall ***v5)(_DWORD, int); // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // esi
  _DWORD v12[2]; // [esp+1Ch] [ebp-14h] BYREF
  int v13; // [esp+2Ch] [ebp-4h]

  v12[1] = this; /*0x812d89*/
  v2 = *this; /*0x812d8d*/
  v3 = *(_DWORD *)(*this + 0x1C); /*0x812d8f*/
  v4 = InterlockedDecrement; /*0x812d92*/
  v13 = 2; /*0x812d9c*/
  if ( v3 ) /*0x812da4*/
  {
    (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v3 + 0x88))(v3, v12, v2); /*0x812db4*/
    if ( v12[0] ) /*0x812dbc*/
    {
      v5 = (void (__thiscall ***)(_DWORD, int))v12[0]; /*0x812dbe*/
      if ( !v4((volatile LONG *)(v12[0] + 4)) ) /*0x812dc4*/
        (**v5)(v5, 1); /*0x812dd6*/
    }
  }
  v6 = *this; /*0x812dd8*/
  if ( *this ) /*0x812dd8*/
  {
    if ( !v4((volatile LONG *)(v6 + 4)) ) /*0x812de2*/
    {
      if ( v6 ) /*0x812dea*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x812df4*/
    }
    *this = 0; /*0x812df6*/
  }
  v7 = *(this + 2); /*0x812df8*/
  if ( v7 ) /*0x812dfd*/
  {
    if ( !v4((volatile LONG *)(v7 + 4)) ) /*0x812e03*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x812e15*/
    *(this + 2) = 0; /*0x812e17*/
  }
  v8 = *(this + 1); /*0x812e1a*/
  if ( v8 ) /*0x812e1f*/
  {
    if ( !v4((volatile LONG *)(v8 + 4)) ) /*0x812e25*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x812e37*/
    *(this + 1) = 0; /*0x812e39*/
  }
  sub_812980((int)this); /*0x812e3e*/
  if ( *(this + 4) ) /*0x812e43*/
  {
    FormHeapFree(*(this + 4)); /*0x812e4b*/
    *(this + 4) = 0; /*0x812e53*/
  }
  FormHeapFree(*(this + 5)); /*0x812e5a*/
  *(this + 5) = 0; /*0x812e5f*/
  v9 = *(this + 2); /*0x812e62*/
  LOBYTE(v13) = 1; /*0x812e6a*/
  if ( v9 ) /*0x812e6f*/
  {
    if ( !v4((volatile LONG *)(v9 + 4)) ) /*0x812e75*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x812e87*/
  }
  v10 = *(this + 1); /*0x812e89*/
  LOBYTE(v13) = 0; /*0x812e8e*/
  if ( v10 ) /*0x812e92*/
  {
    if ( !v4((volatile LONG *)(v10 + 4)) ) /*0x812e98*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x812eaa*/
  }
  v11 = *this; /*0x812eac*/
  v13 = 0xFFFFFFFF; /*0x812eb0*/
  if ( v11 ) /*0x812eb8*/
  {
    if ( !v4((volatile LONG *)(v11 + 4)) ) /*0x812ebe*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x812ed0*/
  }
}
