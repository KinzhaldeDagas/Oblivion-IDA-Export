void __thiscall sub_439DC0(_DWORD **this, volatile LONG *a2)
{
  int v3; // ecx
  volatile LONG *v4; // edi
  unsigned __int8 (__thiscall *v5)(int, volatile LONG *, volatile LONG **); // eax
  int v6; // ecx
  unsigned __int8 (__thiscall *v7)(int, volatile LONG *, volatile LONG **); // edx
  volatile LONG *v8; // esi
  volatile LONG *v9; // esi
  volatile LONG *v10; // [esp+14h] [ebp-10h] BYREF
  unsigned int v11; // [esp+20h] [ebp-4h]

  v10 = 0;
  v3 = (int)*(this + 2);
  v4 = a2;
  v5 = *(unsigned __int8 (__thiscall **)(int, volatile LONG *, volatile LONG **))(*(_DWORD *)v3 + 4);
  v11 = 0;
  if ( v5(v3, a2, &v10) )
    sub_432130(v10);
  a2 = 0;
  v6 = (int)*(this + 4);
  v7 = *(unsigned __int8 (__thiscall **)(int, volatile LONG *, volatile LONG **))(*(_DWORD *)v6 + 4);
  LOBYTE(v11) = 1;
  if ( v7(v6, v4, &a2) )
    sub_432130(a2);
  v8 = a2;
  LOBYTE(v11) = 0;
  if ( a2 )
  {
    if ( !InterlockedDecrement(a2 + 2) )
    {
      if ( v8 )
        (**(void (__thiscall ***)(volatile LONG *, int))v8)(v8, 1);
    }
  }
  v9 = v10;
  v11 = 0xFFFFFFFF;
  if ( v10 )
  {
    if ( !InterlockedDecrement(v10 + 2) )
    {
      if ( v9 )
        (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
    }
  }
}
