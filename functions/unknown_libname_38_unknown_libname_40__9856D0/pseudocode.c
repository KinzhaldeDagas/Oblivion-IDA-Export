// positive sp value has been detected, the output may be wrong!
// attributes: thunk
int __usercall unknown_libname_38_::unknown_libname_40@<eax>(
        int a1@<ecx>,
        int a2@<ebp>,
        _BYTE *a3@<edi>,
        _BYTE *a4@<esi>)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
      result = *(_DWORD *)(a2 + 8);
      break;
    case 1:
      a3[3] = a4[3];
      result = *(_DWORD *)(a2 + 8);
      break;
    case 2:
      a3[3] = a4[3];
      a3[2] = a4[2];
      result = *(_DWORD *)(a2 + 8);
      break;
    case 3:
      a3[3] = a4[3];
      a3[2] = a4[2];
      a3[1] = a4[1];
      result = *(_DWORD *)(a2 + 8);
      break;
  }
  return result;
}
