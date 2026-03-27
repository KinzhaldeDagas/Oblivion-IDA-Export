// positive sp value has been detected, the output may be wrong!
int __usercall sub_5D6573@<eax>(
        Tile *a1@<ebx>,
        BSStringT *a2@<ebp>,
        _DWORD *a3@<esi>,
        double a4@<st2>,
        double a5@<st1>)
{
  double v5; // st7
  int i; // edi
  int AVFromGroupOffset; // eax
  unsigned int *v8; // ebx
  unsigned int v9; // edi
  char *Name; // eax
  BSStringT *v11; // eax
  void (__thiscall **v12)(_DWORD *, int, BSStringT *); // edi
  double Float; // st7
  int v14; // eax
  int v15; // ebx
  Menu *v16; // edi
  int v18; // [esp-20h] [ebp-34h]
  int v19; // [esp-1Ch] [ebp-30h]
  int v20; // [esp-18h] [ebp-2Ch]
  int v21; // [esp-14h] [ebp-28h]
  int (__cdecl *v22)(int, _DWORD); // [esp-10h] [ebp-24h]
  signed int v23; // [esp-10h] [ebp-24h]
  _DWORD v24[5]; // [esp-8h] [ebp-1Ch] BYREF
  int v25; // [esp+Ch] [ebp-8h] BYREF

  v5 = 1.0;
  Tile_SetFloat(a1, (_DWORD *)0xFB2, 1.0);
  v24[0] = a2;
  v24[1] = a2;
  for ( i = 0; i < 0x15; ++i )
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, i);
    BSSimpleList_InsertSorted(v24, AVFromGroupOffset, (int)sub_5D56C0, v18, v19, v20, v21, v22);
  }
  v8 = (unsigned int *)&v25;
  do
  {
    v9 = *v8;
    v23 = *v8;
    Name = (char *)ActorValue_GetName(*v8);
    v11 = sub_5D6270((int)a3, a4, a5, 1.0, Name, v23);
    if ( !a2 || v9 == a3[0x10] )
      a2 = v11;
    v8 = (unsigned int *)v8[1];
  }
  while ( v8 );
  if ( a3[0x13] )
  {
    sub_5D5D40(a3);
  }
  else if ( a2 )
  {
    v12 = (void (__thiscall **)(_DWORD *, int, BSStringT *))(*a3 + 0xC);
    Float = Tile_GetFloat(a2, 0xFA8);
    v14 = Double_To_SInt32(Float);
    (*v12)(a3, v14, a2);
    v5 = fConstant_2;
    Tile_SetFloat((Tile *)a2, (_DWORD *)0xFF0, fConstant_2);
  }
  v15 = v24[3];
  v16 = (Menu *)v24[4];
  sub_5D5B40(a3, (void *)0xFFFFFFFF);
  EnableMenu(v16, a4, a5, v5, 0);
  return v15;
}
