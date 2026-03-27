int __cdecl GetGlobalScriptStateObj__(char a1)
{
  int result; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  result = Console_;
  if ( !Console_ )
  {
    if ( a1 )
    {
      v2 = (_DWORD *)FormHeapAlloc(0x34u);
      if ( v2 )
        v3 = sub_585B60(v2);
      else
        v3 = 0;
      Console_ = (int)v3;
      sub_585540(v3);
      return Console_;
    }
  }
  return result;
}
