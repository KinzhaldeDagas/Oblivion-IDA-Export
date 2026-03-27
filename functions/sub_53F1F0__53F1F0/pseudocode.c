LONG __thiscall sub_53F1F0(int this, char *Str1)
{
  LONG result; // eax
  int *v4; // ebx
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v7; // esi
  LONG v8; // ebp
  unsigned int v9; // esi
  NiNode *v10; // eax
  NiNode *v11; // eax
  NiObject *v12; // eax
  NiObject *v13; // eax
  NiObject *Destructor; // eax
  NiObject *v15; // eax
  NiNode *v16; // eax
  _DWORD v17[2]; // [esp+34h] [ebp-14h] BYREF
  unsigned int v18; // [esp+44h] [ebp-4h]
  char Str1a; // [esp+4Ch] [ebp+4h]

  result = *(_DWORD *)(this + 4);
  v4 = (int *)(this + 4);
  if ( result )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *, LONG))(**(_DWORD **)(this + 0xC) + 0x88))(
      *(_DWORD *)(this + 0xC),
      v17,
      result);
    v5 = InterlockedDecrement;
    if ( v17[0] )
    {
      v6 = (void (__thiscall ***)(_DWORD, int))v17[0];
      if ( !v5((volatile LONG *)(v17[0] + 4)) )
        (**v6)(v6, 1);
    }
    sub_55E2A0((int *)(this + 8), v4);
    NiObjectNET_SetName(*(NiObjectNET **)(this + 8), "Last Precip Root");
    result = (*(int (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 0xC) + 0x84))(
               *(_DWORD *)(this + 0xC),
               *(_DWORD *)(this + 8),
               1);
    v7 = *v4;
    if ( *v4 )
    {
      result = v5((volatile LONG *)(v7 + 4));
      if ( !result )
      {
        if ( v7 )
          result = (**(int (__thiscall ***)(int, int))v7)(v7, 1);
      }
      *v4 = 0;
    }
  }
  if ( Str1 )
  {
    if ( *Str1 )
    {
      result = sub_439EB0((int *)ModelLoaderPtr, Str1, 0, 0, 1);
      v8 = result;
      if ( result )
      {
        v9 = 0;
        Str1a = _strcmp(Str1, "Sky\\Snow.NIF") == 0;
        (*(void (__thiscall **)(LONG, _DWORD, _DWORD))(*(_DWORD *)v8 + 0x60))(v8, 0.0, 0);
        v10 = (NiNode *)FormHeapAlloc(0xDCu);
        v17[1] = v10;
        v18 = 0;
        if ( v10 )
          v11 = NiNode::NiNode(v10, 0);
        else
          v11 = 0;
        v18 = 0xFFFFFFFF;
        NiSmartPointer_Set__((Ni2DBuffer **)v4, (Ni2DBuffer *)v11);
        *(float *)(this + 0x10) = 0.0;
        if ( *(_WORD *)(v8 + 0xB8) )
        {
          do
          {
            if ( *(unsigned __int16 *)(v8 + 0xB6) > v9 )
              v12 = *(NiObject **)(*(_DWORD *)(v8 + 0xB0) + 4 * v9);
            else
              v12 = 0;
            v13 = NiRTTI_Cast((BSStringT *)dword_B3FAB0, v12);
            if ( v13 )
            {
              if ( HIWORD(v13[0x16].members.m_uiRefCount) )
                Destructor = (NiObject *)v13[0x16].__vftable->super.Destructor;
              else
                Destructor = 0;
              v15 = NiRTTI_Cast((BSStringT *)dword_B40864, Destructor);
              if ( v15 )
              {
                v16 = sub_53DA20(v15, *(_DWORD *)(this + 0xC) + 0x64, Str1a);
                if ( v16 )
                  (*(void (__thiscall **)(int, NiNode *, int))(*(_DWORD *)*v4 + 0x84))(*v4, v16, 1);
              }
            }
            ++v9;
          }
          while ( v9 < *(unsigned __int16 *)(v8 + 0xB8) );
        }
        NiObjectNET_SetName((NiObjectNET *)*v4, "Current Precip Root");
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 0xC) + 0x84))(*(_DWORD *)(this + 0xC), *v4, 1);
        NiAVObject_InitializePropertyState((NiAVObject *)*v4);
        return NiNode_UpdateDynamicEffectState((NiNode *)*v4);
      }
    }
  }
  return result;
}
