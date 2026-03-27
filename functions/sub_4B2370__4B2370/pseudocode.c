char __thiscall sub_4B2370(void *this)
{
  NiAVObject *v1; // esi

  v1 = (NiAVObject *)(*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x110))(this, 0);
  NiAVObject_InitializePropertyState(v1);
  NiNode_UpdateDynamicEffectState((NiNode *)v1);
  NiAVObject_UpdateNiAVObject(v1, 0.0, 0);
  return 1;
}
