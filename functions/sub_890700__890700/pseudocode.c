// MorrowindMovements jump correction source: vanilla jump setup writes state 1 Jumping and stores jump-height impulse at proxy+0x31C after hkFactor scaling.
void __thiscall sub_890700(int this, float a2)
{
  *(_DWORD *)(this + 0x2A0) = 1; /*0x890704*/
  *(float *)(this + 0x31C) = a2 * hkFactor; /*0x890714*/
}
