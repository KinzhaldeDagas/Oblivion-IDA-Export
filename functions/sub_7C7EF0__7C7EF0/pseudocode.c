// Recursively traverse NiNode children. For each object matching the retail point-light RTTI target, either remove its full-list entry or register it with trackBackingPosition=true.
void __thiscall ShadowSceneNode_RegisterOrRemovePointLightsRecursive(
        ShadowSceneNode_DecodedLayout *self,
        NiNode *root,
        bool removeExisting)
{
  NiNode *numObjs; // eax
  unsigned int v5; // edi
  NiAVObject *data; // ecx
  NiNode *v8; // esi
  int v9; // eax
  NiNode *roota; // [esp+10h] [ebp+4h]

  numObjs = (NiNode *)root->members.children.numObjs; /*0x7c7ef5*/
  v5 = 0; /*0x7c7efe*/
  roota = numObjs; /*0x7c7f04*/
  if ( numObjs ) /*0x7c7f08*/
  {
    do /*0x7c7f64*/
    {
      if ( root->members.children.end > v5 ) /*0x7c7f19*/
      {
        data = root->members.children.data; /*0x7c7f1b*/
        v8 = *((NiNode **)&data->vtbl + v5); /*0x7c7f21*/
        if ( v8 ) /*0x7c7f26*/
        {
          v9 = (int)v8->vtbl->super.super.GetType(*((_DWORD *)&data->vtbl + v5)); /*0x7c7f2f*/
          if ( v9 ) /*0x7c7f33*/
          {
            while ( (float *)v9 != &MEMORY[0xB3F9B0][0xD9] ) /*0x7c7f3a*/
            {
              v9 = *(_DWORD *)(v9 + 4); /*0x7c7f3c*/
              if ( !v9 ) /*0x7c7f41*/
                goto LABEL_7; /*0x7c7f41*/
            }
            if ( removeExisting )               // removeExisting=true selects removal by source; false registers the scene-graph point light with trackBackingPosition=true. /*0x7c7f74*/
              ShadowSceneNode_RemoveFullLightBySource(self, v8); /*0x7c7f77*/
            else
              ShadowSceneNode_FindOrCreateFullLightForSource(self, v8, 1);// Scene-graph point lights register with trackBackingPosition=true. /*0x7c7f81*/
          }
          else
          {
LABEL_7:
            if ( v8->vtbl->super.super.Unk_02((NiObject *)v8) ) /*0x7c7f4a*/
              ShadowSceneNode_RegisterOrRemovePointLightsRecursive(self, v8, removeExisting); /*0x7c7f58*/
          }
        }
      }
      ++v5; /*0x7c7f5d*/
    }
    while ( v5 < (unsigned int)roota ); /*0x7c7f64*/
  }
}
