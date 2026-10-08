_DWORD *__thiscall sub_724110(int this, _DWORD *a2, unsigned int a3)
{
  unsigned int v4; // eax
  int v5; // eax

  v4 = *(unsigned __int16 *)(this + 0xB6); /*0x724114*/
  *(_DWORD *)(this + 0xE8) = 1; /*0x72412a*/
  if ( a3 < v4 ) /*0x724134*/
    sub_405020(this + 0xEC, a3); /*0x72413d*/
  NiNode::RemoveObjectAt(this, a2, a3); /*0x72414a*/
  v5 = *(_DWORD *)(this + 0xE0); /*0x72414f*/
  if ( v5 > (int)0xFFFFFFFF /*0x72416b*/
    && (v5 >= *(unsigned __int16 *)(this + 0xB6) || !*(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * v5)) )
  {
    *(_DWORD *)(this + 0xE0) = 0xFFFFFFFF; /*0x724171*/
  }
  return a2; /*0x72417d*/
}
