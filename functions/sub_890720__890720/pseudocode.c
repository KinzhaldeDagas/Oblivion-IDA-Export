// MorrowindMovements: commits pending state at proxy+0x2A0 into hkCharacterContext state slot proxy+0x1EC, then resets pending state to sentinel 0x0B. Use +0x1EC as active state when +0x2A0 is sentinel.
int __thiscall sub_890720(_DWORD *this)
{
  int result; // eax

  result = *(this + 0xA8); /*0x890720*/
  if ( result != 0xB ) /*0x890729*/
  {
    *(this + 0x7B) = result;                    // Writes pending state from proxy+0x2A0 into active hkCharacterContext state id at proxy+0x1EC. /*0x89072b*/
    *(this + 0xA8) = 0xB;                       // Resets proxy+0x2A0 to transition sentinel 0x0B after committing state. /*0x890731*/
  }
  return result; /*0x89073b*/
}
