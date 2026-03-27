int __thiscall sub_4E54D0(_DWORD *this)
{
  int result; // eax
  void (__thiscall ***v2)(_DWORD, int); // esi
  _DWORD *v3; // [esp+14h] [ebp-4h] BYREF

  v3 = this;
  result = *(this + 7);
  if ( result )
  {
    if ( dword_B35F88 )
    {
      (*(void (__thiscall **)(UInt32, _DWORD **, int))(*(_DWORD *)dword_B35F88 + 0x88))(dword_B35F88, &v3, result);
      if ( v3 )
      {
        v2 = (void (__thiscall ***)(_DWORD, int))v3;
        if ( !InterlockedDecrement(v3 + 1) )
          (**v2)(v2, 1);
      }
      NiAVObject_InitializePropertyState((NiAVObject *)dword_B35F88);
      NiNode_UpdateDynamicEffectState((NiNode *)dword_B35F88);
      return NiAVObject_UpdateNiAVObject((NiAVObject *)dword_B35F88, 0.0, 0);
    }
  }
  return result;
}
