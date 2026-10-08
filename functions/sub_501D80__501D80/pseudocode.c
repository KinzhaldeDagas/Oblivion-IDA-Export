char __cdecl sub_501D80(int a1, int a2, void *a3)
{
  PlayerCharacter *v3; // eax
  PlayerCharacter *v4; // esi

  if ( !a3 ) /*0x501d86*/
    return 1; /*0x501dc5*/
  v3 = (PlayerCharacter *)OblivionDynamicCast( /*0x501d98*/
                            a3,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
  v4 = v3; /*0x501d9d*/
  if ( v3 ) /*0x501da4*/
  {
    sub_675D50((ActorProcessManager *)&qword_B3BB2C[0x75], v3, 0); /*0x501dae*/
    ((void (__thiscall *)(PlayerCharacter *, _DWORD))v4->vtbl->super.Unk_D0)(v4, 0); /*0x501dbf*/
  }
  return 1; /*0x501dc4*/
}
