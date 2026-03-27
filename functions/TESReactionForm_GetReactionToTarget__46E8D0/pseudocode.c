int __thiscall TESReactionForm_GetReactionToTarget(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ecx

  if ( a2 )
  {
    v2 = this + 1;
    if ( this != (_DWORD *)0xFFFFFFFC )
    {
      do
      {
        v3 = (_DWORD *)*v2;
        if ( !*v2 )
          break;
        if ( *v3 == a2 )
          return TESReactionForm_GetReactionToTarget_::Return(v3, a2);
        v2 = (_DWORD *)v2[1];
      }
      while ( v2 );
    }
  }
  return TESReactionForm_GetReactionToTarget_::Return_0(a2);
}
