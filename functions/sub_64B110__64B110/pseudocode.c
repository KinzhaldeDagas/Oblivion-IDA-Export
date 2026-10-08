int __thiscall sub_64B110(int this, _DWORD *a2)
{
  if ( a2 ) /*0x64b118*/
    return ActorSkinInfo_GetCachedNode(a2, 3); /*0x64b13c*/
  if ( *(_BYTE *)(this + 0xF4) ) /*0x64b11a*/
    return *(_DWORD *)(this + 0x100); /*0x64b122*/
  return *(_DWORD *)(this + 0xFC); /*0x64b128*/
}
