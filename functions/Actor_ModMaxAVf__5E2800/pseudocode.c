void __userpurge Actor_ModMaxAVf(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4, int a5, int a6)
{
  int v6; // edi
  int v8; // ebp
  float *ContainerChanges; // eax
  int v11; // [esp+10h] [ebp-8h]
  float v12; // [esp+14h] [ebp-4h]
  void *retaddr; // [esp+18h] [ebp+0h]

  v6 = a4; /*0x5e2802*/
  if ( a4 != 0xA || *(float *)&a5 >= 0.0 || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x278))(a1) ) /*0x5e2822*/
  {
    v8 = a1[0x16]; /*0x5e282d*/
    if ( v8 ) /*0x5e2832*/
    {
      if ( (*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 0x170))(a1, a2, a3) ) /*0x5e2841*/
        (*(int (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1); /*0x5e2853*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x278))(v8); /*0x5e2874*/
      v6 = v11; /*0x5e2876*/
    }
    if ( v6 == 8 && v12 < 0.0 ) /*0x5e2890*/
      (*(void (__thiscall **)(_DWORD *, void *))(*a1 + 0x3B8))(a1, retaddr); /*0x5e28a5*/
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x40))(a1, 0x100000); /*0x5e28b7*/
    if ( (unsigned int)(v6 - 0xC) <= 0x14 && (v6 == 0x12 || v6 == 0x1B) ) /*0x5e28c9*/
    {
      ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x11)); /*0x5e28ce*/
      if ( ContainerChanges ) /*0x5e28d5*/
        sub_484310(ContainerChanges); /*0x5e28d9*/
      (*(void (__thiscall **)(_DWORD *))(*a1 + 0x2C0))(a1); /*0x5e28e8*/
    }
  }
  Actor_ModMaxAVf_::Done(a4, a5, a6); /*0x5e28e9*/
}
