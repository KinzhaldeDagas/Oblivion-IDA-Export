void __thiscall sub_6D1F60(char *this, _DWORD *a2)
{
  unsigned int v3; // ebx
  char *v4; // ebp
  unsigned int i; // edi
  int v6; // esi
  LONG v7; // [esp+14h] [ebp-10h] BYREF
  unsigned int v8; // [esp+20h] [ebp-4h]

  sub_75E480(a2);
  if ( *((_DWORD *)this + 0xC) )
  {
    v3 = sub_7124D0(a2);
    v4 = this + 0x40;
    sub_523B10((unsigned __int16 *)this + 0x20, v3);
    for ( i = 0; i < v3; ++i )
    {
      v6 = sub_7124A0(a2);
      v7 = v6;
      if ( v6 )
        InterlockedIncrement((volatile LONG *)(v6 + 4));
      v8 = 0;
      sub_5254D0(v4, i, &v7);
      v8 = 0xFFFFFFFF;
      if ( v6 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
          (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      }
    }
  }
}
