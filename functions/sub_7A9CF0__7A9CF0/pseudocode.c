void __thiscall sub_7A9CF0(_WORD *this)
{
  int v2; // esi
  int v3; // eax
  bool v4; // zf
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebp
  _DWORD *v8; // ebp
  int v9; // esi
  int v10; // eax
  unsigned int v11; // [esp+14h] [ebp-18h]
  _BYTE v12[4]; // [esp+28h] [ebp-4h] BYREF

  v2 = 0;
  if ( *(this + 0x10F3) )
  {
    do
    {
      v3 = *((_DWORD *)this + 0x87A);
      v4 = *(_DWORD *)(v3 + 4 * v2) == 0;
      v5 = (_DWORD *)(v3 + 4 * v2);
      if ( !v4 )
      {
        (*(void (__stdcall **)(_DWORD, _BYTE *, int, int))(*(_DWORD *)*v5 + 0x1C))(*v5, v12, 4, 1);
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 0x87A) + 4 * v2) + 8))(*(_DWORD *)(*((_DWORD *)this + 0x87A) + 4 * v2));
        *(_DWORD *)(*((_DWORD *)this + 0x87A) + 4 * v2) = 0;
      }
      ++v2;
    }
    while ( v2 < (unsigned __int16)*(this + 0x10F3) );
  }
  v6 = this + 0x64;
  v7 = 3;
  do
  {
    if ( *v6 )
    {
      (*(void (__stdcall **)(_DWORD, _BYTE *, int, int))(*(_DWORD *)*v6 + 0x1C))(*v6, v12, 4, 1);
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v6 + 8))(*v6);
      *v6 = 0;
      *((_BYTE *)v6 + 4) = 0;
    }
    v6 += 5;
    --v7;
  }
  while ( v7 );
  v4 = *((_DWORD *)this + 0x88E) == 0;
  v8 = *((_DWORD **)this + 0x88C);
  *((_BYTE *)this + 0xC0) = 0;
  if ( !v4 )
  {
    do
    {
      v9 = v8[2];
      v8 = (_DWORD *)*v8;
      if ( v9 )
      {
        v10 = *(_DWORD *)(v9 + 0x14);
        if ( v10 )
        {
          (*(void (__stdcall **)(int, _BYTE *, int, int))(*(_DWORD *)v10 + 0x1C))(v10, v12, 4, 1);
          (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v9 + 0x14) + 8))(*(_DWORD *)(v9 + 0x14));
          *(_DWORD *)(v9 + 0x14) = 0;
        }
      }
    }
    while ( *((_DWORD *)this + 0x88E) );
  }
  v11 = *((_DWORD *)this + 0x87A);
  *(this + 0x10F2) = 0;
  *(this + 0x10F3) = 0;
  FormHeapFree(v11);
  *((_DWORD *)this + 0x87A) = 0;
}
