// positive sp value has been detected, the output may be wrong!
int __userpurge MagicItem_GetFXEffect_::Return_StrongestEffect@<eax>(int a1@<esi>, int a2)
{
  return *(_DWORD *)(a1 + 0x1C);
}
