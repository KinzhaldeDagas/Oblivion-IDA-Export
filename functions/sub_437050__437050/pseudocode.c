// Verified base initializer for QueuedTexture: initializes IOTask fields, stores normalized path and resolves archive/file entry via HashFilePath + ArchiveManager_LazyFileLookup.
QueuedTexture *__thiscall QueuedTexture_ctor(QueuedTexture *this, const char *path, unsigned __int8 taskType)
{
  char *v4; // edi
  int v6[3]; // [esp+10h] [ebp-24h] BYREF
  int v7[2]; // [esp+1Ch] [ebp-18h] BYREF
  int v8; // [esp+30h] [ebp-4h]

  v6[2] = (int)this; /*0x43708c*/
  sub_436500((IOTask *)this, taskType); /*0x437090*/
  *((_DWORD *)this + 6) = 0; /*0x437097*/
  *((_DWORD *)this + 7) = 0; /*0x43709a*/
  *((_DWORD *)this + 8) = 0; /*0x43709d*/
  *((_DWORD *)this + 9) = 0; /*0x4370a0*/
  *(_DWORD *)this = &QueuedTexture::`vftable'; /*0x4370a3*/
  v8 = 0; /*0x4370a9*/
  *((_DWORD *)this + 0xA) = 0; /*0x4370ad*/
  LOBYTE(v8) = 1; /*0x4370b3*/
  sub_434600(this, path); /*0x4370b8*/
  v4 = *((char **)this + 8); /*0x4370bd*/
  if ( v4 ) /*0x4370c2*/
  {
    HashFilePAth(v4, (int)v7, (int)v6); /*0x4370cf*/
    *((_DWORD *)this + 9) = ArchiveManager_LazyFileLookup(1, (unsigned int *)v7, (unsigned int *)v6, (unsigned int)v4); /*0x4370e9*/
  }
  return this; /*0x4370ee*/
}
