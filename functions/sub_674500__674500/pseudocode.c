Actor *__usercall sub_674500@<eax>(int this@<ecx>, double a2@<st0>)
{
  Actor *result; // eax
  ActorVtbl *vtbl; // edi
  int v5; // ecx

  result = sub_7616D0((ActorList *)(this + 0x68));
  *(_DWORD *)(this + 0x78) = result;
  if ( result )
  {
    do
    {
      result = *(Actor **)(this + 0x78);
      if ( !*(_DWORD *)&result->members.super.super.super.type && !result->vtbl )
        break;
      vtbl = result->vtbl;
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))result->vtbl->super.super.super.super.InitializeComponent
            + 0x64))(result->vtbl) )
        sub_6286B0((int)vtbl->super.super.super.Unk_16, a2, (Actor *)vtbl);
      result = *(Actor **)(this + 0x78);
      v5 = *(_DWORD *)&result->members.super.super.super.type;
      *(_DWORD *)(this + 0x78) = v5;
    }
    while ( v5 );
  }
  return result;
}
