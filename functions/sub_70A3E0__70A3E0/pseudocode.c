UInt32 *__thiscall sub_70A3E0(_DWORD *this, UInt32 *a2)
{
  Ni2DBuffer *v3; // esi
  _DWORD *v4; // ecx
  int *v5; // eax
  NiPropertyState *v6; // esi
  NiPropertyState *v8; // eax
  NiPropertyState *v9; // eax
  NiPropertyState *v10; // [esp+14h] [ebp-18h] BYREF
  NiPropertyState *v11; // [esp+18h] [ebp-14h] BYREF
  int v12; // [esp+1Ch] [ebp-10h]
  int v13; // [esp+28h] [ebp-4h]

  v3 = 0;
  v12 = 0;
  v10 = 0;
  v4 = (_DWORD *)*(this + 7);
  v13 = 1;
  if ( v4 )
  {
    v5 = sub_70A3E0(v4, (int *)&v11);
    LOBYTE(v13) = 2;
    sub_55E2A0((int *)&v10, v5);
    v6 = v11;
    LOBYTE(v13) = 1;
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v11 + 1) )
      {
        if ( v6 )
          (**(void (__thiscall ***)(NiPropertyState *, int))v6)(v6, 1);
      }
    }
    v3 = (Ni2DBuffer *)v10;
  }
  else
  {
    v8 = (NiPropertyState *)FormHeapAlloc(0x30u);
    v11 = v8;
    LOBYTE(v13) = 3;
    if ( v8 )
      v9 = sub_7319E0(v8);
    else
      v9 = 0;
    LOBYTE(v13) = 1;
    if ( v9 )
    {
      v3 = (Ni2DBuffer *)v9;
      v10 = v9;
      InterlockedIncrement((volatile LONG *)v9 + 1);
    }
  }
  sub_7077D0(this, a2, v3, 0);
  v12 = 1;
  LOBYTE(v13) = 0;
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v3->members) )
      (*(void (__thiscall **)(Ni2DBuffer *, int))v3->__vftable)(v3, 1);
  }
  return a2;
}
