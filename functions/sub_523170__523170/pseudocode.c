int *__thiscall sub_523170(void *this, int a2)
{
  int *v3; // edi
  const char *v4; // eax
  int *v5; // eax

  v3 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x168))(a2); /*0x5231a5*/
  if ( v3 ) /*0x5231a9*/
  {
    v4 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xD4))(this); /*0x5231b5*/
    PrintError("This npc \"%s\" has already been used.\r\nOnly the first reference will be used.\r\n", v4); /*0x5231bd*/
  }
  else
  {
    v5 = (int *)FormHeapAlloc(0x154u); /*0x5231cc*/
    if ( v5 ) /*0x5231e2*/
      v3 = ActorSkinInfo_ctor(v5, a2, 0); /*0x5231ee*/
    else
      v3 = 0; /*0x5231f2*/
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)a2 + 0x16C))(a2, v3); /*0x523207*/
  }
  return v3; /*0x52320b*/
}
