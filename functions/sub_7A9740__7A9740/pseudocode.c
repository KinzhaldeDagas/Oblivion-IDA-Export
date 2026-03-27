_DWORD *__userpurge sub_7A9740@<eax>(
        float *this@<ecx>,
        int a2@<ebp>,
        _DWORD *a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  unsigned int *v8; // eax
  _DWORD v10[10]; // [esp-10h] [ebp-44h] BYREF
  unsigned int v11; // [esp+18h] [ebp-1Ch] BYREF
  unsigned int v12; // [esp+1Ch] [ebp-18h]
  int v13; // [esp+30h] [ebp-4h]

  v13 = 1;
  a3[1] = 0;
  a3[2] = 0;
  a3[3] = 0;
  v10[8] = 1;
  v10[9] = v10;
  sub_7A3580(v10, a2, (int)&a4);
  sub_7A9240(this, v10[0], v10[1], v10[2], v10[3]);
  v8 = sub_7A8FC0(this, &v11);
  LOBYTE(v13) = 2;
  sub_79B2F0(a3, (int)v8);
  if ( v12 )
    FormHeapFree(v12);
  if ( a5 )
    FormHeapFree(a5);
  return a3;
}
