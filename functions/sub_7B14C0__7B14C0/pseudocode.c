NiD3DShaderProgram *__thiscall sub_7B14C0(volatile LONG **this)
{
  const char *v2; // edi
  char *v3; // ebx
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v5; // edi
  volatile LONG *v6; // ebp
  NiD3DShaderProgram *result; // eax
  volatile LONG *v8; // edi
  volatile LONG *v9; // ebp
  int v10[18]; // [esp+14h] [ebp-2A0h] BYREF
  char *FullPath; // [esp+5Ch] [ebp-258h]
  int v12[18]; // [esp+60h] [ebp-254h] BYREF
  char v13[260]; // [esp+A8h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+1ACh] [ebp-108h] BYREF

  FullPath = "imagespace\\1x\\v\\menuBG.v.hlsl"; /*0x7b14e4*/
  memset(v12, 0, sizeof(v12)); /*0x7b14ec*/
  memset(v10, 0, sizeof(v10)); /*0x7b1505*/
  v2 = "vs_1_1"; /*0x7b1518*/
  v3 = "ps_1_3"; /*0x7b151d*/
  if ( OB_RendererGlobalState_010201A0.bHighDynamicRangeMode ) /*0x7b1511*/
  {
    v2 = "vs_2_0"; /*0x7b1524*/
    v3 = "ps_2_0"; /*0x7b1529*/
  }
  if ( FullPath ) /*0x7b1534*/
  {
    sub_801030(FullPath, (int)FileName); /*0x7b1543*/
    _sprintf(v13, "MENUBG%03i.vso", 0); /*0x7b1556*/
    VertexShader = CreateVertexShader(FileName, v12, v2, v13, 0, 0); /*0x7b1578*/
    v5 = *(this + 0x26); /*0x7b157d*/
    v6 = (volatile LONG *)VertexShader; /*0x7b1583*/
    if ( v5 != (volatile LONG *)VertexShader ) /*0x7b1587*/
    {
      if ( v5 ) /*0x7b158b*/
      {
        if ( !InterlockedDecrement(v5 + 1) ) /*0x7b1591*/
          (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1); /*0x7b15a7*/
      }
      *(this + 0x26) = v6; /*0x7b15ab*/
      if ( v6 ) /*0x7b15b1*/
        InterlockedIncrement(v6 + 1); /*0x7b15b7*/
    }
  }
  result = (NiD3DShaderProgram *)"imagespace\\1x\\p\\menuBG.p.hlsl"; /*0x7b15bd*/
  if ( "imagespace\\1x\\p\\menuBG.p.hlsl" ) /*0x7b15c3*/
  {
    sub_801030("imagespace\\1x\\p\\menuBG.p.hlsl", (int)FileName); /*0x7b15d2*/
    _sprintf(v13, "MENUBG%03i.pso", 0); /*0x7b15e6*/
    result = CreatePixelShader(FileName, v10, v3, v13, 0, 0); /*0x7b160a*/
    v8 = *(this + 0x27); /*0x7b160f*/
    v9 = (volatile LONG *)result; /*0x7b1615*/
    if ( v8 != (volatile LONG *)result ) /*0x7b1619*/
    {
      if ( v8 ) /*0x7b161d*/
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement(v8 + 1); /*0x7b1623*/
        if ( !result ) /*0x7b162b*/
          result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v8)(v8, 1); /*0x7b1639*/
      }
      *(this + 0x27) = v9; /*0x7b163d*/
      if ( v9 ) /*0x7b1643*/
        return (NiD3DShaderProgram *)InterlockedIncrement(v9 + 1); /*0x7b1649*/
    }
  }
  return result; /*0x7b164f*/
}
