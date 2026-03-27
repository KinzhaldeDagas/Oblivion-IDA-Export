void __thiscall sub_4876C0(ExtraDataList *****this, int a2)
{
  ExtraDataList ****v2; // ebp
  ExtraDataList ***v3; // ebx
  ExtraDataList **v4; // edi
  ExtraDataList *v5; // esi
  ExtraDataList **i; // [esp+24h] [ebp-8h]

  v2 = *this;
  while ( v2 )
  {
    if ( !v2[1] && !*v2 )
      break;
    v3 = *v2;
    if ( *v2 )
    {
      if ( (int)v3[1] > 0 )
      {
        v4 = *v3;
        for ( i = v3[2]; v4; v4 = (ExtraDataList **)v4[1] )
        {
          v5 = *v4;
          if ( !*v4 )
            break;
          if ( sub_41DF50(*v4) )
          {
            sub_41F370(v5, 0);
            (*(void (__thiscall **)(int, ExtraDataList **, ExtraDataList *, ExtraDataList **, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 0x100))(
              a2,
              i,
              v5,
              v3[1],
              0,
              0,
              0,
              0,
              0,
              1,
              0);
            v2 = *this;
            goto LABEL_11;
          }
        }
      }
    }
    v2 = (ExtraDataList ****)v2[1];
LABEL_11:
    ;
  }
}
