bhkCharacterProxy *__thiscall sub_69FB80(MobileObject *this, char a2)
{
  bhkCharacterProxy *result; // eax

  result = MobileObject_GetCharProxy(this);
  if ( result )
  {
    if ( a2 )
    {
      (*(void (__thiscall **)(bhkCharacterProxy *, _DWORD))(*(_DWORD *)result + 0x88))(result, 0);
      return (bhkCharacterProxy *)((_DWORD *(__thiscall *)(MobileObject *))this->vtbl[1].super.super.Destroy)(this);
    }
    else
    {
      sub_893950(result);
      return (bhkCharacterProxy *)sub_69F6D0(this);
    }
  }
  return result;
}
