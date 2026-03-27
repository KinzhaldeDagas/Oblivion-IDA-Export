void __thiscall AbsorbEffect::~AbsorbEffect(ActiveEffect *this)
{
  int v2; // eax
  int v3; // edi
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int v5; // eax
  int v6; // ecx
  void (__thiscall ***v7)(_DWORD, int); // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // [esp+4h] [ebp-2Ch]
  _DWORD v14[2]; // [esp+1Ch] [ebp-14h] BYREF
  int v15; // [esp+2Ch] [ebp-4h]

  v14[1] = this;
  this->vtbl = (ActiveEffectVtbl *)&AbsorbEffect::`vftable';
  v2 = *((_DWORD *)this + 0x12);
  v13 = *((_DWORD *)this + 0xF);
  v15 = 4;
  sub_7F4420(v13, v2);
  v3 = *((_DWORD *)this + 0x12);
  v4 = InterlockedDecrement;
  if ( v3 )
  {
    if ( !v4((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *((_DWORD *)this + 0x12) = 0;
  }
  v5 = *((_DWORD *)this + 0xF);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 0x1C);
    if ( v6 )
    {
      (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v6 + 0x88))(v6, v14, *((_DWORD *)this + 0xF));
      if ( v14[0] )
      {
        v7 = (void (__thiscall ***)(_DWORD, int))v14[0];
        if ( !v4((volatile LONG *)(v14[0] + 4)) )
          (**v7)(v7, 1);
      }
    }
    v8 = *((_DWORD *)this + 0xF);
    if ( v8 )
    {
      if ( !v4((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      *((_DWORD *)this + 0xF) = 0;
    }
  }
  v9 = *((_DWORD *)this + 0x12);
  LOBYTE(v15) = 3;
  if ( v9 )
  {
    if ( !v4((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  }
  v10 = *((_DWORD *)this + 0x11);
  LOBYTE(v15) = 2;
  if ( v10 )
  {
    if ( !v4((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  v11 = *((_DWORD *)this + 0x10);
  LOBYTE(v15) = 1;
  if ( v11 )
  {
    if ( !v4((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
  }
  v12 = *((_DWORD *)this + 0xF);
  LOBYTE(v15) = 0;
  if ( v12 )
  {
    if ( !v4((volatile LONG *)(v12 + 4)) )
      (**(void (__thiscall ***)(int, int))v12)(v12, 1);
  }
  v15 = 0xFFFFFFFF;
  ActiveEffect::~ActiveEffect(this);
}
