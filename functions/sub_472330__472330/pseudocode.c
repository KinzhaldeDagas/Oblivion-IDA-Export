void __thiscall sub_472330(_DWORD **this, int a2)
{
  int v2; // esi
  int v3; // eax
  double MovementMagnitude; // st7

  if ( ActorAnimData_FindAnimMapEntry(*(this + 0x27), a2, &a2) ) /*0x472340*/
  {
    v2 = a2; /*0x472350*/
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0xC))(a2) ) /*0x47235b*/
    {
      if ( (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v2 + 0x10))(v2, 0xFFFFFFFF) ) /*0x47236a*/
      {
        v3 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v2 + 0x10))(v2, 0xFFFFFFFF); /*0x472379*/
        MovementMagnitude = TESAnimGroup_GetMovementMagnitude((float *)*(_DWORD *)(v3 + 0x68)); /*0x47237e*/
        Double_To_SInt32(MovementMagnitude); /*0x472383*/
      }
    }
  }
}
