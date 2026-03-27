// positive sp value has been detected, the output may be wrong!
int __usercall def_47F5F7@<eax>(int a1@<ebp>, int a2@<edi>, int a3@<esi>, int a4)
{
  int result; // eax
  int v5; // [esp-8h] [ebp-8h]
  unsigned int v6; // [esp-4h] [ebp-4h]

  if ( a3 != 1 )
    JUMPOUT(0x47F5F2);
  result = 4 * a1;
  if ( v5 != 1 )
    JUMPOUT(0x47F5E5);
  if ( a2 + 1 < v6 )
    JUMPOUT(0x47F5C0);
  ++*(_DWORD *)(a4 + 0x68);
  return result;
}
