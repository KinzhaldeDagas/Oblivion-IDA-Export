int __thiscall sub_7234B0(int *this, unsigned int *a2)
{
  unsigned int *v3; // esi
  int result; // eax
  unsigned int v5; // eax
  int (__cdecl *v6)(unsigned int, unsigned int **, int, _DWORD *, int); // eax
  _DWORD *v7; // eax
  Ni2DBuffer *v8; // eax
  Ni2DBuffer **v9; // edi
  unsigned int v10; // [esp-14h] [ebp-34h]
  _DWORD v11[2]; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v12; // [esp+1Ch] [ebp-4h]

  v3 = a2; /*0x7234d7*/
  sub_707F00(this, (int)a2); /*0x7234dc*/
  sub_712A20(v3); /*0x7234e3*/
  result = sub_712A20(v3); /*0x7234ea*/
  if ( v3[0x36] >= 0x5000015 ) /*0x7234f9*/
  {
    v5 = v3[0x87]; /*0x7234fb*/
    LOBYTE(a2) = 0; /*0x72350f*/
    v10 = v5; /*0x723514*/
    v6 = *(int (__cdecl **)(unsigned int, unsigned int **, int, _DWORD *, int))(v5 + 4); /*0x723515*/
    v11[0] = 1; /*0x723518*/
    result = v6(v10, &a2, 1, v11, 1); /*0x723520*/
    if ( (_BYTE)a2 ) /*0x72352a*/
    {
      v7 = (_DWORD *)FormHeapAlloc(0x10u); /*0x72352e*/
      v11[1] = v7; /*0x723536*/
      v12 = 0; /*0x72353c*/
      if ( v7 ) /*0x723544*/
        v8 = (Ni2DBuffer *)sub_7385B0(v7); /*0x723548*/
      else
        v8 = 0; /*0x72354f*/
      v9 = (Ni2DBuffer **)(this + 0x2F); /*0x723551*/
      v12 = 0xFFFFFFFF; /*0x72355a*/
      NiSmartPointer_Set__(v9, v8); /*0x723562*/
      return sub_7386E0((int *)*v9, (int)v3); /*0x72356a*/
    }
  }
  return result; /*0x72356f*/
}
