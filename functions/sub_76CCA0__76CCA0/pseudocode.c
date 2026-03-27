void __thiscall sub_76CCA0(unsigned __int16 *this, unsigned int a2)
{
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // bx
  int v6; // esi
  NiD3DPass *v7; // ecx
  bool v8; // zf
  int v9; // ebx
  int v10; // esi
  unsigned int v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // ebp
  unsigned __int16 v14; // bp
  int v15; // ebx
  int v16; // esi
  NiD3DPass *v17; // ecx
  _DWORD *v18; // ebx
  int v19; // esi
  unsigned __int16 v20; // si
  NiD3DPass **v21; // ebx
  NiD3DPass *v22; // ecx
  int v23; // edi
  int v24; // esi
  int i; // edi
  NiD3DPass *v26; // ecx
  int v27; // [esp-10h] [ebp-18h]
  int v28; // [esp+Ch] [ebp+4h]

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
          v6 = *((_DWORD *)this + 1) + 4 * v5;
          if ( *(_DWORD *)v6 )
          {
            v7 = *(NiD3DPass **)v6;
            v8 = (*(_DWORD *)(*(_DWORD *)v6 + 0x60))-- == 1;
            if ( v8 )
              sub_7604D0(v7);
            *(_DWORD *)v6 = 0;
            --*(this + 6);
          }
          ++v5;
        }
        while ( v5 < *(this + 5) );
      }
      *(this + 5) = a2;
    }
    v9 = *((_DWORD *)this + 1);
    v28 = v9;
    *(this + 4) = a2;
    if ( a2 )
    {
      v10 = (unsigned __int16)a2;
      v11 = (unsigned __int64)(unsigned __int16)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)a2;
      v12 = (_DWORD *)FormHeapAlloc(__CFADD__(v11, 4) ? 0xFFFFFFFF : v11 + 4);
      if ( v12 )
      {
        v27 = (unsigned __int16)a2;
        v13 = v12 + 1;
        *v12 = v10;
        sub_401080(v12 + 1, 4, v27, (void *(__thiscall *)(void *))Concurrency::details::_NonReentrantLock::_Release);
      }
      else
      {
        v13 = 0;
      }
      *((_DWORD *)this + 1) = v13;
      v14 = 0;
      if ( *(this + 5) )
      {
        do
        {
          v15 = *((_DWORD *)this + 1);
          v16 = 4 * v14;
          v17 = *(NiD3DPass **)(v15 + v16);
          v18 = (_DWORD *)(v16 + v15);
          if ( v17 != *(NiD3DPass **)(v16 + v28) )
          {
            if ( v17 )
            {
              v8 = v17->RefCount-- == 1;
              if ( v8 )
                sub_7604D0(v17);
            }
            v19 = *(_DWORD *)(v16 + v28);
            *v18 = v19;
            if ( v19 )
              ++*(_DWORD *)(v19 + 0x60);
          }
          ++v14;
        }
        while ( v14 < *(this + 5) );
        v9 = v28;
      }
      v20 = *(this + 5);
      if ( v20 < *(this + 4) )
      {
        do
        {
          v21 = (NiD3DPass **)(*((_DWORD *)this + 1) + 4 * v20);
          v22 = *v21;
          if ( *v21 )
          {
            v8 = v22->RefCount-- == 1;
            if ( v8 )
              sub_7604D0(v22);
            *v21 = 0;
          }
          ++v20;
        }
        while ( v20 < *(this + 4) );
        v9 = v28;
      }
    }
    else
    {
      *((_DWORD *)this + 1) = 0;
    }
    if ( v9 )
    {
      v23 = *(_DWORD *)(v9 - 4);
      v24 = v9 + 4 * v23;
      for ( i = v23 - 1; i >= 0; --i )
      {
        v26 = *(NiD3DPass **)(v24 - 4);
        v24 -= 4;
        if ( v26 )
        {
          v8 = v26->RefCount-- == 1;
          if ( v8 )
            sub_7604D0(v26);
        }
      }
      FormHeapFree(v9 - 4);
    }
  }
}
