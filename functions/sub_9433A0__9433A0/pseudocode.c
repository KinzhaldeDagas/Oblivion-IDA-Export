int __thiscall sub_9433A0(int this, int *a2)
{
  int v3; // ebx
  int result; // eax

  v3 = *(_DWORD *)(this + 0xC);
  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 0x20))(*(_DWORD *)(this + 8));
  if ( v3 > 0 )
  {
    do
    {
      *a2 = result;
      a2[1] = 0;
      a2 += 4;
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 8) + 0x24))(*(_DWORD *)(this + 8), result);
      --v3;
    }
    while ( v3 );
  }
  return result;
}
