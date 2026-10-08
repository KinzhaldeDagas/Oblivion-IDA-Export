// Generic ActorProcessManager insertion. Selects process-level collection 0..3, silently returns if object->GetProcessLevel() does not match, then inserts with ordering controls. Returns void; there is no insertion-success result. Used for actors, load/resurrection paths, and projectiles.
void __thiscall ActorProcessManager_AddMobileObject(
        ActorProcessManager *this,
        MobileObject *object,
        int processLevel,
        bool append,
        bool insertRelative,
        MobileObject *relativeTo)
{
  ActorProcessManager *p_actor68; // esi

  switch ( processLevel ) /*0x673a9c*/
  {
    case 0: /*0x673a9c*/
      p_actor68 = (ActorProcessManager *)&this->actor68;// Process-level collection mapping: level 0 -> manager+0x68; level 1 -> manager+0x00; level 2 -> manager+0x0C; level 3 -> manager+0x18. /*0x673aa3*/
      break; /*0x673aa6*/
    case 1: /*0x673a9c*/
      p_actor68 = this; /*0x673aa8*/
      break; /*0x673aaa*/
    case 2: /*0x673a9c*/
      p_actor68 = (ActorProcessManager *)&this->lowActors0C; /*0x673aac*/
      break; /*0x673aaf*/
    case 3: /*0x673a9c*/
      p_actor68 = (ActorProcessManager *)&this->lowActors18; /*0x673ab1*/
      break; /*0x673ab4*/
    default:
      p_actor68 = 0; /*0x673ab6*/
      break; /*0x673ab6*/
  }
  if ( Actor::GetProcessLevel((Actor *)object) == processLevel )// Direct call to Actor::GetProcessLevel (0x659A00), not an object virtual dispatch. A null MobileObject process yields -1; any mismatch with requested processLevel silently returns without insertion or status. /*0x673ac5*/
  {
    if ( p_actor68 ) /*0x673ac9*/
      ProcessLevelList_InsertMobileObject(p_actor68, object, append, insertRelative, relativeTo);// Insert the MobileObject into the selected process-level list using the requested ordering. The release path requests level 0, append=false, insertRelative=false, relativeTo=null. The helper is void and exposes no insertion-success predicate. /*0x673add*/
  }
}
