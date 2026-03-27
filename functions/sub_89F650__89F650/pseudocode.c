char __thiscall sub_89F650(_DWORD *this, int a2, char *a3)
{
  char *v3; // edi
  char result; // al
  _DWORD *v6; // ecx
  _DWORD *v7; // ecx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = a3;
  if ( !a3 )
    v3 = dword_B3FA80;
  result = sub_890A10(this, (int)v3);
  if ( result )
  {
    if ( this )
    {
      v6 = (_DWORD *)*(this + 2);
      if ( v6 )
        result = (unsigned __int8)sub_8BC7B0(v6, &v8, (int)v3);
    }
  }
  if ( a2 )
  {
    result = 0;
    if ( this )
    {
      v7 = (_DWORD *)*(this + 2);
      if ( v7 )
        return (unsigned __int8)sub_8BC750(v7, (int)v3, a2, 0);
    }
  }
  return result;
}
