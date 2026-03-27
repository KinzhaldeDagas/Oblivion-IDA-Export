void __thiscall MagicModelHitEffect::~MagicModelHitEffect(MagicModelHitEffect *this)
{
  int v2; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // ecx
  void (__thiscall ***v5)(_DWORD, int); // edi
  int v6; // edi
  int v7; // edi
  _BYTE *v8; // eax
  int v9; // edi
  int v10; // edi
  _DWORD v11[2]; // [esp+14h] [ebp-14h] BYREF
  int v12; // [esp+24h] [ebp-4h]

  v11[1] = this;
  *(_DWORD *)this = &MagicModelHitEffect::`vftable';
  v2 = *((_DWORD *)this + 0xC);
  v3 = InterlockedDecrement;
  v12 = 2;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 0x1C);
    if ( v4 )
    {
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v4 + 0x88))(v4, v11, v2);
      if ( v11[0] )
      {
        v5 = (void (__thiscall ***)(_DWORD, int))v11[0];
        if ( !v3((volatile LONG *)(v11[0] + 4)) )
          (**v5)(v5, 1);
      }
    }
    v6 = *((_DWORD *)this + 0xC);
    if ( v6 )
    {
      if ( !v3((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      *((_DWORD *)this + 0xC) = 0;
    }
  }
  v7 = *((_DWORD *)this + 0xD);
  if ( v7 )
  {
    if ( !v3((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *((_DWORD *)this + 0xD) = 0;
  }
  v8 = *((_BYTE **)this + 0xB);
  if ( v8 )
  {
    if ( *v8 )
    {
      QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, (int)v8, 0, 1);
      if ( *((_BYTE *)this + 0x28) )
        FormHeapFree(*((_DWORD *)this + 0xB));
    }
  }
  *((_DWORD *)this + 0xB) = 0;
  v9 = *((_DWORD *)this + 0xD);
  LOBYTE(v12) = 1;
  if ( v9 )
  {
    if ( !v3((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  }
  v10 = *((_DWORD *)this + 0xC);
  LOBYTE(v12) = 0;
  if ( v10 )
  {
    if ( !v3((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  v12 = 0xFFFFFFFF;
  MagicHitEffect_destr(this);
}
