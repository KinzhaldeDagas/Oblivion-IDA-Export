int *__thiscall sub_775780(int *this, int a2, int a3, int a4, int a5, int a6)
{
  int *v7; // ebp
  int v8; // edi
  int *v9; // ebx
  _DWORD *v10; // eax
  int v11; // eax
  char v12; // bl
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  _DWORD *v15; // eax
  _DWORD *v16; // edi
  _DWORD *v17; // eax
  _DWORD *v18; // ecx
  _DWORD *v19; // eax
  int v20; // ecx
  _DWORD *v23; // [esp+64h] [ebp-1Ch]
  int v24; // [esp+68h] [ebp-18h]
  unsigned int v25; // [esp+6Ch] [ebp-14h]
  _BYTE v26[12]; // [esp+70h] [ebp-10h] BYREF
  int v27; // [esp+7Ch] [ebp-4h]
  unsigned int i; // [esp+84h] [ebp+4h]
  char v29; // [esp+8Ch] [ebp+Ch]
  char v30; // [esp+94h] [ebp+14h]

  *this = a4; /*0x775789*/
  v7 = this + 0x4D; /*0x775790*/
  v8 = a3; /*0x775797*/
  v9 = this + 1; /*0x77579d*/
  *(this + 0x50) = 0; /*0x7757a0*/
  *(this + 0x4E) = 0; /*0x7757a3*/
  *(this + 0x4F) = 0; /*0x7757a6*/
  *(this + 0x4D) = (int)&NiTPointerList<NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable'; /*0x7757a9*/
  if ( (*(int (__stdcall **)(int, int, _DWORD, int *))(*(_DWORD *)a2 + 0x38))(a2, a3, *this, this + 1) < 0 ) /*0x7757c3*/
  {
    *v9 = 0; /*0x775946*/
  }
  else
  {
    v10 = *(_DWORD **)(a6 + 4); /*0x7757cd*/
    if ( v10 ) /*0x7757d2*/
    {
      while ( 1 ) /*0x7757e9*/
      {
        v23 = (_DWORD *)*v10; /*0x7757e9*/
        v11 = v10[2]; /*0x7757ed*/
        v24 = v11; /*0x7757f1*/
        if ( v11 ) /*0x7757f5*/
        {
          v25 = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)a2 + 0x18))(a2, v8, v11); /*0x775807*/
          for ( i = 0; i < v25; ++i ) /*0x775813*/
          {
            v12 = 0; /*0x775835*/
            v29 = 0; /*0x775838*/
            v30 = 0; /*0x77583d*/
            if ( (*(int (__stdcall **)(int, int, int, unsigned int, _BYTE *))(*(_DWORD *)a2 + 0x1C))( /*0x775845*/
                   a2,
                   v8,
                   v24,
                   i,
                   v26) >= 0 )
            {
              (*(void (__stdcall **)(int, int, _DWORD, int, int, _DWORD))(*(_DWORD *)a2 + 0x24))( /*0x77585d*/
                a2,
                v8,
                *this,
                v27,
                v27,
                0);
              v12 = 1; /*0x77585f*/
              v30 = 1; /*0x775861*/
            }
            if ( (*(int (__stdcall **)(int, int, _DWORD, int, int, int))(*(_DWORD *)a2 + 0x24))( /*0x775883*/
                   a2,
                   v8,
                   *this,
                   a5,
                   v27,
                   1) >= 0 )
              v29 = 1; /*0x775885*/
            if ( v12 || v29 ) /*0x775892*/
            {
              v13 = (_DWORD *)*(this + 0x4E); /*0x77589c*/
              if ( v13 ) /*0x7758a4*/
              {
                while ( 1 ) /*0x7758b3*/
                {
                  v14 = (_DWORD *)v13[2]; /*0x7758b3*/
                  v13 = (_DWORD *)*v13; /*0x7758b7*/
                  if ( v14 ) /*0x7758b9*/
                  {
                    if ( *v14 == v27 ) /*0x7758bd*/
                      break; /*0x7758bd*/
                  }
                  if ( !v13 ) /*0x7758c1*/
                    goto LABEL_17; /*0x7758c1*/
                }
              }
              else
              {
LABEL_17:
                v15 = (_DWORD *)FormHeapAlloc(0x18u); /*0x7758c3*/
                if ( v15 ) /*0x7758cf*/
                  v16 = sub_7753F0(v15, a2, v8, *this, v27, v30, v29); /*0x7758ec*/
                else
                  v16 = 0; /*0x7758f0*/
                v17 = (_DWORD *)(*(int (__thiscall **)(int *))(*v7 + 4))(v7); /*0x7758fa*/
                v17[2] = v16; /*0x7758fc*/
                *v17 = 0; /*0x7758ff*/
                v17[1] = v7[2]; /*0x775908*/
                v18 = (_DWORD *)v7[2]; /*0x77590b*/
                if ( v18 ) /*0x775910*/
                  *v18 = v17; /*0x775912*/
                else
                  v7[1] = (int)v17; /*0x775916*/
                ++v7[3]; /*0x775919*/
                v8 = a3; /*0x77591d*/
                v7[2] = (int)v17; /*0x775921*/
              }
            }
          }
        }
        if ( !v23 ) /*0x77593e*/
          break; /*0x77593e*/
        v10 = v23; /*0x7757e0*/
      }
    }
  }
  v19 = (_DWORD *)*(this + 0x4E); /*0x775950*/
  if ( !v19 ) /*0x775958*/
    goto LABEL_31; /*0x775958*/
  while ( 1 ) /*0x775967*/
  {
    v20 = v19[2]; /*0x775967*/
    v19 = (_DWORD *)*v19; /*0x77596b*/
    if ( *(_DWORD *)v20 == a5 ) /*0x77596d*/
      break; /*0x77596d*/
    if ( !v19 ) /*0x775971*/
      goto LABEL_31; /*0x775971*/
  }
  if ( *(_BYTE *)(v20 + 4) ) /*0x775986*/
  {
    *((_BYTE *)this + 0x144) = 1; /*0x77598f*/
    return this; /*0x775996*/
  }
  else
  {
LABEL_31:
    *((_BYTE *)this + 0x144) = 0; /*0x775973*/
    return this; /*0x77597d*/
  }
}
