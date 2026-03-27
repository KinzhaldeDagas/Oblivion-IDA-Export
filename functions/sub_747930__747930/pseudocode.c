void __thiscall sub_747930(_BYTE *this, char *FullPath)
{
  void *v3; // ecx
  char Dir[259]; // [esp+4h] [ebp-408h] BYREF
  char v5[256]; // [esp+107h] [ebp-305h] BYREF
  char Dst[513]; // [esp+207h] [ebp-205h] BYREF

  if ( FullPath && *FullPath )
  {
    sub_748760(Dir, FullPath);
    strcpy_s(Dst, 0x100u, EmptyString);
    strcpy_s(v5, 0x100u, EmptyString);
    sub_7487B0(Dir, (int)(this + 0x10C), 0x104);
    TESTexture::ClearComponentReferences(v3);
  }
  else
  {
    *(this + 0x10C) = 0;
  }
}
