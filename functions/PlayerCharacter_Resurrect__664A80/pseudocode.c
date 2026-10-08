void __thiscall PlayerCharacter::Resurrect(PlayerCharacter *This, int a8, int a9, int a10)
{
  double v4; // st5
  double v5; // st6
  double v7; // st7
  LowProcess *process; // ecx
  LowProcess *v9; // eax
  LowProcess *v10; // eax
  HighProcess *v11; // eax
  HighProcess *v12; // edi
  void (__thiscall *Copy)(BaseProcess *__hidden, BaseProcess *); // edx
  int ProcessLevel; // eax
  LowProcess *v15; // ecx
  int v16; // eax
  bhkCharacterProxy *CharProxy; // eax
  int v18; // edi
  int v19; // eax
  UInt32 v20; // eax
  LowProcess *v21; // [esp+20h] [ebp-20h]
  HighProcess *v22; // [esp+30h] [ebp-10h] BYREF
  int v23; // [esp+3Ch] [ebp-4h]

  v7 = 0.0; /*0x664aa5*/
  This->stamina = 0.0; /*0x664aa9*/
  This->health = 0.0; /*0x664aaf*/
  This->magicka = 0.0; /*0x664ab5*/
  UI_UpdateActorValueDisplays(0xAu); /*0x664abb*/
  UI_UpdateActorValueDisplays(8u); /*0x664ac2*/
  UI_UpdateActorValueDisplays(9u); /*0x664ac9*/
  process = This->super.super.super.process; /*0x664ace*/
  if ( process ) /*0x664ad6*/
    ((void (__thiscall *)(LowProcess *, int))process->Destructor)(process, 1); /*0x664ade*/
  v9 = (LowProcess *)FormHeapAlloc(0x90u); /*0x664ae5*/
  v22 = (HighProcess *)v9; /*0x664aed*/
  v23 = 0; /*0x664af3*/
  if ( v9 ) /*0x664afb*/
    v10 = LowProcess::LowProcess(v9); /*0x664aff*/
  else
    v10 = 0; /*0x664b06*/
  This->super.super.super.process = v10; /*0x664b15*/
  v11 = (HighProcess *)FormHeapAlloc(0x2ECu); /*0x664b18*/
  v22 = v11; /*0x664b20*/
  v23 = 1; /*0x664b26*/
  if ( v11 ) /*0x664b2e*/
    v12 = HighProcess::HighProcess(v11); /*0x664b37*/
  else
    v12 = 0; /*0x664b3b*/
  Copy = v12->Copy; /*0x664b42*/
  v21 = This->super.super.super.process; /*0x664b45*/
  v23 = 0xFFFFFFFF; /*0x664b48*/
  Copy(v12, v21); /*0x664b50*/
  ProcessLevel = Actor::GetProcessLevel((Actor *)This); /*0x664b54*/
  sub_674550((int)This, ProcessLevel); /*0x664b60*/
  v15 = This->super.super.super.process; /*0x664b65*/
  if ( v15 ) /*0x664b6a*/
    ((void (__thiscall *)(LowProcess *, int))v15->Destructor)(v15, 1); /*0x664b72*/
  This->super.super.super.process = v12; /*0x664b76*/
  v16 = Actor::GetProcessLevel((Actor *)This); /*0x664b79*/
  sub_674550((int)This, v16); /*0x664b85*/
  This->vtbl->super.super.super.Unk_52((TESObjectREFR *)This); /*0x664b94*/
  CharProxy = MobileObject_GetCharProxy((MobileObject *)This); /*0x664b98*/
  if ( CharProxy ) /*0x664b9f*/
  {
    bhkCharacterProxy_GetCollisionFilterInfo(CharProxy, &v22); /*0x664ba8*/
    v18 = (unsigned int)v22 >> 0x10; /*0x664bb3*/
    v19 = FormHeapAlloc(8u); /*0x664bb6*/
    v22 = (HighProcess *)v19; /*0x664bbe*/
    v23 = 2; /*0x664bc4*/
    if ( v19 ) /*0x664bcc*/
    {
      v7 = flt_A58E1C; /*0x664bce*/
      v20 = PlayerCameraCollisionPhantomPair_Init(v19, flt_A58E1C, v18); /*0x664bdb*/
      v23 = 0xFFFFFFFF; /*0x664be0*/
      This->unk1F0 = v20; /*0x664be8*/
    }
    else
    {
      v23 = 0xFFFFFFFF; /*0x664bf2*/
      This->unk1F0 = 0; /*0x664bfa*/
    }
  }
  else
  {
    This->unk1F0 = 0; /*0x664c02*/
  }
  Actor_Resurrect((Actor *)This, 0, 0, 0); /*0x664c14*/
  Actor_SetupAnimationData((TESObjectREFR *)This, v4, v5, v7); /*0x664c1b*/
}
