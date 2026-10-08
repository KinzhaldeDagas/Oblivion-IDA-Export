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

  v8 = (*(int (**)(void))(*(_DWORD *)a1 + 0x20))(); /*0x69950d*/
  if ( !v8 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 0x190))(v8) ) /*0x69951d*/
    JUMPOUT(0x69954E); /*0x69954e*/
  if ( a1 == 0x5C ) /*0x699528*/
    JUMPOUT(0x699550); /*0x699550*/
  return MagicCaster_FindTouchTarget_::CalcHandReach(a1 - 0x5C, a1, a2, a3, a4, a5, a6, a7, a8);
}
