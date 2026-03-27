void __cdecl sub_555A80(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        BSFaceGenModelMap *a14,
        __int64 ArgList,
        __int64 a16,
        __int64 a17,
        BSStringT a18,
        char a19,
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
        char a34,
        int a35,
        int a36,
        int a37,
        int a38)
{
  unsigned int v38; // eax
  const char **v39; // ecx
  int *v40; // edx
  int v41; // eax
  unsigned __int16 v42; // dx
  unsigned int v43; // eax
  const char *v44; // eax
  char *v45; // esi
  char *v46; // eax
  float v47; // [esp+0h] [ebp-A0h]
  float v48; // [esp+70h] [ebp-30h] BYREF
  char *v49; // [esp+8Ch] [ebp-14h]
  char *v50; // [esp+90h] [ebp-10h]
  char *v51; // [esp+94h] [ebp-Ch]
  int v52; // [esp+98h] [ebp-8h]
  int v53; // [esp+9Ch] [ebp-4h]

  v53 = 0;
  v47 = flt_A3721C;
  LOBYTE(v53) = 7;
  sub_70FD80(&v48, v47);
  if ( !*(_WORD *)(a3 + 0x7E) )
    goto LABEL_25;
  v38 = *(_DWORD *)(a3 + 0x78);
  if ( !*(_DWORD *)v38
    || ((v39 = *(const char ***)v38, LOWORD(v38) = *(_WORD *)(*(_DWORD *)v38 + 8), (_WORD)v38 != 0xFFFF)
      ? (v38 = (unsigned __int16)v38)
      : (v38 = strlen(v39[1])),
        !v38
     || !*(_WORD *)(a3 + 0x8E)
     || (v40 = *(int **)(a3 + 0x88), !*v40)
     || ((v41 = *v40, v42 = *(_WORD *)(*v40 + 8), v42 != 0xFFFF)
       ? (v43 = v42)
       : (v43 = strlen(*(const char **)(v41 + 4))),
         !v43)) )
  {
LABEL_25:
    JUMPOUT(0x556199);
  }
  v44 = (const char *)(*((int (__thiscall **)(const char **))*v39 + 5))(v39);
  BSStringT_Static_Format((BSStringT *)&ArgList, "Meshes\\%s", v44);
  if ( !*(_DWORD *)(a38 + 0xC0) )
  {
    v45 = (char *)ArgList;
    sub_551B40(&a18, (const char *)ArgList);
    if ( !sub_42BDE0(a18.m_data, 0, 0, 0xFFFFFFFF) )
    {
LABEL_17:
      v53 = 0;
      v52 = 1;
      v51 = sub_5500C0((BSStringT *)&a19, v45);
      v50 = sub_550010((BSStringT *)&a16, v45);
      v49 = v45;
      v46 = sub_54FEB0((BSStringT *)&a17, v45);
      sub_553620((int)v46, (int)v49, (int)v50, (int)v51, v52, v53);
      JUMPOUT(0x555EDB);
    }
    sub_551B40((BSStringT *)&ArgList, v45);
  }
  v45 = (char *)ArgList;
  goto LABEL_17;
}
