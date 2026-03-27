unsigned int __thiscall NiTStringMap_KeyToHashIndex(_DWORD *this, _BYTE *a2)
{
  _BYTE *v2; // esi
  char v3; // dl
  unsigned int i; // eax
  int v5; // edi
  int v6; // eax

  v2 = a2;
  v3 = *a2;
  for ( i = 0; v3; i = v5 + v6 )
  {
    v5 = 0x21 * i;
    v6 = v3;
    v3 = *++v2;
  }
  return i % *(this + 1);
}
