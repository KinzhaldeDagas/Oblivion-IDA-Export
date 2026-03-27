void __thiscall BSShaderLightingProperty::~BSShaderLightingProperty(BSShaderLightingProperty *this)
{
  bool v2; // zf
  int *v3; // ecx
  int *v4; // ebp
  int v5; // eax

  *(_DWORD *)this = &BSShaderLightingProperty::`vftable';
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x6C));
  v2 = *((_DWORD *)this + 0x23) == 0;
  *((_DWORD *)this + 0x1F) = 0;
  if ( !v2 )
  {
    do
    {
      v3 = *((int **)this + 0x21);
      v4 = (int *)v3[2];
      v5 = *v3;
      v2 = *v3 == 0;
      *((_DWORD *)this + 0x21) = *v3;
      if ( v2 )
        *((_DWORD *)this + 0x22) = 0;
      else
        *(_DWORD *)(v5 + 4) = 0;
      (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 0x20) + 8))((char *)this + 0x80, v3);
      --*((_DWORD *)this + 0x23);
      if ( v4 )
      {
        sub_56C0F0(v4);
        FormHeapFree((unsigned int)v4);
      }
    }
    while ( *((_DWORD *)this + 0x23) );
  }
  *((_DWORD *)this + 0x24) = 0;
  NiTPointerList<DECAL_DATA *>::~NiTPointerList<DECAL_DATA *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x80));
  NiTPointerList<ShadowSceneLight *>::~NiTPointerList<ShadowSceneLight *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x6C));
  BSShaderProperty::~BSShaderProperty((BSShaderProperty *)this);
}
