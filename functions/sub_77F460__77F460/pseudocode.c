void __thiscall sub_77F460(_DWORD *this)
{
  _DWORD *v2; // ebx
  unsigned int v3; // edi
  NiTPointerList_Node_void *v4; // eax
  bool v5; // zf
  NiTPointerList_Node_void *v6; // esi
  NiTPointerList_Node_void *v7; // [esp+8h] [ebp-4h] BYREF

  v2 = (_DWORD *)*(this + 3);
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_DWORD *)*v2;
    if ( v3 )
    {
      v4 = (NiTPointerList_Node_void *)*(this + 3);
      if ( v4 )
      {
        while ( 1 )
        {
          v5 = (void *)v3 == v4->data;
          v6 = v4;
          v4 = v4->next;
          if ( v5 )
            break;
          if ( !v4 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        v6 = 0;
      }
      v7 = v6;
      if ( v6 )
        sub_7AA860((BSTextureManager *)(this + 2), &v7);
      FormHeapFree(v3);
    }
  }
}
