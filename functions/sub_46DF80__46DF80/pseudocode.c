void __thiscall sub_46DF80(unsigned int *this)
{
  unsigned int *v2; // eax
  unsigned int v3; // edi
  unsigned int v4; // [esp-4h] [ebp-Ch]

  while ( *(this + 2) || *(this + 1) )
  {
    v2 = (unsigned int *)*(this + 2);
    v3 = *(this + 1);
    if ( v2 )
    {
      *(this + 2) = v2[1];
      *(this + 1) = *v2;
      FormHeapFree((unsigned int)v2);
      FormHeapFree(v3);
    }
    else
    {
      v4 = *(this + 1);
      *(this + 1) = 0;
      FormHeapFree(v4);
    }
  }
  sub_46DE10(this + 3);
}
