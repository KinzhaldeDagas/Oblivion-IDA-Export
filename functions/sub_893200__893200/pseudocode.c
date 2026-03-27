void __thiscall sub_893200(unsigned int *this, char a2)
{
  unsigned int v3; // esi

  if ( a2 )
  {
    v3 = *(this + 3);
    if ( v3 )
    {
      sub_890F70((_DWORD *)*(this + 3));
      FormHeapFree(v3);
    }
    *(this + 3) = 0;
  }
}
