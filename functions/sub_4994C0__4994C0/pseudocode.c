// Fog water decode: selects current water fog source record from base/day/night/override water records.
_DWORD *sub_4994C0()
{
  _DWORD *result; // eax
  int v1; // ecx
  Sky *GlobalObject; // eax
  Sky *v3; // eax
  double GameHour; // [esp+0h] [ebp-8h]
  double v5; // [esp+0h] [ebp-8h]

  result = *(_DWORD **)&MEMORY[0xB33E90][0x1390]; /*0x4994c0*/
  if ( MEMORY[0xB33E90][0x138C] ) /*0x4994c8*/
  {                                             // Fog water source: when override flag is active and field [0x2A] exists, return override water record.
    if ( result[0x2A] ) /*0x4994d1*/
    {
      v1 = result[0x2A]; /*0x4994da*/
      if ( v1 ) /*0x4994e2*/
        return (_DWORD *)v1; /*0x499560*/
    }
  }
  if ( !result ) /*0x4994e6*/
    return result; /*0x4994e6*/
  GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x4994f2*/
  GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x4994f5*/
  if ( sub_499200(GlobalObject) <= GameHour /*0x49952c*/
    || (v5 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]), v3 = Sky_CreateOrGetGlobalObject(), sub_499140(v3) > v5) )// Fog water source: compare game hour against night/sunrise climate boundaries to choose day versus night water record.
  {
    result = *(_DWORD **)&MEMORY[0xB33E90][0x1390]; /*0x499548*/
    if ( !*(_DWORD *)(*(_DWORD *)&MEMORY[0xB33E90][0x1390] + 0xA4) ) /*0x499554*/
      return result; /*0x499554*/
    v1 = result[0x29];                          // Fog water source: return night water record field [0x29] when available. /*0x499556*/
LABEL_12:
    if ( !v1 ) /*0x49955e*/
      return result; /*0x49955e*/
    return (_DWORD *)v1; /*0x49955e*/
  }
  result = *(_DWORD **)&MEMORY[0xB33E90][0x1390]; /*0x49952e*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x1390] && result[0x28] ) /*0x499537*/
  {
    v1 = result[0x28];                          // Fog water source: return day water record field [0x28] when available. /*0x499540*/
    goto LABEL_12; /*0x499546*/
  }
  return result; /*0x499562*/
}
