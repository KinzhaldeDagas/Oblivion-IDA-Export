// Assign HighProcess+0x230, the action-5 idle-window timer. The action-5 handler decrements it before scanning and reseeds it to 1.000..5.999 seconds only after it becomes nonpositive.
void __thiscall HighProcess::SetAction5IdleTimer(HighProcess *this, float value)
{
  this->unk230 = value; /*0x6297d4*/
}
