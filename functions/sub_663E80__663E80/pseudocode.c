void __thiscall sub_663E80(int this)
{
  float duration; // [esp+0h] [ebp-4h]

  if ( !*(_BYTE *)(this + 0x7F9) )
  {
    duration = flt_A30634;
    *(_BYTE *)(this + 0x7F9) = 1;
    GameUI_QueueMessage((const char *)sNoCharge, 0, 1u, duration);
  }
}
