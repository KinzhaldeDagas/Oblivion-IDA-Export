_DWORD *__thiscall TESForm_CreateGroupRecord(TESForm *this, void *a2, void *a3)
{
  _DWORD *result; // eax

  result = a2;
  if ( a2 )
  {
    if ( !a3 )
    {
      *(_DWORD *)a2 = dword_B05E20;
      *((_DWORD *)a2 + 3) = 0;
      *((_DWORD *)a2 + 2) = *(_DWORD *)(0xC * (unsigned __int8)this->member.type + 0xB05E08);
      *((_DWORD *)a2 + 1) = 0;
      *((_DWORD *)a2 + 4) = 0;
    }
  }
  return result;
}
