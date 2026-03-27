void __thiscall sub_440E60(_DWORD **this, int a2, float a3)
{
  NiNode *v4; // eax
  float *v5; // esi

  if ( a2 )
  {
    v4 = (NiNode *)FormHeapAlloc(0xE0u);
    v5 = (float *)v4;
    if ( v4 )
    {
      NiNode::NiNode(v4, 0);
      v5[0x37] = a3;
      *(_DWORD *)v5 = &BSTempNode::`vftable';
    }
    else
    {
      v5 = 0;
    }
    (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)v5 + 0x84))(v5, a2, 1);
    (*(void (__thiscall **)(_DWORD, float *, int))(**(this + 5) + 0x84))(*(this + 5), v5, 1);
    NiNode_UpdateDynamicEffectState((NiNode *)v5);
    NiAVObject_InitializePropertyState((NiAVObject *)v5);
  }
}
