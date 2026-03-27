IOTask *__thiscall sub_437050(IOTask *this, const char *arg0, unsigned __int8 a2)
{
  char *v4; // edi
  int v6[3]; // [esp+10h] [ebp-24h] BYREF
  int v7[2]; // [esp+1Ch] [ebp-18h] BYREF
  int v8; // [esp+30h] [ebp-4h]

  v6[2] = (int)this;
  sub_436500(this, a2);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  this->vtbl = &QueuedTexture::`vftable';
  v8 = 0;
  *((_DWORD *)this + 0xA) = 0;
  LOBYTE(v8) = 1;
  sub_434600(this, arg0);
  v4 = *((char **)this + 8);
  if ( v4 )
  {
    HashFilePAth(v4, (int)v7, (int)v6);
    *((_DWORD *)this + 9) = ArchiveManager_LazyFileLookup(1, (unsigned int *)v7, (unsigned int *)v6, (unsigned int)v4);
  }
  return this;
}
