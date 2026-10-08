void __thiscall sub_643230(unsigned int **this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  unsigned __int8 v3; // al
  IOTask *v4; // edi
  IOTask *task; // [esp+18h] [ebp-28h] BYREF
  _DWORD v6[2]; // [esp+1Ch] [ebp-24h] BYREF
  _DWORD v7[3]; // [esp+24h] [ebp-1Ch] BYREF
  char v8; // [esp+30h] [ebp-10h]
  unsigned int v9; // [esp+3Ch] [ebp-4h]

  v6[1] = this; /*0x643259*/
  v9 = 0; /*0x64325f*/
  v7[0] = &LockFreeMap<Actor *,NiPointer<LipTask>>::LockFreeMapIterator::`vftable'; /*0x643263*/
  v7[1] = 0; /*0x64326b*/
  v7[2] = 0; /*0x64326f*/
  v8 = 0; /*0x643273*/
  v2 = InterlockedDecrement; /*0x643277*/
  do /*0x6432e9*/
  {
    v6[0] = 0; /*0x643280*/
    task = 0; /*0x643284*/
    LOBYTE(v9) = 2; /*0x64329b*/
    v3 = sub_642D90(this, (int)v7, v6, (int *)&task, 1); /*0x6432a0*/
    v4 = task; /*0x6432a7*/
    if ( v3 ) /*0x6432ab*/
    {
      ((void (__thiscall *)(unsigned int **, _DWORD))(*this)[4])(this, v6[0]); /*0x6432b9*/
      IOTask_Cancel(v4); /*0x6432c2*/
    }
    LOBYTE(v9) = 1; /*0x6432c9*/
    if ( v4 ) /*0x6432ce*/
    {
      if ( !v2((volatile LONG *)&v4->members.unk08) ) /*0x6432d4*/
        (*(void (__thiscall **)(IOTask *, int))v4->vtbl)(v4, 1); /*0x6432e2*/
    }
  }
  while ( (v8 & 2) == 0 ); /*0x6432e9*/
  v7[0] = &LockFreeMap<Actor *,NiPointer<LipTask>>::LockFreeMapIterator::`vftable'; /*0x6432ef*/
  v9 = 0xFFFFFFFF; /*0x6432f7*/
  *this = (unsigned int *)&LockFreeMap<Actor *,NiPointer<LipTask>>::`vftable'; /*0x6432ff*/
  sub_642E50(this, 1); /*0x643305*/
  FormHeapFree((unsigned int)*(this + 3)); /*0x64330e*/
  FormHeapFree((unsigned int)*(this + 1)); /*0x64331f*/
}
