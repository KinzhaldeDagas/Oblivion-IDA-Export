int __usercall _cftoa_l@<eax>(
        int a1@<ebx>,
        unsigned int *a2,
        _BYTE *a3,
        unsigned int a4,
        int a5,
        int a6,
        struct localeinfo_struct *a7)
{
  _BYTE *v7; // esi
  int *v8; // eax
  int result; // eax
  unsigned int v10; // eax
  bool v11; // zf
  _BYTE *v12; // esi
  char *v13; // eax
  _BYTE *v14; // esi
  _BYTE *v15; // esi
  _BYTE *v16; // esi
  _BYTE *v17; // eax
  _BYTE *v18; // esi
  int v19; // eax
  unsigned __int16 v20; // ax
  unsigned int v21; // ecx
  _BYTE *i; // eax
  _BYTE *v23; // esi
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  _BYTE *v27; // esi
  _BYTE *v28; // edi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // [esp-Ch] [ebp-38h]
  int v35; // [esp-4h] [ebp-30h]
  int v36; // [esp+8h] [ebp-24h] BYREF
  int v37; // [esp+10h] [ebp-1Ch]
  char v38; // [esp+14h] [ebp-18h]
  int v39; // [esp+18h] [ebp-14h]
  int v40; // [esp+1Ch] [ebp-10h]
  unsigned __int64 v41; // [esp+20h] [ebp-Ch]
  int v42; // [esp+28h] [ebp-4h]
  _BYTE *v43; // [esp+38h] [ebp+Ch]

