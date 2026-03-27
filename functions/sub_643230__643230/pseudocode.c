void __thiscall sub_643230(unsigned int **this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  unsigned __int8 v3; // al
  volatile LONG *v4; // edi
  volatile LONG *v5; // [esp+18h] [ebp-28h] BYREF
  _DWORD v6[2]; // [esp+1Ch] [ebp-24h] BYREF
  _DWORD v7[3]; // [esp+24h] [ebp-1Ch] BYREF
  char v8; // [esp+30h] [ebp-10h]
  unsigned int v9; // [esp+3Ch] [ebp-4h]

  v6[1] = this;
  v9 = 0;
  v7[0] = &LockFreeMap<Actor *,NiPointer<LipTask>>::LockFreeMapIterator::`vftable';
  v7[1] = 0;
  v7[2] = 0;
  v8 = 0;
  v2 = InterlockedDecrement;
  do
  {
    v6[0] = 0;
    v5 = 0;
    LOBYTE(v9) = 2;
    v3 = sub_642D90(this, (int)v7, v6, (int *)&v5, 1);
    v4 = v5;
    if ( v3 )
    {
      ((void (__thiscall *)(unsigned int **, _DWORD))(*this)[4])(this, v6[0]);
      sub_432130(v4);
    }
    LOBYTE(v9) = 1;
    if ( v4 )
    {
      if ( !v2(v4 + 2) )
        (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1);
    }
  }
  while ( (v8 & 2) == 0 );
  v7[0] = &LockFreeMap<Actor *,NiPointer<LipTask>>::LockFreeMapIterator::`vftable';
  v9 = 0xFFFFFFFF;
  *this = (unsigned int *)&LockFreeMap<Actor *,NiPointer<LipTask>>::`vftable';
  sub_642E50(this, 1);
  FormHeapFree((unsigned int)*(this + 3));
  FormHeapFree((unsigned int)*(this + 1));
}
