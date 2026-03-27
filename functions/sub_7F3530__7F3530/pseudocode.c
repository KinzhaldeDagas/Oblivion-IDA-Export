void __thiscall sub_7F3530(int this, float a2, float a3, float a4, float a5)
{
  int v6; // eax
  float v7; // [esp+1Ch] [ebp+10h]

  if ( LOBYTE(a5) )
  {
    v6 = Double_To_SInt32(a2 * ((double)*(int *)(this + 0x194) / *(float *)(this + 0x7C)));
    if ( v6 <= 0 )
      v6 = 1;
    sub_7F2BA0(this, v6);
    v7 = a2 * a4;
    *(float *)(this + 0x18C) = *(float *)(this + 0x18C) + v7;
  }
  else
  {
    sub_7F3220((float *)this, a2, a3);
  }
}
