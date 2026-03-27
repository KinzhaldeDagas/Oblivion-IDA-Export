HighProcess *__thiscall HighProcess::HighProcess(HighProcess *this)
{
  UInt32 v2; // edx
  int RandomLargeInteger; // eax
  DetectionList *v4; // eax
  double v5; // st7
  double v6; // st7
  UInt32 v7; // ecx
  NiObject *unk268; // edi
  double v9; // st6
  int v10; // eax
  TESObjectREFR **actionTarget; // ecx

  MiddleHighProcess::MiddleHighProcess(this);
  this->__vftable = (MiddleHighProcess_vtbl *)&HighProcess::`vftable';
  this->unk190.data = 0;
  this->unk190.next = 0;
  this->unk268 = 0;
  this->unk0D0 = 1;
  this->unk1D4 = 0;
  this->unk090 = 0xFFFFFFFF;
  dword_B3B928 = 0;
  this->unk1BC.unk0 = 0;
  this->unk1BC.unk4 = 0;
  this->unk1BC.unk8 = 0;
  this->unk1BC.unkC = 0;
  this->unk1D8 = 0.0;
  this->unk1DC = 0.0;
  this->movementFlags = 0;
  this->unk1AC = 0.0;
  this->unk200 = 0;
  this->unk204 = 0.0;
  this->unk208 = 0xFFFF;
  this->unk198 = 0.0;
  this->unk1A4 = 0;
  this->unk1EC = 0;
  this->unk1F0 = 0;
  this->currentAction = 0xFFFF;
  this->animgroupSequence = 0;
  this->unk218 = 0;
  this->unk1D0 = 0;
  this->unk220[0] = 0;
  this->unk220[1] = 0;
  *(float *)&this->unk20C.unk0 = Vector3_InitValue_;
  this->unk20C.unk4 = *(UInt32 *)(&Vector3_InitValue_ + 1);
  v2 = LODWORD(dword_B3F9B0);
  this->unk21C = 0.0;
  this->unk22C = 0.0;
  this->unk20C.unk8 = v2;
  this->unk228 = 0;
  this->unk23C = 1;
  this->unk244 = 0;
  this->unk250 = 0;
  RandomLargeInteger = GetRandomLargeInteger_(0);
  this->unk24C = 0;
  this->unk25C = 0;
  this->unk1CC = 0;
  this->unk230 = (double)(RandomLargeInteger % 0x1388) * dbl_A30E40 + dbl_A3F3E8;
  this->unk248 = 0.0;
  this->unk234 = 0.0;
  this->unk1E8 = 0.0;
  this->unk1B4 = 0.0;
  this->unk1B0 = 0.0;
  v4 = (DetectionList *)FormHeapAlloc(8u);
  if ( v4 )
  {
    v4->data = 0;
    v4->next = 0;
  }
  else
  {
    v4 = 0;
  }
  v5 = flt_A417B4;
  this->detectionList = v4;
  this->swimBreath = v5;
  this->unk1E4 = 0;
  v6 = 0.0;
  this->unk2BC = 1;
  this->unk1A8 = 0.0;
  this->unk2C4 = 0;
  this->unk1E0 = 0.0;
  this->unk25D = 0;
  this->unk240 = 0.0;
  this->unk2C0 = 0.0;
  this->unk1B8 = 0.0;
  *(float *)&this->unk27C.unk0 = Vector3_InitValue_;
  this->unk27C.unk4 = *(UInt32 *)(&Vector3_InitValue_ + 1);
  v7 = LODWORD(dword_B3F9B0);
  this->unk260 = 0.0;
  this->unk27C.unk8 = v7;
  this->unk19C = flt_B36940;
  this->unk288 = 0;
  this->unk264 = 0.0;
  this->unk26C = 1.0;
  this->unk270 = 0.0;
  unk268 = this->unk268;
  if ( unk268 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&unk268->members) )
      unk268->__vftable->super.Destructor((NiRefObject *)unk268, 1);
    v6 = 0.0;
    this->unk268 = 0;
  }
  this->unk28C = v6;
  this->unk274 = 0;
  v9 = flt_A30634;
  this->unk278 = 0;
  this->unk294 = v9;
  this->unk290 = 0;
  this->unk298 = 0xFFFFFFFF;
  this->unk29C = 0xFFFFFFFF;
  this->unk2A0 = 0xFFFFFFFF;
  this->unk2A4 = 0;
  this->unk2A8 = 0;
  this->unk2A9 = 0;
  v10 = 0;
  actionTarget = this->actionTarget;
  do
  {
    *actionTarget = 0;
    this->actionActive[v10++] = 0;
    ++actionTarget;
  }
  while ( v10 < 5 );
  this->unk2AC = v6;
  this->unk2E4 = 0;
  this->unk2B0 = v6;
  this->unk2E8 = 0;
  this->unk1A0 = 0;
  this->unk2B4 = 0;
  this->unk2B8 = 0;
  this->unk258 = 0;
  this->unk1D1 = 0;
  this->unk2B9 = 0;
  return this;
}
