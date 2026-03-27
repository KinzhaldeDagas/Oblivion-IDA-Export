int __userpurge Actor_ModCurAVf_::CheckArmor@<eax>(_BYTE *a1@<esi>, int a2, int a3, int a4)
{
  float *ContainerChanges; // eax

  ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x44));
  if ( ContainerChanges )
    sub_484310(ContainerChanges);
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x2C0))(a1);
  return Actor_ModCurAVf_::Done(a2, a3, a4);
}
