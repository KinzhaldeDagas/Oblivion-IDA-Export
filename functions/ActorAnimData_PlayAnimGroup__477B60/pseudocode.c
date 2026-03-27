void __thiscall ActorAnimData_PlayAnimGroup(int this, _DWORD *a2, int a3, int a4)
{
  int v8; // eax
  int v9; // edx
  int v10[3]; // [esp+18h] [ebp-Ch] BYREF

  v8 = sub_51AA00((unsigned __int8)a2);
  v9 = dword_B102E8[9 * v8];
  if ( v9 == 5 )
  {
    v9 = 0;
  }
  else if ( dword_B102E8[9 * v8] == 6 )
  {
    v9 = 3;
  }
  if ( v8 == 0xFF )
ActorAnimData_PlayAnimGroup___def_477BB5:
    JUMPOUT(0x477C24);
  switch ( dword_B102EC[9 * v8] )
  {
    case 0:
    case 1:
      if ( !a3 )
      {
        *(_WORD *)(this + 2 * v9 + 0x70) = (_WORD)a2;
        *(_DWORD *)(this + 4 * v9 + 0x7C) = a4;
        return;
      }
      if ( a3 != 1 )
        goto ActorAnimData_PlayAnimGroup___def_477BB5;
      *(_WORD *)(this + 2 * v9 + 0x70) = 0xFF;
      *(_DWORD *)(this + 4 * v9 + 0x5C) = a4;
      sub_476260((_DWORD **)this, a2, 0xFFFFFFFF);
LABEL_12:
      sub_471230(this, *(float *)(this + 0x94), v10, 1);
      ActorAnimData_PlayAnimGroup_::def_477BB5((int)a2, a3, a4);
      return;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      sub_476260((_DWORD **)this, a2, 0xFFFFFFFF);
      goto LABEL_12;
    default:
      goto ActorAnimData_PlayAnimGroup___def_477BB5;
  }
}
