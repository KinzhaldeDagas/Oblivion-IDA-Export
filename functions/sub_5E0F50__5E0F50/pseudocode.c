// Resolves actor/mount combat style and falls back to DefaultCombatStyle when the base style is null.
int *__thiscall Actor_GetEffectiveCombatStyle(void *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // ebx
  int *result; // eax

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x128))(this); /*0x5e0f5f*/
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e0f6b*/
  v4 = v3; /*0x5e0f6f*/
  if ( !v2 ) /*0x5e0f71*/
  {
    if ( v3 ) /*0x5e0f75*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e0f81*/
        v2 = v4; /*0x5e0f87*/
    }
  }
  result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x120))(v2); /*0x5e0f93*/
  if ( !result ) /*0x5e0f9a*/
    return sub_4A98C0(); /*0x5e0f9c*/
  return result; /*0x5e0f97*/
}
