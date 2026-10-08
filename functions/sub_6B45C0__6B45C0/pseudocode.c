_DWORD *__thiscall sub_6B45C0(_DWORD *this, const char *a2)
{
  int v4; // eax
  int v5; // edi

  *(this + 2) = 0; /*0x6b45cb*/
  if ( sub_6B4500(this, (int)a2) ) /*0x6b45ce*/
  {
    *(this + 5) = 0; /*0x6b45ea*/
    *(this + 4) = 0; /*0x6b45ed*/
    v4 = FormHeapAlloc(0xD0u); /*0x6b45f0*/
    v5 = v4; /*0x6b45f5*/
    if ( v4 ) /*0x6b45fc*/
      _memset(v4, 0, 0xD0u); /*0x6b4605*/
    else
      v5 = 0; /*0x6b460f*/
    *(this + 1) = v5; /*0x6b4613*/
    *((_BYTE *)this + 0x18) = sub_6B3790(this) != 0; /*0x6b4621*/
    return this; /*0x6b4624*/
  }
  else
  {
    *((_BYTE *)this + 0x18) = 0; /*0x6b45d7*/
    *(this + 1) = 0; /*0x6b45da*/
    return this; /*0x6b45dd*/
  }
}
