char __userpurge sub_8A3420@<al>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3)
{
  int v4; // esi
  int v5; // eax
  int v7; // eax

  if ( a1 ) /*0x8a3427*/
  {
    v4 = a1[2]; /*0x8a342d*/
    if ( v4 ) /*0x8a3432*/
    {
      if ( v4 == 0xFFFFFFEC ) /*0x8a3439*/
        LOBYTE(v5) = 0; /*0x8a3440*/
      else
        v5 = *(_DWORD *)(v4 + 0x30); /*0x8a343b*/
      if ( (v5 & 0x3F) == 8 ) /*0x8a3446*/
      {
        bhkRefObject_UpdateHavokObject(a1); /*0x8a3448*/
        sub_8A9AB0(v4, a2, v4, a3, 1, 0); /*0x8a3458*/
LABEL_8:
        bhkRefObject_UpdateHavokObject(a1); /*0x8a345d*/
        return 1; /*0x8a3469*/
      }
      v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 0x50) + 8))(*(_DWORD *)(v4 + 0x50)); /*0x8a3474*/
      if ( v7 != a3 && (v7 < 6 || v7 > 7 || a3 >= 6 || sub_535AC0(a1) != *(float *)&SrcStr) ) /*0x8a349f*/
      {
        bhkRefObject_UpdateHavokObject(a1); /*0x8a34a3*/
        sub_8A9AB0(v4, a2, v4, a3, 1, 0); /*0x8a34ad*/
        goto LABEL_8; /*0x8a34ad*/
      }
    }
  }
  return 0; /*0x8a3464*/
}