  v39 = 0x3FF; /*0x9900a4*/
  v42 = 0x30; /*0x9900ad*/
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v36, a7); /*0x9900b4*/
  if ( a5 < 0 ) /*0x9900bc*/
    a5 = 0; /*0x9900be*/
  v7 = a3; /*0x9900c1*/
  if ( !a3 || !a4 ) /*0x9900f6*/
  {
    v8 = _errno(); /*0x9900c8*/
    v35 = 0x16; /*0x9900cd*/
LABEL_5:
    *v8 = v35; /*0x9900cf*/
    _invalid_parameter(a1, 0, v35); /*0x9900d7*/
    if ( v38 ) /*0x9900e3*/
      *(_DWORD *)(v37 + 0x70) &= ~2u; /*0x9900e8*/
    return v35; /*0x9900ee*/
  }
  *a3 = 0; /*0x990101*/
  if ( a4 <= a5 + 0xB ) /*0x990104*/
  {
    v8 = _errno(); /*0x990106*/
    v35 = 0x22; /*0x99010b*/
    goto LABEL_5; /*0x99010d*/
  }
  LODWORD(v41) = *a2; /*0x990114*/
  if ( ((a2[1] >> 0x14) & 0x7FF) == 0x7FF )
  {
    v10 = a4; /*0x990139*/
    if ( a4 != 0xFFFFFFFF ) /*0x99013f*/
      v10 = a4 - 2; /*0x990145*/
    result = _cftoe((int *)a2, a3 + 2, v10, a5, 0); /*0x990153*/
    if ( result ) /*0x99015d*/
    {
      v11 = v38 == 0; /*0x99015f*/
      *a3 = 0; /*0x990163*/
      if ( !v11 ) /*0x990166*/
        *(_DWORD *)(v37 + 0x70) &= ~2u; /*0x99016f*/
      return result; /*0x990173*/
    }
    if ( a3[2] == 0x2D ) /*0x99017b*/
    {
      *a3 = 0x2D; /*0x99017d*/
      v7 = a3 + 1; /*0x990180*/
    }
    *v7 = 0x30; /*0x990181*/
    v12 = v7 + 1; /*0x990184*/
    *v12 = a6 == 0 ? 0x78 : 0x58;
    v13 = strrchr(v12 + 1, 0x65); /*0x990198*/
    if ( v13 )
    {
      *v13 = a6 == 0 ? 0x70 : 0x50;
      v13[3] = 0; /*0x9901b8*/
    }
  }
  else
  {
    if ( (a2[1] & 0x80000000) != 0 ) /*0x9901ca*/
    {
      *a3 = 0x2D; /*0x9901cc*/
      v7 = a3 + 1; /*0x9901cf*/
    }
    *v7 = 0x30; /*0x9901d3*/
    v14 = v7 + 1; /*0x9901d6*/
    *v14 = a6 == 0 ? 0x78 : 0x58;
    v15 = v14 + 1; /*0x9901e7*/
    if ( (a2[1] & 0x7FF00000) != 0 ) /*0x9901fe*/
    {
      *v15 = 0x31; /*0x990221*/
      v16 = v15 + 1; /*0x990224*/
    }
    else
    {
      *v15 = 0x30; /*0x990200*/
      v16 = v15 + 1; /*0x99020e*/
      if ( a2[1] & 0xFFFFF | *a2 ) /*0x99020f*/
        v39 = 0x3FE; /*0x990218*/
      else
        v39 = 0; /*0x990213*/
    }
    v17 = v16; /*0x990225*/
    v18 = v16 + 1; /*0x990227*/
    v43 = v17; /*0x99022b*/
    if ( a5 ) /*0x99022e*/
      *v17 = ***(_BYTE ***)(v36 + 0xBC); /*0x990241*/
    else
      *v17 = 0; /*0x990230*/
    v19 = *a2; /*0x990246*/
    HIDWORD(v41) = a2[1] & 0xFFFFF; /*0x99024e*/
    if ( HIDWORD(v41) || v19 )
    {
      v41 = 0xF000000000000LL; /*0x99025b*/
      do
      {
        if ( a5 <= 0 ) /*0x990269*/
          break; /*0x990269*/
        v20 = unknown_libname_200(v41 & *(_QWORD *)a2 & 0xFFFFFFFFFFFFFLL, v42) + 0x30; /*0x990289*/
        if ( v20 > 0x39u )
          LOBYTE(v20) = (a6 != 0 ? 7 : 0x27) + v20;
        v21 = HIDWORD(v41); /*0x990294*/
        v42 -= 4; /*0x990297*/
        *v18++ = v20; /*0x99029b*/
        --a5; /*0x9902a8*/
        v41 = __PAIR64__(v21, v41) >> 4; /*0x9902b3*/
      }
      while ( (__int16)v42 >= 0 );
      if ( (__int16)v42 >= 0 && (unsigned __int16)unknown_libname_200(v41 & *(_QWORD *)a2 & 0xFFFFFFFFFFFFFLL, v42) > 8u )
      {
        for ( i = v18 + 0xFFFFFFFF; *i == 0x66 || *i == 0x46; --i ) /*0x9902df*/
          *i = 0x30; /*0x9902ee*/
        if ( i == v43 )
        {
          ++i[0xFFFFFFFF]; /*0x99030d*/
        }
        else if ( *i == 0x39 )
        {
          *i = a6 != 0 ? 0x41 : 0x61;
        }
        else
        {
          ++*i; /*0x990309*/
        }
      }
    }
    if ( a5 > 0 ) /*0x990314*/
    {
      _memset((int)v18, 0x30, a5); /*0x99031c*/
      v18 += a5; /*0x990324*/
    }
    if ( !*v43 ) /*0x99032a*/
      v18 = v43; /*0x99032f*/
    *v18 = a6 == 0 ? 0x70 : 0x50;
    v23 = v18 + 1; /*0x990347*/
    v24 = unknown_libname_200(*(_QWORD *)a2, 0x34u) & 0x7FF; /*0x99034f*/
    HIDWORD(v26) = 0; /*0x99035a*/
    v25 = v24 - (unsigned int)v39; /*0x990356*/
    if ( v25 < 0 ) /*0x99035d*/
    {
      *v23 = 0x2D; /*0x99036b*/
      v27 = v23 + 1; /*0x99036e*/
      v25 = -v25; /*0x990373*/
    }
    else
    {
      *v23 = 0x2B; /*0x990365*/
      v27 = v23 + 1; /*0x990368*/
    }
    v28 = v27; /*0x990377*/
    *v27 = 0x30; /*0x990379*/
    if ( v25 >= 0 ) /*0x99037c*/
    {
      LODWORD(v26) = 0x3E8; /*0x99037e*/
      if ( v25 >= 0x3E8 ) /*0x990387*/
      {
        v34 = v26; /*0x99038a*/
        v30 = v25 % v26; /*0x99038d*/
        v29 = v25 / v34; /*0x99038d*/
        *v27++ = v29 + 0x30; /*0x990394*/
        v40 = HIDWORD(v29); /*0x990399*/
        v25 = v30; /*0x99039c*/
        if ( v27 != v28 ) /*0x9903a0*/
          goto LABEL_60; /*0x9903a0*/
      }
    }
    if ( v25 >= 0x64 ) /*0x9903ab*/
    {
LABEL_60:
      v32 = v25 % 0x64; /*0x9903b3*/
      v31 = v25 / 0x64; /*0x9903b3*/
      *v27 = v31 + 0x30; /*0x9903ba*/
      v40 = HIDWORD(v31); /*0x9903bc*/
      ++v27; /*0x9903bf*/
      v25 = v32; /*0x9903c0*/
    }
    if ( v27 != v28 || v25 >= 0xA ) /*0x9903d1*/
    {
      v33 = v25 % 0xA; /*0x9903d9*/
      *v27++ = v25 / 0xA + 0x30; /*0x9903e0*/
      LOBYTE(v25) = v25 % 0xA; /*0x9903e6*/
      v40 = HIDWORD(v33); /*0x9903e8*/
    }
    *v27 = v25 + 0x30; /*0x9903ed*/
    v27[1] = 0; /*0x9903ef*/
  }
  if ( v38 ) /*0x9903f7*/
    *(_DWORD *)(v37 + 0x70) &= ~2u; /*0x9903fc*/
  return 0; /*0x990403*/
}
