int __stdcall sub_544160(UInt32 a1, char *Str1, void *a3, char a4)
{
  char *v4; // esi
  IOTask *v5; // eax
  IOTask *SkyTask; // eax
  IOManager *v7; // ecx
  int (__thiscall *v8)(IOManager *, IOTask *); // eax
  IOTask *v10; // [esp-4h] [ebp-12Ch]
  char v11[260]; // [esp+14h] [ebp-114h] BYREF
  unsigned int v12; // [esp+124h] [ebp-4h]

  v4 = 0; /*0x5441af*/
  if ( Str1 ) /*0x5441b3*/
  {
    sub_47D8F0(Str1, v11); /*0x5441bb*/
    v4 = v11; /*0x5441c3*/
  }
  v5 = (IOTask *)FormHeapAlloc(0x38u); /*0x5441c9*/
  v12 = 0; /*0x5441d7*/
  if ( v5 ) /*0x5441e2*/
    SkyTask = IOTask::CreateSkyTask(v5, a1, v4, a3, a4); /*0x5441f1*/
  else
    SkyTask = 0; /*0x5441f8*/
  v7 = MEMORY[0xB33A10]; /*0x5441fa*/
  v10 = SkyTask; /*0x544202*/
  v8 = *((int (__thiscall **)(IOManager *, IOTask *))MEMORY[0xB33A10]->vtbl + 0xF); /*0x544203*/
  v12 = 0xFFFFFFFF; /*0x544206*/
  return v8(v7, v10); /*0x544213*/
}
