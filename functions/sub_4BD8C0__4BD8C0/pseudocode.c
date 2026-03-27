void __thiscall sub_4BD8C0(_DWORD *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  char v3; // al
  volatile LONG *v4; // esi
  volatile LONG *v5; // [esp+14h] [ebp-24h] BYREF
  int v6; // [esp+18h] [ebp-20h] BYREF
  _DWORD v7[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v8; // [esp+28h] [ebp-10h]
  int v9; // [esp+34h] [ebp-4h]

  v7[0] = &LockFreeMap<unsigned int,NiPointer<DistantLODLoaderTask>>::LockFreeMapIterator::`vftable';
  v7[1] = 0;
  v7[2] = 0;
  LOBYTE(v8) = 0;
  v2 = InterlockedDecrement;
  v9 = 0;
  do
  {
    v5 = 0;
    LOBYTE(v9) = 1;
    v3 = sub_642D90(this, (int)v7, &v6, (int *)&v5, 1);
    v4 = v5;
    if ( v3 )
      sub_432130(v5);
    LOBYTE(v9) = 0;
    if ( v4 )
    {
      if ( !v2(v4 + 2) )
        (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1);
    }
  }
  while ( (v8 & 2) == 0 );
}
