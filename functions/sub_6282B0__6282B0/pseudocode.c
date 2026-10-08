UInt32 __thiscall sub_6282B0(void *this, TESObjectREFR *a2)
{
  UInt32 result; // eax
  ActorAnimData *v4; // eax

  if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x36C))(this) /*0x6282e1*/
    || (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x36C))(this) == 4
    || (result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x36C))(this), result == 9) )
  {
    v4 = a2->vtbl->GetAnimData(a2); /*0x6282f1*/
    if ( v4 ) /*0x6282f5*/
      ActorAnimData_CleanupOrPromoteQueuedIdles(v4, 1, 0); /*0x6282fd*/
    result = sub_5E12B0((Actor *)a2); /*0x628304*/
    if ( result ) /*0x62830b*/
      return (*(UInt32 (__thiscall **)(UInt32, float, int, int, int, int))(*(_DWORD *)result + 0x80))( /*0x628329*/
               result,
               flt_A41328,
               1,
               1,
               1,
               1);
  }
  return result; /*0x62832b*/
}
