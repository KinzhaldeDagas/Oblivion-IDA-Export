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

  result = a1;
  if ( a1 )
  {
    v2 = 0;
    D3DRenderState = a1->member.super.super.D3DRenderState;
    if ( (int)D3DRenderState > 0 )
    {
      while ( 1 )
      {
        v3 = *((_DWORD **)&result->member.super.ShaderDeclaration->__vftable + v2);
        v4 = *sub_75FB10(v3, &v8) == dword_B43110;
        result = v8;
        v5 = !v4;
        if ( v8 )
        {
          v6 = v8;
          result = (BSShader *)InterlockedDecrement((volatile LONG *)&v8->member);
          if ( !result )
            result = (BSShader *)((int (__thiscall *)(BSShader *, int))v6->__vftable->super.super.super.super.Destructor)(
                                   v6,
                                   1);
        }
        if ( v5 )
        {
          v7 = v3[1];
          if ( v7 )
          {
            result = (BSShader *)InterlockedDecrement((volatile LONG *)(v7 + 4));
            if ( !result )
              result = (BSShader *)(**(int (__thiscall ***)(int, int))v7)(v7, 1);
            v3[1] = 0;
          }
        }
        if ( ++v2 >= (int)D3DRenderState )
          break;
        result = a1;
      }
    }
  }
  return result;
}
