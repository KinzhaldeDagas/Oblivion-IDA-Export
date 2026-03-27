char __thiscall sub_6CF780(float *this, float a2, int a3, float *a4)
{
  char v5; // cl
  char result; // al
  unsigned __int8 v8; // bl
  int v9; // ecx
  unsigned __int8 i; // [esp+18h] [ebp-4h]
  float v11; // [esp+24h] [ebp+8h]

  v5 = *((_BYTE *)this + 0xE);
  result = 0;
  if ( v5 == 1 )
  {
    result = sub_6CF630((int)this, a2, a3, a4);
    *(this + 2) = a2;
  }
  else
  {
    if ( v5 )
    {
      sub_6CD0F0((int)this);
      v8 = 0;
      for ( i = 0; v8 < *((_BYTE *)this + 0xD); i = v8 )
      {
        v11 = a2;
        v9 = *((_DWORD *)this + 5) + 0x18 * v8;
        if ( *(_DWORD *)v9 )
        {
          if ( 0.0 != *(float *)(v9 + 8) )
          {
            if ( (*(_BYTE *)(this + 3) & 1) != 0 )
              v11 = *(float *)(v9 + 0x14);
            if ( flt_A79F00 != v11 )
              sub_6CEF80((int)this, i, v11, a3);
          }
        }
        ++v8;
      }
      result = sub_6CE840(this, SLODWORD(a2), a3, a4);
    }
    *(this + 2) = a2;
  }
  return result;
}
