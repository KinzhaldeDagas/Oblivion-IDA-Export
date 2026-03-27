void __thiscall sub_4E4FE0(unsigned __int16 **this, int a2, float *a3)
{
  int v4; // eax
  __int16 v5; // bx
  int v6; // eax

  if ( !sub_4E4F70(this, a2, a3) )
  {
    v4 = sub_4E4E90((int)this, a2);
    v5 = v4;
    if ( v4 != 0xFFFFFFFF )
    {
      v6 = FormHeapAlloc(0x10u);
      *(_WORD *)v6 = v5;
      *(float *)(v6 + 4) = *a3;
      *(float *)(v6 + 8) = a3[1];
      *(float *)(v6 + 0xC) = a3[2];
      BSSimpleList_PushFront(this + 0xA, v6);
    }
  }
}
