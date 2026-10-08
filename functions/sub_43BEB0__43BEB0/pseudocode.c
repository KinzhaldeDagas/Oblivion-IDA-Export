void __thiscall sub_43BEB0(_DWORD *this)
{
  _DWORD *v2; // ecx
  unsigned int *v3; // esi
  _DWORD *v4; // ecx
  unsigned int v5; // esi
  TESAnimGroup *v6; // ecx
  int v7; // [esp+10h] [ebp-24h] BYREF
  unsigned int v8; // [esp+14h] [ebp-20h] BYREF
  void **v9; // [esp+18h] [ebp-1Ch] BYREF
  int v10; // [esp+1Ch] [ebp-18h]
  unsigned int v11; // [esp+20h] [ebp-14h]
  char v12; // [esp+24h] [ebp-10h]
  int v13; // [esp+30h] [ebp-4h]

  if ( *this ) /*0x43beda*/
  {
    v10 = 0; /*0x43bee2*/
    v11 = 0; /*0x43bee6*/
    v12 = 0; /*0x43beea*/
    v9 = &LockFreeStringMap<Model *>::LockFreeStringMapIterator::`vftable'; /*0x43beee*/
    v13 = 0; /*0x43bef6*/
    do /*0x43bf58*/
    {
      v2 = (_DWORD *)*this; /*0x43bf0c*/
      v7 = 0; /*0x43bf13*/
      v8 = 0; /*0x43bf17*/
      if ( sub_43AB80(v2, (int)&v9, &v8, &v7, 1) ) /*0x43bf1b*/
      {
        v3 = (unsigned int *)v7; /*0x43bf24*/
        if ( v7 ) /*0x43bf2a*/
        {
          if ( !*(_WORD *)(v7 + 4) ) /*0x43bf2c*/
          {
            (*(void (__thiscall **)(_DWORD, unsigned int))(*(_DWORD *)*this + 0x10))(*this, v8); /*0x43bf41*/
            sub_4349B0(v3); /*0x43bf45*/
            FormHeapFree((unsigned int)v3); /*0x43bf4b*/
          }
        }
      }
    }
    while ( (v12 & 2) == 0 ); /*0x43bf58*/
    v13 = 0xFFFFFFFF; /*0x43bf5f*/
    FormHeapFree(v11); /*0x43bf67*/
  }
  if ( *(this + 1) ) /*0x43bf6f*/
  {
    v10 = 0; /*0x43bf78*/
    v11 = 0; /*0x43bf7c*/
    v12 = 0; /*0x43bf80*/
    v9 = &LockFreeStringMap<KFModel *>::LockFreeStringMapIterator::`vftable'; /*0x43bf84*/
    v13 = 1; /*0x43bf8c*/
    do /*0x43c008*/
    {
      v4 = (_DWORD *)*(this + 1); /*0x43bfa5*/
      v8 = 0; /*0x43bfa8*/
      v7 = 0; /*0x43bfac*/
      if ( sub_43AB80(v4, (int)&v9, &v7, &v8, 1) ) /*0x43bfb0*/
      {
        v5 = v8; /*0x43bfb9*/
        if ( v8 ) /*0x43bfbf*/
        {
          if ( !*(_DWORD *)(v8 + 0xC) ) /*0x43bfc1*/
          {
            v6 = *(TESAnimGroup **)(v8 + 8); /*0x43bfc6*/
            if ( !v6 /*0x43bfe2*/
              || TESAnimGroup_GetAnimationGroup(v6) < 0x16
              || TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(v5 + 8)) >= 0x1B )
            {
              (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 0x10))(*(this + 1), v7); /*0x43bff1*/
              sub_436CB0((unsigned int *)v5); /*0x43bff5*/
              FormHeapFree(v5); /*0x43bffb*/
            }
          }
        }
      }
    }
    while ( (v12 & 2) == 0 ); /*0x43c008*/
    FormHeapFree(v11); /*0x43c00f*/
  }
}
