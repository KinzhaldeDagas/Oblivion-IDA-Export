IOTask *__thiscall sub_475300(int **this, UInt32 a2, UInt32 a3)
{
  int v4; // eax
  int **v5; // edi
  int v6; // ecx
  int *v7; // eax
  IOTask *v8; // eax
  IOTask *result; // eax

  v4 = (int)*(this + 0x33);
  v5 = this + 0x33;
  if ( v4 )
  {
    v6 = *(_DWORD *)(v4 + 0xC);
    if ( v6 == 5 )
    {
      v6 = 0;
    }
    else if ( *(_DWORD *)(v4 + 0xC) == 6 )
    {
      v6 = 3;
    }
    v7 = *(int **)(v4 + 0x10);
    if ( v7 )
    {
      if ( *(this + v6 + 0x28) == v7 )
        sub_4733A0((int)this, v6);
    }
    if ( *(this + 0x35) )
    {
      if ( *(this + 0x36) )
      {
        sub_472ED0(this, v5);
      }
      else
      {
        *(this + 0x36) = *v5;
        *v5 = 0;
      }
    }
    else
    {
      *(this + 0x35) = *v5;
      *v5 = 0;
    }
  }
  v8 = (IOTask *)FormHeapAlloc(0x2Cu);
  if ( v8 )
    result = sub_474C50(v8, a2, a3, (BSTask *)1, 0, 0);
  else
    result = 0;
  *v5 = (int *)result;
  return result;
}
