unsigned int __thiscall sub_567B80(signed __int8 *this, char *a2)
{
  signed __int8 v3; // bl
  unsigned int result; // eax
  char v5; // cl
  signed __int8 v6; // cl
  char v7; // dl
  bool v8; // cc

  v3 = *(this + 0x2C);
  result = 0xFFFFFFFF;
  if ( (v3 == (signed __int8)0xFF && *a2 == (char)0xFF || (v5 = *a2, v3 == *a2))
    && ((v3 = *(this + 0x2E)) == 0 && a2[2] == (char)0xFF || (v5 = a2[2], v3 == v5))
    && ((v3 = *(this + 0x2D), v3 == (signed __int8)0xFF) && a2[1] == (char)0xFF || (v5 = a2[1], v3 == v5)) )
  {
    v6 = *(this + 0x2F);
    if ( v6 == (signed __int8)0xFF && a2[3] == (char)0xFF )
      return 0;
    v7 = a2[3];
    if ( v6 == v7 )
      return 0;
    if ( v6 != (signed __int8)0xFF )
    {
      if ( v7 == (char)0xFF )
        return result;
      v8 = v6 < v7;
      goto LABEL_20;
    }
  }
  else if ( v3 != (signed __int8)0xFF )
  {
    if ( v5 == (char)0xFF )
      return result;
    v8 = v3 < v5;
LABEL_20:
    if ( v8 )
      return result;
  }
  return 1;
}
