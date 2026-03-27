void __thiscall sub_803210(unsigned int *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  void (__thiscall ***v5)(_DWORD, int); // edi
  unsigned int v6; // edi
  int v7; // edi
  int v8; // edi
  unsigned int v9; // esi
  _DWORD v10[2]; // [esp+1Ch] [ebp-14h] BYREF
  int v11; // [esp+2Ch] [ebp-4h]

  v10[1] = this;
  v2 = *(this + 2);
  v3 = InterlockedDecrement;
  v11 = 2;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 2) = 0;
  }
  v4 = *(this + 1);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *(this + 1) = 0;
  }
  if ( *(_DWORD *)(*this + 0x1C) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *, unsigned int))(**(_DWORD **)(*this + 0x1C) + 0x88))(
      *(_DWORD *)(*this + 0x1C),
      v10,
      *this);
    if ( v10[0] )
    {
      v5 = (void (__thiscall ***)(_DWORD, int))v10[0];
      if ( !v3((volatile LONG *)(v10[0] + 4)) )
        (**v5)(v5, 1);
    }
  }
  v6 = *this;
  if ( *this )
  {
    if ( !v3((volatile LONG *)(v6 + 4)) )
    {
      if ( v6 )
        (**(void (__thiscall ***)(unsigned int, int))v6)(v6, 1);
    }
    *this = 0;
  }
  sub_802DB0((int)this);
  if ( *(this + 4) )
  {
    FormHeapFree(*(this + 4));
    *(this + 4) = 0;
  }
  FormHeapFree(*(this + 5));
  *(this + 5) = 0;
  v7 = *(this + 2);
  LOBYTE(v11) = 1;
  if ( v7 )
  {
    if ( !v3((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  v8 = *(this + 1);
  LOBYTE(v11) = 0;
  if ( v8 )
  {
    if ( !v3((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  v9 = *this;
  v11 = 0xFFFFFFFF;
  if ( v9 )
  {
    if ( !v3((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(unsigned int, int))v9)(v9, 1);
  }
}
