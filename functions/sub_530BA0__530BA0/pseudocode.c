void __thiscall sub_530BA0(unsigned int *this, int *a2)
{
  unsigned int *v3; // eax
  unsigned int v4; // esi
  _DWORD *v5; // eax

  if ( a2 )
  {
    if ( !*(this + 0xC) )
    {
      v3 = (unsigned int *)FormHeapAlloc(0x10u);
      if ( v3 )
      {
        *v3 = 0;
        v3[1] = 0;
        v3[2] = 0;
        v3[3] = 0;
        *(this + 0xC) = (unsigned int)v3;
        sub_530A10(v3, (int)this, a2);
        return;
      }
      *(this + 0xC) = 0;
    }
    sub_530A10((unsigned int *)*(this + 0xC), (int)this, a2);
  }
  else
  {
    v4 = *(this + 0xC);
    if ( v4 )
    {
      sub_530500((unsigned int *)*(this + 0xC));
      FormHeapFree(v4);
      *(this + 0xC) = 0;
    }
    v5 = (_DWORD *)FormHeapAlloc(0x10u);
    if ( v5 )
    {
      *v5 = 0;
      v5[1] = 0;
      v5[2] = 0;
      v5[3] = 0;
      *(this + 0xC) = (unsigned int)v5;
    }
    else
    {
      *(this + 0xC) = 0;
    }
  }
}
