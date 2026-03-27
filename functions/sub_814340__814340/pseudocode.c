int __thiscall sub_814340(int this, int a2)
{
  int v2; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  void (__thiscall ***v5)(_DWORD, int); // edi
  int result; // eax
  int v7; // edi
  int *v8; // edi
  int v9; // ebx
  int v10; // esi
  int v11; // [esp+0h] [ebp-10h]

  v2 = dword_B43124;
  v3 = InterlockedDecrement;
  if ( dword_B43124 != this )
  {
    if ( v2 )
    {
      v5 = (void (__thiscall ***)(_DWORD, int))dword_B43124;
      if ( !v3((volatile LONG *)(v2 + 4)) )
      {
        if ( v5 )
          (**v5)(v5, 1);
      }
    }
    dword_B43124 = this;
    if ( this )
      InterlockedIncrement((volatile LONG *)(this + 4));
  }
  result = *(_DWORD *)(this + 0x124);
  switch ( result )
  {
    case 0:
      result = sub_813510(this);
      break;
    case 3:
      result = sub_813960((float *)this, a2, v11);
      break;
    default:
      break;
  }
  v7 = *(_DWORD *)(this + 0x140);
  if ( v7 )
  {
    result = v3((volatile LONG *)(v7 + 4));
    if ( !result )
      result = (**(int (__thiscall ***)(int, int))v7)(v7, 1);
    *(_DWORD *)(this + 0x140) = 0;
  }
  v8 = (int *)(this + 0x128);
  v9 = 6;
  do
  {
    v10 = *v8;
    if ( *v8 )
    {
      result = v3((volatile LONG *)(v10 + 4));
      if ( !result )
      {
        if ( v10 )
          result = (**(int (__thiscall ***)(int, int))v10)(v10, 1);
      }
      *v8 = 0;
    }
    ++v8;
    --v9;
  }
  while ( v9 );
  return result;
}
