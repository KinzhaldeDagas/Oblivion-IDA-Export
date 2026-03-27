int __thiscall sub_7A99F0(_BYTE *this, unsigned int a2)
{
  int result; // eax
  float *v3; // edi
  _DWORD *v4; // esi

  result = a2;
  if ( a2 < 3 )
  {
    v3 = (float *)(this + 0x14 * a2);
    if ( *((_BYTE *)v3 + 0xCC) )
    {
      v4 = this + 0x14 * a2 + 0xC8;
      result = *v4;
      if ( *v4 )
      {
        result = (*(int (__stdcall **)(int, unsigned int *, int, int))(*(_DWORD *)result + 0x1C))(result, &a2, 4, 1);
        if ( result )
        {
          if ( result != 1 )
          {
            result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*v4 + 8))(*v4);
            *v4 = 0;
            *((_BYTE *)v3 + 0xCC) = 0;
          }
        }
        else
        {
          result = a2;
          if ( a2 )
          {
            v3[0x34] = 0.0;
            *((_DWORD *)v3 + 0x35) = result;
          }
          else
          {
            v3[0x34] = 1.0;
            v3[0x35] = 0.0;
          }
          *((_BYTE *)v3 + 0xCC) = 0;
        }
      }
    }
  }
  return result;
}
