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

  v19 = ((_BYTE)a1 << v20) | (a4 >> a3) | (a1 >> a2);
  v8 = v31;
  v9 = (v27 & a5) >> v29;
  for ( i = 0; v8 >= v17; i = (v9 | i) << v17 )
    v8 -= v17;
  v11 = ((_BYTE)v9 << v22) | (i >> v17) | (v9 >> (v21 - v8));
  result = (v28 & a5) >> v30;
  v13 = 0;
  if ( a8 > v32 )
  {
    v14 = v32;
  }
  else
  {
    v14 = v32;
    do
    {
      v14 -= a8;
      v13 = (result | v13) << a8;
    }
    while ( v14 >= a8 );
  }
  *a6 = v18;
  a6[1] = v19;
  v15 = a6 + 1;
  v15[1] = v11;
  v16 = result >> (v25 - v14);
  LOBYTE(result) = (_BYTE)result << v26;
  v15[2] = result | (v13 >> a8) | v16;
  if ( v23 != 1 )
    JUMPOUT(0x736BD0);
  if ( v24 != 1 )
    JUMPOUT(0x736B50);
  return result;
}
