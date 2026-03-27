char __thiscall sub_6B4500(_DWORD *this, int a2)
{
  _BYTE *v3; // eax
  _BYTE *v4; // esi
  void (__thiscall **v5)(_BYTE *, int); // edx
  _BYTE *v6; // ecx
  unsigned int v7; // eax
  int v9; // eax
  void (__cdecl *v10)(_BYTE *, int, int, int *, int); // eax
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // [esp-14h] [ebp-1Ch]
  int v15; // [esp-10h] [ebp-18h]

  v3 = sub_431130((const char *)a2, 0, 0x2800, 0x10);
  v4 = v3;
  if ( !v3 )
    return 0;
  v5 = *(void (__thiscall ***)(_BYTE *, int))v3;
  v6 = v3;
  if ( !v3[0x24] )
  {
LABEL_5:
    (*v5)(v6, 1);
    return 0;
  }
  v7 = ((int (__thiscall *)(_BYTE *))v5[7])(v3);
  *(this + 3) = v7;
  if ( !v7 )
  {
    v5 = *(void (__thiscall ***)(_BYTE *, int))v4;
    v6 = v4;
    goto LABEL_5;
  }
  v9 = FormHeapAlloc(v7);
  v15 = *(this + 3);
  v14 = v9;
  *(this + 2) = v9;
  v10 = *((void (__cdecl **)(_BYTE *, int, int, int *, int))v4 + 1);
  a2 = 1;
  v10(v4, v14, v15, &a2, 1);
  (**(void (__thiscall ***)(_BYTE *, int))v4)(v4, 1);
  v11 = 0;
  v12 = *(this + 3) - 1;
  *this = 0;
  if ( v12 )
  {
    v13 = *(this + 2);
    do
    {
      if ( *(_BYTE *)(v13 + v11) == 0xFF && *(_BYTE *)(v13 + v11 + 1) == 0xFB )
        ++*this;
      ++v11;
    }
    while ( v11 < *(this + 3) - 1 );
  }
  *(this + 4) = 0;
  return 1;
}
