void __thiscall BSTempEffectGeometryDecal::~BSTempEffectGeometryDecal(BSTempEffectGeometryDecal *this)
{
  int v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // edi
  int v4; // edi
  _DWORD *v5; // ecx
  int v6; // ebp
  int v7; // edi
  _DWORD *v8; // ebp
  unsigned int v9; // edi
  int v10; // edi
  LONG (__stdcall *v11)(volatile LONG *); // ebp
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  _DWORD v16[2]; // [esp+20h] [ebp-14h] BYREF
  int v17; // [esp+30h] [ebp-4h]

  v16[1] = this;
  *(_DWORD *)this = &BSTempEffectGeometryDecal::`vftable';
  v2 = *((_DWORD *)this + 7);
  v17 = 3;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 0x1C) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD *, int))(**(_DWORD **)(v2 + 0x1C) + 0x88))(*(_DWORD *)(v2 + 0x1C), v16, v2);
      if ( v16[0] )
      {
        v3 = (void (__thiscall ***)(_DWORD, int))v16[0];
        if ( !InterlockedDecrement((volatile LONG *)(v16[0] + 4)) )
          (**v3)(v3, 1);
      }
    }
    v4 = *((_DWORD *)this + 7);
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      *((_DWORD *)this + 7) = 0;
    }
  }
  v5 = *(_DWORD **)(*((_DWORD *)this + 6) + 0x48);
  if ( v5 )
    sub_7EE740(v5, *((_DWORD **)this + 6));
  v6 = *((_DWORD *)this + 6);
  v7 = *(_DWORD *)(v6 + 0x48);
  v8 = (_DWORD *)(v6 + 0x48);
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *v8 = 0;
  }
  if ( *((_DWORD *)this + 9) )
    FormHeapFree(*((_DWORD *)this + 9));
  v9 = *((_DWORD *)this + 6);
  if ( v9 )
  {
    sub_56C0F0(*((int **)this + 6));
    FormHeapFree(v9);
  }
  v10 = *((_DWORD *)this + 0xB);
  v11 = InterlockedDecrement;
  if ( v10 )
  {
    if ( !v11((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    *((_DWORD *)this + 0xB) = 0;
  }
  v12 = *((_DWORD *)this + 0xC);
  if ( v12 )
  {
    if ( !v11((volatile LONG *)(v12 + 4)) )
      (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    *((_DWORD *)this + 0xC) = 0;
  }
  v13 = *((_DWORD *)this + 0xC);
  LOBYTE(v17) = 2;
  if ( v13 )
  {
    if ( !v11((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(int, int))v13)(v13, 1);
  }
  v14 = *((_DWORD *)this + 0xB);
  LOBYTE(v17) = 1;
  if ( v14 )
  {
    if ( !v11((volatile LONG *)(v14 + 4)) )
      (**(void (__thiscall ***)(int, int))v14)(v14, 1);
  }
  v15 = *((_DWORD *)this + 7);
  LOBYTE(v17) = 0;
  if ( v15 )
  {
    if ( !v11((volatile LONG *)(v15 + 4)) )
      (**(void (__thiscall ***)(int, int))v15)(v15, 1);
  }
  v17 = 0xFFFFFFFF;
  BSTempEffect_destr(this);
}
