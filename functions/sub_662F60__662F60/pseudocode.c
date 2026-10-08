void __thiscall sub_662F60(void *this, unsigned __int8 a2, volatile LONG *a3)
{
  _DWORD *v3; // ebp
  int v4; // ecx
  char *v5; // eax
  volatile LONG *v6; // edi
  unsigned int v7; // esi
  volatile LONG *v8; // esi
  char *FormModelPAth; // eax
  char *v10; // esi

  v3 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x662f6e*/
  v4 = v3[0x3A]; /*0x662f70*/
  if ( v4 && sub_52BDB0(v4, 0) ) /*0x662f7c*/
    (*(void (__thiscall **)(_DWORD *, int))(v3[0x2B] + 0x18))(v3 + 0x2B, stru_B38B68); /*0x662f9b*/
  else
    (*(void (__thiscall **)(_DWORD *, int))(v3[0x2B] + 0x18))(v3 + 0x2B, stru_B38B70); /*0x662fb4*/
  v5 = BuildKFListForModelDirectory(*(char **)stru_B36BB8, 1); /*0x662fc4*/
  v6 = a3; /*0x662fc9*/
  v7 = (unsigned int)v5; /*0x662fda*/
  sub_43BDA0(MEMORY[0xB33A1C], (int)v5, a2, a3, 0); /*0x662fde*/
  FormHeapFree(v7); /*0x662fe4*/
  sub_43B420((int *)MEMORY[0xB33A1C], (IOTask **)&a3, *(const char **)stru_B36BB8, a2, v6, 0, 0, 1, 0); /*0x663008*/
  if ( a3 ) /*0x663013*/
  {
    v8 = a3; /*0x663015*/
    if ( !InterlockedDecrement(a3 + 2) ) /*0x66301b*/
      (**(void (__thiscall ***)(volatile LONG *, int))v8)(v8, 1); /*0x663031*/
  }
  FormModelPAth = GetFormModelPAth(v3); /*0x663036*/
  v10 = BuildKFListForModelDirectory(FormModelPAth, 1); /*0x663053*/
  sub_43BDA0(MEMORY[0xB33A1C], (int)v10, a2, v6, 0); /*0x663057*/
  FormHeapFree((unsigned int)v10); /*0x66305d*/
}
