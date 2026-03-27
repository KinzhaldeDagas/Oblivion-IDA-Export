void *__thiscall sub_7343E0(void (__stdcall **this)(char *), char *Dst, int a3, char *a4)
{
  _BYTE *v6; // ebx
  void *result; // eax
  size_t v8; // [esp-4h] [ebp-5Ch]
  char *v9; // [esp+10h] [ebp-48h]
  _BYTE Src[3]; // [esp+14h] [ebp-44h] BYREF
  char v11[61]; // [esp+17h] [ebp-41h] BYREF

  v6 = Src;
  if ( *this )
    ((void (__thiscall *)(void (__stdcall **)(char *), char *))*this)(this, v11);
  ((void (__thiscall *)(void (__stdcall **)(char *), _BYTE *))*(this + 1))(this, Src);
  result = a4;
  if ( a4 )
  {
    v9 = a4;
    do
    {
      LODWORD(v8) = 4 * a3;
      result = memcpy(Dst, v6, v8);
      Dst = &Dst[(_DWORD)*(this + 3)];
      v6 += 0x10;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
