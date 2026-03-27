void __thiscall sub_812D60(unsigned int *this)
{
  unsigned int v2; // eax
  int v3; // ecx
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  void (__thiscall ***v5)(_DWORD, int); // edi
  unsigned int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  unsigned int v11; // esi
  _DWORD v12[2]; // [esp+1Ch] [ebp-14h] BYREF
  int v13; // [esp+2Ch] [ebp-4h]

  v12[1] = this;
  v2 = *this;
  v3 = *(_DWORD *)(*this + 0x1C);
  v4 = InterlockedDecrement;
  v13 = 2;
  if ( v3 )
  {
    (*(void (__thiscall **)(int, _DWORD *, unsigned int))(*(_DWORD *)v3 + 0x88))(v3, v12, v2);
    if ( v12[0] )
    {
      v5 = (void (__thiscall ***)(_DWORD, int))v12[0];
      if ( !v4((volatile LONG *)(v12[0] + 4)) )
        (**v5)(v5, 1);
    }
  }
  v6 = *this;
  if ( *this )
  {
    if ( !v4((volatile LONG *)(v6 + 4)) )
    {
      if ( v6 )
        (**(void (__thiscall ***)(unsigned int, int))v6)(v6, 1);
    }
    *this = 0;
  }
  v7 = *(this + 2);
  if ( v7 )
  {
    if ( !v4((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *(this + 2) = 0;
  }
  v8 = *(this + 1);
  if ( v8 )
  {
    if ( !v4((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    *(this + 1) = 0;
  }
  sub_812980((int)this);
  if ( *(this + 4) )
  {
    FormHeapFree(*(this + 4));
    *(this + 4) = 0;
  }
  FormHeapFree(*(this + 5));
  *(this + 5) = 0;
  v9 = *(this + 2);
  LOBYTE(v13) = 1;
  if ( v9 )
  {
    if ( !v4((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  }
  v10 = *(this + 1);
  LOBYTE(v13) = 0;
  if ( v10 )
  {
    if ( !v4((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  v11 = *this;
  v13 = 0xFFFFFFFF;
  if ( v11 )
  {
    if ( !v4((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(unsigned int, int))v11)(v11, 1);
  }
}
