void __thiscall sub_65DEF0(unsigned int *this, int a2)
{
  int *v3; // ecx
  _DWORD *v4; // ecx

  v3 = (int *)*(this + 0x16B);
  if ( v3 )
  {
    BSSimpleList_Remove(v3, a2);
    v4 = (_DWORD *)*(this + 0x16B);
    if ( !*v4 )
    {
      BSSimpleList_Clear(v4);
      FormHeapFree(*(this + 0x16B));
      *(this + 0x16B) = 0;
    }
  }
}
