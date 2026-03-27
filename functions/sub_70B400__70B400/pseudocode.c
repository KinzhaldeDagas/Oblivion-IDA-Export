int *__thiscall sub_70B400(_DWORD *this, int *a2)
{
  Ni2DBuffer *v3; // esi
  _DWORD *v4; // ecx
  int *v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // esi
  Ni2DBuffer *v8; // [esp+10h] [ebp-18h] BYREF
  int v9; // [esp+14h] [ebp-14h] BYREF
  int v10; // [esp+18h] [ebp-10h]
  int v11; // [esp+24h] [ebp-4h]

  v3 = 0;
  v10 = 0;
  v8 = 0;
  v4 = (_DWORD *)*(this + 7);
  v11 = 1;
  if ( v4 )
  {
    v5 = sub_70B400(v4, &v9);
    LOBYTE(v11) = 2;
    sub_55E2A0((int *)&v8, v5);
    v6 = (void (__thiscall ***)(_DWORD, int))v9;
    LOBYTE(v11) = 1;
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
      {
        if ( v6 )
          (**v6)(v6, 1);
      }
    }
    v3 = v8;
  }
  sub_70A500(this, a2, v3, 0);
  v10 = 1;
  LOBYTE(v11) = 0;
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v3->members) )
      (*(void (__thiscall **)(Ni2DBuffer *, int))v3->__vftable)(v3, 1);
  }
  return a2;
}
