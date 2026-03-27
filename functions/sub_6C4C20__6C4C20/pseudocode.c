void __thiscall sub_6C4C20(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // edi
  unsigned int i; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // esi
  int v7; // ebp
  _DWORD *v8; // edi
  int v9; // ebx
  LONG v10; // edi
  unsigned int v11; // [esp+14h] [ebp-18h]
  int **v12; // [esp+18h] [ebp-14h] BYREF
  LONG v13; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v14; // [esp+28h] [ebp-4h]

  v3 = a2;
  sub_715E40(this, (int)a2);
  for ( i = 0; i < *((unsigned __int16 *)this + 0x23); ++i )
  {
    v5 = *(_DWORD **)(*(this + 0x10) + 4 * i);
    if ( v5 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v5 + 0x38))(v5, a2);
      sub_6C9590(v5, (_DWORD *)*(this + 0xC));
    }
  }
  NiTMap_GetAt((_DWORD *)*a2, (int)this, &v12);
  v11 = 0;
  if ( *(this + 0x1E) )
  {
    v12 += 0x1C;
    do
    {
      v6 = (_DWORD *)*v3;
      v7 = *(_DWORD *)(*(this + 0x1C) + 4 * v11);
      v8 = *(_DWORD **)(v6[2] + 4 * (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*v3 + 4))(*v3, v7));
      if ( v8 )
      {
        while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 8))(v6, v7, v8[1]) )
        {
          v8 = (_DWORD *)*v8;
          if ( !v8 )
            goto LABEL_10;
        }
        v10 = v8[2];
        v13 = v10;
        if ( v10 )
          InterlockedIncrement((volatile LONG *)(v10 + 4));
        v14 = 0;
        sub_6C4790(v12, &v13);
        v14 = 0xFFFFFFFF;
        if ( v10 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
            (**(void (__thiscall ***)(LONG, int))v10)(v10, 1);
        }
      }
      else
      {
LABEL_10:
        sub_6C4790(v12, (LONG *)(4 * v11 + *(this + 0x1C)));
      }
      v3 = a2;
      ++v11;
    }
    while ( v11 < *(this + 0x1E) );
  }
  v9 = *(this + 0x1F);
  if ( v9 )
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v9 + 0x38))(v9, v3);
}
