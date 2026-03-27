// positive sp value has been detected, the output may be wrong!
int __userpurge NiTMap_SetAt_::InsertNode@<eax>(int a1@<ebp>, _DWORD *a2@<esi>, int a3, int a4)
{
  int result; // eax
  _DWORD *v5; // [esp-10h] [ebp-10h]

  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 0x14))(a2);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 0xC))(a2);
  result = a2[2];
  *v5 = *(_DWORD *)(result + 4 * a1);
  *(_DWORD *)(a2[2] + 4 * a1) = v5;
  ++a2[3];
  return result;
}
