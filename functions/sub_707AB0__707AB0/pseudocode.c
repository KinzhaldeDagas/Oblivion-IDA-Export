// Pass227: Base object-map/reference collection called before NiScreenSpaceCamera child array traversal.
char __thiscall sub_707AB0(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_6FFE10(this, a2); /*0x707ab9*/
  if ( *((_DWORD *)this + 0x29) ) /*0x707abe*/
    result = sub_707A60((int)this + 0x98, a2); /*0x707ad1*/
  v4 = *((_DWORD *)this + 0x2A); /*0x707ad6*/
  if ( v4 ) /*0x707ade*/
    return (*(char (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x38))(v4, a2); /*0x707ae6*/
  return result; /*0x707ae8*/
}
