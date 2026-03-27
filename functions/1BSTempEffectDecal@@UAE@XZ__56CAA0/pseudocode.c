void __thiscall BSTempEffectDecal::~BSTempEffectDecal(BSTempEffectDecal *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ecx
  int v4; // esi
  int v5; // ebx
  _DWORD *v6; // esi
  unsigned int v7; // esi

  *(_DWORD *)this = &BSTempEffectDecal::`vftable';
  v2 = *((_DWORD **)this + 6);
  v3 = (_DWORD *)v2[0x12];
  if ( v3 )
    sub_7EE740(v3, v2);
  v4 = *((_DWORD *)this + 6);
  v5 = *(_DWORD *)(v4 + 0x48);
  v6 = (_DWORD *)(v4 + 0x48);
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *v6 = 0;
  }
  v7 = *((_DWORD *)this + 6);
  if ( v7 )
  {
    sub_56C0F0(*((int **)this + 6));
    FormHeapFree(v7);
  }
  BSTempEffect_destr(this);
}
