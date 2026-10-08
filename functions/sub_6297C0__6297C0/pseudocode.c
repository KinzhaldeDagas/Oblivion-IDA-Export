// Return HighProcess+0x230, the action-5 idle-window timer. HighProcess initializes it to rand()%5000 * 0.001 + 1.0 (1.000..5.999 seconds).
double __thiscall HighProcess::GetAction5IdleTimer(HighProcess *this)
{
  return this->unk230; /*0x6297c6*/
}
