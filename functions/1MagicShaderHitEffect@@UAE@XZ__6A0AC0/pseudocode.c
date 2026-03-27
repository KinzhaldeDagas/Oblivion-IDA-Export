void __thiscall MagicShaderHitEffect::~MagicShaderHitEffect(MagicShaderHitEffect *this)
{
  int v2; // eax
  PlayerCharacter *v3; // eax
  NiNode *PlayerNode; // eax
  NiNode *v5; // eax
  volatile LONG *v6; // eax
  int v7; // edi
  LONG (__stdcall *v8)(volatile LONG *); // ebp
  _DWORD *v9; // ecx
  int v10; // edi
  int v11; // edi
  int v12; // edx
  int v13; // eax
  _DWORD **sound; // ecx
  int v15; // edx
  const char *v16; // eax
  int v17; // edx
  unsigned int v18; // eax
  const char *v19; // eax
  int v20; // edi
  int v21; // edi
  int v22; // edi
  char v23[260]; // [esp+28h] [ebp-114h] BYREF
  int v24; // [esp+138h] [ebp-4h]

  *(_DWORD *)this = &MagicShaderHitEffect::`vftable';
  v2 = *((_DWORD *)this + 0x12);
  v24 = 3;
  if ( v2 )
  {
    v3 = *((PlayerCharacter **)this + 7);
    if ( v3 == TESDataHandler_g_PlayerRef )
    {
      PlayerNode = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
      if ( PlayerNode )
        sub_4ADAD0(PlayerNode, *((_DWORD *)this + 0x12));
      v5 = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0);
    }
    else
    {
      if ( !v3 )
        goto LABEL_10;
      v5 = v3->vtbl->super.super.super.GetNiNode(*((_DWORD *)this + 7));
    }
    if ( v5 )
      sub_4ADAD0(v5, *((_DWORD *)this + 0x12));
  }
LABEL_10:
  v6 = *((volatile LONG **)this + 0x10);
  if ( v6 )
    sub_4AC740(v6, *((_DWORD *)this + 0xF));
  v7 = *((_DWORD *)this + 0xF);
  v8 = InterlockedDecrement;
  if ( v7 )
  {
    if ( !v8((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *((_DWORD *)this + 0xF) = 0;
  }
  v9 = *((_DWORD **)this + 0x10);
  if ( v9 )
    sub_7074B0(v9, 0);
  v10 = *((_DWORD *)this + 0x10);
  if ( v10 )
  {
    if ( !v8((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    *((_DWORD *)this + 0x10) = 0;
  }
  v11 = *((_DWORD *)this + 0x12);
  if ( v11 )
  {
    if ( !v8((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    *((_DWORD *)this + 0x12) = 0;
  }
  v12 = *((_DWORD *)this + 0xD);
  if ( v12 )
  {
    v13 = *((_DWORD *)this + 7);
    sound = (_DWORD **)OSGlobals->sound;
    if ( v13 )
    {
      if ( sound )
      {
        v15 = *(_DWORD *)(v12 + 0xC);
        if ( v15 == 0x852FE || v15 == 0x84A51 )
          sub_6AC420(sound, v13, 1.0);
      }
    }
    v16 = *(const char **)(*((_DWORD *)this + 0xD) + 0x108);
    if ( !v16 )
      v16 = EmptyString;
    _sprintf(v23, "%s\\%s", "Textures", v16);
    sub_440420(v23, 0);
    v17 = *((_DWORD *)this + 0xD);
    LOWORD(v18) = *(_WORD *)(v17 + 0x100);
    if ( (_WORD)v18 == 0xFFFF )
      v18 = strlen(*(const char **)(v17 + 0xFC));
    else
      v18 = (unsigned __int16)v18;
    if ( v18 )
    {
      v19 = *(const char **)(v17 + 0xFC);
      if ( !v19 )
        v19 = EmptyString;
      _sprintf(v23, "%s\\%s", "Textures", v19);
      sub_440420(v23, 0);
    }
  }
  v20 = *((_DWORD *)this + 0x12);
  LOBYTE(v24) = 2;
  if ( v20 )
  {
    if ( !v8((volatile LONG *)(v20 + 4)) )
      (**(void (__thiscall ***)(int, int))v20)(v20, 1);
  }
  v21 = *((_DWORD *)this + 0x10);
  LOBYTE(v24) = 1;
  if ( v21 )
  {
    if ( !v8((volatile LONG *)(v21 + 4)) )
      (**(void (__thiscall ***)(int, int))v21)(v21, 1);
  }
  v22 = *((_DWORD *)this + 0xF);
  LOBYTE(v24) = 0;
  if ( v22 )
  {
    if ( !v8((volatile LONG *)(v22 + 4)) )
      (**(void (__thiscall ***)(int, int))v22)(v22, 1);
  }
  v24 = 0xFFFFFFFF;
  MagicHitEffect_destr(this);
}
