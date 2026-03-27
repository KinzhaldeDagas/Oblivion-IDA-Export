bhkCharacterProxy *__thiscall sub_65A3B0(Actor *this, char a2)
{
  bhkCharacterProxy *result; // eax

  result = MobileObject_GetCharProxy((MobileObject *)this);
  if ( result )
  {
    if ( a2 )
      return (*(bhkCharacterProxy *(__thiscall **)(bhkCharacterProxy *, _DWORD))(*(_DWORD *)result + 0x88))(result, 0);
    else
      return (bhkCharacterProxy *)sub_893950(result);
  }
  return result;
}
