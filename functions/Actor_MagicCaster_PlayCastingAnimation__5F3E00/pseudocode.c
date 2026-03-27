int __cdecl Actor_MagicCaster_PlayCastingAnimation(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // ecx
  int v12; // edi
  Actor *v13; // ecx
  bool v14; // zf
  int v15; // esi
  int v16; // eax
  _BYTE v18[4]; // [esp+18h] [ebp-18h] BYREF
  int v19; // [esp+1Ch] [ebp-14h]

  v12 = v11;
  v13 = (Actor *)TESDataHandler_g_PlayerRef;
  v14 = v12 - 0x5C == (_DWORD)TESDataHandler_g_PlayerRef;
  v19 = v12 - 0x5C;
  if ( v14 )
    Player_GetAnimData(v13, 0);
  else
    (*(void (__thiscall **)(int))(*(_DWORD *)(v12 - 0x5C) + 0x164))(v12 - 0x5C);
  v15 = *(_DWORD *)v12;
  v16 = (*(int (__thiscall **)(int, _DWORD, _BYTE *, _DWORD))(*(_DWORD *)v12 + 0x30))(v12, 0, v18, 0);
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(v15 + 0x1C))(v12, v16) )
    return Actor_MagicCaster_PlayCastingAnimation_::GetCasterAnimData(v12, a1, a2, a3, a4, a5);
  else
    return Actor_MagicCaster_PlayCastingAnimation_::CastingFailure(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
