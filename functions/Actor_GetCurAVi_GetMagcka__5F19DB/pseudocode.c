// positive sp value has been detected, the output may be wrong!
int __userpurge Actor_GetCurAVi_::GetMagcka@<eax>(int a1@<ebp>, int a2@<edi>, float a3)
{
  int v4; // [esp+0h] [ebp-4h]

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 0x268))(a2, a1, 9);
  return Double_To_SInt32((double)v4 * a3);
}
