bhkCharacterProxy *__thiscall sub_65A3B0(Actor *this, char a2)
{
  bhkCharacterProxy *result; // eax

  result = MobileObject_GetCharProxy((MobileObject *)this); /*0x65a3b0*/
  if ( result ) /*0x65a3b9*/
  {
    if ( a2 ) /*0x65a3c0*/
      return (*(bhkCharacterProxy *(__thiscall **)(bhkCharacterProxy *, _DWORD))(*(_DWORD *)result + 0x88))(result, 0); /*0x65a3d2*/
    else
      return (bhkCharacterProxy *)sub_893950(result); /*0x65a3d4*/
  }
  return result; /*0x65a3d9*/
}
