void __thiscall BSTempEffectParticle::~BSTempEffectParticle(BSTempEffectParticle *this)
{
  int v2; // eax
  int v3; // eax
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  void (__thiscall ***v5)(_DWORD, int); // esi
  int v6; // esi
  int v7; // esi
  _DWORD v8[2]; // [esp+10h] [ebp-14h] BYREF
  int v9; // [esp+20h] [ebp-4h]

  v8[1] = this;
  *(_DWORD *)this = &BSTempEffectParticle::`vftable';
  v2 = *((_DWORD *)this + 7);
  v9 = 1;
  if ( v2 )
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, v2, 0, 1);
  v3 = *((_DWORD *)this + 6);
  v4 = InterlockedDecrement;
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 0x1C) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)(v3 + 0x1C) + 0x88))(
        *(_DWORD *)(v3 + 0x1C),
        v8,
        *((_DWORD *)this + 6));
      if ( v8[0] )
      {
        v5 = (void (__thiscall ***)(_DWORD, int))v8[0];
        if ( !v4((volatile LONG *)(v8[0] + 4)) )
          (**v5)(v5, 1);
      }
    }
  }
  v6 = *((_DWORD *)this + 6);
  if ( v6 )
  {
    if ( !v4((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *((_DWORD *)this + 6) = 0;
  }
  v7 = *((_DWORD *)this + 6);
  LOBYTE(v9) = 0;
  if ( v7 )
  {
    if ( !v4((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  v9 = 0xFFFFFFFF;
  BSTempEffect_destr(this);
}
