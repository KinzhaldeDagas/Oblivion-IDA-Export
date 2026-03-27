bool __stdcall sub_8094D0(NiNode *a1)
{
  BSShaderPPLightingProperty *v1; // edi
  NiProperty *NiPropertyByID; // esi
  NiNode *v3; // esi
  BSShaderPPLightingProperty *v4; // eax
  BSShaderProperty *v5; // esi
  volatile LONG *v6; // ebx
  int v7; // esi
  volatile LONG *v9; // [esp+10h] [ebp-10h] BYREF
  unsigned int v10; // [esp+1Ch] [ebp-4h]

  v1 = (BSShaderPPLightingProperty *)a1;
  NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4);
  if ( NiPropertyByID )
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
      && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA )
    {
      return 1;
    }
    sub_708560((int **)v1, (volatile LONG **)&a1, 4);
    if ( a1 )
    {
      v3 = a1;
      if ( !InterlockedDecrement((volatile LONG *)&a1->members) )
        v3->vtbl->super.super.super.Destructor((NiRefObject *)v3, 1);
    }
  }
  v4 = (BSShaderPPLightingProperty *)FormHeapAlloc(0xF0u);
  a1 = (NiNode *)v4;
  v10 = 0;
  if ( v4 )
    v5 = (BSShaderProperty *)BSShaderPPLightingProperty::BSShaderPPLightingProperty(v4);
  else
    v5 = 0;
  v10 = 0xFFFFFFFF;
  sub_405680((NiNode *)v1, v5);
  v5->member.passInfo |= 0x800u;
  v5->member.lastRenderPassState = 0;
  sub_708560((int **)v1, &v9, 0);
  if ( v9 )
  {
    v6 = v9;
    if ( !InterlockedDecrement(v9 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
  }
  if ( !(*((unsigned __int8 (__thiscall **)(BSShaderProperty *, BSShaderPPLightingProperty *))v5->vtbl + 0x16))(v5, v1) )
  {
    sub_4A1220((int **)v1, (int)v5);
    v7 = *((_DWORD *)v1 + 0x2F);
    if ( v7 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      *((_DWORD *)v1 + 0x2F) = 0;
    }
    return 0;
  }
  return (*((int (__thiscall **)(BSShaderProperty *, _DWORD))v5->vtbl + 0x23))(v5, 0) != 0;
}
