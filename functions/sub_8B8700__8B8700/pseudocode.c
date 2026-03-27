void __cdecl sub_8B8700(Ni2DBuffer **a1)
{
  Ni2DBuffer *v1; // eax
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // esi
  _DWORD *i; // eax

  if ( a1 )
  {
    v1 = (Ni2DBuffer *)sub_700010(a1, (int)&unk_BA8000);
    if ( v1 )
      sub_6FFE90(a1, v1);
    v2 = ((int (__thiscall *)(Ni2DBuffer **))(*a1)->members.width)(a1);
    v3 = v2;
    if ( v2 )
    {
      v4 = *(unsigned __int16 *)(v2 + 0xB6);
      v5 = 0;
      if ( *(_WORD *)(v3 + 0xB6) )
      {
        if ( v4 )
          goto LABEL_8;
        for ( i = 0; ; i = *(_DWORD **)(*(_DWORD *)(v3 + 0xB0) + 4 * v5) )
        {
          sub_8B8700(i);
          if ( *(unsigned __int16 *)(v3 + 0xB6) <= (unsigned int)++v5 )
            break;
LABEL_8:
          ;
        }
      }
    }
  }
}
