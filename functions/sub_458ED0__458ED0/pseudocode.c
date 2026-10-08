int __userpurge sub_458ED0@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        TESObjectREFR *a4,
        AnimSequenceSingle *a5,
        int a6)
{
  PlayerCharacter *v9; // ecx
  ActorAnimData *AnimDataByPerspective; // eax
  void **v11; // eax
  void *v12; // esi
  int v13; // eax
  unsigned __int8 *bufferCursor; // eax
  unsigned __int16 v15; // bx
  int result; // eax
  BSAnimGroupSequence *NormalizedSequenceSlot; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]
  AnimSequenceSingle *v20; // [esp+24h] [ebp+8h]

  v9 = reference; /*0x458ee1*/
  if ( a4 == (TESObjectREFR *)reference ) /*0x458ee9*/
  {
    if ( a5 ) /*0x458eed*/
      AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(v9, 0); /*0x458ef1*/
    else
      AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(v9, 1); /*0x458efa*/
  }
  else
  {
    AnimDataByPerspective = a4->vtbl->GetAnimData(a4); /*0x458f0b*/
  }
  v20 = (AnimSequenceSingle *)AnimDataByPerspective; /*0x458f1c*/
  v11 = (void **)OblivionDynamicCast( /*0x458f20*/
                   a4,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &MobileObject `RTTI Type Descriptor',
                   0);
  v12 = 0; /*0x458f25*/
  v18 = 0xFFFFFFFF; /*0x458f2c*/
  NormalizedSequenceSlot = 0; /*0x458f34*/
  if ( v11 ) /*0x458f38*/
  {
    if ( a5 ) /*0x458f3c*/
    {
      v12 = OblivionDynamicCast( /*0x458f53*/
              v11[0x16],
              0,
              (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
              &HighProcess `RTTI Type Descriptor',
              0);
      if ( v12 ) /*0x458f5a*/
      {
        v18 = (*(int (__thiscall **)(void *))(*(_DWORD *)v12 + 0x2D0))(v12); /*0x458f68*/
        NormalizedSequenceSlot = (BSAnimGroupSequence *)(*(int (__thiscall **)(void *))(*(_DWORD *)v12 + 0x2D4))(v12); /*0x458f78*/
      }
    }
  }
  v13 = *(this + 5); /*0x458f7c*/
  *(this + 5) = a6; /*0x458f83*/
  v19 = v13; /*0x458f8c*/
  bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x458f90*/
  v15 = *(_WORD *)bufferCursor; /*0x458f93*/
  g_TESSaveLoadGame->bufferCursor = bufferCursor + 2; /*0x458f99*/
  if ( v20 ) /*0x458fa2*/
    ActorAnimData_LoadState(v20, st5_0, st6_0, a6, *(float *)&a4); /*0x458fa9*/
  result = v15; /*0x458fae*/
  if ( v15 + a6 + 2 != *(this + 5) ) /*0x458fb8*/
    result = (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x458fca*/
               *(_DWORD *)&MEMORY[0xB33E90][0xF00],
               "LoadAnimations() call did not properly empty buffer.");
  *(this + 5) = v19; /*0x458fd2*/
  if ( v12 ) /*0x458fd5*/
  {
    if ( NormalizedSequenceSlot ) /*0x458fdd*/
      NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot( /*0x458fee*/
                                 (ActorAnimData *)v20,
                                 (char)((_BYTE)NormalizedSequenceSlot - 5));
    return (*(int (__thiscall **)(void *, int, BSAnimGroupSequence *))(*(_DWORD *)v12 + 0x2D8))( /*0x459006*/
             v12,
             v18,
             NormalizedSequenceSlot);
  }
  return result; /*0x459008*/
}
