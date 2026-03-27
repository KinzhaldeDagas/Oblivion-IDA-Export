void __thiscall sub_6D8610(unsigned __int16 *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  unsigned int v6; // ebp
  _DWORD *v7; // ebx
  unsigned int i; // edi
  int v9; // eax
  int v10; // esi
  LONG v11; // [esp+14h] [ebp-10h] BYREF
  unsigned int v12; // [esp+20h] [ebp-4h]

  nullsub_returnvVoid_1arg((int)a2);
  v3 = sub_7124A0(a2);
  v4 = *((_DWORD *)this + 0xB);
  v5 = v3;
  if ( v4 != v3 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *((_DWORD *)this + 0xB) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
  v6 = *(this + 0xB);
  v7 = this + 0xE;
  sub_6C4510(this + 0xE, v6);
  for ( i = 0; i < v6; ++i )
  {
    v9 = sub_7124A0(a2);
    v10 = v9;
    v11 = v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)(v9 + 4));
    v12 = 0;
    sub_6D7E90(v7, i, &v11);
    v12 = 0xFFFFFFFF;
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
  }
}
