_DWORD *__thiscall TESBound_constr(_DWORD *this)
{
  NiExtraData_ctor(this, (const char *)&off_A7D2CC);
  *this = &BSBound::`vftable';
  *(this + 3) = LODWORD(Vector3_InitValue_);
  *(this + 4) = *((_DWORD *)&Vector3_InitValue_ + 1);
  *(this + 5) = LODWORD(dword_B3F9B0);
  *(this + 6) = LODWORD(Vector3_InitValue_);
  *(this + 7) = *((_DWORD *)&Vector3_InitValue_ + 1);
  *(this + 8) = LODWORD(dword_B3F9B0);
  return this;
}
