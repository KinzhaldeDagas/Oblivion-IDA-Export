int __usercall MagicCaster_FindTouchTarget_::GetParentActor@<eax>(
        int a1@<esi>,
        double a2@<st0>,
        int a3,
        int a4,
        int a5,
        float a6,
        int a7,
        float a8)
{
  int v8; // eax

  v8 = (*(int (**)(void))(*(_DWORD *)a1 + 0x20))();
  if ( !v8 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 0x190))(v8) )
    JUMPOUT(0x69954E);
  if ( a1 == 0x5C )
    JUMPOUT(0x699550);
  return MagicCaster_FindTouchTarget_::CalcHandReach(a1 - 0x5C, a1, a2, a3, a4, a5, a6, a7, a8);
}
