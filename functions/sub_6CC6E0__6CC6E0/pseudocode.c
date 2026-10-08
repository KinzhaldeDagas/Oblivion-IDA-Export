_DWORD *__thiscall sub_6CC6E0(_DWORD *this, _DWORD *a2, unsigned __int8 a3)
{
  int v4; // edi
  int v5; // eax
  bool v6; // zf
  int v7; // ebp
  char v8; // bl
  unsigned __int8 v9; // bl
  int v10; // edi
  int v11; // eax
  char v12; // cl
  char v13; // dl
  char v14; // al
  char v15; // cl
  unsigned __int8 v16; // al
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  double v21; // st7
  double v23; // st7

  v4 = *(this + 5) + 0x18 * a3; /*0x6cc71c*/
  v5 = *(_DWORD *)v4; /*0x6cc71f*/
  v6 = *(_DWORD *)v4 == 0; /*0x6cc721*/
  *a2 = *(_DWORD *)v4; /*0x6cc723*/
  if ( !v6 ) /*0x6cc725*/
    InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6cc72b*/
  v7 = *(_DWORD *)v4; /*0x6cc731*/
  v8 = *(_BYTE *)(v4 + 0xC); /*0x6cc739*/
  if ( *(_DWORD *)v4 ) /*0x6cc731*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x6cc74a*/
    {
      if ( v7 ) /*0x6cc756*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x6cc761*/
    }
    *(_DWORD *)v4 = 0; /*0x6cc763*/
  }
  *(_BYTE *)(v4 + 0xC) = 0; /*0x6cc76b*/
  *(float *)(v4 + 4) = 0.0; /*0x6cc76f*/
  *(float *)(v4 + 8) = 0.0; /*0x6cc772*/
  *(float *)(v4 + 0x10) = 0.0; /*0x6cc775*/
  *(float *)(v4 + 0x14) = flt_A79F00; /*0x6cc77e*/
  if ( v8 == *((_BYTE *)this + 0x10) || v8 == *((_BYTE *)this + 0x11) ) /*0x6cc789*/
  {
    v9 = 0; /*0x6cc78d*/
    v6 = *((_BYTE *)this + 0xD) == 0; /*0x6cc78f*/
    *((_BYTE *)this + 0x11) = 0x80; /*0x6cc792*/
    *((_BYTE *)this + 0x10) = 0x80; /*0x6cc795*/
    if ( !v6 ) /*0x6cc798*/
    {
      v10 = *(this + 5); /*0x6cc79a*/
      do /*0x6cc7d4*/
      {
        v11 = v10 + 0x18 * v9; /*0x6cc7aa*/
        if ( *(_DWORD *)v11 ) /*0x6cc7a6*/
        {
          v12 = *(_BYTE *)(v11 + 0xC); /*0x6cc7af*/
          if ( v12 > *((char *)this + 0x11) ) /*0x6cc7b5*/
          {
            v13 = *((_BYTE *)this + 0x10); /*0x6cc7b7*/
            if ( v12 <= v13 ) /*0x6cc7bc*/
            {
              if ( v12 < v13 ) /*0x6cc7c9*/
                *((_BYTE *)this + 0x11) = v12; /*0x6cc7cb*/
            }
            else
            {
              *((_BYTE *)this + 0x11) = v13; /*0x6cc7be*/
              *((_BYTE *)this + 0x10) = *(_BYTE *)(v11 + 0xC); /*0x6cc7c4*/
            }
          }
        }
        ++v9; /*0x6cc7ce*/
      }
      while ( v9 < *((_BYTE *)this + 0xD) ); /*0x6cc7d4*/
    }
  }
  v14 = --*((_BYTE *)this + 0xE); /*0x6cc7db*/
  if ( v14 == 1 ) /*0x6cc7e0*/
  {
    v15 = *((_BYTE *)this + 0xD); /*0x6cc7e2*/
    if ( v15 == 2 ) /*0x6cc7e8*/
    {
      *((_BYTE *)this + 0xF) = a3 == 0; /*0x6cc7f2*/
    }
    else
    {
      v16 = 0; /*0x6cc7f7*/
      if ( v15 ) /*0x6cc7fb*/
      {
        v17 = *(this + 5); /*0x6cc7fd*/
        do /*0x6cc814*/
        {
          if ( *(_DWORD *)(v17 + 0x18 * v16) ) /*0x6cc806*/
            *((_BYTE *)this + 0xF) = v16; /*0x6cc80c*/
          ++v16; /*0x6cc80f*/
        }
        while ( v16 < *((_BYTE *)this + 0xD) ); /*0x6cc814*/
      }
    }
    v18 = *(this + 5); /*0x6cc81d*/
    v19 = *(_DWORD *)(v18 + 0x18 * *((unsigned __int8 *)this + 0xF)); /*0x6cc820*/
    v20 = v18 + 0x18 * *((unsigned __int8 *)this + 0xF); /*0x6cc823*/
    *(this + 6) = v19; /*0x6cc826*/
    v21 = *(float *)(v20 + 0x14); /*0x6cc829*/
    goto LABEL_30; /*0x6cc82c*/
  }
  if ( !v14 ) /*0x6cc830*/
  {
    v21 = flt_A79F00; /*0x6cc832*/
    *((_BYTE *)this + 0xF) = 0xFF; /*0x6cc838*/
    *(this + 6) = 0; /*0x6cc83b*/
LABEL_30:
    *((float *)this + 8) = v21; /*0x6cc842*/
  }
  *((float *)this + 9) = -flt_A7DEB4; /*0x6cc845*/
  *((float *)this + 0xA) = -flt_A7DEB4; /*0x6cc85c*/
  v23 = flt_A7DEB4; /*0x6cc85f*/
  *((_BYTE *)this + 0xC) |= 4u; /*0x6cc865*/
  *((float *)this + 0xB) = -v23; /*0x6cc86b*/
  return a2; /*0x6cc86e*/
}
