// positive sp value has been detected, the output may be wrong!
int __usercall strncat_::main_loop_entrance_0@<eax>(
        int a1@<ecx>,
        char a2@<bl>,
        int a3@<edi>,
        int *a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // eax
  int v9; // edx
  int *v10; // esi

  v8 = (*a4 + 0x7EFEFEFF) ^ ~*a4; /*0x98947a*/
  v9 = *a4; /*0x98947c*/
  v10 = a4 + 1; /*0x98947e*/
  if ( (v8 & 0x81010100) != 0 ) /*0x989486*/
  {
    if ( !(_BYTE)v9 ) /*0x98948a*/
    {
      *(_BYTE *)a3 = 0; /*0x98945a*/
      return a5; /*0x989463*/
    }
    if ( !BYTE1(v9) ) /*0x98948e*/
    {
      *(_WORD *)a3 = (unsigned __int8)v9; /*0x9894ba*/
      return a5; /*0x9894c4*/
    }
    if ( (v9 & 0xFF0000) == 0 ) /*0x989496*/
    {
      *(_WORD *)a3 = v9; /*0x9894aa*/
      *(_BYTE *)(a3 + 2) = 0; /*0x9894b3*/
      return a5; /*0x9894b9*/
    }
    if ( (v9 & 0xFF000000) == 0 ) /*0x98949e*/
    {
      *(_DWORD *)a3 = v9; /*0x9894a0*/
      return a5; /*0x9894a9*/
    }
  }
  return strncat_::main_loop_2(v9, a1, a2, (_DWORD *)a3, v10, a5, a6, a7, a8); /*0x9894a9*/
}
