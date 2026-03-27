void __thiscall sub_4B7A20(TESForm *this)
{
  int v2; // edi

  if ( *((_DWORD *)this + 0x1B) )
  {
    do
    {
      v2 = *(_DWORD *)(*((_DWORD *)this + 0x1B) + 4);
      FormHeapFree(*((_DWORD *)this + 0x1B));
      *((_DWORD *)this + 0x1B) = v2;
    }
    while ( v2 );
  }
  *((_DWORD *)this + 0x1A) = 0;
  j_TESForm_ClearComponentReferences(this);
}
