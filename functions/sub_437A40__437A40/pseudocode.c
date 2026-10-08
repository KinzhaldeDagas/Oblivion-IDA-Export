char __thiscall sub_437A40(_DWORD *this, char *a2)
{
  const char *v2; // eax

  v2 = *(const char **)(*(this + 8) + 0xA4); /*0x437a48*/
  if ( !v2 ) /*0x437a4d*/
    v2 = EmptyString; /*0x437a4f*/
  _sprintf(a2, "Queued head for NPC %s", v2); /*0x437a5f*/
  return 1; /*0x437a69*/
}
