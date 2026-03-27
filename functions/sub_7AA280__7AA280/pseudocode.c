void __thiscall sub_7AA280(_DWORD *this)
{
  double v1; // st7
  int v3; // ebx
  signed int v4; // ebp
  unsigned int *v5; // esi
  char v6; // [esp+Bh] [ebp-9h]
  float v7; // [esp+Ch] [ebp-8h]
  unsigned int v8; // [esp+10h] [ebp-4h]

  v1 = 0.0;
  v7 = 0.0;
  v3 = 0;
  v8 = 0x7FFFFFFF;
  v6 = 1;
  v4 = 0;
  v5 = this + 0x35;
  do
  {
    if ( *((_BYTE *)v5 + 0xFFFFFFF8) )
    {
      sub_7A99F0(this, v4);
      v1 = 0.0;
      if ( *((_BYTE *)v5 + 0xFFFFFFF8) )
      {
        ++v5[1];
        *((_BYTE *)this + 0xC0) = 1;
        v6 = 0;
      }
    }
    if ( v1 < *((float *)v5 + 0xFFFFFFFF) || *v5 )
    {
      if ( *v5 < v8 )
        v8 = *v5;
      if ( v7 < (double)*((float *)v5 + 0xFFFFFFFF) )
        v7 = *((float *)v5 + 0xFFFFFFFF);
    }
    v3 += v5[1];
    ++v4;
    v5 += 5;
  }
  while ( v4 < 3 );
  if ( v6 )
  {
    *((float *)this + 0x31) = v7;
    *((_BYTE *)this + 0xC0) = 0;
    if ( v8 < 0xA )
      *((float *)this + 0x31) = 1.0;
    *(this + 0x2F) = v8;
    dword_B42CC0 = v3;
    *((float *)this + 0x34) = v1;
    *((float *)this + 0x39) = v1;
    *((float *)this + 0x3E) = v1;
    *(this + 0x35) = 0;
    *(this + 0x3A) = 0;
    *(this + 0x3F) = 0;
  }
}
