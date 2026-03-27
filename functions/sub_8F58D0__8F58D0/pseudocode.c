int __thiscall sub_8F58D0(int *this)
{
  int v2; // ecx
  int v3; // edi
  int result; // eax
  int v5; // ebx
  int v6; // ebp

  v2 = *(this + 7);
  v3 = 0;
  if ( v2 >= 0 )
  {
    result = *(this + 8);
    v5 = *(this + 4) - v2;
    if ( v5 <= result )
    {
      if ( v2 > 0 )
      {
        v6 = v5 % 0x200;
        if ( v5 % 0x200 )
          v3 = 0x200 - v6;
        j_unknown_libname_16(v3 + *(this + 3), *(this + 3) + v2, v5);
        result = (v5 / 0x200 + (v6 != 0)) << 9;
        *(this + 7) = v3;
        *(this + 4) = result;
        *(this + 5) = result;
      }
    }
    else
    {
      *(this + 4) = 0;
      *(this + 5) = 0;
      *(this + 7) = 0xFFFFFFFF;
      *(this + 8) = 0xFFFFFFFF;
      return 0xFFFFFFFF;
    }
  }
  else
  {
    *(this + 4) = 0;
    *(this + 5) = 0;
  }
  return result;
}
