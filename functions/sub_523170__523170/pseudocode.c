int *__thiscall sub_523170(void *this, int a2)
{
  int *v3; // edi
  const char *v4; // eax
  int *v5; // eax

  v3 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x168))(a2);
  if ( v3 )
  {
    v4 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xD4))(this);
    PrintError("This npc \"%s\" has already been used.\r\nOnly the first reference will be used.\r\n", v4);
  }
  else
  {
    v5 = (int *)FormHeapAlloc(0x154u);
    if ( v5 )
      v3 = sub_478730(v5, a2, 0);
    else
      v3 = 0;
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)a2 + 0x16C))(a2, v3);
  }
  return v3;
}
