void __thiscall sub_7A7800(unsigned int *this)
{
  unsigned int v2; // edi
  unsigned int v3; // edi
  unsigned int v4; // edi
  unsigned int v5; // edi
  unsigned int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // edi
  unsigned int v9; // edi
  unsigned int v10; // edi

  v2 = *(this + 0x16);
  if ( v2 )
  {
    sub_784B60((unsigned int *)*(this + 0x16));
    FormHeapFree(v2);
  }
  v3 = *(this + 0x17);
  if ( v3 )
  {
    sub_784B60((unsigned int *)*(this + 0x17));
    FormHeapFree(v3);
  }
  v4 = *(this + 0x15);
  if ( v4 )
  {
    sub_784B60((unsigned int *)*(this + 0x15));
    FormHeapFree(v4);
  }
  v5 = *(this + 0x14);
  if ( v5 )
  {
    sub_784B60((unsigned int *)*(this + 0x14));
    FormHeapFree(v5);
  }
  v6 = *(this + 0x1B);
  if ( v6 )
  {
    sub_784B60((unsigned int *)*(this + 0x1B));
    FormHeapFree(v6);
  }
  v7 = *(this + 0x19);
  if ( v7 )
  {
    sub_784B60((unsigned int *)*(this + 0x19));
    FormHeapFree(v7);
  }
  v8 = *(this + 0x1A);
  if ( v8 )
  {
    sub_784B60((unsigned int *)*(this + 0x1A));
    FormHeapFree(v8);
  }
  v9 = *(this + 0x18);
  if ( v9 )
  {
    sub_784B60((unsigned int *)*(this + 0x18));
    FormHeapFree(v9);
  }
  v10 = *(this + 0x1C);
  if ( v10 )
  {
    sub_784B60((unsigned int *)*(this + 0x1C));
    FormHeapFree(v10);
  }
  *(this + 0x16) = 0;
  *(this + 0x17) = 0;
  *(this + 0x15) = 0;
  *(this + 0x14) = 0;
  *(this + 0x1B) = 0;
  *(this + 0x19) = 0;
  *(this + 0x1A) = 0;
  *(this + 0x18) = 0;
  *(this + 0x1C) = 0;
}
