void __thiscall sub_6E3400(int *this, float a2, float a3)
{
  int v4; // [esp+Ch] [ebp-4h] BYREF

  v4 = (int)this;
  v4 = *(this + 3);
  sub_6D3540(0, *(this + 4), (float **)&v4, this + 2, a2, a3);
  *(this + 3) = v4;
}
