void __thiscall sub_74DC20(char *this, _DWORD *a2)
{
  unsigned int v3; // ebx
  char *v4; // ebp
  unsigned int i; // edi
  int v6; // esi
  LONG v7; // [esp+10h] [ebp-4h] BYREF

  sub_752CB0(a2);
  v3 = sub_7124D0(a2);
  v4 = this + 0x18;
  sub_523B10((unsigned __int16 *)this + 0xC, v3);
  for ( i = 0; i < v3; ++i )
  {
    v6 = sub_7124A0(a2);
    v7 = v6;
    if ( v6 )
      InterlockedIncrement((volatile LONG *)(v6 + 4));
    sub_4B34E0(v4, i, &v7);
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    }
  }
}
