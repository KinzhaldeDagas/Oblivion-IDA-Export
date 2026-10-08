int __thiscall sub_5E1F90(void *this)
{
  int v2; // ebx
  int v3; // edi

  v2 = 0; /*0x5e1f9d*/
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e1fa1*/
  if ( v3 ) /*0x5e1fa5*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e1fb1*/
      v2 = v3; /*0x5e1fb7*/
  }
  return (unsigned __int8)TESAIForm_GetEnergy((_BYTE *)(v2 + 0x68)); /*0x5e1fc1*/
}
