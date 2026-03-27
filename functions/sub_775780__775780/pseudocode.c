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

  *this = a4;
  v7 = this + 0x4D;
  v8 = a3;
  v9 = this + 1;
  *(this + 0x50) = 0;
  *(this + 0x4E) = 0;
  *(this + 0x4F) = 0;
  *(this + 0x4D) = (int)&NiTPointerList<NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable';
  if ( (*(int (__stdcall **)(int, int, _DWORD, int *))(*(_DWORD *)a2 + 0x38))(a2, a3, *this, this + 1) < 0 )
  {
    *v9 = 0;
  }
  else
  {
    v10 = *(_DWORD **)(a6 + 4);
    if ( v10 )
    {
      while ( 1 )
      {
        v23 = (_DWORD *)*v10;
        v11 = v10[2];
        v24 = v11;
        if ( v11 )
        {
          v25 = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)a2 + 0x18))(a2, v8, v11);
          for ( i = 0; i < v25; ++i )
          {
            v12 = 0;
            v29 = 0;
            v30 = 0;
            if ( (*(int (__stdcall **)(int, int, int, unsigned int, _BYTE *))(*(_DWORD *)a2 + 0x1C))(
                   a2,
                   v8,
                   v24,
                   i,
                   v26) >= 0 )
            {
              (*(void (__stdcall **)(int, int, _DWORD, int, int, _DWORD))(*(_DWORD *)a2 + 0x24))(
                a2,
                v8,
                *this,
                v27,
                v27,
                0);
              v12 = 1;
              v30 = 1;
            }
            if ( (*(int (__stdcall **)(int, int, _DWORD, int, int, int))(*(_DWORD *)a2 + 0x24))(
                   a2,
                   v8,
                   *this,
                   a5,
                   v27,
                   1) >= 0 )
              v29 = 1;
            if ( v12 || v29 )
            {
              v13 = (_DWORD *)*(this + 0x4E);
              if ( v13 )
              {
                while ( 1 )
                {
                  v14 = (_DWORD *)v13[2];
                  v13 = (_DWORD *)*v13;
                  if ( v14 )
                  {
                    if ( *v14 == v27 )
                      break;
                  }
                  if ( !v13 )
                    goto LABEL_17;
                }
              }
              else
              {
LABEL_17:
                v15 = (_DWORD *)FormHeapAlloc(0x18u);
                if ( v15 )
                  v16 = sub_7753F0(v15, a2, v8, *this, v27, v30, v29);
                else
                  v16 = 0;
                v17 = (_DWORD *)(*(int (__thiscall **)(int *))(*v7 + 4))(v7);
                v17[2] = v16;
                *v17 = 0;
                v17[1] = v7[2];
                v18 = (_DWORD *)v7[2];
                if ( v18 )
                  *v18 = v17;
                else
                  v7[1] = (int)v17;
                ++v7[3];
                v8 = a3;
                v7[2] = (int)v17;
              }
            }
          }
        }
        if ( !v23 )
          break;
        v10 = v23;
      }
    }
  }
  v19 = (_DWORD *)*(this + 0x4E);
  if ( !v19 )
    goto LABEL_31;
  while ( 1 )
  {
    v20 = v19[2];
    v19 = (_DWORD *)*v19;
    if ( *(_DWORD *)v20 == a5 )
      break;
    if ( !v19 )
      goto LABEL_31;
  }
  if ( *(_BYTE *)(v20 + 4) )
  {
    *((_BYTE *)this + 0x144) = 1;
    return this;
  }
  else
  {
LABEL_31:
    *((_BYTE *)this + 0x144) = 0;
    return this;
  }
}
