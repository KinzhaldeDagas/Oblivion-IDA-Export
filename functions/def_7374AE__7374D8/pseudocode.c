void __userpurge def_7374AE(
        int a1@<eax>,
        _DWORD *a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        unsigned int a37)
{
  unsigned int v37; // ebp
  unsigned int v38; // esi
  int v39; // eax
  int v40; // edx
  int v41; // [esp-Ch] [ebp-Ch]

  v37 = a37;
  v38 = 0;
  if ( a37 )
  {
    do
    {
      v39 = a2[0x17];
      v41 = *(_DWORD *)(v39 + 4 * v38 + 4) - *(_DWORD *)(v39 + 4 * v38);
      v40 = a2[0x14] + *(_DWORD *)(v39 + 4 * v38);
      a11 = 1;
      (*(void (__cdecl **)(int, int, int, int *, int))(a36 + 4))(a36, v40, v41, &a11, 1);
      ++v38;
    }
    while ( v38 < v37 );
    a1 = a9;
  }
  if ( a1 + 2 >= a8 )
    JUMPOUT(0x7376CA);
  JUMPOUT(0x7374A9);
}
