char __thiscall PlayerCharacter_AddMagicItemForm(void *this, int a2)
{
  char v2; // bl
  int v4; // [esp+0h] [ebp-Ch]
  int v5; // [esp+4h] [ebp-8h]

  v2 = Actor_AddMagicItemForm(this, a2, v4, v5); /*0x6646df*/
  if ( v2 ) /*0x6646e3*/
    PlayerCharacter_SetKnownEffect(a2); /*0x6646e8*/
  return v2; /*0x6646ed*/
}
