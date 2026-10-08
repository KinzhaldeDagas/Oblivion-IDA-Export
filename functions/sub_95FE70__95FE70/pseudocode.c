_WORD *__cdecl sub_95FE70(int a1)
{
  _WORD *v1; // eax
  _WORD *v2; // esi

  v1 = (_WORD *)FormHeapAlloc(0x18u); /*0x95fe73*/
  if ( v1 ) /*0x95fe7d*/
  {
    v2 = sub_95F810(v1); /*0x95fe8a*/
    (**(void (__thiscall ***)(_WORD *, int))v2)(v2, a1); /*0x95fe93*/
    return v2; /*0x95fe95*/
  }
  else
  {
    (**(void (__thiscall ***)(_DWORD, int))0)(0, a1); /*0x95fea6*/
    return 0; /*0x95fea8*/
  }
}
