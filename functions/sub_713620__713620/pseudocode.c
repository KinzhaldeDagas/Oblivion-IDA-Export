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

  v10 = *(this + 0x87); /*0x71363a*/
  v3 = *(void (__cdecl **)(int, int *, int, int *, int))(v10 + 4); /*0x71363b*/
  v13 = 4; /*0x71363e*/
  v3(v10, &v12, 4, &v13, 1); /*0x713646*/
  if ( v12 <= 0 ) /*0x713651*/
  {
    result = a2; /*0x713699*/
    *(_DWORD *)a2 = 0; /*0x71369d*/
  }
  else
  {
    v4 = FormHeapAlloc(v12 + 1); /*0x713658*/
    v5 = (_DWORD *)a2; /*0x71365d*/
    v11 = v12; /*0x71366c*/
    *(_DWORD *)a2 = v4; /*0x71366d*/
    v9 = v4; /*0x713675*/
    v6 = *(int (__cdecl **)(int, int, int, int *, int))(*(this + 0x87) + 4); /*0x713676*/
    v8 = *(this + 0x87); /*0x713679*/
    a2 = 1; /*0x71367a*/
    result = v6(v8, v9, v11, &a2, 1); /*0x713682*/
    *(_BYTE *)(v12 + *v5) = 0; /*0x71368e*/
  }
  return result; /*0x713692*/
}
