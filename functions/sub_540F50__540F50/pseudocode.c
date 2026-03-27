void __thiscall sub_540F50(_DWORD *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int v3; // ecx
  void (__thiscall ***v4)(_DWORD, int); // esi
  int v5; // esi
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v1 = InterlockedDecrement;
  v3 = *(this + 1);
  if ( v3 )
  {
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v3 + 0x88))(v3, &v6, *(this + 2));
    if ( v6 )
    {
      v4 = (void (__thiscall ***)(_DWORD, int))v6;
      if ( !v1((volatile LONG *)(v6 + 4)) )
        (**v4)(v4, 1);
    }
  }
  v5 = *(this + 2);
  if ( v5 )
  {
    if ( !v1((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *(this + 2) = 0;
  }
}
