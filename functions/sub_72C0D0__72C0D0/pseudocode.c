int __thiscall sub_72C0D0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v4; // eax
  int (__cdecl *v5)(int, _DWORD **, int, int *, int); // edx
  int result; // eax
  unsigned int v7; // ebx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  nullsub_returnvVoid_1arg((int)a2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 2));
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 3));
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 4));
  v4 = v2[0x88];
  a2 = *(_DWORD **)(*(this + 2) + 0x40);
  v5 = *(int (__cdecl **)(int, _DWORD **, int, int *, int))(v4 + 8);
  v8 = 4;
  result = v5(v4, &a2, 4, &v8, 1);
  v7 = 0;
  if ( a2 )
  {
    do
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(*(this + 5) + 4 * v7++));
    while ( v7 < (unsigned int)a2 );
  }
  return result;
}
