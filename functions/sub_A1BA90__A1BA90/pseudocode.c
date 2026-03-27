void __cdecl sub_A1BA90()
{
  NiTMap_Clear(&stru_B35C80);
  NiDeleteCriticalSection((LPCRITICAL_SECTION)&UnknownLock1);
  NiTMap<void *,ObjectThreadLock::LOCK_DATA>::~NiTMap<void *,ObjectThreadLock::LOCK_DATA>((unsigned int *)&stru_B35C80);
}
