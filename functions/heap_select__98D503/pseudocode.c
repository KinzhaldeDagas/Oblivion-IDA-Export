signed int __usercall __heap_select@<eax>(int a1@<ebx>, int a2@<edi>)
{
  signed int v2; // eax
  int v3; // edx
  signed int v4; // eax
  int v5; // edx
  int v7; // [esp-4h] [ebp-10h]
  int v8; // [esp-4h] [ebp-10h]
  unsigned int v9; // [esp+4h] [ebp-8h] BYREF
  int v10; // [esp+8h] [ebp-4h] BYREF

  v10 = 0;
  v9 = 0;
  v2 = sub_981BF8(&v10);
  if ( v2 )
    _invoke_watson(v2, v3, v7, a1, a2, 0);
  v4 = sub_981C2F(&v9);
  if ( v4 )
    _invoke_watson(v4, v5, v8, a1, a2, 0);
  if ( v10 == 2 && v9 >= 5 )
    return 1;
  else
    return 3;
}
