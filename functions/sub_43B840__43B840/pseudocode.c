char __thiscall sub_43B840(_DWORD *this, const char *a2, unsigned __int8 a3, volatile LONG *a4)
{
  int v4; // ecx
  IOTask *v5; // eax
  IOTask *v6; // esi
  IOTask *v8; // eax
  int v9; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+18h] [ebp-4h]

  v4 = *(this + 1); /*0x43b863*/
  v9 = 0; /*0x43b86e*/
  if ( (*(unsigned __int8 (__thiscall **)(int, const char *, int *))(*(_DWORD *)v4 + 4))(v4, a2, &v9) ) /*0x43b87d*/
  {
    if ( !a4 ) /*0x43b889*/
      return 0; /*0x43b8ec*/
    v5 = (IOTask *)FormHeapAlloc(0x30u); /*0x43b88d*/
    if ( v5 ) /*0x43b897*/
      v6 = sub_437890(v5, v9, a3); /*0x43b8aa*/
    else
      v6 = 0; /*0x43b8ae*/
    if ( v6 ) /*0x43b8b6*/
      InterlockedIncrement((volatile LONG *)&v6->members.unk08); /*0x43b8bc*/
    v10 = 0; /*0x43b8c5*/
    sub_43AC40((volatile LONG **)v6, a4); /*0x43b8cd*/
    (*((void (__thiscall **)(IOTask *))v6->vtbl + 0xA))(v6); /*0x43b8d7*/
  }
  else
  {
    v8 = (IOTask *)FormHeapAlloc(0x30u); /*0x43b8f1*/
    v10 = 1; /*0x43b8ff*/
    if ( v8 ) /*0x43b907*/
      v6 = sub_4377D0(v8, a2, a3); /*0x43b916*/
    else
      v6 = 0; /*0x43b91a*/
    if ( v6 ) /*0x43b922*/
      InterlockedIncrement((volatile LONG *)&v6->members.unk08); /*0x43b928*/
    v10 = 2; /*0x43b935*/
    sub_43AC40((volatile LONG **)v6, a4); /*0x43b93d*/
    (*((void (__thiscall **)(IOTask *))v6->vtbl + 8))(v6); /*0x43b949*/
  }
  v10 = 0xFFFFFFFF; /*0x43b94f*/
  if ( !InterlockedDecrement((volatile LONG *)&v6->members.unk08) ) /*0x43b957*/
    (*(void (__thiscall **)(IOTask *, int))v6->vtbl)(v6, 1); /*0x43b969*/
  return 1; /*0x43b8db*/
}
