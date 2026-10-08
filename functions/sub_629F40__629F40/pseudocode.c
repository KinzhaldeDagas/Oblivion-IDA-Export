int __thiscall sub_629F40(void *this, Actor *a2, float a3, float a4, float a5, char a6, char a7)
{
  int v8; // ebx
  double v9; // st7
  int result; // eax

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x2C0))(this); /*0x629f4d*/
  v8 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x184))(this); /*0x629f61*/
  if ( Actor::GetDeadState(a2) == 5 || Actor::GetDeadState(a2) == 3 ) /*0x629f7b*/
    return 0; /*0x62a001*/
  if ( LOBYTE(a2->members.unk0B4[5]) /*0x629fae*/
    || v8 && (*(_DWORD *)(v8 + 0x1C) & 0x2000) != 0
    || a2->vtbl->IsInCombat(a2, 1)
    || a6 )
  {
    return 0x201; /*0x629fae*/
  }
  if ( !a7 ) /*0x629fb4*/
  {
    v9 = a3; /*0x629fc2*/
    if ( ((*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x2C0))(this) & 0x200) != 0 ) /*0x629fca*/
    {
      if ( a4 <= v9 ) /*0x629fd7*/
        return 0x201; /*0x629fe1*/
    }
    else
    {
      result = 0x201; /*0x629fef*/
      if ( a5 < v9 ) /*0x629ff4*/
        return result; /*0x629ff4*/
    }
  }
  return 0x101; /*0x629fd9*/
}
