bhkCharacterProxy *__thiscall sub_69FB80(MobileObject *this, char a2)
{
  bhkCharacterProxy *result; // eax

  result = MobileObject_GetCharProxy(this); /*0x69fb83*/
  if ( result ) /*0x69fb8c*/
  {
    if ( a2 ) /*0x69fb93*/
    {
      (*(void (__thiscall **)(bhkCharacterProxy *, _DWORD))(*(_DWORD *)result + 0x88))(result, 0); /*0x69fb9f*/
      return ((bhkCharacterProxy *(__thiscall *)(MobileObject *))this->vtbl[1].super.super.Destroy)(this); /*0x69fbab*/
    }
    else
    {
      sub_893950(result); /*0x69fbb1*/
      return (bhkCharacterProxy *)sub_69F6D0(this); /*0x69fbb8*/
    }
  }
  return result; /*0x69fbad*/
}
