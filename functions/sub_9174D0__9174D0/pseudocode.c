_OWORD *__thiscall sub_9174D0(_DWORD *this, _OWORD *a2)
{
  _DWORD *v2; // edx
  _OWORD *v3; // ebx
  int v4; // eax
  _OWORD *v5; // esi
  int v6; // ebx
  _OWORD *v7; // esi
  _OWORD *v8; // edi
  _OWORD *v9; // edi
  _OWORD *v10; // edi
  __int64 v11; // rax
  __int128 v13; // [esp+10h] [ebp-10h]
  __int128 v14; // [esp+10h] [ebp-10h]
  __int128 v15; // [esp+10h] [ebp-10h]
  __int128 v16; // [esp+10h] [ebp-10h]

  v2 = (_DWORD *)*(this + 0xC); /*0x9174dc*/
  v3 = a2; /*0x9174e0*/
  v4 = *(this + 0xF) - 1; /*0x9174e4*/
  v5 = a2; /*0x9174e9*/
  if ( v4 >= 3 ) /*0x9174eb*/
  {
    v6 = *(this + 0xF) >> 2; /*0x9174f4*/
    v4 = *(this + 0xF) - 1 - 4 * v6; /*0x9174fb*/
    do /*0x9175a7*/
    {
      LODWORD(v13) = *v2; /*0x917502*/
      DWORD1(v13) = v2[4]; /*0x917509*/
      DWORD2(v13) = v2[8]; /*0x917510*/
      HIDWORD(v13) = *(this + 3); /*0x917517*/
      *v5 = v13; /*0x917522*/
      LODWORD(v13) = v2[1]; /*0x917528*/
      DWORD1(v13) = v2[5]; /*0x91752f*/
      DWORD2(v13) = v2[9]; /*0x917536*/
      HIDWORD(v13) = *(this + 3); /*0x91753d*/
      v7 = v5 + 1; /*0x917546*/
      *v7 = v13; /*0x91754b*/
      LODWORD(v13) = v2[2]; /*0x917551*/
      DWORD1(v13) = v2[6]; /*0x917558*/
      DWORD2(v13) = v2[0xA]; /*0x91755f*/
      HIDWORD(v13) = *(this + 3); /*0x917566*/
      *++v7 = v13; /*0x917574*/
      LODWORD(v13) = v2[3]; /*0x91757a*/
      DWORD1(v13) = v2[7]; /*0x917581*/
      DWORD2(v13) = v2[0xB]; /*0x917588*/
      HIDWORD(v13) = *(this + 3); /*0x917592*/
      v8 = v7 + 1; /*0x91759b*/
      v5 = v7 + 2; /*0x91759d*/
      v2 += 0xC; /*0x9175a0*/
      --v6; /*0x9175a3*/
      *v8 = v13; /*0x9175a4*/
    }
    while ( v6 ); /*0x9175a7*/
    v3 = a2; /*0x9175ad*/
  }
  if ( v4 >= 0 ) /*0x9175b2*/
  {
    LODWORD(v14) = *v2; /*0x9175b6*/
    DWORD1(v14) = v2[4]; /*0x9175bd*/
    DWORD2(v14) = v2[8]; /*0x9175c4*/
    HIDWORD(v14) = *(this + 3); /*0x9175cb*/
    v9 = v5++; /*0x9175d4*/
    *v9 = v14; /*0x9175d9*/
  }
  if ( v4 >= 1 ) /*0x9175df*/
  {
    LODWORD(v15) = v2[1]; /*0x9175e4*/
    DWORD1(v15) = v2[5]; /*0x9175eb*/
    DWORD2(v15) = v2[9]; /*0x9175f2*/
    HIDWORD(v15) = *(this + 3); /*0x9175f9*/
    v10 = v5++; /*0x917602*/
    *v10 = v15; /*0x917607*/
  }
  if ( v4 >= 2 ) /*0x91760d*/
  {
    LODWORD(v16) = v2[2]; /*0x917612*/
    LODWORD(v11) = v2[6]; /*0x917616*/
    HIDWORD(v11) = v2[0xA]; /*0x917619*/
    *(_QWORD *)((char *)&v16 + 4) = v11; /*0x91761c*/
    HIDWORD(v16) = *(this + 3); /*0x917627*/
    *v5 = v16; /*0x917630*/
  }
  return v3; /*0x917633*/
}
