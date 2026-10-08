char __thiscall sub_52F480(char *this, const char *a2)
{
  unsigned __int8 **v3; // edi
  int v4; // eax
  int v6[3]; // [esp+0h] [ebp-10h] BYREF

  strlen(a2); /*0x52f4a0*/
  _alloca_(v6[0]); /*0x52f4ae*/
  strcpy((char *)v6, a2); /*0x52f4b7*/
  v3 = (unsigned __int8 **)(this + 0x34); /*0x52f4ce*/
  if ( v6 && *v3 ) /*0x52f4d3*/
    v4 = CRT_StricmpLocaleDispatch(*v3, (unsigned __int8 *)v6); /*0x52f4db*/
  else
    v4 = 2 * (v6 == 0) - 1; /*0x52f4ec*/
  if ( !v4 ) /*0x52f4f2*/
    return 0; /*0x52f4f4*/
  BSStringT_Set((BSStringT *)(this + 0x34), (const char *)v6, 0); /*0x52f4fd*/
  return 1; /*0x52f507*/
}
