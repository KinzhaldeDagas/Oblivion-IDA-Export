NiObject *__thiscall MagicShaderHitEffect_constr_args(NiObject *this, TESObjectREFR *a2, int a3)
{
  int v4; // ecx
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // eax

  MagicHitEffect_constr_args(this, a2, a3);
  this->__vftable = (NiObjectVtbl *)&MagicShaderHitEffect::`vftable';
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0xD) = 0;
  v4 = *(_DWORD *)(MagicItem_GetFXEffect(*(_DWORD **)(a3 + 8), 0) + 0x78);
  *((float *)this + 0xE) = 0.0;
  v5 = InterlockedDecrement;
  *((_DWORD *)this + 0xD) = v4;
  v6 = *((_DWORD *)this + 0x12);
  if ( v6 )
  {
    if ( !v5((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *((_DWORD *)this + 0x12) = 0;
  }
  v7 = *((_DWORD *)this + 0xF);
  if ( v7 )
  {
    if ( !v5((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *((_DWORD *)this + 0xF) = 0;
  }
  v8 = *((_DWORD *)this + 0x10);
  if ( v8 )
  {
    if ( !v5((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    *((_DWORD *)this + 0x10) = 0;
  }
  v9 = *((_DWORD *)this + 6);
  *((_BYTE *)this + 0x28) = 0;
  *((_DWORD *)this + 0xB) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 0xC) + 0x1C) + 0x98);
  *((_DWORD *)this + 0xC) = 0;
  *((_BYTE *)this + 0x44) = *((PlayerCharacter **)this + 7) == TESDataHandler_g_PlayerRef
                         && PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0)
                         && (PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0)->members.super.m_flags & 1) == 0;
  if ( *((_DWORD *)this + 0xB) == 0x52414944 )
  {
    v10 = OblivionDynamicCast(
            *((void **)this + 6),
            0,
            (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
            &DisintegrateArmorEffect `RTTI Type Descriptor',
            0);
    if ( v10 )
    {
      v11 = v10[0xE];
      if ( v11 )
        *((_DWORD *)this + 0xC) = *(_DWORD *)(v11 + 8);
    }
  }
  return this;
}
