int __thiscall sub_712A90(_DWORD *this)
{
  void (__cdecl *v2)(int, int *, int, int *, int); // eax
  int v4; // [esp-14h] [ebp-20h]
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h] BYREF

  v4 = *(this + 0x87);
  v2 = *(void (__cdecl **)(int, int *, int, int *, int))(v4 + 4);
  v5 = 4;
  v2(v4, &v6, 4, &v5, 1);
  if ( v6 == 0xFFFFFFFF )
    return 0;
  else
    return *(_DWORD *)(*(this + 0x7C) + 4 * v6);
}
