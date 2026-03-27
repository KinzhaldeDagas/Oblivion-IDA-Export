IOTask **__stdcall sub_43B990(IOTask **a1, void *a2, unsigned __int8 a3, volatile LONG *a4, TESObjectREFR *a5)
{
  int *v5; // eax
  int *v6; // ebx
  signed int v7; // edi
  TESForm *baseForm; // ecx
  char v9; // al

  sub_435580(a2, a5);
  v6 = v5;
  v7 = sub_4A2A30((int)a2);
  if ( a5 )
  {
    if ( sub_4D6FD0(a5) )
      v7 = 6;
    baseForm = a5->member.baseForm;
    if ( baseForm )
      v9 = ((unsigned __int8 (__thiscall *)(TESForm *))baseForm->vtbl[1].Unk_06)(baseForm) == 0;
    else
      v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  sub_43B280((int **)ModelLoaderPtr, a1, v6, a3, a4, v7, v9, 1, 0);
  return a1;
}
