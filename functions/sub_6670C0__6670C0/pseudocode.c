int __thiscall sub_6670C0(Actor *this)
{
  int i; // esi
  int AVFromGroupOffset; // eax
  int result; // eax

  for ( i = 0; i < 0x15; ++i )
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, i);
    result = sub_663C50(this, *(float *)&AVFromGroupOffset);
  }
  return result;
}
