void __thiscall sub_7748F0(int this)
{
  int v2; // ebp
  bool v3; // al
  NiDevImageConverter *v4; // eax
  int v5; // eax
  bool v6; // zf
  int v7; // edi
  unsigned int v8; // ebx

  if ( !*(_BYTE *)(this + 0x64) ) /*0x7748f3*/
  {
    v2 = *(_DWORD *)(*(_DWORD *)(this + 4) + 0x3C); /*0x774902*/
    if ( v2 ) /*0x774909*/
    {
      v3 = sub_760D70((Ni2DBuffer **)this, *(Ni2DBuffer **)(v2 + 0x4C)); /*0x77490f*/
      if ( *(_DWORD *)(v2 + 0x68) != *(_DWORD *)(this + 0x7C) || v3 ) /*0x774924*/
      {
        v4 = sub_71B280(); /*0x774927*/
        v5 = (*(int (__thiscall **)(NiDevImageConverter *, int, int, int, _DWORD))(*(_DWORD *)v4 + 0x10))( /*0x77493e*/
               v4,
               v2,
               this + 0xC,
               v2,
               *(unsigned __int8 *)(this + 0x65));
        v6 = *(_DWORD *)(this + 0x50) == 0; /*0x774940*/
        v7 = v5; /*0x774944*/
        *(_DWORD *)(this + 0x7C) = *(_DWORD *)(v2 + 0x68); /*0x774949*/
        if ( !v6 ) /*0x77494c*/
        {
          v8 = 0; /*0x77494e*/
          if ( *(_DWORD *)(v5 + 0x6C) ) /*0x774950*/
          {
            do /*0x774964*/
              sub_7744D0((_DWORD *)this, (_DWORD *)v7, v8++); /*0x774959*/
            while ( v8 < *(_DWORD *)(v7 + 0x6C) ); /*0x774964*/
          }
        }
        if ( v7 ) /*0x774968*/
        {
          InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x77496e*/
          if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x774975*/
            (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x774987*/
        }
      }
    }
  }
}
