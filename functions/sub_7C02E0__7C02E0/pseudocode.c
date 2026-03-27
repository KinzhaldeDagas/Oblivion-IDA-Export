BSRenderedTexture *sub_7C02E0()
{
  BSRenderedTexture *result; // eax
  BSRenderedTexture *v1; // esi

  result = dword_B43328;
  if ( dword_B43328 )
  {
    sub_7C1EE0(g_textureManager, dword_B43328);
    result = dword_B43328;
    if ( dword_B43328 )
    {
      v1 = dword_B43328;
      result = (BSRenderedTexture *)InterlockedDecrement((volatile LONG *)&result->members);
      if ( !result )
      {
        if ( v1 )
          result = (BSRenderedTexture *)(*(int (__thiscall **)(BSRenderedTexture *, int))v1->vtbl)(v1, 1);
      }
      dword_B43328 = 0;
    }
  }
  return result;
}
