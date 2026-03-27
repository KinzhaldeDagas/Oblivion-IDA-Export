int __usercall _input_l_::_assign_num_25677@<eax>(int a1@<ebp>, int a2@<edi>, _DWORD *a3@<esi>)
{
  int v3; // edi
  _BYTE *v4; // edi

  if ( *(_DWORD *)(a1 - 0x48) )
  {
    *a3 = *(_DWORD *)(a1 - 0x34);
    a3[1] = *(_DWORD *)(a1 - 0x30);
  }
  else if ( *(_BYTE *)(a1 - 0xE) )
  {
    *a3 = a2;
  }
  else
  {
    *(_WORD *)a3 = a2;
  }
  v3 = *(_DWORD *)(a1 - 0x28);
  ++*(_BYTE *)(a1 - 0x15);
  v4 = (_BYTE *)(v3 + 1);
  *(_DWORD *)(a1 - 0x28) = v4;
  if ( *(_DWORD *)(a1 - 4) != 0xFFFFFFFF )
    goto LABEL_10;
  if ( *v4 == 0x25 && *(_BYTE *)(*(_DWORD *)(a1 - 0x28) + 1) == 0x6E )
  {
    v4 = *(_BYTE **)(a1 - 0x28);
LABEL_10:
    if ( *v4 )
      JUMPOUT(0x995E6B);
  }
  return _input_l_::_error_return_25524();
}
