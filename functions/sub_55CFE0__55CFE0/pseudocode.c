int __thiscall sub_55CFE0(char **this, int *destination, _DWORD **cloningProcess)
{
  int result; // eax

  if ( destination ) /*0x55cfea*/
  {
    OB_NiNode_CopyMembersForClone(this, destination, cloningProcess); /*0x55cff8*/
    OB_NiSmartPointer_Assign_010201A0(destination + 0x37, (int *)this + 0x37); /*0x55d00a*/
    qmemcpy(destination + 0x38, this + 0x38, 0x28u); /*0x55d020*/
    destination[0x43] = *((int *)this + 0x43); /*0x55d05e*/
    result = *((unsigned __int8 *)this + 0x110); /*0x55d064*/
    *((_BYTE *)destination + 0x110) = result; /*0x55d06b*/
    *((_BYTE *)destination + 0x111) = *((_BYTE *)this + 0x111); /*0x55d078*/
  }
  return result; /*0x55d07e*/
}
