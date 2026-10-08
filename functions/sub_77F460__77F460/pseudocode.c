void __thiscall sub_77F460(_DWORD *this)
{
  _DWORD *v2; // ebx
  unsigned int v3; // edi
  _DWORD *v4; // eax
  bool v5; // zf
  void *v6; // esi
  void *node; // [esp+8h] [ebp-4h] BYREF

  v2 = (_DWORD *)*(this + 3); /*0x77f465*/
  while ( v2 ) /*0x77f46a*/
  {
    v3 = v2[2]; /*0x77f470*/
    v2 = (_DWORD *)*v2; /*0x77f478*/
    if ( v3 ) /*0x77f47a*/
    {
      v4 = (_DWORD *)*(this + 3); /*0x77f47c*/
      if ( v4 ) /*0x77f484*/
      {
        while ( 1 ) /*0x77f486*/
        {
          v5 = v3 == v4[2]; /*0x77f486*/
          v6 = v4; /*0x77f48c*/
          v4 = (_DWORD *)*v4; /*0x77f48e*/
          if ( v5 ) /*0x77f490*/
            break; /*0x77f490*/
          if ( !v4 ) /*0x77f494*/
            goto LABEL_6; /*0x77f494*/
        }
      }
      else
      {
LABEL_6:
        v6 = 0; /*0x77f496*/
      }
      node = v6; /*0x77f49a*/
      if ( v6 ) /*0x77f49e*/
        NiTPointerList_RemoveNode(this + 2, &node); /*0x77f4a5*/
      FormHeapFree(v3); /*0x77f4ab*/
    }
  }
}
