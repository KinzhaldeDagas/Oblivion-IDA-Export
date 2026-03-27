void __thiscall sub_6D0760(NiTimeController *this, NiObjectNET *a2)
{
  if ( (*((int (__thiscall **)(NiObjectNET *))a2->vtbl + 3))(a2) )
  {
    NiTimeController::SetTarget(this, a2);
    if ( *((_DWORD *)this + 0x14) )
    {
      ((void (__thiscall *)(NiTimeController *))this->vtbl[1].super.DumpChildAttributes)(this);
      *((_BYTE *)this + 0x5B) = 1;
    }
  }
  else
  {
    NiTimeController::SetTarget(this, 0);
  }
}
