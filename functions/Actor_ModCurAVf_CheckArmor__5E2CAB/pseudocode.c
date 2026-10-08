void __userpurge Actor_ModCurAVf_::CheckArmor(_BYTE *a1@<esi>, int a2, int a3, int a4)
{
  float *ContainerChanges; // eax

  ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x44)); /*0x5e2cae*/
  if ( ContainerChanges ) /*0x5e2cb5*/
    sub_484310(ContainerChanges); /*0x5e2cb9*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x2C0))(a1); /*0x5e2cc8*/
  Actor_ModCurAVf_::Done(a2, a3, a4); /*0x5e2cc9*/
}
