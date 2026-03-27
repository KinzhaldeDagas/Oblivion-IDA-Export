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

  v3 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
  v4 = v3[0x3A];
  if ( v4 && sub_52BDB0(v4, 0) )
    (*(void (__thiscall **)(_DWORD *, int))(v3[0x2B] + 0x18))(v3 + 0x2B, dword_B38B68);
  else
    (*(void (__thiscall **)(_DWORD *, int))(v3[0x2B] + 0x18))(v3 + 0x2B, dword_B38B70);
  v5 = sub_435830(*(char **)dword_B36BB8, 1);
  v6 = a3;
  v7 = (unsigned int)v5;
  sub_43BDA0(ModelLoaderPtr, (int)v5, a2, a3, 0);
  FormHeapFree(v7);
  sub_43B420((int *)ModelLoaderPtr, (IOTask **)&a3, *(const char **)dword_B36BB8, a2, v6, 0, 0, 1, 0);
  if ( a3 )
  {
    v8 = a3;
    if ( !InterlockedDecrement(a3 + 2) )
      (**(void (__thiscall ***)(volatile LONG *, int))v8)(v8, 1);
  }
  FormModelPAth = GetFormModelPAth(v3);
  v10 = sub_435830(FormModelPAth, 1);
  sub_43BDA0(ModelLoaderPtr, (int)v10, a2, v6, 0);
  FormHeapFree((unsigned int)v10);
}
