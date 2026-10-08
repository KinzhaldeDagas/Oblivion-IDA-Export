int __thiscall sub_64B1B0(_DWORD *this, _DWORD *a2)
{
  if ( a2 ) /*0x64b1b8*/
    return ActorSkinInfo_GetCachedNode(a2, 7); /*0x64b1cb*/
  else
    return *(this + 0x41); /*0x64b1ba*/
}
