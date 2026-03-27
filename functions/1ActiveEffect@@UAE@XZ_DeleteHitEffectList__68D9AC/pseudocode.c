int __usercall ActiveEffect::~ActiveEffect@<eax>(int a1@<esi>)
{
  FormHeapFree(*(_DWORD *)(a1 + 0x34));
  return ActiveEffect::~ActiveEffect();
}
