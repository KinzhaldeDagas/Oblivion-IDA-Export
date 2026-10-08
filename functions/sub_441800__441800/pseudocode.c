// ODismemberment authority: loaded cell effect child lookup by quadrant/index; hit particles use index 3 after sub_4C9BE0(ref).
int __thiscall sub_441800(TESObjectCELL *this, int a2, unsigned int a3)
{
  unsigned int v3; // esi
  NiNode *NiNode; // eax
  int v5; // eax

  v3 = a2 + 2; /*0x441805*/
  NiNode = GetObjectPointerAt_054(this); /*0x441808*/
  if ( NiNode /*0x441836*/
    && NiNode->members.children.end > v3
    && (v5 = *((_DWORD *)&NiNode->members.children.data->vtbl + v3)) != 0
    && *(unsigned __int16 *)(v5 + 0xB6) > a3 )
  {
    return *(_DWORD *)(*(_DWORD *)(v5 + 0xB0) + 4 * a3); /*0x44183e*/
  }
  else
  {
    return 0; /*0x441845*/
  }
}
