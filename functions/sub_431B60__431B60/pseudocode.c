void __thiscall sub_431B60(unsigned __int16 *this, char *a2)
{
  const char *v2; // esi
  char *v3; // eax
  int v4; // ebp
  bool v5; // bl
  char *v6; // eax
  char v7; // dl
  unsigned int v8; // edi

  v2 = a2; /*0x431b62*/
  if ( a2 ) /*0x431b6c*/
  {
    v3 = &a2[strlen(a2) + 1]; /*0x431b7e*/
    v4 = v3 - (a2 + 1); /*0x431b84*/
    v5 = v3[0xFFFFFFFE] != 0x5C; /*0x431b8e*/
    v6 = (char *)FormHeapAlloc(v5 + strlen(a2) + 1); /*0x431ba7*/
    a2 = v6; /*0x431bb1*/
    strcpy(v6, v2); /*0x431bb5*/
    if ( v5 ) /*0x431bce*/
    {
      v6[v4] = 0x5C; /*0x431bd0*/
      v6[v4 + 1] = v7; /*0x431bd4*/
    }
    v8 = *(this + 7); /*0x431bdc*/
    if ( v8 >= *(this + 6) ) /*0x431be9*/
      NiTArray_SetSize(this + 2, v8 + *(this + 9)); /*0x431bf4*/
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 2), v8, &a2); /*0x431c01*/
  }
}
