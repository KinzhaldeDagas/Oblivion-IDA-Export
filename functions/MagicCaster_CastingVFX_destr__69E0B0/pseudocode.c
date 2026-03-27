void __thiscall MagicCaster_CastingVFX_destr(void *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  void (__thiscall ***v3)(_DWORD, int); // edi
  int v4; // edi
  _DWORD *ShadowSceneNode; // eax
  int v6; // edi
  int v7; // edi
  int v8; // esi
  _DWORD v9[2]; // [esp+14h] [ebp-14h] BYREF
  int v10; // [esp+24h] [ebp-4h]

  v9[1] = this;
  v10 = 1;
  nullsub_returnTrue_0arg();
  v2 = InterlockedDecrement;
  if ( *(_DWORD *)this )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)this + 0x88))(
      *(_DWORD *)this,
      v9,
      *((_DWORD *)this + 2));
    if ( v9[0] )
    {
      v3 = (void (__thiscall ***)(_DWORD, int))v9[0];
      if ( !v2((volatile LONG *)(v9[0] + 4)) )
        (**v3)(v3, 1);
    }
  }
  v4 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    if ( !v2((volatile LONG *)(v4 + 4)) )
    {
      if ( v4 )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *(_DWORD *)this = 0;
  }
  ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
  if ( ShadowSceneNode )
    sub_7C7DC0(ShadowSceneNode, *((_DWORD *)this + 2));
  v6 = *((_DWORD *)this + 2);
  if ( v6 )
  {
    if ( !v2((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *((_DWORD *)this + 2) = 0;
  }
  *((_DWORD *)this + 1) = 0;
  nullsub_returnTrue_0arg();
  v7 = *((_DWORD *)this + 2);
  LOBYTE(v10) = 0;
  if ( v7 )
  {
    if ( !v2((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  v8 = *(_DWORD *)this;
  v10 = 0xFFFFFFFF;
  if ( v8 )
  {
    if ( !v2((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
}
