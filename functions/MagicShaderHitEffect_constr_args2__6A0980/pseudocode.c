NiObject *__thiscall MagicShaderHitEffect_constr_args2(NiObject *this, TESObjectREFR *a2, int a3, float a4)
{
  char v5; // bl
  LONG (__stdcall *v6)(volatile LONG *); // ebp
  int v7; // edi
  int v8; // edi
  int v9; // edi
  double v10; // st7
  NiObject *result; // eax

  v5 = 0;
  MagicHitEffect_constr_args(this, a2, 0);
  this->__vftable = (NiObjectVtbl *)&MagicShaderHitEffect::`vftable';
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((float *)this + 0xE) = 0.0;
  v6 = InterlockedDecrement;
  *((_DWORD *)this + 0xD) = a3;
  v7 = *((_DWORD *)this + 0x12);
  if ( v7 )
  {
    if ( !v6((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *((_DWORD *)this + 0x12) = 0;
  }
  v8 = *((_DWORD *)this + 0xF);
  if ( v8 )
  {
    if ( !v6((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    *((_DWORD *)this + 0xF) = 0;
  }
  v9 = *((_DWORD *)this + 0x10);
  if ( v9 )
  {
    if ( !v6((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    *((_DWORD *)this + 0x10) = 0;
  }
  *((_BYTE *)this + 0x28) = 0;
  *((_DWORD *)this + 0xB) = 0xFFFFFFFF;
  *((_DWORD *)this + 0xC) = 0;
  if ( *((PlayerCharacter **)this + 7) == TESDataHandler_g_PlayerRef )
  {
    if ( PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0) )
    {
      if ( (PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0)->members.super.m_flags & 1) == 0 )
        v5 = 1;
    }
  }
  *((_BYTE *)this + 0x44) = v5;
  v10 = a4;
  result = this;
  if ( a4 < 0.0 )
    v10 = flt_A32048;
  *((float *)this + 2) = v10;
  return result;
}
