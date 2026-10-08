char *__thiscall sub_9411E0(int *this, char *a2, _DWORD *a3, int a4, int a5, char *a6)
{
  char *v6; // ebp
  _DWORD *v8; // edi
  char **v9; // eax
  const char *v10; // eax
  _DWORD *v11; // ecx
  char *v12; // eax
  _DWORD *v13; // edx
  const char *v14; // eax
  bool v15; // zf
  int v16; // ecx
  int v17; // edi
  int v18; // ebp
  int v19; // ecx
  int v20; // edi
  _DWORD *v21; // eax
  int v22; // edi
  char **v23; // esi
  int v25; // [esp-4h] [ebp-74h]
  char *v26; // [esp+10h] [ebp-60h] BYREF
  _DWORD v27[4]; // [esp+14h] [ebp-5Ch] BYREF
  char **v28; // [esp+24h] [ebp-4Ch] BYREF
  char *v29; // [esp+28h] [ebp-48h]
  const char *v30; // [esp+34h] [ebp-3Ch]
  _DWORD v31[3]; // [esp+3Ch] [ebp-34h] BYREF
  int v32; // [esp+48h] [ebp-28h]
  int v33; // [esp+4Ch] [ebp-24h]
  unsigned int v34; // [esp+50h] [ebp-20h]
  int v35; // [esp+54h] [ebp-1Ch]
  int v36; // [esp+58h] [ebp-18h]
  unsigned int v37; // [esp+5Ch] [ebp-14h]
  int v38; // [esp+60h] [ebp-10h]
  int v39; // [esp+64h] [ebp-Ch]
  unsigned int v40; // [esp+68h] [ebp-8h]
  int v41; // [esp+6Ch] [ebp-4h]

  v6 = a2; /*0x9411e5*/
  v8 = a3; /*0x9411f1*/
  v9 = (char **)a2; /*0x9411f9*/
  v26 = a2; /*0x9411fb*/
  a2 = (char *)a3; /*0x9411ff*/
  if ( a5 ) /*0x941203*/
  {
    (*(void (__thiscall **)(int, char **, char **))(*(_DWORD *)a5 + 4))(a5, &v26, &a2); /*0x941211*/
    v9 = (char **)v26; /*0x941214*/
  }
  if ( v9 ) /*0x94121a*/
  {
    v28 = v9; /*0x941228*/
    v29 = a2; /*0x941234*/
    v10 = sub_940F60(this, (unsigned int)v6, v8, a6); /*0x941238*/
    v25 = *(this + 3); /*0x941240*/
    v30 = v10; /*0x941245*/
    sub_8B0E80((char **)this + 5, (unsigned int)v6, v25); /*0x941249*/
    if ( *(this + 3) == (*(this + 4) & 0x3FFFFFFF) ) /*0x94125e*/
      sub_8A6EE0((const void **)this + 2, 0x18); /*0x941263*/
    v11 = (_DWORD *)(*(this + 2) + 0x18 * *(this + 3)); /*0x94127a*/
    v12 = v29; /*0x94127c*/
    *v11 = v28; /*0x941280*/
    v13 = a3; /*0x941282*/
    v11[1] = v12; /*0x941286*/
    v14 = v30; /*0x941289*/
    v11[2] = v6; /*0x94128d*/
    v11[3] = v13; /*0x941290*/
    v11[4] = v14; /*0x941293*/
    v11[5] = 0xFFFFFFFF; /*0x941299*/
    v15 = a2 == (char *)unk_BA8788; /*0x9412a6*/
    v16 = a2 == (char *)unk_BA8788; /*0x9412ab*/
    ++*(this + 3); /*0x9412ae*/
    v17 = *(this + 0x13); /*0x9412b4*/
    *(this + 0x14) += v16; /*0x9412b9*/
    *(this + 0x13) = !v15 + v17; /*0x9412cc*/
    sub_90BB90(&a3); /*0x9412cf*/
    sub_942D70((int)&v28, 0, &a3); /*0x9412dd*/
    v31[0] = 0; /*0x9412eb*/
    v31[1] = 0; /*0x9412ef*/
    v31[2] = 0x80000000; /*0x9412f3*/
    v32 = 0; /*0x9412f7*/
    v33 = 0; /*0x9412fb*/
    v34 = 0x80000000; /*0x9412ff*/
    v35 = 0; /*0x941303*/
    v36 = 0; /*0x941307*/
    v37 = 0x80000000; /*0x94130b*/
    v38 = 0; /*0x94130f*/
    v39 = 0; /*0x941313*/
    v40 = 0x80000000; /*0x941317*/
    v41 = 0; /*0x94131b*/
    sub_953140(v27); /*0x94131f*/
    sub_942D10(&v28, (int)v27, (int)v26, a2, (int)v31); /*0x94133c*/
    v18 = 0; /*0x941345*/
    if ( v33 > 0 ) /*0x941349*/
    {
      v19 = v32; /*0x94134b*/
      v20 = 0; /*0x94134f*/
      do /*0x94138c*/
      {
        v21 = *(_DWORD **)(v20 + v19 + 8); /*0x941351*/
        if ( v21 ) /*0x941357*/
        {
          sub_941070(this, *(_DWORD **)(v20 + v19 + 4), v21, a4, a5, a6); /*0x941379*/
          v19 = v32; /*0x94137e*/
        }
        ++v18; /*0x941386*/
        v20 += 0xC; /*0x941387*/
      }
      while ( v18 < v33 ); /*0x94138c*/
    }
    v22 = 0; /*0x941392*/
    if ( v36 > 0 ) /*0x941396*/
    {
      v23 = (char **)(this + 0xE); /*0x941398*/
      do /*0x9413b9*/
        sub_9429D0(v23, *(char **)(v35 + 8 * v22++ + 4), 0xFFFFFFFF); /*0x9413ad*/
      while ( v22 < v36 ); /*0x9413b9*/
    }
    v27[0] = &hkBaseObject::`vftable'; /*0x9413bf*/
    sub_941400(v31); /*0x9413c7*/
    sub_942E10(&v28); /*0x9413d0*/
    return a2; /*0x9413d5*/
  }
  else
  {
    sub_8B0E80((char **)this + 5, (unsigned int)v6, 0xFFFFFFFF); /*0x9413e9*/
    return a2; /*0x9413ee*/
  }
}
