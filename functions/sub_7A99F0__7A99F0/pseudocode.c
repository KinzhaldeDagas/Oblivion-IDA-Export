int __thiscall sub_7A99F0(_BYTE *this, unsigned int a2)
{
  int result; // eax
  float *v3; // edi
  _DWORD *v4; // esi

  result = a2; /*0x7a99f0*/
  if ( a2 < 3 ) /*0x7a99f7*/
  {
    v3 = (float *)(this + 0x14 * a2); /*0x7a9a09*/
    if ( *((_BYTE *)v3 + 0xCC) ) /*0x7a9a00*/
    {
      v4 = this + 0x14 * a2 + 0xC8; /*0x7a9a13*/
      result = *v4; /*0x7a9a16*/
      if ( *v4 ) /*0x7a9a16*/
      {
        result = (*(int (__stdcall **)(int, unsigned int *, int, int))(*(_DWORD *)result + 0x1C))(result, &a2, 4, 1); /*0x7a9a2b*/
        if ( result ) /*0x7a9a2f*/
        {
          if ( result != 1 ) /*0x7a9a6f*/
          {
            result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*v4 + 8))(*v4); /*0x7a9a79*/
            *v4 = 0; /*0x7a9a7b*/
            *((_BYTE *)v3 + 0xCC) = 0; /*0x7a9a81*/
          }
        }
        else
        {
          result = a2; /*0x7a9a31*/
          if ( a2 ) /*0x7a9a37*/
          {
            v3[0x34] = 0.0; /*0x7a9a55*/
            *((_DWORD *)v3 + 0x35) = result; /*0x7a9a5b*/
          }
          else
          {
            v3[0x34] = 1.0; /*0x7a9a3c*/
            v3[0x35] = 0.0; /*0x7a9a42*/
          }
          *((_BYTE *)v3 + 0xCC) = 0; /*0x7a9a48*/
        }
      }
    }
  }
  return result; /*0x7a9a4f*/
}
