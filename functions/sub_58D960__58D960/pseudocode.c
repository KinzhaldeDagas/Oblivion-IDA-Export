char __thiscall sub_58D960(float *this)
{
  OblivionTileValueView *v2; // eax
  OblivionTileValueView *v3; // eax
  float TimerPercent; // [esp+8h] [ebp-8h]
  float value; // [esp+Ch] [ebp-4h]
  float v7; // [esp+Ch] [ebp-4h]

  TimerPercent = InterfaceManager::GetTimerPercent(this); /*0x58d96c*/
  value = (*(this + 3) - *(this + 2)) * TimerPercent + *(this + 2); /*0x58d986*/
  v2 = Tile::GetOrCreateValue(*(Tile **)this, *((_DWORD *)this + 1)); /*0x58d98a*/
  if ( v2 ) /*0x58d991*/
    Tile::Value::SetFloat(v2, value); /*0x58d99d*/
  *(_DWORD *)(*(_DWORD *)this + 0x2C) |= 0x80u; /*0x58d9aa*/
  if ( 1.0 != TimerPercent ) /*0x58d9b6*/
    return 0; /*0x58d9eb*/
  v7 = *(this + 3); /*0x58d9c0*/
  v3 = Tile::GetOrCreateValue(*(Tile **)this, *((_DWORD *)this + 1)); /*0x58d9c5*/
  if ( v3 ) /*0x58d9cc*/
    Tile::Value::SetFloat(v3, v7); /*0x58d9d8*/
  sub_5895E0(this); /*0x58d9df*/
  return 1; /*0x58d9e6*/
}
