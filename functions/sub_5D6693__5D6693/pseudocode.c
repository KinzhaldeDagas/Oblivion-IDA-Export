void __usercall sub_5D6693(_DWORD *a1@<esi>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  BSStringT *v4; // ebx
  int v5; // ebp
  int AVFromGroupOffset; // edi
  char *Name; // eax
  BSStringT *v8; // eax
  void (__thiscall **v9)(_DWORD *, int, BSStringT *); // edi
  int v10; // eax

  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(0, v5);
    Name = (char *)ActorValue_GetName(AVFromGroupOffset);
    v8 = sub_5D6270((int)a1, a2, a3, a4, Name, AVFromGroupOffset);
    if ( !v4 || AVFromGroupOffset == a1[0x10] )
      v4 = v8;
    if ( ++v5 >= 8 )
    {
      if ( !a1[0x13] )
      {
        if ( v4 )
        {
          v9 = (void (__thiscall **)(_DWORD *, int, BSStringT *))(*a1 + 0xC);
          Tile_GetFloat(v4, 0xFA8);
          v10 = Double_To_SInt32(a4);
          (*v9)(a1, v10, v4);
          JUMPOUT(0x5D661D);
        }
        JUMPOUT(0x5D6622);
      }
      JUMPOUT(0x5D65E1);
    }
  }
}
