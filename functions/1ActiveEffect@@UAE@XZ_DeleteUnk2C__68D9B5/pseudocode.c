// positive sp value has been detected, the output may be wrong!
void __usercall ActiveEffect::~ActiveEffect(int a1@<esi>)
{
  int *v1; // ecx
  unsigned int v2; // edi

  v1 = *(int **)(a1 + 0x2C); /*0x68d9b5*/
  if ( v1 ) /*0x68d9bd*/
  {
    sub_6B7240(v1); /*0x68d9c0*/
    v2 = *(_DWORD *)(a1 + 0x2C); /*0x68d9c5*/
    if ( v2 ) /*0x68d9ca*/
    {
      sub_6B73E0(*(_DWORD **)(a1 + 0x2C)); /*0x68d9ce*/
      FormHeapFree(v2); /*0x68d9d4*/
    }
    *(_DWORD *)(a1 + 0x2C) = 0; /*0x68d9dc*/
  }
  ActiveEffect::~ActiveEffect(); /*0x68d9bd*/
}
