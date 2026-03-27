void __usercall sub_664E60(
        Concurrency::details::SchedulerBase *a1@<ecx>,
        int a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>)
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v7; // edi
  NiNode *v8; // eax
  int AnimGroupFromField8Value; // ebx
  int SomethingFromField8Value; // ebp
  ActorAnimData *AnimData; // eax
  _DWORD *v12; // eax
  float v14; // [esp+18h] [ebp-4h]

  Singleton = InterfaceManager_GetSingleton(0, 1);
  v7 = Singleton;
  if ( *((_DWORD *)a1 + 0x176) )
  {
    if ( *((_DWORD *)a1 + 0x16) )
    {
      if ( Singleton )
      {
        v8 = Singleton->unk054[3];
        if ( v8 )
        {
          if ( (v8->members.super.m_flags & 1) == 0 )
          {
            AnimGroupFromField8Value = (unsigned __int16)ActorAnimData_GetAnimGroupFromField8Value(
                                                           *((_WORD **)a1 + 0x177),
                                                           0);
            SomethingFromField8Value = ActorAnimData_GetSomethingFromField8Value(*((_DWORD **)a1 + 0x177), 0);
            v14 = *(float *)(*((_DWORD *)a1 + 0x177) + 0x94)
                + *(float *)&sub_4706E0(*((ActorAnimData **)a1 + 0x177), 0)[9].data;
            sub_57ECB0(v7, a3, a4);
            sub_57D5B0((int)v7, SomethingFromField8Value, a3, a4);
            if ( (_WORD)AnimGroupFromField8Value == ActorAnimData_GetAnimGroupFromField8Value(
                                                      *((_WORD **)a1 + 0x177),
                                                      0) )
              sub_474AB0(
                *((_DWORD *)a1 + 0x177),
                a3,
                a4,
                v14,
                0,
                AnimGroupFromField8Value,
                SomethingFromField8Value,
                v14,
                0xFFFFFFFF);
            AnimData = (ActorAnimData *)Player_GetAnimData((Actor *)a1, *((_BYTE *)a1 + 0x588) == 0);
            sub_474510(AnimData, (TESObjectREFR *)a1);
            v12 = (_DWORD *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x154))(a1);
            if ( !*((_BYTE *)a1 + 0x588) )
              v12 = (_DWORD *)sub_405790((int)v12, 0);
            sub_5EA1A0((int)a1, a2, v12);
          }
        }
      }
    }
  }
}
