int __thiscall sub_534F40(_DWORD *this, int a2, int a3, int a4, char *FullPath, int a6)
{
  int v6; // ebx
  char *v7; // ebp
  int v8; // edi
  bool v10; // zf
  int result; // eax

  v6 = a6;
  v7 = FullPath;
  v8 = a3;
  if ( a3 == 0xFFFFFFFF )
    v10 = sub_534D70(this, FullPath, a6) == 0;
  else
    v10 = *(_BYTE *)(*(int (__thiscall **)(_DWORD *, int *, int))(*this + 0x10))(this, &a3, a3) == 0;
  if ( v10 )
    JUMPOUT(0x534FF3);
  switch ( a2 )
  {
    case 0:
      result = (*(int (__thiscall **)(_DWORD *, const char *, int, int, char *, int))(*this + 0x30))(
                 this,
                 "Report",
                 v8,
                 a4,
                 v7,
                 v6);
      break;
    case 1:
      result = (*(int (__thiscall **)(_DWORD *, const char *, int, int, char *, int))(*this + 0x30))(
                 this,
                 "Warning",
                 v8,
                 a4,
                 v7,
                 v6);
      break;
    case 2:
    case 3:
      result = (*(int (__thiscall **)(_DWORD *, const char *, int, int, char *, int))(*this + 0x28))(
                 this,
                 "Assert",
                 v8,
                 a4,
                 v7,
                 v6);
      break;
    default:
      JUMPOUT(0x534FDD);
  }
  return result;
}
