// BSAnimGroupSequence ctor: stores parsed TESAnimGroup at +0x68 with refcount, copies source sequence/controller data from KF model.
BSAnimGroupSequence *__thiscall BSAnimGroupSequence_ctor(BSAnimGroupSequence *this, int a2, int a3)
{
  int v4; // ebp
  int v5; // edi
  const char *v6; // ebp
  unsigned int v7; // kr00_4
  char *v8; // eax
  _DWORD *v10; // [esp+18h] [ebp-1Ch] BYREF
  void (__thiscall ***v11)(_DWORD, int); // [esp+1Ch] [ebp-18h]
  int v12; // [esp+30h] [ebp-4h]

  sub_6C7FB0(this, *(char **)(a3 + 8), 0, 1, 0); /*0x49fdcb*/
  *(_DWORD *)this = &BSAnimGroupSequence::`vftable'; /*0x49fdd0*/
  v12 = 0; /*0x49fdd6*/
  *((_DWORD *)this + 0x1A) = 0; /*0x49fdda*/
  LOBYTE(v12) = 1; /*0x49fde3*/
  if ( a2 ) /*0x49fde8*/
  {
    *((_DWORD *)this + 0x1A) = a2; /*0x49fe0c*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x49fe15*/
  }
  v4 = *(_DWORD *)(a3 + 0x20); /*0x49fe1b*/
  v5 = *((_DWORD *)this + 8); /*0x49fe1e*/
  if ( v5 != v4 ) /*0x49fe23*/
  {
    if ( v5 ) /*0x49fe27*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x49fe2d*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x49fe43*/
    }
    *((_DWORD *)this + 8) = v4; /*0x49fe47*/
    if ( v4 ) /*0x49fe4a*/
      InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x49fe50*/
  }
  *((_DWORD *)this + 0x18) = *(_DWORD *)(a3 + 0x60); /*0x49fe59*/
  v6 = *(const char **)(a3 + 0x5C); /*0x49fe5f*/
  FormHeapFree(*((_DWORD *)this + 0x17)); /*0x49fe63*/
  *((_DWORD *)this + 0x17) = 0; /*0x49fe6d*/
  if ( v6 ) /*0x49fe74*/
  {
    v7 = strlen(v6); /*0x49fe78*/
    v8 = (char *)FormHeapAlloc(v7 + 1); /*0x49fe8f*/
    *((_DWORD *)this + 0x17) = v8; /*0x49fe97*/
    strcpy_s(v8, v7 + 1, v6); /*0x49fe9a*/
  }
  OB_NiCloningProcess_ctor((NiTPointerMap<NiObject *,NiObject *> **)&v10); /*0x49fea6*/
  LOBYTE(v12) = 2; /*0x49feb3*/
  sub_6C9420((unsigned int *)a3, (int)this, &v10); /*0x49feb8*/
  LOBYTE(v12) = 1; /*0x49fec3*/
  if ( v10 ) /*0x49fec8*/
    (*(void (__thiscall **)(_DWORD *, int))*v10)(v10, 1); /*0x49fed0*/
  if ( v11 ) /*0x49fed8*/
    (**v11)(v11, 1); /*0x49fee0*/
  return this; /*0x49fee4*/
}
