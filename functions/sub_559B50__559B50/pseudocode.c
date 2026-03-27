char __thiscall sub_559B50(_DWORD *this, char *a2, char *ArgList, void *a4, char *a5, char a6)
{
  char v8; // bl

  if ( !useFaceGenHeads )
    return 0;
  v8 = sub_559330(this, a2, ArgList, a4, a6);
  return v8 | sub_556A00(this, a5);
}
