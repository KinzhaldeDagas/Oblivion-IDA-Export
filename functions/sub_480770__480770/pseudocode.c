// Scans direct children for exact name 'Scb', removes/releases the first match, and returns true. On the first child whose name begins 'FadeNode ', it immediately abandons remaining siblings and follows only that single child-as-NiNode chain; null cast or exhausted chain returns false. This is not a general recursive tree search.
bool __cdecl NiNode_RemoveScbChildAlongFadeNodeChain(NiNode *rootNode)
{
  NiNode *v1; // ebp
  unsigned int i; // ebx
  _DWORD *v3; // esi
  unsigned __int8 *v4; // edi
  NiNode *v6; // esi
  size_t v7; // [esp-4h] [ebp-14h]

  v1 = rootNode; /*0x480772*/
  if ( rootNode ) /*0x48077a*/
  {
LABEL_2:
    for ( i = 0; v1->members.children.end > i; ++i ) /*0x480780*/
    {
      v3 = *((_DWORD **)&v1->members.children.data->vtbl + i); /*0x480793*/
      if ( v3 ) /*0x480798*/
      {
        v4 = (unsigned __int8 *)v3[2]; /*0x48079a*/
        if ( v4 ) /*0x48079f*/
        {
          if ( !CRT_StricmpLocaleDispatch(v4, (unsigned __int8 *)off_A3CE0C) ) /*0x4807b1*/
          {
            v1->vtbl->RemoveObjectAt(v1, (NiAVObject **)&rootNode, i); /*0x4807f3*/
            v6 = rootNode; /*0x4807f5*/
            if ( rootNode ) /*0x4807fb*/
            {
              if ( !InterlockedDecrement((volatile LONG *)&rootNode->members) ) /*0x480801*/
              {
                if ( v6 ) /*0x48080d*/
                  v6->vtbl->super.super.super.Destructor((NiRefObject *)v6, 1); /*0x480817*/
              }
            }
            return 1; /*0x48081c*/
          }
          LODWORD(v7) = 9; /*0x4807b3*/
          if ( !_strnicmp((const char *)v4, "FadeNode ", v7) ) /*0x4807c5*/
          {
            v1 = (NiNode *)(*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3); /*0x4807d5*/
            if ( v1 ) /*0x4807d9*/
              goto LABEL_2; /*0x4807d9*/
            return 0; /*0x4807d9*/
          }
        }
      }
    }
  }
  return 0; /*0x4807db*/
}
