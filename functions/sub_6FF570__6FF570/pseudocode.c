char __thiscall sub_6FF570(const void **this, int a2)
{
  DWORD CurrentThreadId; // eax
  __int16 v5; // ax
  _DWORD *v6; // eax
  bool v7; // zf
  unsigned __int16 v8; // ax
  void *v9; // ebx
  int i; // eax
  int v11; // edx
  unsigned __int16 v12; // bx
  int v13; // ebp
  NiAVObject *v14; // edi
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  size_t v18; // [esp-10h] [ebp-18h]

  if ( !a2 ) /*0x6ff57a*/
    return 0; /*0x6ff57d*/
  InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6ff588*/
  EnterCriticalSection(&unk_B3F600); /*0x6ff593*/
  CurrentThreadId = GetCurrentThreadId(); /*0x6ff599*/
  ++unk_B3F67C; /*0x6ff5a4*/
  unk_B3F678 = CurrentThreadId; /*0x6ff5aa*/
  v5 = *((_WORD *)this + 0xB); /*0x6ff5af*/
  if ( v5 )
  {
    if ( *((_WORD *)this + 0xA) == v5 )
    {
      v8 = 2 * v5 + 1; /*0x6ff60c*/
      *((_WORD *)this + 0xB) = v8; /*0x6ff610*/
      v9 = (void *)FormHeapAlloc((unsigned __int64)v8 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v8);
      LODWORD(v18) = 4 * *((unsigned __int16 *)this + 0xA); /*0x6ff63a*/
      memcpy(v9, *(this + 4), v18); /*0x6ff63d*/
      FormHeapFree((unsigned int)*(this + 4)); /*0x6ff646*/
      *(this + 4) = v9; /*0x6ff64e*/
    }
    *((_DWORD *)*(this + 4) + (unsigned __int16)(*((_WORD *)this + 0xA))++) = a2; /*0x6ff658*/
    for ( i = *((unsigned __int16 *)this + 0xA); /*0x6ff66a*/
          (unsigned __int16)i < *((_WORD *)this + 0xB);
          *((_DWORD *)*(this + 4) + v11) = 0 )
    {
      v11 = (unsigned __int16)i++; /*0x6ff673*/
    }
    v12 = *((_WORD *)this + 0xA) - 1; /*0x6ff68c*/
    if ( *((_WORD *)this + 0xA) == 1 ) /*0x6ff692*/
    {
LABEL_15:
      v7 = unk_B3F67C-- == 1; /*0x6ff704*/
      if ( v7 ) /*0x6ff70a*/
        unk_B3F678 = 0; /*0x6ff70c*/
      LeaveCriticalSection(&unk_B3F600); /*0x6ff71b*/
      return 1; /*0x6ff724*/
    }
    else
    {
      while ( 1 ) /*0x6ff69c*/
      {
        v13 = 4 * v12; /*0x6ff69c*/
        v14 = Shared_GetPointerAtOffset08(*(Atmosphere **)((char *)*(this + 4) + v13)); /*0x6ff6ad*/
        v15 = strcmp( /*0x6ff6b8*/
                (const char *)Shared_GetPointerAtOffset08(*(Atmosphere **)((char *)*(this + 4) + v13 - 4)),
                (const char *)v14);
        if ( !v15 ) /*0x6ff6db*/
          break; /*0x6ff6db*/
        if ( v15 > 0 ) /*0x6ff6dd*/
        {
          v16 = (int)*(this + 4); /*0x6ff6df*/
          v17 = *(_DWORD *)(v16 + v13 - 4); /*0x6ff6e2*/
          *(_DWORD *)(v16 + 4 * v12 - 4) = *(_DWORD *)(v16 + 4 * v12); /*0x6ff6eb*/
          --v12; /*0x6ff6f1*/
          *(_DWORD *)((char *)*(this + 4) + v13) = v17; /*0x6ff6fa*/
          if ( v12 ) /*0x6ff6fd*/
            continue; /*0x6ff6fd*/
        }
        goto LABEL_15; /*0x6ff6fd*/
      }
      sub_6FF480(this, v12); /*0x6ff72d*/
      v7 = unk_B3F67C-- == 1; /*0x6ff732*/
      if ( v7 ) /*0x6ff739*/
        unk_B3F678 = 0; /*0x6ff73b*/
      LeaveCriticalSection(&unk_B3F600); /*0x6ff74a*/
      return 0; /*0x6ff753*/
    }
  }
  else
  {
    *((_WORD *)this + 0xB) = 1; /*0x6ff5c6*/
    *((_WORD *)this + 0xA) = 1; /*0x6ff5ca*/
    v6 = (_DWORD *)FormHeapAlloc(4u); /*0x6ff5d3*/
    *(this + 4) = v6; /*0x6ff5d8*/
    *v6 = a2; /*0x6ff5de*/
    v7 = unk_B3F67C-- == 1; /*0x6ff5e0*/
    if ( v7 ) /*0x6ff5e6*/
      unk_B3F678 = 0; /*0x6ff5e8*/
    LeaveCriticalSection(&unk_B3F600); /*0x6ff5f7*/
    return 1; /*0x6ff5ff*/
  }
}
