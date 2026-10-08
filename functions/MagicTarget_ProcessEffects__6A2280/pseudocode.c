// Verified active-effect manager: obtains the target's active-effect list, checks target parent/node/cell/process conditions, then enters the list loop. Each eligible ActiveEffect goes through ActiveEffect_Base_ProcessEffect; removed effects are unlinked and destroyed by their virtual destructor. Actor_ProcessMagicEffect calls this manager each actor process tick.
void __thiscall MagicTarget_ProcessEffects(MagicTarget *this, float deltaTime)
{
  MagicTarget *v3; // esi
  int v4; // eax
  void *v5; // eax
  void *v6; // eax
  void *DwordAtOffset40; // eax

  ((void (__thiscall *)(MagicTarget *))this->vtbl->GetActiveEffectList)(this); /*0x6a2290*/
  if ( !((unsigned __int8 (__thiscall *)(MagicTarget *))this->vtbl->IsActor)(this) ) /*0x6a229f*/
    goto LABEL_9; /*0x6a229f*/
  v3 = this + 0xFFFFFFF3; /*0x6a22a1*/
  if ( this == (MagicTarget *)0x68 || v3[0xB].vtbl ) /*0x6a22a8*/
  {
    v4 = ((int (__thiscall *)(MagicTarget *))this->vtbl->GetParentReference)(this); /*0x6a22b9*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x154))(v4) ) /*0x6a22c5*/
    {
      v5 = (void *)((int (__thiscall *)(MagicTarget *))this->vtbl->GetParentReference)(this); /*0x6a22d6*/
      if ( Shared_GetDwordAtOffset40(v5) ) /*0x6a22da*/
      {
        v6 = (void *)((int (__thiscall *)(MagicTarget *))this->vtbl->GetParentReference)(this); /*0x6a22ee*/
        DwordAtOffset40 = (void *)Shared_GetDwordAtOffset40(v6); /*0x6a22f2*/
        if ( GetObjectPointerAt_054(DwordAtOffset40) ) /*0x6a22f9*/
        {
          if ( !LOBYTE(v3[0xF].vtbl) ) /*0x6a2306*/
            sub_45A500(g_TESSaveLoadGame); /*0x6a2312*/
LABEL_9:
          MagicTarget_ProcessEffects_::ActvEffLoop_Start(LODWORD(deltaTime)); /*0x6a231c*/
          return; /*0x6a231c*/
        }
      }
    }
  }
  MagicTarget_ProcessEffects_::Done(SLODWORD(deltaTime)); /*0x6a22ac*/
}
