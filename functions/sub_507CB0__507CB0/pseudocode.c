char sub_507CB0()
{
  TES *v0; // eax
  TESObjectCELL *currentInteriorCell; // ecx
  const char *v2; // eax
  int v4; // [esp-4h] [ebp-4h]

  v0 = TES;
  byte_B361FD ^= 1u;
  if ( v0 )
  {
    if ( byte_B361FD )
    {
      v4 = 0;
    }
    else
    {
      currentInteriorCell = v0->currentInteriorCell;
      if ( currentInteriorCell )
      {
        if ( !sub_4C9820(currentInteriorCell) )
        {
          sub_543BB0(&TES->sky->vtbl, 1);
          goto LABEL_10;
        }
        v0 = TES;
        v4 = 2;
      }
      else
      {
        v4 = 3;
      }
    }
    sub_543BB0(&v0->sky->vtbl, v4);
  }
LABEL_10:
  if ( IsConsoleMode )
  {
    v2 = (const char *)&aOff;
    if ( !byte_B361FD )
      v2 = (const char *)&aOn_0;
    Interface_ConsolePrint("Sky -> %s", v2);
  }
  return 1;
}
