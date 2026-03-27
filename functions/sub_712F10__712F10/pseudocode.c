void __thiscall sub_712F10(_DWORD *this)
{
  void (__cdecl *v2)(int, unsigned int *, int, LONG *, int); // eax
  unsigned int i; // ebx
  void (__cdecl *v4)(int, int *, int, LONG *, int); // edx
  LONG v5; // esi
  int v6; // [esp-14h] [ebp-40h]
  int v7; // [esp-14h] [ebp-40h]
  unsigned int v8; // [esp+14h] [ebp-18h] BYREF
  LONG v9; // [esp+18h] [ebp-14h] BYREF
  int v10; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v11; // [esp+28h] [ebp-4h]

  v6 = *(this + 0x87);
  v2 = *(void (__cdecl **)(int, unsigned int *, int, LONG *, int))(v6 + 4);
  v9 = 4;
  v2(v6, &v8, 4, &v9, 1);
  sub_8BCA30(this + 0x81, v8);
  for ( i = 0; i < v8; ++i )
  {
    v4 = *(void (__cdecl **)(int, int *, int, LONG *, int))(*(this + 0x87) + 4);
    v7 = *(this + 0x87);
    v9 = 4;
    v4(v7, &v10, 4, &v9, 1);
    if ( v10 == 0xFFFFFFFF )
      v5 = 0;
    else
      v5 = *(_DWORD *)(*(this + 0x7C) + 4 * v10);
    v9 = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
    v11 = 0;
    sub_8BCD40(this + 0x81, i, &v9);
    v11 = 0xFFFFFFFF;
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(LONG, int))v5)(v5, 1);
    }
  }
}
