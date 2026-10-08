int __thiscall sub_549590(_BYTE *this, char a2, float a3)
{
  double v4; // st7
  int result; // eax
  double v6; // st7
  float v7; // [esp+28h] [ebp+8h]
  float v8; // [esp+28h] [ebp+8h]

  if ( a2 ) /*0x54959a*/
  {
    if ( !*(this + 0x1DA) ) /*0x54959c*/
    {
      if ( LOBYTE(a3) ) /*0x5495ae*/
        v4 = 0.0; /*0x5495b0*/
      else
        v4 = 1.0; /*0x5495b4*/
      v7 = v4; /*0x5495b8*/
      result = (*(int (__stdcall **)(_DWORD, int, int, int, int, int))(*(_DWORD *)this + 0x78))( /*0x5495d1*/
                 LODWORD(v7),
                 1,
                 1,
                 1,
                 1,
                 1);
      *(this + 0x1DA) = a2; /*0x5495d3*/
      *(this + 0x1D7) = 1; /*0x5495d9*/
    }
  }
  else if ( *(this + 0x1DA) ) /*0x5495e5*/
  {
    *(this + 0x1DA) = 0; /*0x5495f3*/
    if ( LOBYTE(a3) ) /*0x5495fa*/
      v6 = 0.0; /*0x5495fc*/
    else
      v6 = 1.0; /*0x549600*/
    v8 = v6; /*0x549604*/
    result = (*(int (__stdcall **)(_DWORD, int, int, int, int, _DWORD))(*(_DWORD *)this + 0x78))( /*0x54961d*/
               LODWORD(v8),
               1,
               1,
               1,
               1,
               0);
    *(this + 0x1D5) = 1; /*0x54961f*/
    *(this + 0x1D7) = 1; /*0x549626*/
  }
  return result; /*0x5495e0*/
}
