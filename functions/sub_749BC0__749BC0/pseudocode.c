TESForm *__thiscall sub_749BC0(unsigned __int16 *this, _DWORD *a2)
{
  TESForm *result; // eax
  TESForm *v4; // ebx
  int v5; // eax

  sub_717900(this, a2);
  result = (TESForm *)sub_7124D0(a2);
  if ( result )
  {
    v4 = result;
    do
    {
      v5 = sub_7124A0(a2);
      result = sub_749990(this, v5);
      v4 = (TESForm *)((char *)v4 + 0xFFFFFFFF);
    }
    while ( v4 );
  }
  return result;
}
