void __thiscall sub_440E60(_DWORD **this, int a2, float a3)
{
  NiNode *v4; // eax
  float *v5; // esi

  if ( a2 ) /*0x440e8b*/
  {
    v4 = (NiNode *)FormHeapAlloc(0xE0u); /*0x440e92*/
    v5 = (float *)v4; /*0x440e97*/
    if ( v4 ) /*0x440eaa*/
    {
      NiNode::NiNode(v4, 0); /*0x440eb0*/
      v5[0x37] = a3; /*0x440eb9*/
      *(_DWORD *)v5 = &BSTempNode::`vftable'; /*0x440ebf*/
    }
    else
    {
      v5 = 0; /*0x440ec7*/
    }
    (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)v5 + 0x84))(v5, a2, 1); /*0x440ede*/
    (*(void (__thiscall **)(_DWORD, float *, int))(**(this + 5) + 0x84))(*(this + 5), v5, 1); /*0x440eee*/
    NiNode_UpdateDynamicEffectState((NiNode *)v5); /*0x440ef2*/
    NiAVObject_InitializePropertyState((NiAVObject *)v5); /*0x440ef9*/
  }
}
