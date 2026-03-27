void __thiscall sub_6847B0(int *this)
{
  float *v2; // eax
  int *v3; // eax
  int v4; // [esp-4h] [ebp-1Ch]

  if ( !*(this + 0xC) )
  {
    v2 = (float *)FormHeapAlloc(0x34u);
    if ( v2 )
      v3 = (int *)sub_680DC0(v2);
    else
      v3 = 0;
    v4 = *(this + 0xA);
    *(this + 0xC) = (int)v3;
    sub_680E20(v3, v4);
  }
}
