int *__usercall sub_78B690@<eax>(int a1@<edi>, _DWORD *a2, int *a3)
{
  int *result; // eax
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // ebp
  rsize_t v8; // [esp-4h] [ebp-10h]
  int v9; // [esp+4h] [ebp-8h]

  if ( a2 && (result = a3) != 0 )
  {
    v4 = dword_B2B6D8;
    v5 = dword_B429B0;
    v6 = dword_B429B4;
    v9 = dword_B2B6DC;
    v7 = dword_B2B6E0;
    *a2 = dword_B429AC;
    a2[1] = v5;
    a2[2] = v6;
    *a3 = v4;
    a3[1] = v9;
    a3[2] = v7;
  }
  else
  {
    LODWORD(v8) = 0x3B;
    return sub_414500(&dword_B2B614, a1, "GetCamera() requires non-NULL position and direction values", v8);
  }
  return result;
}
