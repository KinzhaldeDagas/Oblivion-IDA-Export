int __thiscall sub_72E100(_DWORD *this, int a2)
{
  int v3; // eax
  int (__cdecl *v4)(int, _DWORD *, int, int *, int); // edx
  int result; // eax
  unsigned int v6; // ebx
  int v7; // ebp
  int v8; // [esp+Ch] [ebp-4h] BYREF

  nullsub_returnvVoid_1arg(a2);
  v3 = *(_DWORD *)(a2 + 0x220);
  v4 = *(int (__cdecl **)(int, _DWORD *, int, int *, int))(v3 + 8);
  v8 = 4;
  result = v4(v3, this + 2, 4, &v8, 1);
  v6 = 0;
  if ( *(this + 2) )
  {
    v7 = 0;
    do
    {
      result = sub_72DBC0((unsigned __int16 *)(v7 + *(this + 3)), a2);
      ++v6;
      v7 += 0x2C;
    }
    while ( v6 < *(this + 2) );
  }
  return result;
}
