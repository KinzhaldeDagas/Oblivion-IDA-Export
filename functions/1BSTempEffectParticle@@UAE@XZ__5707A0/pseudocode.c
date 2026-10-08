// Verified: releases queued/model references, detaches/releases particle root, then invokes BSTempEffect base destructor.
void __thiscall BSTempEffectParticle_Destructor(BSTempEffectParticle *self)
{
  const char *modelPath; // eax
  NiAVObject *particleNode; // eax
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  void (__thiscall ***v5)(_DWORD, int); // esi
  NiAVObject *v6; // esi
  NiAVObject *v7; // esi
  _DWORD v8[2]; // [esp+10h] [ebp-14h] BYREF
  int v9; // [esp+20h] [ebp-4h]

  v8[1] = self; /*0x5707c8*/
  self->base.vtable = &BSTempEffectParticle::`vftable'; /*0x5707cc*/
  modelPath = self->modelPath; /*0x5707d2*/
  v9 = 1; /*0x5707d7*/
  if ( modelPath ) /*0x5707df*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)modelPath, 0, 1); /*0x5707ec*/
  particleNode = self->particleNode; /*0x5707f1*/
  v4 = InterlockedDecrement; /*0x5707f6*/
  if ( particleNode ) /*0x5707fc*/
  {
    if ( particleNode->members.m_parent ) /*0x5707fe*/
    {
      particleNode->members.m_parent->vtbl->RemoveObject( /*0x570815*/
        particleNode->members.m_parent,
        (NiAVObject **)v8,
        self->particleNode);
      if ( v8[0] ) /*0x57081d*/
      {
        v5 = (void (__thiscall ***)(_DWORD, int))v8[0]; /*0x57081f*/
        if ( !v4((volatile LONG *)(v8[0] + 4)) ) /*0x570825*/
          (**v5)(v5, 1); /*0x570837*/
      }
    }
  }
  v6 = self->particleNode; /*0x570839*/
  if ( v6 ) /*0x57083e*/
  {
    if ( !v4((volatile LONG *)&v6->members) ) /*0x570844*/
      v6->vtbl->super.super.Destructor((NiRefObject *)v6, 1); /*0x570856*/
    self->particleNode = 0; /*0x570858*/
  }
  v7 = self->particleNode; /*0x57085f*/
  LOBYTE(v9) = 0; /*0x570864*/
  if ( v7 ) /*0x570869*/
  {
    if ( !v4((volatile LONG *)&v7->members) ) /*0x57086f*/
      v7->vtbl->super.super.Destructor((NiRefObject *)v7, 1); /*0x570881*/
  }
  v9 = 0xFFFFFFFF; /*0x570885*/
  BSTempEffect_Destructor(&self->base); /*0x57088d*/
}
