unsigned int __thiscall sub_70A0D0(float *this, float a2, int a3)
{
  unsigned int result; // eax
  unsigned int v5; // ebp
  float *v6; // edi

  if ( (_BYTE)a3 )
    sub_47C930(this, a2, 1);
  result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x74))(this);
  v5 = 0;
  *(this + 0xB) = 0.0;
  if ( *((_WORD *)this + 0x5B) )
  {
    do
    {
      v6 = *(float **)(*((_DWORD *)this + 0x2C) + 4 * v5);
      if ( v6 )
      {
        (*(void (__thiscall **)(float *, _DWORD, int))(*(_DWORD *)v6 + 0x60))(v6, LODWORD(a2), a3);
        if ( 0.0 != v6[0xB] )
        {
          if ( 0.0 == *(this + 0xB) )
          {
            *(this + 8) = v6[8];
            *(this + 9) = v6[9];
            *(this + 0xA) = v6[0xA];
            *(this + 0xB) = v6[0xB];
          }
          else
          {
            sub_72A6B0(this + 8, v6 + 8);
          }
        }
      }
      result = *((unsigned __int16 *)this + 0x5B);
      ++v5;
    }
    while ( v5 < result );
  }
  return result;
}
