// positive sp value has been detected, the output may be wrong!
int __usercall ActiveEffect::~ActiveEffect@<eax>(int a1@<esi>)
{
  int *v1; // ecx
  unsigned int v2; // edi

  v1 = *(int **)(a1 + 0x2C);
  if ( !v1 )
    return ActiveEffect::~ActiveEffect();
  sub_6B7240(v1);
  v2 = *(_DWORD *)(a1 + 0x2C);
  if ( v2 )
  {
    sub_6B73E0(*(_DWORD **)(a1 + 0x2C));
    FormHeapFree(v2);
  }
  *(_DWORD *)(a1 + 0x2C) = 0;
  return ActiveEffect::~ActiveEffect();
}
