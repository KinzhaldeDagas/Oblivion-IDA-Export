unsigned int __thiscall sub_567B80(signed __int8 *this, char *a2)
{
  signed __int8 v3; // bl
  unsigned int result; // eax
  char v5; // cl
  signed __int8 v6; // cl
  char v7; // dl
  bool v8; // cc

  v3 = *(this + 0x2C); /*0x567b88*/
  result = 0xFFFFFFFF; /*0x567b8b*/
  if ( (v3 == (signed __int8)0xFF && *a2 == (char)0xFF || (v5 = *a2, v3 == *a2)) /*0x567bc0*/
    && ((v3 = *(this + 0x2E)) == 0 && a2[2] == (char)0xFF || (v5 = a2[2], v3 == v5))
    && ((v3 = *(this + 0x2D), v3 == (signed __int8)0xFF) && a2[1] == (char)0xFF || (v5 = a2[1], v3 == v5)) )
  {
    v6 = *(this + 0x2F); /*0x567bc2*/
    if ( v6 == (signed __int8)0xFF && a2[3] == (char)0xFF ) /*0x567bcc*/
      return 0; /*0x567bcc*/
    v7 = a2[3]; /*0x567bce*/
    if ( v6 == v7 ) /*0x567bd3*/
      return 0; /*0x567bd9*/
    if ( v6 != (signed __int8)0xFF ) /*0x567bde*/
    {
      if ( v7 == (char)0xFF ) /*0x567be2*/
        return result; /*0x567be2*/
      v8 = v6 < v7; /*0x567be4*/
      goto LABEL_20; /*0x567be6*/
    }
  }
  else if ( v3 != (signed __int8)0xFF ) /*0x567bea*/
  {
    if ( v5 == (char)0xFF ) /*0x567bee*/
      return result; /*0x567bee*/
    v8 = v3 < v5; /*0x567bf0*/
LABEL_20:
    if ( v8 ) /*0x567bf2*/
      return result; /*0x567bf2*/
  }
  return 1; /*0x567bd5*/
}
