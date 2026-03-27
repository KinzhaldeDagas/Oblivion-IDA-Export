void __thiscall sub_439D20(_DWORD **this, int a2)
{
  int v2; // ecx
  unsigned __int8 (__thiscall *v3)(int, int, volatile LONG **); // eax
  volatile LONG *v4; // esi
  volatile LONG *v5; // [esp+8h] [ebp-10h] BYREF
  unsigned int v6; // [esp+14h] [ebp-4h]

  v5 = 0;
  v2 = (int)*(this + 3);
  v3 = *(unsigned __int8 (__thiscall **)(int, int, volatile LONG **))(*(_DWORD *)v2 + 4);
  v6 = 0;
  if ( v3(v2, a2, &v5) )
    sub_432130(v5);
  v4 = v5;
  v6 = 0xFFFFFFFF;
  if ( v5 )
  {
    if ( !InterlockedDecrement(v5 + 2) )
    {
      if ( v4 )
        (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1);
    }
  }
}
