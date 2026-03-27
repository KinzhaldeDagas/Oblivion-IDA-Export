UInt32 __thiscall sub_6282B0(void *this, Actor *a2)
{
  UInt32 result; // eax
  ActorAnimData *v4; // eax

  if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x36C))(this)
    || (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x36C))(this) == 4
    || (result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x36C))(this), result == 9) )
  {
    v4 = a2->vtbl->super.super.GetAnimData(a2);
    if ( v4 )
      sub_475440(v4, 1, 0);
    result = sub_5E12B0(a2);
    if ( result )
      return (*(int (__thiscall **)(UInt32, float, int, int, int, int))(*(_DWORD *)result + 0x80))(
               result,
               flt_A41328,
               1,
               1,
               1,
               1);
  }
  return result;
}
