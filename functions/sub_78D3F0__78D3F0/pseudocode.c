// Static CSpeedTreeRT::SetTime. Stores global wind time and sends the wind-change invalidation event to all registered unique trees.
void __cdecl CSpeedTreeRT__SetTime(float time)
{
  _DWORD v1[23]; // [esp+0h] [ebp-5Ch] BYREF

  v1[0x13] = v1; /*0x78d418*/
  CWindEngine__s_time = time; /*0x78d420*/
  v1[0x16] = 0; /*0x78d426*/
  CSpeedTreeRT__NotifyAllTreesOfEvent(0); /*0x78d42d*/
}
