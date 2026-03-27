int *__thiscall sub_4ED1B0(_DWORD *this)
{
  ShaderDefinition *ShaderDefinition; // eax
  ShaderDefinition *v3; // ebx
  BSShaderPPLightingProperty *v4; // eax
  BSShaderProperty *v5; // esi
  int v6; // ebp
  int v7; // eax

  if ( *(this + 0xF) )
  {
    ShaderDefinition = GetShaderDefinition(1u);
    v3 = ShaderDefinition;
    if ( ShaderDefinition )
    {
      if ( ShaderDefinition->shader )
      {
        v4 = (BSShaderPPLightingProperty *)FormHeapAlloc(0xF0u);
        if ( v4 )
          v5 = (BSShaderProperty *)BSShaderPPLightingProperty::BSShaderPPLightingProperty(v4);
        else
          v5 = 0;
        v5->member.passInfo |= 0x3000u;
        v5->member.lastRenderPassState = 0;
        sub_405680((NiNode *)*(this + 0xF), v5);
        v6 = *(this + 0xF);
        v7 = (*((int (__thiscall **)(BSShaderProperty *, int))v5->vtbl + 0x1A))(v5, v6);
        sub_6C61E0(*(_DWORD **)(v6 + 0xB4), v7);
        if ( v3->shader )
        {
          if ( v5 )
          {
            (*((void (__thiscall **)(BSShaderProperty *, _DWORD, _DWORD))v5->vtbl + 0x20))(v5, 0, *(this + 0x10));
            (*((void (__thiscall **)(BSShaderProperty *, int, _DWORD))v5->vtbl + 0x20))(v5, 1, 0);
            (*((void (__thiscall **)(BSShaderProperty *, _DWORD, _DWORD))v5->vtbl + 0x21))(v5, 0, *(this + 0x11));
            (*((void (__thiscall **)(BSShaderProperty *, int, _DWORD))v5->vtbl + 0x21))(v5, 1, 0);
          }
          sub_4EC910((NiGeometry *)*(this + 0xF), v3->shader);
          v3->shader->__vftable->super.super.super.UpdateInternalVars((NiShader *)v3->shader, (void *)*(this + 0xF));
          if ( v5 )
            (*((void (__thiscall **)(BSShaderProperty *, _DWORD))v5->vtbl + 0x1F))(v5, 0);
        }
      }
    }
  }
  NiAVObject_InitializePropertyState((NiAVObject *)*(this + 0xF));
  NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 0xF), 0.0, 1);
  return sub_4ECB70((_DWORD **)*(this + 0xE));
}
