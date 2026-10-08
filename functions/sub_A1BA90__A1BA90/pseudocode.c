void __cdecl sub_A1BA90()
{
  NiTMap_Clear(&unk_B35C80); /*0x4971a0*/
  NiDeleteCriticalSection((LPCRITICAL_SECTION)&MEMORY[0xB35D00]); /*0x4971b0*/
  NiTMap<void *,ObjectThreadLock::LOCK_DATA>::~NiTMap<void *,ObjectThreadLock::LOCK_DATA>((unsigned int *)&unk_B35C80); /*0x4971bf*/
}
