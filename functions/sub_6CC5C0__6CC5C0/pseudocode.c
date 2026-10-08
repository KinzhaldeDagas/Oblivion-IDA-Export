unsigned __int8 __thiscall sub_6CC5C0(_BYTE *this, int a2, float a3, float a4, float a5)
{
  char v6; // dl
  unsigned __int8 v7; // bl
  int v8; // ecx
  int v10; // ebp
  int v11; // edx
  int v12; // edi
  char v13; // cl
  double v14; // st7
  double v15; // st7

  v6 = *(this + 0xD); /*0x6cc5c4*/
  v7 = 0; /*0x6cc5c7*/
  if ( v6 ) /*0x6cc5cb*/
  {
    v8 = *((_DWORD *)this + 5); /*0x6cc5cd*/
    do /*0x6cc5e2*/
    {
      if ( !*(_DWORD *)(v8 + 0x18 * v7) ) /*0x6cc5d6*/
        break; /*0x6cc5da*/
      ++v7; /*0x6cc5dc*/
    }
    while ( v7 < *(this + 0xD) ); /*0x6cc5e2*/
  }
  if ( v7 == v6 && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0xA4))(this) ) /*0x6cc5f2*/
    return 0xFF; /*0x6cc5f9*/
  v10 = *((_DWORD *)this + 5) + 0x18 * v7; /*0x6cc609*/
  v11 = a2; /*0x6cc60c*/
  v12 = *(_DWORD *)v10; /*0x6cc611*/
  if ( *(_DWORD *)v10 != a2 ) /*0x6cc616*/
  {
    if ( v12 ) /*0x6cc61a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x6cc620*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x6cc636*/
      v11 = a2; /*0x6cc638*/
    }
    *(_DWORD *)v10 = v11; /*0x6cc63e*/
    if ( v11 ) /*0x6cc641*/
    {
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x6cc647*/
      v11 = a2; /*0x6cc64d*/
    }
  }
  *(float *)(v10 + 4) = a3; /*0x6cc659*/
  *(_BYTE *)(v10 + 0xC) = LOBYTE(a4); /*0x6cc65c*/
  *(float *)(v10 + 0x10) = a5; /*0x6cc664*/
  if ( SLOBYTE(a4) > (char)*(this + 0x11) ) /*0x6cc66b*/
  {
    v13 = *(this + 0x10); /*0x6cc66d*/
    if ( SLOBYTE(a4) <= v13 ) /*0x6cc672*/
    {
      if ( LOBYTE(a4) != v13 ) /*0x6cc67c*/
        *(this + 0x11) = LOBYTE(a4); /*0x6cc67e*/
    }
    else
    {
      *(this + 0x11) = v13; /*0x6cc674*/
      *(this + 0x10) = LOBYTE(a4); /*0x6cc677*/
    }
  }
  if ( ++*(this + 0xE) == 1 ) /*0x6cc689*/
  {
    *(this + 0xF) = v7; /*0x6cc68b*/
    *((_DWORD *)this + 6) = v11; /*0x6cc68e*/
  }
  else
  {
    v14 = flt_A79F00; /*0x6cc693*/
    *(this + 0xF) = 0xFF; /*0x6cc699*/
    *((float *)this + 8) = v14; /*0x6cc69d*/
    *((_DWORD *)this + 6) = 0; /*0x6cc6a0*/
  }
  *((float *)this + 9) = -flt_A7DEB4; /*0x6cc6b1*/
  *((float *)this + 0xA) = -flt_A7DEB4; /*0x6cc6bc*/
  v15 = flt_A7DEB4; /*0x6cc6bf*/
  *(this + 0xC) |= 4u; /*0x6cc6c5*/
  *((float *)this + 0xB) = -v15; /*0x6cc6cb*/
  return v7; /*0x6cc5f8*/
}
