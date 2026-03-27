int __thiscall ActiveEffect_Base_PostLink(volatile LONG ***this, int a2)
{
  volatile LONG **v2; // esi

  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x2Au )
    return ActiveEffect_Base_PostLink_::PersistentSound_(a2);
  v2 = *(this + 0xD);
  if ( v2 )
    return ActiveEffect_Base_PostLink_::LoopTest((int)this, a2, v2);
  else
    return ActiveEffect_Base_PostLink_::PersistentSound__();
}
