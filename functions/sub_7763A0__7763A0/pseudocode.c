int __thiscall sub_7763A0(_DWORD *this, unsigned int a2)
{
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD *v5; // ebp
  int v6; // edi
  bool v7; // zf
  int v8; // esi
  _DWORD *v9; // esi
  int v10; // edi
  double v11; // st7
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // al
  int v15; // ebp
  int v16; // eax
  _DWORD *v17; // [esp+24h] [ebp-1Ch]
  unsigned __int8 v18; // [esp+24h] [ebp-1Ch]
  __int64 v19; // [esp+28h] [ebp-18h] BYREF
  float v20; // [esp+30h] [ebp-10h]
  float v21; // [esp+34h] [ebp-Ch]
  float i; // [esp+38h] [ebp-8h]

  v20 = 0.0;
  v3 = (_DWORD *)*(this + 5);
  v21 = 0.0;
  for ( i = 0.0; v3; *(_BYTE *)(*(_DWORD *)(v4 + 0x104) + 0x70) = 1 )
  {
    v4 = v3[2];
    v3 = (_DWORD *)*v3;
  }
  if ( *((_BYTE *)this + 0x31) )
  {
    v5 = 0;
    if ( a2 )
      v5 = *(_DWORD **)(a2 + 0xC);
    a2 = 0;
    while ( v5 )
    {
      if ( a2 >= 8 )
        break;
      v6 = v5[1];
      v17 = (_DWORD *)*v5;
      v5 = (_DWORD *)*v5;
      v7 = *(_BYTE *)(v6 + 0xAC) == 0;
      LODWORD(v19) = v6;
      if ( !v7 && flt_A34BA0 <= (double)*(float *)(v6 + 0xDC) )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x84))(v6) )
        {
          v8 = *(_DWORD *)(v6 + 0x104);
          if ( v8 )
          {
            if ( sub_775FF0((float *)v8, v6) )
              goto LABEL_14;
          }
          else
          {
            v15 = sub_775FA0(this);
            v16 = FormHeapAlloc(0x74u);
            v8 = v16;
            if ( v16 )
            {
              *(_DWORD *)(v16 + 0x68) = 0;
              *(_DWORD *)(v16 + 0x6C) = v15;
              *(_BYTE *)(v16 + 0x70) = 0;
              *(_BYTE *)(v16 + 0x71) = 0;
              sub_775FF0((float *)v16, v6);
            }
            else
            {
              v8 = 0;
            }
            NiTMap_SetAt(this, v6, v8);
            v5 = v17;
            *(_DWORD *)(v6 + 0x104) = v8;
LABEL_14:
            (*(void (__stdcall **)(_DWORD, _DWORD, int))(*(_DWORD *)*(this + 8) + 0xCC))(
              *(this + 8),
              *(_DWORD *)(v8 + 0x6C),
              v8);
          }
          if ( !*(_BYTE *)(v8 + 0x71) )
          {
            (*(void (__stdcall **)(_DWORD, _DWORD, int))(*(_DWORD *)*(this + 8) + 0xD4))(
              *(this + 8),
              *(_DWORD *)(v8 + 0x6C),
              1);
            *(_BYTE *)(v8 + 0x71) = 1;
            sub_6AA320(this + 4, &v19);
          }
          ++a2;
          *(_BYTE *)(v8 + 0x70) = 0;
          continue;
        }
        *(float *)&v19 = *(float *)(v6 + 0xDC);
        v20 = *(float *)(v6 + 0xE0) * *(float *)&v19 + v20;
        v21 = *(float *)(v6 + 0xE4) * *(float *)&v19 + v21;
        i = *(float *)&v19 * *(float *)(v6 + 0xE8) + i;
      }
    }
  }
  v9 = (_DWORD *)*(this + 5);
  while ( v9 )
  {
    v10 = *(_DWORD *)(v9[2] + 0x104);
    v7 = *(_BYTE *)(v10 + 0x70) == 0;
    a2 = (unsigned int)v9;
    v9 = (_DWORD *)*v9;
    if ( !v7 )
    {
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*(this + 8) + 0xD4))(
        *(this + 8),
        *(_DWORD *)(v10 + 0x6C),
        0);
      *(_BYTE *)(v10 + 0x71) = 0;
      sub_7AA860((BSTextureManager *)(this + 4), (NiTPointerList_Node_void **)&a2);
    }
  }
  v11 = dbl_A3DDD8;
  v19 = (__int64)(v20 * v11);
  v18 = v19;
  if ( (unsigned int)v19 > 0xFF )
    v18 = 0xFF;
  v19 = (__int64)(v21 * v11);
  v12 = v19;
  if ( (unsigned int)v19 > 0xFF )
    v12 = 0xFF;
  v19 = (__int64)(v11 * i);
  v13 = v19;
  if ( (unsigned int)v19 > 0xFF )
    v13 = 0xFF;
  return (*(int (__thiscall **)(_DWORD, int, unsigned int, _DWORD))(*(_DWORD *)*(this + 9) + 0x64))(
           *(this + 9),
           0x8B,
           v13 | ((v12 | ((v18 | 0xFFFFFF00) << 8)) << 8),
           0);
}
