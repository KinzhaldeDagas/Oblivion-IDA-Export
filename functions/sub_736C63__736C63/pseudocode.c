// positive sp value has been detected, the output may be wrong!
unsigned int __usercall sub_736C63@<eax>(
        unsigned int a1@<eax>,
        char a2@<cl>,
        char a3@<bl>,
        unsigned int a4@<ebp>,
        unsigned int a5@<edi>,
        _BYTE *a6@<esi>,
        int a7,
        unsigned __int8 a8)
{
  unsigned __int8 v8; // dl
  unsigned int v9; // eax
  unsigned int i; // ebp
  char v11; // dl
  unsigned int result; // eax
  unsigned int v13; // edi
  unsigned __int8 v14; // bl
  _BYTE *v15; // esi
  unsigned int v16; // edx
  unsigned __int8 v17; // [esp-47h] [ebp-47h]
  char v18; // [esp-46h] [ebp-46h]
  char v19; // [esp-45h] [ebp-45h]
  char v20; // [esp-38h] [ebp-38h]
  char v21; // [esp-34h] [ebp-34h]
  char v22; // [esp-30h] [ebp-30h]
  int v23; // [esp-2Ch] [ebp-2Ch]
  int v24; // [esp-28h] [ebp-28h]
  char v25; // [esp-20h] [ebp-20h]
  char v26; // [esp-1Ch] [ebp-1Ch]
  int v27; // [esp-10h] [ebp-10h]
  int v28; // [esp-Ch] [ebp-Ch]
  char v29; // [esp-6h] [ebp-6h]
  char v30; // [esp-5h] [ebp-5h]
  unsigned __int8 v31; // [esp-2h] [ebp-2h]
  unsigned __int8 v32; // [esp-1h] [ebp-1h]

  v19 = ((_BYTE)a1 << v20) | (a4 >> a3) | (a1 >> a2); /*0x736c8f*/
  v8 = v31; /*0x736c93*/
  v9 = (v27 & a5) >> v29; /*0x736c97*/
  for ( i = 0; v8 >= v17; i = (v9 | i) << v17 ) /*0x736c9d*/
    v8 -= v17; /*0x736ca5*/
  v11 = ((_BYTE)v9 << v22) | (i >> v17) | (v9 >> (v21 - v8)); /*0x736ce1*/
  result = (v28 & a5) >> v30; /*0x736ce3*/
  v13 = 0; /*0x736ce5*/
  if ( a8 > v32 ) /*0x736ce9*/
  {
    v14 = v32; /*0x736d02*/
  }
  else
  {
    v14 = v32; /*0x736cee*/
    do /*0x736cfe*/
    {
      v14 -= a8; /*0x736cf0*/
      v13 = (result | v13) << a8; /*0x736cf8*/
    }
    while ( v14 >= a8 ); /*0x736cfe*/
  }
  *a6 = v18; /*0x736d09*/
  a6[1] = v19; /*0x736d15*/
  v15 = a6 + 1; /*0x736d1c*/
  v15[1] = v11; /*0x736d1f*/
  v16 = result >> (v25 - v14); /*0x736d29*/
  LOBYTE(result) = (_BYTE)result << v26; /*0x736d38*/
  v15[2] = result | (v13 >> a8) | v16; /*0x736d45*/
  if ( v23 != 1 ) /*0x736d4f*/
    JUMPOUT(0x736BD0); /*0x736bd0*/
  if ( v24 != 1 ) /*0x736d5e*/
    JUMPOUT(0x736B50); /*0x736b50*/
  return result; /*0x736d6b*/
}
