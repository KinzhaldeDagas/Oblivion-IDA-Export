void __userpurge EffectItem_SetSCITName_::CopyName(int a1@<eax>, int a2@<edi>, const char *a3@<esi>, int a4, int a5)
{
  if ( a1 )
    BSStringT_Set((BSStringT *)(*(_DWORD *)(a2 + 0x18) + 8), a3, 0);
  EffectItem_SetSCITName_::Done(a4, a5);
}
