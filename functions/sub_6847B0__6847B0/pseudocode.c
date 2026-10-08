void __thiscall sub_6847B0(int *this)
{
  float *v2; // eax
  int *v3; // eax
  int v4; // [esp-4h] [ebp-1Ch]

  if ( !*(this + 0xC) ) /*0x6847d4*/
  {
    v2 = (float *)FormHeapAlloc(0x34u); /*0x6847dd*/
    if ( v2 ) /*0x6847f3*/
      v3 = (int *)sub_680DC0(v2); /*0x6847f7*/
    else
      v3 = 0; /*0x6847fe*/
    v4 = *(this + 0xA); /*0x684803*/
    *(this + 0xC) = (int)v3; /*0x68480e*/
    sub_680E20(v3, v4); /*0x684811*/
  }
}
