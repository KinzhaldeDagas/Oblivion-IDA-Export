int __usercall ActiveEffect::~ActiveEffect@<eax>(int a1@<esi>, _DWORD *a2@<eax>)
{
  if ( a2[1] || *a2 )
    return ActiveEffect::~ActiveEffect();
  else
    return ActiveEffect::~ActiveEffect(a1);
}
