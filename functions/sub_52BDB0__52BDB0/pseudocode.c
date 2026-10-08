int __thiscall sub_52BDB0(int this, unsigned int a2)
{
  int v3; // esi
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax

  if ( a2 >= 2 ) /*0x52bdb6*/
    return 0; /*0x52bdbd*/
  v3 = this + 0x18 * a2; /*0x52bdc6*/
  LOWORD(v4) = *(_WORD *)(v3 + 0xB8); /*0x52bdc9*/
  if ( (_WORD)v4 == 0xFFFF ) /*0x52bdd4*/
    v4 = strlen(*(const char **)(v3 + 0xB4)); /*0x52bddd*/
  else
    v4 = (unsigned __int16)v4; /*0x52bdee*/
  if ( v4 ) /*0x52bdf3*/
    return v3 + 0xB0; /*0x52bdf5*/
  LOWORD(v5) = *(_WORD *)(this + 0xB8); /*0x52bdff*/
  if ( (_WORD)v5 == 0xFFFF ) /*0x52be0a*/
    v5 = strlen(*(const char **)(this + 0xB4)); /*0x52be12*/
  else
    v5 = (unsigned __int16)v5; /*0x52be22*/
  if ( v5 ) /*0x52be27*/
    return this + 0xB0; /*0x52be29*/
  LOWORD(v6) = *(_WORD *)(this + 0xD0); /*0x52be33*/
  if ( (_WORD)v6 == 0xFFFF ) /*0x52be3e*/
    v6 = strlen(*(const char **)(this + 0xCC)); /*0x52be46*/
  else
    v6 = (unsigned __int16)v6; /*0x52be5d*/
  if ( v6 ) /*0x52be62*/
    return this + 0xC8; /*0x52be64*/
  else
    return 0; /*0x52be6e*/
}
