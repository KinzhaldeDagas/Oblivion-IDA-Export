void sub_7F3BA0()
{
  int v0; // esi

  v0 = unk_B4690C; /*0x7f3ba1*/
  if ( unk_B4690C ) /*0x7f3ba1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) ) /*0x7f3baf*/
    {
      if ( v0 ) /*0x7f3bbb*/
        (**(void (__thiscall ***)(int, int))v0)(v0, 1); /*0x7f3bc5*/
    }
    unk_B4690C = 0; /*0x7f3bc7*/
  }
}
