// positive sp value has been detected, the output may be wrong!
BOOL __userpurge MiddleHighProc_HasShieldType_::Done@<eax>(int a1@<edi>, int a2, int a3)
{
  return (a3 & *(_DWORD *)(a1 + 0x164)) != 0;
}
