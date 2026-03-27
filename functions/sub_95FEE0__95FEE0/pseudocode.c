void __thiscall sub_95FEE0(int this, int a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // edx

  if ( a2 )
  {
    v2 = 0;
    if ( *(_WORD *)(this + 0xE) )
    {
      v3 = *(_DWORD **)(this + 8);
      while ( a2 != *v3 )
      {
        ++v2;
        ++v3;
        if ( v2 >= *(unsigned __int16 *)(this + 0xE) )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(this + 4), &a2);
    }
  }
}
