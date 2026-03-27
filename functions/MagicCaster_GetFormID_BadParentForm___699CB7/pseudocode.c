// positive sp value has been detected, the output may be wrong!
int __usercall MagicCaster_GetFormID_::BadParentForm_@<eax>(int a1@<eax>)
{
  int v1; // esi

  if ( a1 && (v1 = a1 + 0xC, (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 0xC) + 0x20))(a1 + 0xC)) )
    return *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x20))(v1) + 0xC);
  else
    return MagicCaster_GetFormID_::Return_0();
}
