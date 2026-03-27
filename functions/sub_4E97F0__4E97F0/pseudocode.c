char __thiscall sub_4E97F0(int *this, _DWORD *a2, int a3, int **a4, int **a5)
{
  _DWORD *v6; // ebp
  double v7; // st7
  char *SurfaceData; // edi
  _DWORD *v9; // eax
  int v10; // ecx
  _BYTE *v11; // eax
  _DWORD **v12; // esi
  _DWORD *v13; // eax
  int v14; // ebx
  _BYTE *v15; // eax
  _BYTE *v16; // esi
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  NiSurfaceData *v19; // eax
  char v20; // bl
  BSExtraData v22; // [esp+18h] [ebp-14h] BYREF
  unsigned int v23; // [esp+28h] [ebp-4h]

  v6 = a2;
  if ( !a2 )
    return 0;
  v7 = dbl_A3A5B0;
  if ( v7 == *(float *)a4 || *(float *)a5 == v7 )
    return 0;
  sub_68C040(&v22);
  v23 = 0;
  if ( !sub_4E94C0(this, a4, a5, &v22) )
    sub_68C6E0(&v22);
  SurfaceData = (char *)sub_42B410(&v22);
  if ( !SurfaceData )
    goto LABEL_31;
  if ( a3 )
  {
    v9 = a2;
    do
    {
      v10 = v9[1];
      if ( !v10 && !*v9 )
        break;
      if ( *v9 == a3 )
      {
        v6 = v9;
        break;
      }
      v9 = (_DWORD *)v9[1];
    }
    while ( v10 );
  }
  else
  {
    v11 = (_BYTE *)FormHeapAlloc(8u);
    LOBYTE(v23) = 1;
    v12 = v11 ? (_DWORD **)sub_68B0C0(v11) : 0;
    LOBYTE(v23) = 0;
    sub_68B1D0((int)v12, 1);
    v13 = (_DWORD *)sub_6899C0(SurfaceData);
    sub_68B200(v12, v13);
    BSSimpleList_PushFront(a2, (int)v12);
    SurfaceData = (char *)NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)SurfaceData);
  }
  if ( v6 )
  {
    v14 = v6[1];
    if ( SurfaceData )
    {
      do
      {
        v15 = (_BYTE *)FormHeapAlloc(8u);
        LOBYTE(v23) = 2;
        if ( v15 )
          v16 = sub_68B0C0(v15);
        else
          v16 = 0;
        LOBYTE(v23) = 0;
        sub_68B1D0((int)v16, 1);
        v17 = (_DWORD *)sub_6899C0(SurfaceData);
        sub_68B200((_DWORD **)v16, v17);
        v18 = (_DWORD *)FormHeapAlloc(8u);
        if ( v18 )
        {
          *v18 = 0;
          v18[1] = 0;
        }
        else
        {
          v18 = 0;
        }
        if ( v16 )
          *v18 = v16;
        v18[1] = v14;
        v6[1] = v18;
        v19 = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)SurfaceData);
        v6 = (_DWORD *)v6[1];
        SurfaceData = (char *)v19;
      }
      while ( v19 );
    }
    v20 = 1;
  }
  else
  {
LABEL_31:
    v20 = 0;
  }
  v23 = 0xFFFFFFFF;
  sub_68C9B0(&v22);
  return v20;
}
