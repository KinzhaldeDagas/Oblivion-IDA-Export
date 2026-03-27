char __thiscall PlayerCharacter_AddMagicItemForm(void *this, int a2)
{
  char v2; // bl
  int v4; // [esp+0h] [ebp-Ch]

  v2 = Actor_AddMagicItemForm(this, a2, v4);
  if ( v2 )
    PlayerCharacter_SetKnownEffect(a2);
  return v2;
}
