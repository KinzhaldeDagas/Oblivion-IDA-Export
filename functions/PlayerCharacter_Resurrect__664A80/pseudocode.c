void __thiscall PlayerCharacter::Resurrect(PlayerCharacter *This, int a8, int a9, int a10)
{
  char v4; // bp
  double v5; // st5
  double v6; // st6
  double v8; // st7
  LowProcess *process; // ecx
  LowProcess *v10; // eax
  LowProcess *v11; // eax
  HighProcess *v12; // eax
  HighProcess *v13; // edi
  void (__thiscall *Copy)(BaseProcess *__hidden, BaseProcess *); // edx
  int ProcessLevel; // eax
  LowProcess *v16; // ecx
  int v17; // eax
  bhkCharacterProxy *CharProxy; // eax
  int v19; // edi
  int v20; // eax
  UInt32 v21; // eax
  LowProcess *v22; // [esp+20h] [ebp-20h]
  HighProcess *v23; // [esp+30h] [ebp-10h] BYREF
  int v24; // [esp+3Ch] [ebp-4h]

  v8 = 0.0;
  This->stamina = 0.0;
  This->health = 0.0;
  This->magicka = 0.0;
  sub_57A6F0(0xA);
  sub_57A6F0(8);
  sub_57A6F0(9);
  process = This->super.super.super.process;
  if ( process )
    ((void (__thiscall *)(LowProcess *, int))process->Destructor)(process, 1);
  v10 = (LowProcess *)FormHeapAlloc(0x90u);
  v23 = (HighProcess *)v10;
  v24 = 0;
  if ( v10 )
    v11 = LowProcess::LowProcess(v10);
  else
    v11 = 0;
  This->super.super.super.process = v11;
  v12 = (HighProcess *)FormHeapAlloc(0x2ECu);
  v23 = v12;
  v24 = 1;
  if ( v12 )
    v13 = HighProcess::HighProcess(v12);
  else
    v13 = 0;
  Copy = v13->Copy;
  v22 = This->super.super.super.process;
  v24 = 0xFFFFFFFF;
  Copy(v13, v22);
  ProcessLevel = Actor::GetProcessLevel((Actor *)This);
  sub_674550(v4, v5, v6, 0.0, (int)This, ProcessLevel);
  v16 = This->super.super.super.process;
  if ( v16 )
    ((void (__thiscall *)(LowProcess *, int))v16->Destructor)(v16, 1);
  This->super.super.super.process = v13;
  v17 = Actor::GetProcessLevel((Actor *)This);
  sub_674550(v4, v5, v6, 0.0, (int)This, v17);
  This->vtbl->super.super.super.Unk_52((TESObjectREFR *)This);
  CharProxy = MobileObject_GetCharProxy((MobileObject *)This);
  if ( CharProxy )
  {
    sub_57E270(CharProxy, &v23);
    v19 = (unsigned int)v23 >> 0x10;
    v20 = FormHeapAlloc(8u);
    v23 = (HighProcess *)v20;
    v24 = 2;
    if ( v20 )
    {
      v8 = flt_A58E1C;
      v21 = sub_532BC0(v20, flt_A58E1C, v19);
      v24 = 0xFFFFFFFF;
      This->unk1F0 = v21;
    }
    else
    {
      v24 = 0xFFFFFFFF;
      This->unk1F0 = 0;
    }
  }
  else
  {
    This->unk1F0 = 0;
  }
  Actor_Resurrect((Actor *)This, 0, 0, 0);
  sub_4E3490((TESObjectREFR *)This, v5, v6, v8);
}
