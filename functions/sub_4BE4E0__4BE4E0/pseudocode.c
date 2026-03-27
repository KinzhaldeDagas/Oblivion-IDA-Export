char __thiscall sub_4BE4E0(_DWORD *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  LONG v3; // eax
  int *v4; // esi
  int *v6; // [esp+14h] [ebp-24h] BYREF
  int v7; // [esp+18h] [ebp-20h] BYREF
  _DWORD v8[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v9; // [esp+28h] [ebp-10h]
  int v10; // [esp+34h] [ebp-4h]

  v8[0] = &LockFreeMap<unsigned int,NiPointer<ExteriorCellLoaderTask>>::LockFreeMapIterator::`vftable';
  v8[1] = 0;
  v8[2] = 0;
  LOBYTE(v9) = 0;
  v2 = InterlockedDecrement;
  v10 = 0;
  do
  {
    v6 = 0;
    LOBYTE(v10) = 1;
    LOBYTE(v3) = sub_642D90(this, (int)v8, &v7, (int *)&v6, 1);
    v4 = v6;
    if ( (_BYTE)v3 )
    {
      if ( v6[3] >= 4 )
        LOBYTE(v3) = (*(int (__thiscall **)(int *))(*v6 + 0x14))(v6);
    }
    LOBYTE(v10) = 0;
    if ( v4 )
    {
      v3 = v2(v4 + 2);
      if ( !v3 )
        LOBYTE(v3) = (*(int (__thiscall **)(int *, int))*v4)(v4, 1);
    }
  }
  while ( (v9 & 2) == 0 );
  return v3;
}
