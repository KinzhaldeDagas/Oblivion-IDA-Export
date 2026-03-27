int __userpurge EffectItem_SetSCITName_::BadArg@<eax>(int edi0@<edi>, const char *esi0@<esi>, int a3, int a4)
{
  return EffectItem_SetSCITName_::CopyName(2 * (esi0 == 0) - 1, edi0, esi0, a3, a4);
}
