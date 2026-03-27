int __userpurge sub_43FE30@<eax>(_DWORD *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, char a5)
{
  int v5; // ebp
  unsigned int i; // esi
  void **v8; // edx
  void *v9; // ecx

  v5 = 0;
  for ( i = 0; i < uInteriorCellBuffer; ++i )
  {
    v8 = (void **)(*(this + 0xE) + 4 * i);
    if ( *v8 )
    {
      if ( (!a5 || (v9 = (void *)*(this + 0xD)) == 0 || *v8 != v9) && !sub_4CA030(*v8) )
      {
        sub_447BA0(st5_0, a3, a4, *(TESObjectCELL **)(*(this + 0xE) + 4 * i));
        *(_DWORD *)(*(this + 0xE) + 4 * i) = 0;
        ++v5;
      }
    }
  }
  return v5;
}
