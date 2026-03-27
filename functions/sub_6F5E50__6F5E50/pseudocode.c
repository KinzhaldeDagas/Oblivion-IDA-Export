char __thiscall sub_6F5E50(_DWORD *this, int a2, int a3, int a4)
{
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v7; // [esp-1Ch] [ebp-20h] BYREF
  void *v8; // [esp-18h] [ebp-1Ch]
  int v9; // [esp-14h] [ebp-18h]
  int v10; // [esp-10h] [ebp-14h]
  int v11; // [esp-Ch] [ebp-10h]
  size_t v12; // [esp-8h] [ebp-Ch]
  int v13; // [esp+0h] [ebp-4h]

  if ( !*(this + 0x10) )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int, int))(*this + 0x10))(this, a2, 1, a4 * a3) )
  {
    v12 = 0xF00000000LL;
    LOBYTE(v8) = 0;
    sub_414420((int)&v7, this + 1, 0, 0xFFFFFFFF);
    sub_6F6BF0(1, v7, v8, v9, v10, v11, v12, v13);
    v5 = (void (__thiscall ***)(_DWORD, int))*(this + 0x10);
    if ( v5 )
      (**v5)(v5, 1);
    *(this + 0x10) = 0;
    return 0;
  }
  return 1;
}
