int __thiscall Actor_MagicCaster_GetMagicNode(_DWORD *this)
{
  _DWORD *v2; // edi
  ActorAnimData *AnimDataByPerspective; // eax
  NiControllerManager *manager; // eax
  int v5; // ecx
  int v6; // eax

  v2 = this + 0xFFFFFFE9; /*0x5edc4d*/
  if ( (*(int (__thiscall **)(_DWORD *))(*(this + 0xFFFFFFE9) + 0x154))(this + 0xFFFFFFE9)
    && (this + 0xFFFFFFE9 != (_DWORD *)reference
     || !PlayerCharacter_GetNodeByPerspective(reference, 0)
     || (PlayerCharacter_GetNodeByPerspective(reference, 0)->members.super.m_flags & 1) == 0
      ? (AnimDataByPerspective = (ActorAnimData *)(*(int (__thiscall **)(_DWORD *))(*v2 + 0x164))(v2))
      : (AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, 1)),
        AnimDataByPerspective
     && (manager = AnimDataByPerspective->manager) != 0
     && (v5 = *((_DWORD *)manager + 0x1F)) != 0
     && (v6 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v5 + 0x4C))(v5, "magicNode")) != 0) )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x5edccc*/
  }
  else
  {
    return 0; /*0x5edccf*/
  }
}
