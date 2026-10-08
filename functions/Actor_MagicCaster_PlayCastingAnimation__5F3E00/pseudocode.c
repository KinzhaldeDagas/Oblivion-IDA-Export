void __cdecl Actor_MagicCaster_PlayCastingAnimation(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // ecx
  int v10; // edi
  Actor *v11; // ecx
  bool v12; // zf
  int v13; // esi
  int v14; // eax
  _BYTE v15[4]; // [esp+18h] [ebp-18h] BYREF
  int v16; // [esp+1Ch] [ebp-14h]

  v10 = v9; /*0x5f3e27*/
  v11 = (Actor *)reference; /*0x5f3e29*/
  v12 = v10 - 0x5C == (_DWORD)reference; /*0x5f3e32*/
  v16 = v10 - 0x5C; /*0x5f3e34*/
  if ( v12 ) /*0x5f3e38*/
    PlayerCharacter_GetAnimDataByPerspective(v11, 0); /*0x5f3e3c*/
  else
    (*(void (__thiscall **)(int))(*(_DWORD *)(v10 - 0x5C) + 0x164))(v10 - 0x5C); /*0x5f3e4f*/
  v13 = *(_DWORD *)v10; /*0x5f3e51*/
  v14 = (*(int (__thiscall **)(int, _DWORD, _BYTE *, _DWORD))(*(_DWORD *)v10 + 0x30))(v10, 0, v15, 0); /*0x5f3e65*/
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(v13 + 0x1C))(v10, v14) ) /*0x5f3e6d*/
    Actor_MagicCaster_PlayCastingAnimation_::GetCasterAnimData(v10, a1, a2, a3, a4, a5, a6, a7, a8, a9); /*0x5f3e71*/
  else
    Actor_MagicCaster_PlayCastingAnimation_::CastingFailure( /*0x5f3e72*/
      (PlayerCharacter *)(v10 - 0x5C),
      v10,
      a1,
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9);
}
