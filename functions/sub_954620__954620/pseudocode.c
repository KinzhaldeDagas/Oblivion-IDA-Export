BOOL __thiscall sub_954620(char *this, int a2, _DWORD *a3, _DWORD **a4, _DWORD *a5, const void **a6)
{
  _DWORD **v7; // edi
  _DWORD *v8; // ebx
  _DWORD *v9; // ebp
  BOOL v10; // esi
  _DWORD *v12[4]; // [esp+10h] [ebp-10h] BYREF

  v7 = a4; /*0x95462e*/
  sub_9183A0(v12, (int)a4, *(this + 0x10)); /*0x954638*/
  v8 = a5; /*0x95463d*/
  v9 = a3; /*0x954641*/
  a4 = (_DWORD **)sub_953A70((unsigned __int8 *)this, a2, a3, v12, a5); /*0x954658*/
  sub_9536D0(0x10, (int)v7); /*0x954662*/
  sub_953E10((unsigned __int8 *)this, a2, v9, v12, v8, a4, a6); /*0x954682*/
  sub_9536D0(0x10, (int)v7); /*0x95468d*/
  v10 = *(_BYTE *)sub_918060(v12, (int)&a2) == 0; /*0x9546b0*/
  sub_918180(v12); /*0x9546b2*/
  return v10; /*0x9546b7*/
}
