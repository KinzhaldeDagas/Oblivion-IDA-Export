int __usercall ActiveEffect::~ActiveEffect@<eax>(int a1@<esi>)
{
  _DWORD *v1; // ecx

  v1 = *(_DWORD **)(a1 + 0x34);
  if ( v1 )
    BSSimpleList_Clear(v1);
  return ActiveEffect::~ActiveEffect(a1);
}
