signed int __usercall sub_7472B0@<eax>(int a1@<eax>)
{
  signed int result; // eax

  sub_746110(a1 + 0x8C, *(_DWORD *)(a1 + 0xB14), (_WORD *)a1);
  sub_746110(a1 + 0x980, *(_DWORD *)(a1 + 0xB20), (_WORD *)a1);
  sub_7470B0((_DWORD *)a1, (int *)(a1 + 0xB28));
  result = 0x12;
  while ( !*(_WORD *)(a1 + 4 * (unsigned __int8)byte_A849FC[result] + 0xA76) )
  {
    if ( *(_WORD *)(a1 + 4 * (unsigned __int8)byte_A849FB[result] + 0xA76) )
    {
      --result;
      *(_DWORD *)(a1 + 0x16A0) += 3 * result + 0x11;
      return result;
    }
    if ( *(_WORD *)(a1 + 4 * (unsigned __int8)byte_A849FA[result] + 0xA76) )
    {
      result -= 2;
      *(_DWORD *)(a1 + 0x16A0) += 3 * result + 0x11;
      return result;
    }
    if ( *(_WORD *)(a1 + 4 * (unsigned __int8)byte_A849F9[result] + 0xA76) )
    {
      result -= 3;
      break;
    }
    result -= 4;
    if ( result < 3 )
    {
      *(_DWORD *)(a1 + 0x16A0) += 3 * result + 0x11;
      return result;
    }
  }
  *(_DWORD *)(a1 + 0x16A0) += 3 * result + 0x11;
  return result;
}
