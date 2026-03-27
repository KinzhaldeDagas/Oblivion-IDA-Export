int *sub_60DEA0()
{
  int v0; // ecx
  int *result; // eax

LABEL_1:
  v0 = dword_B3B800;
  result = (int *)dword_B3B804;
  while ( result || v0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v0 + 0x148))(v0);
    result = (int *)dword_B3B804;
    if ( dword_B3B804 )
    {
      dword_B3B804 = result[1];
      dword_B3B800 = *result;
      FormHeapFree((unsigned int)result);
      goto LABEL_1;
    }
    v0 = 0;
    dword_B3B800 = 0;
  }
  return result;
}
