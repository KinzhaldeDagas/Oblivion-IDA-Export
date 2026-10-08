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
    v4 = *(this + 5); /*0x76ccb4*/
    if ( a2 < v4 ) /*0x76ccbf*/
    {
      v5 = a2; /*0x76ccc4*/
      if ( (unsigned __int16)a2 < v4 ) /*0x76ccc7*/
      {
        do /*0x76cd08*/
        {
          v6 = *((_DWORD *)this + 1) + 4 * v5; /*0x76ccda*/
          if ( *(_DWORD *)v6 ) /*0x76ccd6*/
          {
            v7 = *(NiD3DPass **)v6; /*0x76cce4*/
            v8 = (*(_DWORD *)(*(_DWORD *)v6 + 0x60))-- == 1; /*0x76ccea*/
            if ( v8 ) /*0x76ccee*/
              NiD3DPass_ReleaseToPool(v7); /*0x76ccf0*/
            *(_DWORD *)v6 = 0; /*0x76ccf5*/
            --*(this + 6); /*0x76ccfb*/
          }
          ++v5; /*0x76cd01*/
        }
        while ( v5 < *(this + 5) ); /*0x76cd08*/
      }
      *(this + 5) = a2; /*0x76cd0a*/
    }
    v9 = *((_DWORD *)this + 1); /*0x76cd10*/
    v28 = v9; /*0x76cd13*/
    *(this + 4) = a2; /*0x76cd17*/
    if ( a2 )
    {
      v10 = (unsigned __int16)a2; /*0x76cd21*/
      v11 = (unsigned __int64)(unsigned __int16)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)a2;
      v12 = (_DWORD *)FormHeapAlloc(__CFADD__(v11, 4) ? 0xFFFFFFFF : v11 + 4);
      if ( v12 ) /*0x76cd4d*/
      {
        v27 = (unsigned __int16)a2; /*0x76cd54*/
        v13 = v12 + 1; /*0x76cd55*/
        *v12 = v10; /*0x76cd5b*/
        sub_401080(v12 + 1, 4, v27, (void *(__thiscall *)(void *))Concurrency::details::_NonReentrantLock::_Release); /*0x76cd5d*/
      }
      else
      {
        v13 = 0; /*0x76cd64*/
      }
      *((_DWORD *)this + 1) = v13; /*0x76cd66*/
      v14 = 0; /*0x76cd69*/
      if ( *(this + 5) ) /*0x76cd6b*/
      {
        do /*0x76cdb0*/
        {
          v15 = *((_DWORD *)this + 1); /*0x76cd71*/
          v16 = 4 * v14; /*0x76cd7d*/
          v17 = *(NiD3DPass **)(v15 + v16); /*0x76cd7f*/
          v18 = (_DWORD *)(v16 + v15); /*0x76cd82*/
          if ( v17 != *(NiD3DPass **)(v16 + v28) ) /*0x76cd87*/
          {
            if ( v17 ) /*0x76cd8b*/
            {
              v8 = v17->RefCount-- == 1; /*0x76cd8d*/
              if ( v8 ) /*0x76cd91*/
                NiD3DPass_ReleaseToPool(v17); /*0x76cd93*/
            }
            v19 = *(_DWORD *)(v16 + v28); /*0x76cd9c*/
            *v18 = v19; /*0x76cda1*/
            if ( v19 ) /*0x76cda3*/
              ++*(_DWORD *)(v19 + 0x60); /*0x76cda5*/
          }
          ++v14; /*0x76cda9*/
        }
        while ( v14 < *(this + 5) ); /*0x76cdb0*/
        v9 = v28; /*0x76cdb2*/
      }
      v20 = *(this + 5); /*0x76cdb6*/
      if ( v20 < *(this + 4) ) /*0x76cdbe*/
      {
        do /*0x76cde7*/
        {
          v21 = (NiD3DPass **)(*((_DWORD *)this + 1) + 4 * v20); /*0x76cdc6*/
          v22 = *v21; /*0x76cdc9*/
          if ( *v21 ) /*0x76cdc9*/
          {
            v8 = v22->RefCount-- == 1; /*0x76cdcf*/
            if ( v8 ) /*0x76cdd3*/
              NiD3DPass_ReleaseToPool(v22); /*0x76cdd5*/
            *v21 = 0; /*0x76cdda*/
          }
          ++v20; /*0x76cde0*/
        }
        while ( v20 < *(this + 4) ); /*0x76cde7*/
        v9 = v28; /*0x76cde9*/
      }
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x76cdef*/
    }
    if ( v9 ) /*0x76cdf8*/
    {
      v23 = *(_DWORD *)(v9 - 4); /*0x76cdfa*/
      v24 = v9 + 4 * v23; /*0x76ce00*/
      for ( i = v23 - 1; i >= 0; --i ) /*0x76ce06*/
      {
        v26 = *(NiD3DPass **)(v24 - 4); /*0x76ce08*/
        v24 -= 4; /*0x76ce0b*/
        if ( v26 ) /*0x76ce10*/
        {
          v8 = v26->RefCount-- == 1; /*0x76ce12*/
          if ( v8 ) /*0x76ce16*/
            NiD3DPass_ReleaseToPool(v26); /*0x76ce18*/
        }
      }
      FormHeapFree(v9 - 4); /*0x76ce23*/
    }
  }
}
