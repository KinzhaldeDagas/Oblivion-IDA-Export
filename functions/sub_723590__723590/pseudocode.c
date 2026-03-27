int __thiscall sub_723590(char *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  Atmosphere *v4; // ecx
  int (__cdecl *v5)(int, _DWORD **, int, int *, int); // eax
  int result; // eax
  int v7; // [esp-14h] [ebp-20h]
  int v8; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_708330(this, (signed int)a2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0x2D));
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0x2E));
  v4 = *((Atmosphere **)this + 0x2F);
  LOBYTE(a2) = 0;
  if ( v4 )
    LOBYTE(a2) = sub_452A60(v4) != 0;
  v7 = v2[0x88];
  v5 = *(int (__cdecl **)(int, _DWORD **, int, int *, int))(v7 + 8);
  v8 = 1;
  result = v5(v7, &a2, 1, &v8, 1);
  if ( (_BYTE)a2 )
    return sub_738720(*((const char ***)this + 0x2F), v2);
  return result;
}
