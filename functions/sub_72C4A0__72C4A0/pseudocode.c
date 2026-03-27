int __thiscall sub_72C4A0(int this)
{
  int v1; // edx
  int result; // eax
  unsigned __int16 *v3; // ecx

  v1 = *(unsigned __int16 *)(this + 0x22);
  result = 0;
  if ( *(_WORD *)(this + 0x22) )
  {
    v3 = *(unsigned __int16 **)(this + 0x18);
    do
    {
      result += *v3++;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
