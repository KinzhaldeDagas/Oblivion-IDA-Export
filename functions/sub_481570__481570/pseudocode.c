void __cdecl sub_481570(NiNode *a1)
{
  NiObjectNET *v1; // eax
  BSShaderProperty *v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  _DWORD *i; // eax

  if ( a1 )
  {
    if ( a1->vtbl->super.super.Unk_03((NiObject *)a1) )
    {
      if ( !NiNode_GetNiPropertyByID(a1, 0) )
      {
        v1 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
        if ( v1 )
          v2 = (BSShaderProperty *)sub_47F920(v1);
        else
          v2 = 0;
        v2->member.super.flags |= 1u;
        sub_405680(a1, v2);
      }
    }
    else
    {
      v3 = (int)a1->vtbl->super.super.Unk_02((NiObject *)a1);
      v4 = v3;
      if ( v3 )
      {
        v5 = *(unsigned __int16 *)(v3 + 0xB6);
        v6 = 0;
        if ( *(_WORD *)(v4 + 0xB6) )
        {
          if ( v5 )
            goto LABEL_12;
          for ( i = 0; ; i = *(_DWORD **)(*(_DWORD *)(v4 + 0xB0) + 4 * v6) )
          {
            sub_481570(i);
            if ( *(unsigned __int16 *)(v4 + 0xB6) <= (unsigned int)++v6 )
              break;
LABEL_12:
            ;
          }
        }
      }
    }
  }
}
