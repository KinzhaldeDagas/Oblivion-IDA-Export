int __thiscall sub_4E5550(_DWORD *this)
{
  int result; // eax

  result = *(this + 7);
  if ( result )
  {
    if ( dword_B35F88 )
    {
      (*(void (__thiscall **)(UInt32, int, int))(*(_DWORD *)dword_B35F88 + 0x84))(dword_B35F88, result, 1);
      NiAVObject_InitializePropertyState((NiAVObject *)dword_B35F88);
      NiNode_UpdateDynamicEffectState((NiNode *)dword_B35F88);
      return NiAVObject_UpdateNiAVObject((NiAVObject *)dword_B35F88, 0.0, 0);
    }
  }
  return result;
}
