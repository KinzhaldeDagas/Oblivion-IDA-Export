Actor *__usercall sub_674500@<eax>(int this@<ecx>, double a2@<st0>)
{
  Actor *result; // eax
  ActorVtbl *vtbl; // edi
  int v5; // ecx

  result = ActorList_ReturnHead((ActorList *)(this + 0x68)); /*0x674506*/
  *(_DWORD *)(this + 0x78) = result; /*0x67450d*/
  if ( result ) /*0x674510*/
  {
    do /*0x674547*/
    {
      result = *(Actor **)(this + 0x78); /*0x674513*/
      if ( !*(_DWORD *)&result->members.super.super.super.type && !result->vtbl ) /*0x67451c*/
        break; /*0x67451f*/
      vtbl = result->vtbl; /*0x674521*/
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))result->vtbl->super.super.super.super.InitializeComponent /*0x67452d*/
            + 0x64))(result->vtbl) )
        sub_6286B0((int)vtbl->super.super.super.Unk_16, a2, (Actor *)vtbl); /*0x674537*/
      result = *(Actor **)(this + 0x78); /*0x67453c*/
      v5 = *(_DWORD *)&result->members.super.super.super.type; /*0x67453f*/
      *(_DWORD *)(this + 0x78) = v5; /*0x674544*/
    }
    while ( v5 ); /*0x674547*/
  }
  return result; /*0x67454a*/
}
