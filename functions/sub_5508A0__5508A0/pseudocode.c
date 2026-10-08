// Scan NiObjectNET extra data and return the FaceGen base-vertex data object used to restore authored positions.
NiObject *__cdecl NiObjectNET_FindFaceGenBaseVertexData(NiObjectNET *object)
{
  NiObject *result; // eax
  unsigned int m_extraDataListLen; // edi
  int v3; // esi
  NiExtraData **m_extraDataList; // ecx

  if ( !object ) /*0x5508a7*/
    return 0; /*0x5508a9*/
  m_extraDataListLen = object->members.m_extraDataListLen; /*0x5508ae*/
  if ( !object->members.m_extraDataListLen ) /*0x5508ae*/
    return 0; /*0x5508b7*/
  v3 = 0; /*0x5508bc*/
  while ( 1 ) /*0x5508c2*/
  {
    m_extraDataList = object->members.m_extraDataList; /*0x5508c2*/
    if ( m_extraDataList[(unsigned __int16)v3] ) /*0x5508c8*/
    {
      result = NiRTTI_Cast((BSStringT *)&stru_B39D90, (NiObject *)m_extraDataList[(unsigned __int16)v3]); /*0x5508d5*/
      if ( result ) /*0x5508df*/
        break; /*0x5508df*/
    }
    if ( ++v3 >= m_extraDataListLen ) /*0x5508e6*/
      return 0; /*0x5508e8*/
  }
  return result; /*0x5508ab*/
}
