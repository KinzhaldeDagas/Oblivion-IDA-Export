int __thiscall MagicCaster_GetFormID(void *this)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x20))(this); /*0x699c79*/
  if ( v1 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v1 + 0x190))(v1) ) /*0x699c89*/
    return MagicCaster_GetFormID_::ExtractParentActor(); /*0x699c8e*/
  else
    return MagicCaster_GetFormID_::BadParentForm(); /*0x699c7d*/
}
