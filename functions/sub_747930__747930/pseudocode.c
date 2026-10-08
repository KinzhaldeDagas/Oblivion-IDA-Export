void __thiscall sub_747930(_BYTE *this, char *FullPath)
{
  void *v3; // ecx
  char Dir[259]; // [esp+4h] [ebp-408h] BYREF
  char v5[256]; // [esp+107h] [ebp-305h] BYREF
  char Dst[513]; // [esp+207h] [ebp-205h] BYREF

  if ( FullPath && *FullPath ) /*0x747952*/
  {
    sub_748760(Dir, FullPath); /*0x74795c*/
    strcpy_s(Dst, 0x100u, EmptyString); /*0x747973*/
    strcpy_s(v5, 0x100u, EmptyString); /*0x74798a*/
    sub_7487B0(Dir, (int)(this + 0x10C), 0x104); /*0x7479a2*/
    Shared_NoOpVirtual_60D0A0(v3); /*0x7479a8*/
  }
  else
  {
    *(this + 0x10C) = 0; /*0x7479cf*/
  }
}
