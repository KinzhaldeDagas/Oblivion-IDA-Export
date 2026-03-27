unsigned int *__thiscall sub_7722B0(unsigned int *this, char a2)
{
  int v3; // ebp
  _DWORD *v4; // ebx
  unsigned int *v5; // eax
  int v6; // ebp
  _DWORD *v7; // edi
  int v8; // eax
  int v9; // esi

  if ( (a2 & 2) != 0 )
  {
    v3 = *(this + 0xFFFFFFFF);
    v4 = this + 0xFFFFFFFF;
    v5 = this + 0x18 * v3;
    v6 = v3 - 1;
    if ( v6 >= 0 )
    {
      v7 = v5 + 5;
      do
      {
        v8 = v7[0xFFFFFFE8];
        v7 += 0xFFFFFFE8;
        if ( v8 )
          sub_77CB50(*(_DWORD *)(v8 + 8));
        sub_773620(v7[0xFFFFFFFE]);
        v9 = v7[0xFFFFFFFC];
        if ( v9 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
            (**(void (__thiscall ***)(int, int))v9)(v9, 1);
        }
        --v6;
      }
      while ( v6 >= 0 );
    }
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)v4);
    return v4;
  }
  else
  {
    sub_772100(this);
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)this);
    return this;
  }
}
