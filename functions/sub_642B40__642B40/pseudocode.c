void __thiscall sub_642B40(void *this, int a2)
{
  unsigned __int8 (__thiscall *v3)(void *, int, volatile LONG **); // edx
  volatile LONG *v4; // esi
  volatile LONG *v5; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v6; // [esp+18h] [ebp-4h]

  v5 = 0;
  v3 = *(unsigned __int8 (__thiscall **)(void *, int, volatile LONG **))(*(_DWORD *)this + 4);
  v6 = 0;
  if ( v3(this, a2, &v5) )
  {
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x10))(this, a2);
    sub_432130(v5);
  }
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
