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

  v10 = 0; /*0x98d50f*/
  v9 = 0; /*0x98d512*/
  v2 = sub_981BF8(a1, a2, &v10); /*0x98d515*/
  if ( v2 ) /*0x98d51d*/
    _invoke_watson(v2, v3, v7, a1, a2, 0); /*0x98d524*/
  v4 = sub_981C2F(a1, a2, &v9); /*0x98d530*/
  if ( v4 ) /*0x98d538*/
    _invoke_watson(v4, v5, v8, a1, a2, 0); /*0x98d53f*/
  if ( v10 == 2 && v9 >= 5 ) /*0x98d552*/
    return 1; /*0x98d556*/
  else
    return 3; /*0x98d55b*/
}
