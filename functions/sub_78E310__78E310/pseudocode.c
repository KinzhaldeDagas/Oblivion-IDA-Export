char __thiscall sub_78E310(char *this, char *a2)
{
  const char *v2; // ebx
  void *v3; // edi
  signed int v4; // eax
  char *v5; // esi
  int v6; // ebx
  int *v8; // eax
  char *v9; // eax
  int v10; // eax
  bool v11; // cf
  char *v12; // eax
  int *v13; // eax
  char *v14; // eax
  int v15; // eax
  int *v16; // eax
  char *v17; // eax
  int v18; // eax
  int v19; // [esp+0h] [ebp-8Ch] BYREF
  _BYTE v20[28]; // [esp+2Ch] [ebp-60h] BYREF
  _BYTE v21[12]; // [esp+48h] [ebp-44h] BYREF
  _BYTE v22[12]; // [esp+54h] [ebp-38h] BYREF
  char v23[12]; // [esp+60h] [ebp-2Ch] BYREF
  char ArgList[4]; // [esp+70h] [ebp-1Ch]
  char *v25; // [esp+74h] [ebp-18h] BYREF
  char v26; // [esp+7Bh] [ebp-11h]
  int *v27; // [esp+7Ch] [ebp-10h]
  int v28; // [esp+88h] [ebp-4h]

  v27 = &v19;
  v25 = this;
  v2 = a2;
  v26 = 0;
  v28 = 0;
  if ( a2 )
  {
    v3 = sub_431130(a2, 0, 0x2800, 1);
    if ( !v3 )
    {
      v16 = _errno();
      v17 = strerror(*v16);
      v18 = sub_7A54A0((int)v20, "failed to load file '%s' [%s]", v2, v17);
      v11 = *(_DWORD *)(v18 + 0x18) < 0x10u;
      LOBYTE(v28) = 3;
      if ( v11 )
        a2 = (char *)(v18 + 4);
      else
        a2 = *(char **)(v18 + 4);
      std::exception::exception((std::exception *)v21, (const char *const *)&a2);
      ThrowException__((int)v21, &_TI1_AVexception_std__);
    }
    v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 0x1C))(v3);
    v5 = (char *)v4;
    if ( v4 <= 0 )
    {
      v13 = _errno();
      v14 = strerror(*v13);
      v15 = sub_7A54A0((int)v20, "file seek failed on '%s' [%s]", v2, v14);
      v11 = *(_DWORD *)(v15 + 0x18) < 0x10u;
      LOBYTE(v28) = 2;
      if ( v11 )
        a2 = (char *)(v15 + 4);
      else
        a2 = *(char **)(v15 + 4);
      std::exception::exception((std::exception *)v22, (const char *const *)&a2);
      ThrowException__((int)v22, &_TI1_AVexception_std__);
    }
    v6 = FormHeapAlloc(v4);
    *(_DWORD *)ArgList = ReadFile__((int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v3, v6, (int)v5);
    if ( *(char **)ArgList != v5 )
    {
      v8 = _errno();
      v9 = strerror(*v8);
      v10 = sub_7A54A0((int)v20, "only read %d of %d from %s [%s]", *(_DWORD *)ArgList, v5, a2, v9);
      v11 = *(_DWORD *)(v10 + 0x18) < 0x10u;
      LOBYTE(v28) = 1;
      if ( v11 )
        v12 = (char *)(v10 + 4);
      else
        v12 = *(char **)(v10 + 4);
      v25 = v12;
      std::exception::exception((std::exception *)v23, (const char *const *)&v25);
      ThrowException__((int)v23, &_TI1_AVexception_std__);
    }
    v26 = sub_78DF90((float **)v25, v5, v6, (int)v5);
    FormHeapFree(v6);
    (**(void (__thiscall ***)(void *, int))v3)(v3, 1);
  }
  return v26;
}
