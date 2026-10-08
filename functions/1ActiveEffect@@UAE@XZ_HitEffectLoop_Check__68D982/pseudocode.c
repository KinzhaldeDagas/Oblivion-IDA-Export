int __usercall ActiveEffect::~ActiveEffect@<eax>(int a1@<esi>, int *a2@<eax>, char a3@<dl>)
{
  if ( a2[1] || *a2 ) /*0x68d988*/
    return ActiveEffect::~ActiveEffect(a1, a2, a3); /*0x68d98c*/
  else
    return ActiveEffect::~ActiveEffect(a1); /*0x68d98b*/
}
