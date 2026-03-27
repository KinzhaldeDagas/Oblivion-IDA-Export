void __thiscall sub_88F880(_WORD *this, signed int a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v5; // eax
  char v6; // al
  double v8; // st6
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // edi
  NiAVObject *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  float v20; // [esp+Ch] [ebp+4h]
  float v21; // [esp+10h] [ebp+8h]
  float v22; // [esp+10h] [ebp+8h]

  v3 = a3;
  if ( a3 )
  {
    v5 = (*(int (__thiscall **)(_DWORD *))(*a3 + 4))(a3);
    if ( v5 )
    {
      while ( (char *)v5 != dword_BA7D84 )
      {
        v5 = *(_DWORD *)(v5 + 4);
        if ( !v5 )
          goto LABEL_5;
      }
      v6 = 1;
    }
    else
    {
LABEL_5:
      v6 = 0;
    }
    v3 = v6 != 0 ? a3 : 0;
  }
  if ( a2 >= 6 )
    v21 = 1.0;
  else
    v21 = 0.0;
  v8 = v21;
  v20 = v21;
  if ( v3 || (v3 = *((_DWORD **)this + 4)) != 0 )
  {
    v9 = v3[2];
    if ( v9 && (v10 = v9 + 0x14) != 0 )
      v11 = *(_DWORD *)(v10 + 0x1C);
    else
      v11 = 0;
    if ( (v11 & 0x3F) == 8 )
    {
      v12 = (v11 >> 8) & 0x1F;
      v22 = *(float *)(8 * v12 + 0xB2E660);
      if ( v22 <= 1.0 )
      {
        v20 = *(float *)(8 * v12 + 0xB2E664) * v8;
        v21 = v22 * v8;
      }
      else
      {
        v21 = 1.0;
        v20 = 1.0;
      }
      *(this + 6) &= ~0x200u;
      if ( a2 < 6 )
      {
        v13 = v3[2];
        if ( v13 )
        {
          sub_89F570(v3);
          sub_8A6410(v13);
          sub_89F570(v3);
        }
        v14 = sub_452A60((Atmosphere *)this);
        if ( v14 )
        {
          v15 = sub_700010(v14, (int)dword_BA7F3C);
          if ( v15 )
            *((_WORD *)v15 + 4) &= ~8u;
        }
      }
    }
    else if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, signed int))(*v3 + 0x9C))(v3, a2) && a2 < 6 )
    {
      v21 = 1.0;
      v20 = 1.0;
    }
  }
  if ( *((_DWORD *)this + 7) != a2 && (*(_BYTE *)(this + 6) & 0x40) == 0 )
    sub_88EB20((int)this);
  *((float *)this + 6) = v20;
  *((float *)this + 5) = v21;
  sub_88F040(this);
  v16 = *((_DWORD **)this + 4);
  if ( v16 )
  {
    v17 = v16[2];
    if ( v17 && (v18 = v17 + 0x14) != 0 )
      v19 = *(_DWORD *)(v18 + 0x1C);
    else
      LOBYTE(v19) = 0;
    if ( (v19 & 0x3F) == 8 )
    {
      if ( *((_DWORD *)this + 8) )
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v16 + 0x5C))(v16, *((_DWORD *)this + 8));
    }
  }
}
