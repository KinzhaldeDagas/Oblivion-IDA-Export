void __thiscall sub_431B60(unsigned __int16 *this, char *a2)
{
  const char *v2; // esi
  const char *v3; // eax
  int v4; // ebp
  bool v5; // bl
  char *v6; // eax
  char v7; // dl
  unsigned int v8; // edi

  v2 = a2;
  if ( a2 )
  {
    v3 = &a2[strlen(a2) + 1];
    v4 = v3 - (a2 + 1);
    v5 = v3[0xFFFFFFFE] != 0x5C;
    v6 = (char *)FormHeapAlloc(v5 + strlen(a2) + 1);
    a2 = v6;
    strcpy(v6, v2);
    if ( v5 )
    {
      v6[v4] = 0x5C;
      v6[v4 + 1] = v7;
    }
    v8 = *(this + 7);
    if ( v8 >= *(this + 6) )
      NiTArray_SetSize(this + 2, v8 + *(this + 9));
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 2), v8, &a2);
  }
}
