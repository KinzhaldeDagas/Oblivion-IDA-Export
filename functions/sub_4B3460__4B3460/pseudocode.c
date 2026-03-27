int __thiscall sub_4B3460(char *this, Data *a2)
{
  int v3; // eax
  _BYTE *v4; // edi
  char Str[260]; // [esp+Ch] [ebp-108h] BYREF

  v3 = FormHeapAlloc(8u);
  if ( v3 )
  {
    *(_BYTE *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
    v4 = (_BYTE *)v3;
  }
  else
  {
    v4 = 0;
  }
  sub_46D540(Str, this);
  sub_46D750(v4, a2, this, Str);
  return sub_4B3400((int *)this, (int)v4);
}
