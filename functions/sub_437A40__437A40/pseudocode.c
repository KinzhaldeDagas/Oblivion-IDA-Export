char __thiscall sub_437A40(_DWORD *this, char *a2)
{
  const char *v2; // eax

  v2 = *(const char **)(*(this + 8) + 0xA4);
  if ( !v2 )
    v2 = EmptyString;
  _sprintf(a2, "Queued head for NPC %s", v2);
  return 1;
}
