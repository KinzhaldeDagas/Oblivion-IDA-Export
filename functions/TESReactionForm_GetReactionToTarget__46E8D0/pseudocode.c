int __thiscall TESReactionForm_GetReactionToTarget(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ecx

  if ( a2 ) /*0x46e8d6*/
  {
    v2 = this + 1; /*0x46e8d8*/
    if ( this != (_DWORD *)0xFFFFFFFC ) /*0x46e8dd*/
    {
      do /*0x46e8e0*/
      {
        v3 = (_DWORD *)*v2; /*0x46e8e0*/
        if ( !*v2 ) /*0x46e8e0*/
          break; /*0x46e8e0*/
        if ( *v3 == a2 ) /*0x46e8e8*/
          return TESReactionForm_GetReactionToTarget_::Return(v3, a2); /*0x46e8e8*/
        v2 = (_DWORD *)v2[1]; /*0x46e8ea*/
      }
      while ( v2 ); /*0x46e8e0*/
    }
  }
  return TESReactionForm_GetReactionToTarget_::Return_0(a2);
}
