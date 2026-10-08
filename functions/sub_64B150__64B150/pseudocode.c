int __thiscall sub_64B150(_DWORD *this, _DWORD *a2)
{
  if ( a2 ) /*0x64b158*/
    return ActorSkinInfo_GetCachedNode(a2, 8); /*0x64b16b*/
  else
    return *(this + 0x40); /*0x64b15a*/
}
