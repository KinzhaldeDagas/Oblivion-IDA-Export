void __thiscall sub_6CD3D0(float *this, int a2, _DWORD **a3)
{
  int v4; // ebx
  int v5; // esi
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // edi
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

  v4 = a2; /*0x6cd3fd*/
  sub_733850(this, a2, a3); /*0x6cd403*/
  *(_BYTE *)(a2 + 0xC) = *((_BYTE *)this + 0xC); /*0x6cd40b*/
  *(_BYTE *)(a2 + 0xD) = *((_BYTE *)this + 0xD); /*0x6cd411*/
  v5 = *((unsigned __int8 *)this + 0xD); /*0x6cd414*/
  v6 = (0x18 * (unsigned __int64)*((unsigned __int8 *)this + 0xD)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x18 * v5;
  v7 = FormHeapAlloc(__CFADD__(v6, 4) ? 0xFFFFFFFF : v6 + 4);
  v8 = 0; /*0x6cd443*/
  if ( v7 ) /*0x6cd44b*/
  {
    v8 = v7 + 4; /*0x6cd458*/
    *(_DWORD *)v7 = v5; /*0x6cd45e*/
    ArrayConstructor( /*0x6cd460*/
      (char *)(v7 + 4),
      0x18u,
      v5,
      (void (__thiscall *)(char *))sub_6CCDE0,
      (void (__thiscall *)(void *))NiPointerSlot_Release);
  }
  *(_DWORD *)(a2 + 0x14) = v8; /*0x6cd465*/
  *(float *)(a2 + 0x1C) = *(this + 7); /*0x6cd46b*/
  if ( (*(_BYTE *)(this + 3) & 1) == 0 ) /*0x6cd47a*/
  {
    v9 = 0; /*0x6cd480*/
    for ( i = 0; v9 < *((_BYTE *)this + 0xD); *(float *)(v14 + 0x14) = *(float *)(v13 + 0x14) ) /*0x6cd482*/
    {
      v10 = *((_DWORD *)this + 5); /*0x6cd490*/
      v11 = 0x18 * v9; /*0x6cd4a0*/
      v12 = *(_DWORD *)(v10 + v11); /*0x6cd4a2*/
      v13 = v11 + v10; /*0x6cd4a5*/
      v14 = v11 + *(_DWORD *)(v4 + 0x14); /*0x6cd4a7*/
      if ( v12 ) /*0x6cd4ab*/
      {
        v15 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v12 + 0x18))(v12, a3); /*0x6cd4b7*/
        v16 = *(_DWORD *)v14; /*0x6cd4b9*/
        v18 = v15; /*0x6cd4bd*/
        if ( *(_DWORD *)v14 != v15 ) /*0x6cd4c1*/
        {
          if ( v16 ) /*0x6cd4c5*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x6cd4cb*/
              (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x6cd4e1*/
            v15 = v18; /*0x6cd4e3*/
          }
          *(_DWORD *)v14 = v15; /*0x6cd4e9*/
          if ( v15 ) /*0x6cd4eb*/
            InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x6cd4f1*/
        }
        v4 = a2; /*0x6cd4f7*/
      }
      *(float *)(v14 + 4) = *(float *)(v13 + 4); /*0x6cd502*/
      v9 = i + 1; /*0x6cd505*/
      i = v9; /*0x6cd50a*/
      *(float *)(v14 + 8) = *(float *)(v13 + 8); /*0x6cd50e*/
      *(_BYTE *)(v14 + 0xC) = *(_BYTE *)(v13 + 0xC); /*0x6cd514*/
      *(float *)(v14 + 0x10) = *(float *)(v13 + 0x10); /*0x6cd51a*/
    }
    *(_BYTE *)(v4 + 0xE) = *((_BYTE *)this + 0xE); /*0x6cd530*/
    *(_BYTE *)(v4 + 0xF) = *((_BYTE *)this + 0xF); /*0x6cd536*/
    *(float *)(v4 + 0x20) = *(this + 8); /*0x6cd53c*/
    *(_BYTE *)(v4 + 0x10) = *((_BYTE *)this + 0x10); /*0x6cd542*/
    *(_BYTE *)(v4 + 0x11) = *((_BYTE *)this + 0x11); /*0x6cd549*/
  }
}
