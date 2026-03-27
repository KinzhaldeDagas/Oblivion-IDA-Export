double __thiscall sub_5234A0(char *this)
{
  char *v1; // esi
  float **v2; // eax
  float *v3; // edi
  float v5; // [esp+4h] [ebp-4h]

  v1 = this + 0x3C;
  v5 = 1.0;
  if ( this != (char *)0xFFFFFFC4 )
  {
    do
    {
      v2 = *(float ***)v1;
      if ( !*(_DWORD *)v1 )
        break;
      v3 = *v2;
      if ( v5 < sub_51F0A0(*v2) )
        v5 = sub_51F0A0(v3);
      v1 = *((char **)v1 + 1);
    }
    while ( v1 );
  }
  return v5;
}
