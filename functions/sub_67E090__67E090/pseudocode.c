void __userpurge sub_67E090(_DWORD *a1@<eax>, int a2@<ecx>, NiDX92DBufferData **a3)
{
  Actor *v4; // ecx

  if ( a3 ) /*0x67e09a*/
  {
    if ( *(_DWORD *)(a2 + 0x24) ) /*0x67e09c*/
    {
      v4 = *(Actor **)(a2 + 0x28); /*0x67e0a2*/
      LOBYTE(a1) = v4 && Actor_IsCreature(v4); /*0x67e0b2*/
      sub_68C4E0(a3, *(char **)(a2 + 0x24), 0, a1); /*0x67e0c1*/
    }
    sub_68BED0((TeleportData **)a3, (NiPoint3 *)(a2 + 0xC)); /*0x67e0cc*/
    sub_67DE90((char *)a2, (TESHealthForm *)a3); /*0x67e0d4*/
  }
}
