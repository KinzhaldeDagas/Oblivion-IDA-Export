int __stdcall sub_544160(UInt32 a1, char *Str1, void *a3, char a4)
{
  int *v4; // esi
  IOTask *v5; // eax
  IOTask *SkyTask; // eax
  IOManager *v7; // ecx
  int (__thiscall *v8)(IOManager *, IOTask *); // eax
  IOTask *v10; // [esp-4h] [ebp-12Ch]
  char v11[260]; // [esp+14h] [ebp-114h] BYREF
  unsigned int v12; // [esp+124h] [ebp-4h]

  v4 = 0;
  if ( Str1 )
  {
    sub_47D8F0(Str1, v11);
    v4 = (int *)v11;
  }
  v5 = (IOTask *)FormHeapAlloc(0x38u);
  v12 = 0;
  if ( v5 )
    SkyTask = IOTask::CreateSkyTask(v5, a1, (const char *)v4, a3, a4);
  else
    SkyTask = 0;
  v7 = ioManager;
  v10 = SkyTask;
  v8 = *((int (__thiscall **)(IOManager *, IOTask *))ioManager->vtbl + 0xF);
  v12 = 0xFFFFFFFF;
  return v8(v7, v10);
}
