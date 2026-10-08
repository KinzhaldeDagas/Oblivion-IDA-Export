// CSpeedTreeRT::InstanceOf. Oblivion returns instanceData->parent for instances and NULL for base trees; this matches the later Fallout symbol and 4.1 API contract.
const OB_CSpeedTreeRT_010201A0 *__thiscall CSpeedTreeRT__InstanceOf(OB_CSpeedTreeRT_010201A0 *this)
{
  const OB_CSpeedTreeRT_010201A0 **instanceData; // ecx
  const OB_CSpeedTreeRT_010201A0 *result; // eax

  instanceData = (const OB_CSpeedTreeRT_010201A0 **)this->instanceData; /*0x787050*/
  result = 0; /*0x787053*/
  if ( instanceData ) /*0x787057*/
    return *instanceData; /*0x787059*/
  return result; /*0x78705b*/
}
