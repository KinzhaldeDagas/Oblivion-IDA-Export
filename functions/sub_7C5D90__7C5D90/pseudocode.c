// Recursively walks a NiNode subtree. For receiver geometry with property ID 4/type 1..10, removes it from every ShadowSceneLight receiver list. For child nodes, recurses.
unsigned int __thiscall ShadowSceneNode_RemoveReceiverGeometryRecursive(void *this, NiNode *node)
{
  unsigned int result; // eax
  unsigned int i; // ebx
  NiNode *v4; // edi
  NiProperty *NiPropertyByID; // eax
  NiProperty *v6; // esi
  BOOL v7; // eax
  _DWORD *v8; // esi
  int **v9; // ecx
  NiNode *v10; // eax

  result = node->members.children.end; /*0x7c5d97*/
  for ( i = 0; result > i; ++i )
  {
    v4 = *((NiNode **)&node->members.children.data->vtbl + i); /*0x7c5dbc*/
    if ( v4 )
    {
      if ( v4->vtbl->super.super.Unk_04((NiObject *)v4) )
      {
        NiPropertyByID = NiNode_GetNiPropertyByID(v4, 4); /*0x7c5dd8*/
        v6 = NiPropertyByID; /*0x7c5ddd*/
        v7 = NiPropertyByID /*0x7c5dff*/
          && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1
          && (*((int (__thiscall **)(NiProperty *))v6->vtbl + 0x15))(v6) <= 0xA;
        if ( (v7 ? (unsigned int)v6 : 0) != 0 )
        {
          v8 = *((_DWORD **)this + 0x3A); /*0x7c5e14*/
          while ( v8 ) /*0x7c5e1c*/
          {
            v9 = (int **)v8[2]; /*0x7c5e20*/
            v8 = (_DWORD *)*v8; /*0x7c5e28*/
            if ( v9 ) /*0x7c5e2a*/
              ShadowSceneLight_RemoveReceiverGeometry(v9, v4); /*0x7c5e2d*/
          }
        }
      }
      else
      {
        v10 = (NiNode *)v4->vtbl->super.super.Unk_02((NiObject *)v4); /*0x7c5e3d*/
        if ( v10 ) /*0x7c5e41*/
          ShadowSceneNode_RemoveReceiverGeometryRecursive(this, v10); /*0x7c5e48*/
      }
    }
    result = node->members.children.end; /*0x7c5e4d*/
  }
  return result; /*0x7c5e61*/
}
