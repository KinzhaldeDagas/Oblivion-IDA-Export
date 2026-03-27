void __thiscall sub_6CAC60(_DWORD *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // esi
  _DWORD *v5; // ebp
  unsigned int i; // [esp+10h] [ebp-4h]

  v2 = 0;
  if ( *(this + 0x11) )
    sub_6C9CB0((int)this, 0.0, 0);
  for ( i = 0; i < *(this + 3); ++i )
  {
    v3 = *(this + 5);
    v4 = *(_DWORD *)(v3 + v2 + 4);
    v5 = (_DWORD *)(v3 + v2 + 4);
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      *v5 = 0;
    }
    *(_DWORD *)(*(this + 5) + v2 + 8) = 0;
    v2 += 0x10;
  }
}
