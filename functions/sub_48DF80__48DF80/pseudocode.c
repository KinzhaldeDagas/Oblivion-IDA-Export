void __thiscall sub_48DF80(_DWORD **this)
{
  _DWORD **v1; // esi
  int v2; // ebp
  unsigned int *v3; // edi
  ExtraDataList **v4; // ebx
  ExtraDataList *v5; // esi
  _DWORD *v6; // eax

  v1 = this;
  (*(void (__thiscall **)(_DWORD, int))(**(this + 1) + 0x40))(*(this + 1), 0x8000000);
  v2 = (int)*v1;
  if ( *v1 )
  {
    do
    {
      v3 = *(unsigned int **)v2;
      if ( !*(_DWORD *)v2 )
        break;
      v4 = (ExtraDataList **)*v3;
      if ( *v3 )
      {
        do
        {
          v5 = *v4;
          if ( !*v4 )
            break;
          if ( sub_41E850(*v4) )
          {
            sub_424790(v5);
            ExtraDataList_SetExtraCount(v5, 0);
            --v3[1];
            BSSimpleList_Remove(v4, (int)v5);
            (*(void (__thiscall **)(ExtraDataList *, int))v5->vtbl)(v5, 1);
            v4 = (ExtraDataList **)*v3;
          }
          else
          {
            v4 = (ExtraDataList **)v4[1];
          }
        }
        while ( v4 );
        v1 = this;
      }
      v6 = (_DWORD *)*v3;
      if ( !*v3 || v6[1] || *v6 || v3[1] )
      {
        v2 = *(_DWORD *)(v2 + 4);
      }
      else
      {
        BSSimpleList_Remove(*v1, (int)v3);
        if ( *v3 )
          BSSimpleList_Clear((_DWORD *)*v3);
        FormHeapFree(*v3);
        *v3 = 0;
        FormHeapFree((unsigned int)v3);
        v2 = (int)*v1;
      }
    }
    while ( v2 );
  }
}
