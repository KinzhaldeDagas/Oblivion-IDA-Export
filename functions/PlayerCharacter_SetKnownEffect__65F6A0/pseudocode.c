int __cdecl PlayerCharacter_SetKnownEffect(int a1)
{
  int v1; // esi

  v1 = a1 + 0x18;
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 0x18) + 0x18))(a1 + 0x18)
    || (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x18))(v1) == 4
    || (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x18))(v1) == 2
    || (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x18))(v1) == 3 )
  {
    return PlayerCharacter_SetKnownEffect_::EffectItemLoop(a1, 0x200000, a1);
  }
  else
  {
    return PlayerCharacter_SetKnownEffect_::Done(a1);
  }
}
