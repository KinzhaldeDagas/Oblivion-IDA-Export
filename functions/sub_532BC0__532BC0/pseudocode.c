int __thiscall sub_532BC0(int this, float a2, int a3)
{
  *(_DWORD *)this = 0;
  *(_DWORD *)(this + 4) = 0;
  sub_532370((volatile LONG **)this, a2, a3);
  return this;
}
