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

  if ( *this )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v9 = &LockFreeStringMap<Model *>::LockFreeStringMapIterator::`vftable';
    v13 = 0;
    do
    {
      v2 = (_DWORD *)*this;
      v7 = 0;
      v8 = 0;
      if ( sub_43AB80(v2, (int)&v9, &v8, &v7, 1) )
      {
        v3 = (unsigned int *)v7;
        if ( v7 )
        {
          if ( !*(_WORD *)(v7 + 4) )
          {
            (*(void (__thiscall **)(_DWORD, unsigned int))(*(_DWORD *)*this + 0x10))(*this, v8);
            sub_4349B0(v3);
            FormHeapFree((unsigned int)v3);
          }
        }
      }
    }
    while ( (v12 & 2) == 0 );
    v13 = 0xFFFFFFFF;
    FormHeapFree(v11);
  }
  if ( *(this + 1) )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v9 = &LockFreeStringMap<KFModel *>::LockFreeStringMapIterator::`vftable';
    v13 = 1;
    do
    {
      v4 = (_DWORD *)*(this + 1);
      v8 = 0;
      v7 = 0;
      if ( sub_43AB80(v4, (int)&v9, &v7, &v8, 1) )
      {
        v5 = v8;
        if ( v8 )
        {
          if ( !*(_DWORD *)(v8 + 0xC) )
          {
            v6 = *(TESAnimGroup **)(v8 + 8);
            if ( !v6
              || TESAnimGroup_GetAnimationGroup(v6) < 0x16
              || TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(v5 + 8)) >= 0x1B )
            {
              (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 0x10))(*(this + 1), v7);
              sub_436CB0((unsigned int *)v5);
              FormHeapFree(v5);
            }
          }
        }
      }
    }
    while ( (v12 & 2) == 0 );
    FormHeapFree(v11);
  }
}
