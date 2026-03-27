void __thiscall sub_6CD3D0(float *this, int a2, _DWORD **a3)
{
  int v4; // ebx
  int v5; // esi
  unsigned int v6; // ecx
  int *v7; // eax
  _DWORD *v8; // edi
  unsigned __int8 v9; // al
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // esi
  int v15; // eax
  int v16; // ebx
  unsigned __int8 i; // [esp+17h] [ebp-11h]
  int v18; // [esp+18h] [ebp-10h]

  v4 = a2;
  sub_733850(this, a2, a3);
  *(_BYTE *)(a2 + 0xC) = *((_BYTE *)this + 0xC);
  *(_BYTE *)(a2 + 0xD) = *((_BYTE *)this + 0xD);
  v5 = *((unsigned __int8 *)this + 0xD);
  v6 = (0x18 * (unsigned __int64)*((unsigned __int8 *)this + 0xD)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x18 * v5;
  v7 = (int *)FormHeapAlloc(__CFADD__(v6, 4) ? 0xFFFFFFFF : v6 + 4);
  v8 = 0;
  if ( v7 )
  {
    v8 = v7 + 1;
    *v7 = v5;
    ArrayConstructor(v7 + 1, 0x18u, v5, (int)sub_6CCDE0, (void (__thiscall *)(void *))sub_7016A0);
  }
  *(_DWORD *)(a2 + 0x14) = v8;
  *(float *)(a2 + 0x1C) = *(this + 7);
  if ( (*(_BYTE *)(this + 3) & 1) == 0 )
  {
    v9 = 0;
    for ( i = 0; v9 < *((_BYTE *)this + 0xD); *(float *)(v14 + 0x14) = *(float *)(v13 + 0x14) )
    {
      v10 = *((_DWORD *)this + 5);
      v11 = 0x18 * v9;
      v12 = *(_DWORD *)(v10 + v11);
      v13 = v11 + v10;
      v14 = v11 + *(_DWORD *)(v4 + 0x14);
      if ( v12 )
      {
        v15 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v12 + 0x18))(v12, a3);
        v16 = *(_DWORD *)v14;
        v18 = v15;
        if ( *(_DWORD *)v14 != v15 )
        {
          if ( v16 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
              (**(void (__thiscall ***)(int, int))v16)(v16, 1);
            v15 = v18;
          }
          *(_DWORD *)v14 = v15;
          if ( v15 )
            InterlockedIncrement((volatile LONG *)(v15 + 4));
        }
        v4 = a2;
      }
      *(float *)(v14 + 4) = *(float *)(v13 + 4);
      v9 = i + 1;
      i = v9;
      *(float *)(v14 + 8) = *(float *)(v13 + 8);
      *(_BYTE *)(v14 + 0xC) = *(_BYTE *)(v13 + 0xC);
      *(float *)(v14 + 0x10) = *(float *)(v13 + 0x10);
    }
    *(_BYTE *)(v4 + 0xE) = *((_BYTE *)this + 0xE);
    *(_BYTE *)(v4 + 0xF) = *((_BYTE *)this + 0xF);
    *(float *)(v4 + 0x20) = *(this + 8);
    *(_BYTE *)(v4 + 0x10) = *((_BYTE *)this + 0x10);
    *(_BYTE *)(v4 + 0x11) = *((_BYTE *)this + 0x11);
  }
}
