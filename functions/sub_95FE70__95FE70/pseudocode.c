_WORD *__cdecl sub_95FE70(int a1)
{
  _WORD *v1; // eax
  _WORD *v2; // esi

  v1 = (_WORD *)FormHeapAlloc(0x18u);
  if ( v1 )
  {
    v2 = sub_95F810(v1);
    (**(void (__thiscall ***)(_WORD *, int))v2)(v2, a1);
    return v2;
  }
  else
  {
    (**(void (__thiscall ***)(_DWORD, int))0)(0, a1);
    return 0;
  }
}
