char __cdecl sub_4E76D0(NiNode *a1)
{
  LONG v1; // eax
  NiNode *v2; // eax
  NiNode *v3; // eax
  NiNode *v4; // esi
  BSShaderProperty *v5; // eax
  LONG (__stdcall *v6)(volatile LONG *); // edi
  NiNode *v7; // esi
  UInt32 v8; // esi

  LOBYTE(v1) = (_BYTE)a1;
  if ( byte_B35F84 != (_BYTE)a1 )
  {
    byte_B35F84 = (char)a1;
    if ( (_BYTE)v1 )
    {
      v2 = (NiNode *)FormHeapAlloc(0xDCu);
      a1 = v2;
      if ( v2 )
        v3 = NiNode::NiNode(v2, 0);
      else
        v3 = 0;
      NiSmartPointer_Set__((Ni2DBuffer **)&dword_B35F88, (Ni2DBuffer *)v3);
      v4 = (NiNode *)dword_B35F88;
      v5 = (BSShaderProperty *)sub_4E70B0();
      sub_405680(v4, v5);
      LOBYTE(v1) = ((char (__thiscall *)(NiNode *, UInt32, int))TES->ObjectLODRoot->vtbl->AddObject)(
                     TES->ObjectLODRoot,
                     dword_B35F88,
                     1);
    }
    else
    {
      TES->ObjectLODRoot->vtbl->RemoveObject(TES->ObjectLODRoot, (NiAVObject **)&a1, (NiAVObject *)dword_B35F88);
      v6 = InterlockedDecrement;
      if ( a1 )
      {
        v7 = a1;
        if ( !v6((volatile LONG *)&a1->members) )
          v7->vtbl->super.super.super.Destructor((NiRefObject *)v7, 1);
      }
      LOBYTE(v1) = sub_477EF0((_WORD *)(dword_B35F88 + 0xAC));
      v8 = dword_B35F88;
      if ( dword_B35F88 )
      {
        v1 = v6((volatile LONG *)(v8 + 4));
        if ( !v1 )
        {
          if ( v8 )
            LOBYTE(v1) = (**(int (__thiscall ***)(UInt32, int))v8)(v8, 1);
        }
        dword_B35F88 = 0;
      }
    }
  }
  return v1;
}
