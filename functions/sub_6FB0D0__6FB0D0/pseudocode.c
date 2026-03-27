void __thiscall sub_6FB0D0(unsigned __int16 *this, unsigned int a2)
{
  unsigned int v3; // eax
  unsigned __int16 v4; // cx
  unsigned __int16 v5; // bp
  int v6; // edi
  int v7; // ebp
  void *v8; // eax
  void *v9; // edi
  int i; // edi
  int v11; // ecx
  _DWORD *v12; // eax
  int j; // ecx
  _DWORD *v14; // eax
  int v15; // [esp+18h] [ebp-2Ch]
  int v16; // [esp+1Ch] [ebp-28h]
  int v17; // [esp+20h] [ebp-24h]
  int v18; // [esp+24h] [ebp-20h]
  _BYTE v19[12]; // [esp+28h] [ebp-1Ch] BYREF
  __int16 v20; // [esp+34h] [ebp-10h]
  char v21; // [esp+36h] [ebp-Eh]
  int v22; // [esp+40h] [ebp-4h]
  unsigned int v23; // [esp+48h] [ebp+4h]

  v3 = a2;
  if ( a2 != *(this + 4) )
  {
    v4 = *(this + 5);
    if ( a2 < v4 )
    {
      v5 = a2;
      if ( (unsigned __int16)a2 < v4 )
      {
        do
        {
          v6 = 0x10 * v5 + *((_DWORD *)this + 1);
          v20 = 0;
          v21 = 0;
          if ( sub_6FAE60((float *)v6, (int)v19) )
          {
            *(_DWORD *)v6 = v15;
            *(_DWORD *)(v6 + 4) = v16;
            LOWORD(v18) = 0;
            BYTE2(v18) = 0;
            *(_DWORD *)(v6 + 8) = v17;
            *(_DWORD *)(v6 + 0xC) = v18;
            --*(this + 6);
          }
          ++v5;
        }
        while ( v5 < *(this + 5) );
        v3 = a2;
      }
      *(this + 5) = v3;
    }
    v23 = *((_DWORD *)this + 1);
    *(this + 4) = v3;
    if ( v3 )
    {
      v7 = (unsigned __int16)v3;
      v8 = (void *)FormHeapAlloc((unsigned __int64)(unsigned __int16)v3 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * (unsigned __int16)v3);
      v9 = v8;
      v22 = 0;
      if ( v8 )
        sub_401080(v8, 0x10, v7, (void *(__thiscall *)(void *))sub_6FB080);
      else
        v9 = 0;
      *((_DWORD *)this + 1) = v9;
      for ( i = 0; (unsigned __int16)i < *(this + 5); v12[3] = *(_DWORD *)(v11 + v23 + 0xC) )
      {
        v11 = 0x10 * (unsigned __int16)i;
        v12 = (_DWORD *)(v11 + *((_DWORD *)this + 1));
        *v12 = *(_DWORD *)(v11 + v23);
        v12[1] = *(_DWORD *)(v11 + v23 + 4);
        v12[2] = *(_DWORD *)(v11 + v23 + 8);
        ++i;
      }
      for ( j = *(this + 5); (unsigned __int16)j < *(this + 4); v14[3] = v18 )
      {
        v14 = (_DWORD *)(*((_DWORD *)this + 1) + 0x10 * (unsigned __int16)j);
        LOWORD(v18) = 0;
        *v14 = v15;
        v14[1] = v16;
        BYTE2(v18) = 0;
        v14[2] = v17;
        ++j;
      }
    }
    else
    {
      *((_DWORD *)this + 1) = 0;
    }
    FormHeapFree(v23);
  }
}
