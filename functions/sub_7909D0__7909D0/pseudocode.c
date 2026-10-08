// Reads one stock counted string from CTreeFileAccess, allocates a 0x5C stBezierSpline/profile object, and constructs it from the text. Used by frond token 13005 and branch parameter/profile tokens.
void *__thiscall OB_CTreeFileAccess_ParseSplineProfileObject_010201A0(void *reader)
{
  char v2; // bl
  int v3; // edx
  OB_stBezierSpline_010201A0 *v4; // esi
  void *String_010201A0; // eax
  OB_stBezierSpline_010201A0 *v6; // esi
  _BYTE outSmallString[4]; // [esp+18h] [ebp-28h] BYREF
  unsigned int v9; // [esp+1Ch] [ebp-24h]
  unsigned int v10; // [esp+30h] [ebp-10h]
  int v11; // [esp+3Ch] [ebp-4h]

  v2 = 0; /*0x7909f8*/
  v4 = (OB_stBezierSpline_010201A0 *)FormHeapAlloc(0x5Cu); /*0x790a05*/
  v11 = 0; /*0x790a10*/
  if ( v4 ) /*0x790a14*/
  {
    String_010201A0 = OB_CTreeFileAccess_ReadString_010201A0((OB_CTreeFileAccess_010201A0 *)reader, v3, outSmallString); /*0x790a1d*/
    v2 = 1; /*0x790a22*/
    LOBYTE(v11) = 1; /*0x790a2a*/
    v6 = OB_StBezierSpline_ctor_cachedFromString_010201A0(v4, String_010201A0); /*0x790a38*/
  }
  else
  {
    v6 = 0; /*0x790a3c*/
  }
  if ( (v2 & 1) != 0 && v10 >= 0x10 ) /*0x790a48*/
    FormHeapFree(v9); /*0x790a4f*/
  return v6; /*0x790a59*/
}
