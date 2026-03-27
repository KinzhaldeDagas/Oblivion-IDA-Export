ActorAnimData *__thiscall sub_4DC550(void *this)
{
  ActorAnimData *result; // eax
  int **v2; // esi

  result = (ActorAnimData *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x164))(this);
  v2 = (int **)result;
  if ( result )
  {
    sub_475440(result, 1, 0);
    sub_470FC0(v2, 5, 0.0);
    sub_4715C0(v2[0x26], 0.0);
    sub_473120(v2[1]);
    return (ActorAnimData *)sub_4730B0(v2);
  }
  return result;
}
