int __thiscall MagicCaster_GetFormID(void *this)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x20))(this);
  if ( v1 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v1 + 0x190))(v1) )
    return MagicCaster_GetFormID_::ExtractParentActor();
  else
    return MagicCaster_GetFormID_::BadParentForm();
}
