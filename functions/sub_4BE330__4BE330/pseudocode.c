LONG __thiscall sub_4BE330(void *this, __int16 a2, __int16 a3)
{
  int v4; // edx
  unsigned int i; // ebp
  unsigned int j; // edi
  int v7; // eax
  int (__thiscall *v8)(void *, int, IOTask **); // edx
  LONG result; // eax
  IOTask *v10; // ebx
  IOTask *task; // [esp+14h] [ebp-10h] BYREF
  unsigned int v12; // [esp+20h] [ebp-4h]

  v4 = uGridsToLoad; /*0x4be357*/
  for ( i = 0; i < v4; ++i ) /*0x4be35f*/
  {
    for ( j = 0; j < v4; ++j ) /*0x4be369*/
    {
      v7 = TESObjectCELL_PackExteriorGroupLabel(a2 + i - (v4 >> 1), a3 + j - (v4 >> 1)); /*0x4be38c*/
      task = 0; /*0x4be394*/
      v8 = *(int (__thiscall **)(void *, int, IOTask **))(*(_DWORD *)this + 4); /*0x4be39a*/
      v12 = 0; /*0x4be3a5*/
      result = v8(this, v7, &task); /*0x4be3a9*/
      if ( (_BYTE)result ) /*0x4be3ad*/
        IOTask_Cancel(task); /*0x4be3ba*/
      v10 = task; /*0x4be3bf*/
      v12 = 0xFFFFFFFF; /*0x4be3c5*/
      if ( task ) /*0x4be3cd*/
      {
        result = InterlockedDecrement((volatile LONG *)&task->members.unk08); /*0x4be3d3*/
        if ( !result ) /*0x4be3db*/
        {
          if ( v10 ) /*0x4be3df*/
            result = (*(int (__thiscall **)(IOTask *, int))v10->vtbl)(v10, 1); /*0x4be3e9*/
        }
      }
      v4 = uGridsToLoad; /*0x4be3eb*/
    }
  }
  return result; /*0x4be403*/
}
