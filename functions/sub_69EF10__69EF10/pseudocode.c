// Verified MagicModelHitEffect +0x84 PostLink callback uses owner ActiveEffect and target linkContext to restore model/target state, then calls Update and returns its bool result. ActiveEffect_Base_PostLink ignores that return and registers the object with ActorProcessManager.
bool __thiscall MagicModelHitEffect_PostLink(
        MagicHitEffect *this,
        ActiveEffect *ownerActiveEffect,
        TESObjectREFR *linkContext,
        void *fallbackData)
{
  ActiveEffect *v4; // edi
  unsigned __int8 *v6; // ebp
  void (__thiscall *Destructor)(NiRefObject *, bool); // eax
  bool bFinished; // bl
  int v9; // eax
  TESObjectREFR *v10; // ebx
  _DWORD *v11; // eax
  int v12; // eax
  NiObject *v14; // [esp+14h] [ebp-8h]
  unsigned __int8 *bufferCursor; // [esp+18h] [ebp-4h]

  v4 = ownerActiveEffect; /*0x69ef1b*/
  nullsub_18((int)ownerActiveEffect, (int)linkContext, 0); /*0x69ef25*/
  v6 = *((unsigned __int8 **)this + 0xB);       // Verified (Oblivion): while restoring a save, derived +0x2C is first treated as a serialized payload buffer. PostLink consumes it, frees the buffer, and replaces +0x2C with the owner's model path (or fallback data). /*0x69ef2c*/
  if ( v4 ) /*0x69ef2f*/
    *((_DWORD *)this + 0xB) = v4->members.effectItem->setting->model.vtbl->GetModelPath(&v4->members.effectItem->setting->model); /*0x69ef42*/
  else
    *((float *)this + 0xB) = *(float *)&fallbackData; /*0x69ef4b*/
  Destructor = this->super.vtable[1].super.super.Destructor; /*0x69ef53*/
  ownerActiveEffect = (ActiveEffect *)LODWORD(this->elapsedSeconds); /*0x69ef56*/
  bFinished = this->bFinished; /*0x69ef5a*/
  ((void (__thiscall *)(MagicHitEffect *))Destructor)(this); /*0x69ef5f*/
  this->elapsedSeconds = *(float *)&ownerActiveEffect; /*0x69ef67*/
  this->bFinished = bFinished; /*0x69ef6a*/
  if ( v6 ) /*0x69ef6d*/
  {
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x69ef81*/
    g_TESSaveLoadGame->bufferCursor = v6; /*0x69ef85*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &ownerActiveEffect, 2u); /*0x69ef8f*/
    v9 = *((_DWORD *)this + 0xC); /*0x69ef94*/
    if ( v9 ) /*0x69ef99*/
    {
      v14 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, *(NiObject **)(v9 + 0xC)); /*0x69efb2*/
      if ( v14 ) /*0x69efb6*/
      {
        v10 = linkContext; /*0x69efb8*/
        *(float *)&fallbackData = kTerrainLODQuadRayDirectionZ; /*0x69efc4*/
        if ( linkContext ) /*0x69efc8*/
        {
          if ( linkContext->vtbl->IsActor(linkContext) ) /*0x69efd4*/
          {
            if ( v4 ) /*0x69efdc*/
            {
              v11 = OblivionDynamicCast( /*0x69eff0*/
                      v10[1].vtbl,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                      &MiddleHighProcess `RTTI Type Descriptor',
                      0);
              if ( v11 ) /*0x69effa*/
              {
                v12 = v11[0x5F]; /*0x69effc*/
                if ( v12 ) /*0x69f004*/
                  fallbackData = *(void **)(v12 + 0x94); /*0x69f00c*/
              }
            }
          }
        }
        sub_4DA8F0((int)v4, (int)this, (int)v14, *((NiAVObject **)this + 0xC), *(float *)&fallbackData); /*0x69f021*/
      }
    }
    g_TESSaveLoadGame->bufferCursor = bufferCursor; /*0x69f039*/
    MemoryHeap_Free_checked(v6); /*0x69f03c*/
  }
  return ((bool (__thiscall *)(MagicHitEffect *, _DWORD))this->super.vtable->Update)(this, 0.0); /*0x69f050*/
}
