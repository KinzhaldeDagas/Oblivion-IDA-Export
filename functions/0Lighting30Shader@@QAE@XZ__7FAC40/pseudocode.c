// MoonSugarEffect build 25: Lighting30 constructor clears selector-state byte arrays B46964..B46984 and pixel row bytes B46930[0..0x30] before selector population.
// DX11 child-pin audit 2026-10-01: Lighting30 constructor7FAC40 and destructor7FAF20 establish +4 NiRef ownership of cached maps at shader+7C/+80/+84/+88 and declaration alternatives+8C/+90/+94/+98. Base shader owns active maps+2C/+30 and declaration+24. Definition factory7FC7D0 supplies four NiDX9ShaderDeclaration objects (six/eight/four/eight elements) to constructor call7FCBC4. Constant-map destructor9A9900 owns all capacity slots of the NiPointer entry array, not just the logical end; data+10 and capacity/end/live/grow at+14/+16/+18/+1A. Entries use+4 refs and vtableAB348C. New DX11 pin collection retains these child objects individually and seals bindings/array contents, but does NOT preserve the raw array allocation or exclude its mutation by itself. Pooled passes use a different +60 counter and remain separate.
Lighting30Shader *__thiscall Lighting30Shader::Lighting30Shader(
        Lighting30Shader *this,
        NiDX9ShaderDeclaration *objectDeclaration,
        NiDX9ShaderDeclaration *skinDeclaration,
        NiDX9ShaderDeclaration *alternate4Declaration,
        NiDX9ShaderDeclaration *alternate8Declaration)
{
  NiDX9ShaderDeclaration *v6; // edi
  NiDX9ShaderDeclaration *v7; // edi
  NiDX9ShaderDeclaration *v8; // edi
  NiDX9ShaderDeclaration *v9; // edi
  NiDX9ShaderDeclaration *v10; // edi
  int v11; // edi
  LONG (__stdcall *v12)(volatile LONG *); // ebp
  int v13; // edi
  int v14; // edi
  int v15; // edi
  Lighting30Shader *result; // eax

  BSShader::BSShader((BSShader *)this); /*0x7fac6b*/
  *(_DWORD *)this = &Lighting30Shader::`vftable'; /*0x7fac72*/
  *((_DWORD *)this + 0x1F) = 0; /*0x7fac7c*/
  *((_DWORD *)this + 0x20) = 0; /*0x7fac7f*/
  *((_DWORD *)this + 0x21) = 0; /*0x7fac85*/
  *((_DWORD *)this + 0x22) = 0; /*0x7fac8b*/
  *((_DWORD *)this + 0x23) = 0; /*0x7fac91*/
  *((_DWORD *)this + 0x24) = 0; /*0x7fac97*/
  *((_DWORD *)this + 0x25) = 0; /*0x7fac9d*/
  *((_DWORD *)this + 0x26) = 0; /*0x7faca3*/
  v6 = *((NiDX9ShaderDeclaration **)this + 9); /*0x7faca9*/
  if ( v6 != objectDeclaration ) /*0x7facb7*/
  {
    if ( v6 ) /*0x7facbb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->members) ) /*0x7facc1*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))v6->__vftable)(v6, 1); /*0x7facd7*/
    }
    *((_DWORD *)this + 9) = objectDeclaration; /*0x7facdb*/
    if ( objectDeclaration ) /*0x7facde*/
      InterlockedIncrement((volatile LONG *)&objectDeclaration->members); /*0x7face4*/
  }
  v7 = *((NiDX9ShaderDeclaration **)this + 0x23); /*0x7facea*/
  if ( v7 != objectDeclaration ) /*0x7facf2*/
  {
    if ( v7 ) /*0x7facf6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v7->members) ) /*0x7facfc*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))v7->__vftable)(v7, 1); /*0x7fad12*/
    }
    *((_DWORD *)this + 0x23) = objectDeclaration; /*0x7fad16*/
    if ( objectDeclaration ) /*0x7fad1c*/
      InterlockedIncrement((volatile LONG *)&objectDeclaration->members); /*0x7fad22*/
  }
  v8 = *((NiDX9ShaderDeclaration **)this + 0x24); /*0x7fad28*/
  if ( v8 != skinDeclaration ) /*0x7fad34*/
  {
    if ( v8 ) /*0x7fad38*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v8->members) ) /*0x7fad3e*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))v8->__vftable)(v8, 1); /*0x7fad54*/
    }
    *((_DWORD *)this + 0x24) = skinDeclaration; /*0x7fad58*/
    if ( skinDeclaration ) /*0x7fad5e*/
      InterlockedIncrement((volatile LONG *)&skinDeclaration->members); /*0x7fad64*/
  }
  v9 = *((NiDX9ShaderDeclaration **)this + 0x25); /*0x7fad6a*/
  if ( v9 != alternate4Declaration ) /*0x7fad76*/
  {
    if ( v9 ) /*0x7fad7a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v9->members) ) /*0x7fad80*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))v9->__vftable)(v9, 1); /*0x7fad96*/
    }
    *((_DWORD *)this + 0x25) = alternate4Declaration; /*0x7fad9a*/
    if ( alternate4Declaration ) /*0x7fada0*/
      InterlockedIncrement((volatile LONG *)&alternate4Declaration->members); /*0x7fada6*/
  }
  v10 = *((NiDX9ShaderDeclaration **)this + 0x26); /*0x7fadac*/
  if ( v10 != alternate8Declaration ) /*0x7fadb8*/
  {
    if ( v10 ) /*0x7fadbc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v10->members) ) /*0x7fadc2*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))v10->__vftable)(v10, 1); /*0x7fadd8*/
    }
    *((_DWORD *)this + 0x26) = alternate8Declaration; /*0x7faddc*/
    if ( alternate8Declaration ) /*0x7fade2*/
      InterlockedIncrement((volatile LONG *)&alternate8Declaration->members); /*0x7fade8*/
  }
  v11 = *((_DWORD *)this + 0x1F); /*0x7fadee*/
  v12 = InterlockedDecrement; /*0x7fadf3*/
  if ( v11 ) /*0x7fadf9*/
  {
    if ( !v12((volatile LONG *)(v11 + 4)) ) /*0x7fadff*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7fae11*/
    *((_DWORD *)this + 0x1F) = 0; /*0x7fae13*/
  }
  v13 = *((_DWORD *)this + 0x20); /*0x7fae16*/
  if ( v13 ) /*0x7fae1e*/
  {
    if ( !v12((volatile LONG *)(v13 + 4)) ) /*0x7fae24*/
      (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x7fae36*/
    *((_DWORD *)this + 0x20) = 0; /*0x7fae38*/
  }
  v14 = *((_DWORD *)this + 0x21); /*0x7fae3e*/
  if ( v14 ) /*0x7fae46*/
  {
    if ( !v12((volatile LONG *)(v14 + 4)) ) /*0x7fae4c*/
      (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x7fae5e*/
    *((_DWORD *)this + 0x21) = 0; /*0x7fae60*/
  }
  v15 = *((_DWORD *)this + 0x22); /*0x7fae66*/
  if ( v15 ) /*0x7fae6e*/
  {
    if ( !v12((volatile LONG *)(v15 + 4)) ) /*0x7fae74*/
      (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x7fae86*/
    *((_DWORD *)this + 0x22) = 0; /*0x7fae88*/
  }
  *((_DWORD *)this + 0x27) = 0; /*0x7fae90*/
  unk_B46964 = 0; /*0x7fae9e*/
  unk_B46968 = 0; /*0x7faea3*/
  unk_B4696C = 0; /*0x7faea8*/
  unk_B46970 = 0; /*0x7faead*/
  unk_B46974 = 0; /*0x7faeb2*/
  unk_B46978 = 0; /*0x7faeb7*/
  unk_B4697C = 0; /*0x7faebc*/
  unk_B46980 = 0; /*0x7faec1*/
  unk_B46984 = 0; /*0x7faec6*/
  _memset((int)unk_B46930, 0, 0x31u); /*0x7faecb*/
  result = this; /*0x7faeda*/
  if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 7 ) /*0x7faedc*/
    dword_B2DCFC = 8; /*0x7faede*/
  return result; /*0x7faee8*/
}
