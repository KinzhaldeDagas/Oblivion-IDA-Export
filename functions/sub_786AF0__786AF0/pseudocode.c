// stBezierSpline text parser. Accepts strings beginning with BezierSpline, reads min/max/variance, then a braced control-point count followed by point, tangent, and tangent-length float groups.
void __thiscall OB_StBezierSpline_ParseFromString_010201A0(OB_stBezierSpline_010201A0 *this, const void *stringObject)
{
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // esi
  const char *v6; // esi
  const char *v7; // esi
  const char *v8; // eax
  const char *v9; // esi
  int v10; // eax
  const char *v11; // esi
  const char *v12; // esi
  const char *v13; // esi
  const char *v14; // esi
  int v15; // [esp+14h] [ebp-120h]
  float tangentLength; // [esp+18h] [ebp-11Ch]
  float tangent[2]; // [esp+1Ch] [ebp-118h] BYREF
  float point[2]; // [esp+24h] [ebp-110h] BYREF
  char String[260]; // [esp+2Ch] [ebp-108h] BYREF

  if ( *((_DWORD *)stringObject + 6) < 0x10u ) /*0x786b16*/
    v3 = (char *)stringObject + 4; /*0x786b1d*/
  else
    v3 = *((const char **)stringObject + 1); /*0x786b18*/
  v4 = sub_783E20(v3, String); /*0x786b24*/
  if ( !strcmp(String, "BezierSpline") ) /*0x786b39*/
  {
    v5 = sub_783E20(v4, String); /*0x786b4a*/
    this->minValue = atof(String); /*0x786b54*/
    v6 = sub_783E20(v5, String); /*0x786b60*/
    this->maxValue = atof(String); /*0x786b67*/
    v7 = sub_783E20(v6, String); /*0x786b74*/
    this->variance = atof(String); /*0x786b7b*/
    v8 = sub_783E20(v7, String); /*0x786b83*/
    if ( String[0] == 0x7B ) /*0x786b8d*/
    {
      v9 = sub_783E20(v8, String); /*0x786b98*/
      v10 = j__atol(String); /*0x786b9d*/
      if ( v10 > 0 ) /*0x786ba7*/
      {
        v15 = v10; /*0x786bad*/
        do /*0x786c3e*/
        {
          v11 = sub_783E20(v9, String); /*0x786bbf*/
          point[0] = atof(String); /*0x786bc6*/
          v12 = sub_783E20(v11, String); /*0x786bd4*/
          point[1] = atof(String); /*0x786bdb*/
          v13 = sub_783E20(v12, String); /*0x786be6*/
          tangent[0] = atof(String); /*0x786bf0*/
          v14 = sub_783E20(v13, String); /*0x786bfe*/
          tangent[1] = atof(String); /*0x786c05*/
          v9 = sub_783E20(v14, String); /*0x786c13*/
          tangentLength = atof(String); /*0x786c1a*/
          OB_StBezierSpline_AddControlPoint_010201A0(this, point, tangent, tangentLength); /*0x786c34*/
          --v15; /*0x786c39*/
        }
        while ( v15 ); /*0x786c3e*/
      }
    }
  }
}
