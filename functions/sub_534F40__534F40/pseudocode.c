int __thiscall sub_534F40(_DWORD *this, int a2, int a3, int a4, char *FullPath, int a6)
{
  int v6; // ebx
  char *v7; // ebp
  int v8; // edi
  bool v10; // zf
  int result; // eax

  v6 = a6; /*0x534f41*/
  v7 = FullPath; /*0x534f46*/
  v8 = a3; /*0x534f4c*/
  if ( a3 == 0xFFFFFFFF ) /*0x534f55*/
    v10 = sub_534D70(this, FullPath, a6) == 0; /*0x534f5e*/
  else
    v10 = *(_BYTE *)(*(int (__thiscall **)(_DWORD *, int *, int))(*this + 0x10))(this, &a3, a3) == 0; /*0x534f71*/
  if ( v10 ) /*0x534f74*/
    JUMPOUT(0x534FF3); /*0x534ff3*/
  switch ( a2 ) /*0x534f7f*/
  {
    case 0: /*0x534f7f*/
      result = (*(int (__thiscall **)(_DWORD *, const char *, int, int, char *, int))(*this + 0x30))( /*0x534f9a*/
                 this,
                 "Report",
                 v8,
                 a4,
                 v7,
                 v6);
      break; /*0x534fa0*/
    case 1: /*0x534f7f*/
      result = (*(int (__thiscall **)(_DWORD *, const char *, int, int, char *, int))(*this + 0x30))( /*0x534fb7*/
                 this,
                 "Warning",
                 v8,
                 a4,
                 v7,
                 v6);
      break; /*0x534fbd*/
    case 2: /*0x534f7f*/
    case 3: /*0x534f7f*/
      result = (*(int (__thiscall **)(_DWORD *, const char *, int, int, char *, int))(*this + 0x28))( /*0x534fd4*/
                 this,
                 "Assert",
                 v8,
                 a4,
                 v7,
                 v6);
      break; /*0x534fda*/
    default:
      JUMPOUT(0x534FDD); /*0x534fdd*/
  }
  return result; /*0x534f9c*/
}
