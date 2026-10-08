// MoonSugarEffect decode: pass texture-stage cleanup helper used as shader vtable +0x94. For each pass stage, gets stage texture, preserves global dword_B43110, otherwise releases and clears stage texture ref.
BSShader *__stdcall sub_801430(BSShader *a1)
{
  BSShader *result; // eax
  int v2; // ebp
  _DWORD *v3; // edi
  bool v4; // zf
  bool v5; // bl
  BSShader *v6; // esi
  int v7; // esi
  BSShader *v8; // [esp+4h] [ebp-8h] BYREF
  NiDX9RenderState *D3DRenderState; // [esp+8h] [ebp-4h]

  result = a1; /*0x801430*/
  if ( a1 ) /*0x801439*/
  {
    v2 = 0; /*0x801443*/
    D3DRenderState = a1->member.super.super.D3DRenderState; /*0x801447*/
    if ( (int)D3DRenderState > 0 ) /*0x80144b*/
    {
      while ( 1 ) /*0x80145d*/
      {
        v3 = *((_DWORD **)&result->member.super.ShaderDeclaration->__vftable + v2); /*0x80145d*/
        v4 = *sub_75FB10(v3, &v8) == LODWORD(flt_B43110[0]); /*0x80146e*/
        result = v8; /*0x801474*/
        v5 = !v4; /*0x801478*/
        if ( v8 ) /*0x80147d*/
        {
          v6 = v8; /*0x80147f*/
          result = (BSShader *)InterlockedDecrement((volatile LONG *)&v8->member); /*0x801485*/
          if ( !result ) /*0x80148d*/
            result = (BSShader *)((int (__thiscall *)(BSShader *, int))v6->__vftable->super.super.super.super.Destructor)( /*0x80149b*/
                                   v6,
                                   1);
        }
        if ( v5 ) /*0x80149f*/
        {
          v7 = v3[1]; /*0x8014a1*/
          if ( v7 ) /*0x8014a6*/
          {
            result = (BSShader *)InterlockedDecrement((volatile LONG *)(v7 + 4)); /*0x8014ac*/
            if ( !result ) /*0x8014b4*/
              result = (BSShader *)(**(int (__thiscall ***)(int, int))v7)(v7, 1); /*0x8014c2*/
            v3[1] = 0; /*0x8014c4*/
          }
        }
        if ( ++v2 >= (int)D3DRenderState ) /*0x8014d2*/
          break; /*0x8014d2*/
        result = a1; /*0x801456*/
      }
    }
  }
  return result; /*0x8014d8*/
}
