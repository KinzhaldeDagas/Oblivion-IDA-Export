void __thiscall sub_65D790(Actor *this, _DWORD *a2, int a3)
{
  int v7; // eax
  _DWORD **v8; // ebp
  int v9; // esi
  ActorAnimData *AnimData; // eax
  PowerListEntry *v11; // eax

  v7 = sub_51AA00((unsigned __int8)a2);
  v8 = (_DWORD **)this[5].members.unk0B4[1];
  v9 = 9 * v7;
  if ( !byte_B102E4[0x24 * v7]
    || (AnimData = (ActorAnimData *)TESObjectREFR_GetAnimData(this),
        v11 = sub_4706E0(AnimData, dword_B102E8[v9]),
        !sub_474BE0(v8, (int)v11, a2)) )
  {
    if ( sub_470D00(v8, (int)a2) )
      ActorAnimData_PlayAnimGroup((int)v8, a2, a3, 0xFFFFFFFF);
  }
}
