int __usercall ActiveEffect::~ActiveEffect@<eax>(int a1@<esi>, int *a2@<eax>, char a3@<dl>)
{
  int v3; // ecx
  _DWORD *v4; // eax

  v3 = *a2;
  *(_BYTE *)(v3 + 0x24) = a3;
  *(_DWORD *)(v3 + 0x18) = 0;
  v4 = (_DWORD *)a2[1];
  if ( v4 )
    return ActiveEffect::~ActiveEffect(a1, v4);
  else
    return ActiveEffect::~ActiveEffect(a1);
}
