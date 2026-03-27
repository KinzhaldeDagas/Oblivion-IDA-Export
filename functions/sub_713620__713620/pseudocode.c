int __thiscall sub_713620(_DWORD *this, int a2)
{
  void (__cdecl *v3)(int, int *, int, int *, int); // eax
  int v4; // eax
  _DWORD *v5; // edi
  int (__cdecl *v6)(int, int, int, int *, int); // eax
  int result; // eax
  int v8; // [esp-1Ch] [ebp-28h]
  int v9; // [esp-18h] [ebp-24h]
  int v10; // [esp-14h] [ebp-20h]
  int v11; // [esp-14h] [ebp-20h]
  int v12; // [esp+4h] [ebp-8h] BYREF
  int v13; // [esp+8h] [ebp-4h] BYREF

  v10 = *(this + 0x87);
  v3 = *(void (__cdecl **)(int, int *, int, int *, int))(v10 + 4);
  v13 = 4;
  v3(v10, &v12, 4, &v13, 1);
  if ( v12 <= 0 )
  {
    result = a2;
    *(_DWORD *)a2 = 0;
  }
  else
  {
    v4 = FormHeapAlloc(v12 + 1);
    v5 = (_DWORD *)a2;
    v11 = v12;
    *(_DWORD *)a2 = v4;
    v9 = v4;
    v6 = *(int (__cdecl **)(int, int, int, int *, int))(*(this + 0x87) + 4);
    v8 = *(this + 0x87);
    a2 = 1;
    result = v6(v8, v9, v11, &a2, 1);
    *(_BYTE *)(v12 + *v5) = 0;
  }
  return result;
}
