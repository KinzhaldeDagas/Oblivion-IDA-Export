void __userpurge ActiveEffect_Base_ProcessEffect_::RemoveEffect(int a1@<esi>, int a2)
{
  int *v2; // ecx

  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x3C))(a1);
  v2 = *(int **)(a1 + 0x2C);
  *(_BYTE *)(a1 + 0x12) = 1;
  if ( v2 )
    sub_6B7240(v2);
  ActiveEffect_Base_ProcessEffect_::Done(a2);
}
