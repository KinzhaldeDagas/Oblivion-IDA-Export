signed int __fastcall sub_927B30(int a1, int a2, int *a3)
{
  int *v3; // edi
  signed int result; // eax

  v3 = a3;
  if ( a3 )
  {
    sub_927AD0((int *)(a1 - 0x18), &a3, (int)a3);
    return sub_8A6300(v3, a1 != 0x18 ? a1 : 0);
  }
  return result;
}
