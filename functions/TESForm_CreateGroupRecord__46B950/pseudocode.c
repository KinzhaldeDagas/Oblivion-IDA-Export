_DWORD *__thiscall TESForm_CreateGroupRecord(TESForm *this, void *a2, void *a3)
{
  _DWORD *result; // eax

  result = a2; /*0x46b950*/
  if ( a2 ) /*0x46b958*/
  {
    if ( !a3 ) /*0x46b95e*/
    {
      *(_DWORD *)a2 = dword_B05E20; /*0x46b967*/
      *((_DWORD *)a2 + 3) = 0; /*0x46b969*/
      *((_DWORD *)a2 + 2) = *(_DWORD *)(0xC * (unsigned __int8)this->member.type + 0xB05E08); /*0x46b97a*/
      *((_DWORD *)a2 + 1) = 0; /*0x46b97d*/
      *((_DWORD *)a2 + 4) = 0; /*0x46b980*/
    }
  }
  return result; /*0x46b984*/
}
