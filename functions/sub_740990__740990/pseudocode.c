void __thiscall sub_740990(char **this, unsigned int *a2, _DWORD **a3)
{
  unsigned int v4; // eax

  sub_7214A0(this, a2, a3);
  if ( *(this + 4) && *(this + 3) )
  {
    a2[3] = (unsigned int)*(this + 3);
    a2[4] = FormHeapAlloc((unsigned __int64)(unsigned int)*(this + 3) >> 0x1E != 0 ? 0xFFFFFFFF : 4
                                                                                                * (_DWORD)*(this + 3));
    v4 = 0;
    if ( *(this + 3) )
    {
      do
      {
        *(_DWORD *)(a2[4] + 4 * v4) = *(_DWORD *)&(*(this + 4))[4 * v4];
        ++v4;
      }
      while ( v4 < (unsigned int)*(this + 3) );
    }
  }
  else
  {
    a2[4] = 0;
    a2[3] = 0;
  }
}
