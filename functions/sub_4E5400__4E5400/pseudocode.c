void __thiscall sub_4E5400(int this)
{
  int v2; // esi
  _DWORD *v3; // ecx
  LONG (__stdcall *v4)(volatile LONG *); // ebx
  void (__thiscall ***v5)(_DWORD, int); // esi
  int v6; // esi
  int v7; // [esp+20h] [ebp-4h] BYREF

  if ( *(_DWORD *)(this + 0x1C) )
  {
    v2 = 0;
    if ( *(_WORD *)(this + 0x30) )
    {
      do
      {
        v3 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 4) + 4 * v2);
        if ( v3 )
          sub_4E8190(v3);
        ++v2;
      }
      while ( v2 < *(unsigned __int16 *)(this + 0x30) );
    }
    v4 = InterlockedDecrement;
    if ( dword_B35F88 )
    {
      (*(void (__thiscall **)(UInt32, int *, _DWORD))(*(_DWORD *)dword_B35F88 + 0x88))(
        dword_B35F88,
        &v7,
        *(_DWORD *)(this + 0x1C));
      if ( v7 )
      {
        v5 = (void (__thiscall ***)(_DWORD, int))v7;
        if ( !v4((volatile LONG *)(v7 + 4)) )
          (**v5)(v5, 1);
      }
      NiAVObject_InitializePropertyState((NiAVObject *)dword_B35F88);
      NiNode_UpdateDynamicEffectState((NiNode *)dword_B35F88);
      NiAVObject_UpdateNiAVObject((NiAVObject *)dword_B35F88, 0.0, 0);
    }
    v6 = *(_DWORD *)(this + 0x1C);
    if ( v6 )
    {
      if ( !v4((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      *(_DWORD *)(this + 0x1C) = 0;
    }
  }
}
