int __thiscall sub_66C6A0(PlayerCharacter *this, int *a2)
{
  int result; // eax
  int *v3; // esi
  char v5; // bl

  v3 = a2;
  if ( a2 )
  {
    v5 = 0;
    do
    {
      result = *v3;
      if ( !*v3 )
        break;
      result = (int)sub_669690(this, (TESTopic *)result, 0, 1);
      if ( (_BYTE)result )
        v5 = 1;
      v3 = (int *)v3[1];
    }
    while ( v3 );
    if ( v5 )
      return (int)sub_52F6D0((tListTopic *)&this->unk5E4);
  }
  return result;
}
