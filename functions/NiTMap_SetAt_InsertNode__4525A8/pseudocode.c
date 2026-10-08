// positive sp value has been detected, the output may be wrong!
int __userpurge NiTMap_SetAt_::InsertNode@<eax>(int a1@<ebp>, _DWORD *a2@<esi>, int a3, int a4)
{
  int result; // eax
  _DWORD *v5; // [esp-10h] [ebp-10h]

  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 0x14))(a2); /*0x4525be*/
  (*(void (__thiscall **)(_DWORD *))(*a2 + 0xC))(a2); /*0x4525c1*/
  result = a2[2]; /*0x4525c3*/
  *v5 = *(_DWORD *)(result + 4 * a1); /*0x4525c9*/
  *(_DWORD *)(a2[2] + 4 * a1) = v5; /*0x4525ce*/
  ++a2[3]; /*0x4525d1*/
  return result; /*0x4525d9*/
}
