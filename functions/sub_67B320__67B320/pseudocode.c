char __thiscall sub_67B320(Actor **this, Actor *a2, Actor **a3)
{
  Actor **v3; // edi
  char result; // al
  int *v5; // ebp
  Actor **v6; // esi
  int v7; // edx
  Actor *v8; // edx
  Actor *v9; // ecx
  Actor **v10; // eax

  v3 = this;
  result = 0;
  v5 = 0;
  v6 = this;
  if ( this == &ActorProcessManager_ptr.actor64 )
  {
    v7 = 0;
    if ( this )
    {
      do
      {
        if ( *this )
          ++v7;
        this = (Actor **)*(this + 1);
      }
      while ( this );
      if ( v7 == 2 )
        goto LABEL_9;
    }
  }
  if ( ActorProcessManager_ptr.unkNodes[2] && a2 == ActorProcessManager_ptr.unkNodes[2]->data )
LABEL_9:
    ActorProcessManager_ptr.unkNodes[2] = 0;
  if ( ActorProcessManager_ptr.unk74 )
  {
    if ( a2 == *(Actor **)ActorProcessManager_ptr.unk74 )
      ActorProcessManager_ptr.unk74 = 0;
  }
  if ( a3 )
    v6 = a3;
  v8 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = v6[1];
      if ( !v9 && !*v6 )
        break;
      v8 = *v6;
      if ( *v6 == a2 )
        goto LABEL_22;
      v5 = (int *)v6;
      v6 = (Actor **)v6[1];
      if ( !v9 )
        return result;
    }
    if ( v8 != a2 )
      return result;
LABEL_22:
    if ( v5 )
    {
      BSSimpleList_Remove(v5, (int)a2);
      if ( v6 == (Actor **)v3[2] )
        v3[2] = (Actor *)v5;
    }
    else
    {
      v10 = (Actor **)v3[1];
      if ( v10 )
      {
        v3[1] = v10[1];
        *v3 = *v10;
        FormHeapFree((unsigned int)v10);
      }
      else
      {
        *v3 = 0;
      }
      if ( !v3[1] )
        v3[2] = (Actor *)v3;
    }
    if ( (a2->members.super.super.super.flags & 0x20) != 0 && !sub_45A500(SaveLoad_CurrentSavegame) )
      sub_659BC0(a2);
    return 1;
  }
  return result;
}
