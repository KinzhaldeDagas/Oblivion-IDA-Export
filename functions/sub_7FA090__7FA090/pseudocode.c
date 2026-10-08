NiD3DShaderProgram *__thiscall sub_7FA090(volatile LONG **this)
{
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v3; // edi
  volatile LONG *v4; // ebx
  NiD3DShaderProgram *result; // eax
  volatile LONG *v6; // edi
  volatile LONG *v7; // ebx
  int v8[19]; // [esp+14h] [ebp-2A0h] BYREF
  int v9[18]; // [esp+60h] [ebp-254h] BYREF
  char v10[260]; // [esp+A8h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+1ACh] [ebp-108h] BYREF

  v8[0x12] = (int)"imagespace\\1x\\v\\base_old.v.hlsl"; /*0x7fa0b4*/
  memset(v9, 0, sizeof(v9)); /*0x7fa0bc*/
  sub_801030("imagespace\\1x\\v\\base_old.v.hlsl", (int)FileName); /*0x7fa0da*/
  _sprintf(v10, "DEBUG.vso"); /*0x7fa0ec*/
  VertexShader = CreateVertexShader(FileName, v9, "vs_1_1", v10, 0, 0); /*0x7fa112*/
  v3 = *(this + 0x30); /*0x7fa117*/
  v4 = (volatile LONG *)VertexShader; /*0x7fa11d*/
  if ( v3 != (volatile LONG *)VertexShader ) /*0x7fa121*/
  {
    if ( v3 ) /*0x7fa125*/
    {
      if ( !InterlockedDecrement(v3 + 1) ) /*0x7fa12b*/
        (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1); /*0x7fa141*/
    }
    *(this + 0x30) = v4; /*0x7fa145*/
    if ( v4 ) /*0x7fa14b*/
      InterlockedIncrement(v4 + 1); /*0x7fa151*/
  }
  memset(v8, 0, 0x48); /*0x7fa167*/
  sub_801030("imagespace\\1x\\p\\copy.p.hlsl", (int)FileName); /*0x7fa185*/
  _sprintf(v10, "DEBUG.pso"); /*0x7fa197*/
  result = CreatePixelShader(FileName, v8, "ps_1_3", v10, 0, 0); /*0x7fa1bd*/
  v6 = *(this + 0x31); /*0x7fa1c2*/
  v7 = (volatile LONG *)result; /*0x7fa1c8*/
  if ( v6 != (volatile LONG *)result ) /*0x7fa1cc*/
  {
    if ( v6 ) /*0x7fa1d0*/
    {
      result = (NiD3DShaderProgram *)InterlockedDecrement(v6 + 1); /*0x7fa1d6*/
      if ( !result ) /*0x7fa1de*/
        result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v6)(v6, 1); /*0x7fa1ec*/
    }
    *(this + 0x31) = v7; /*0x7fa1f0*/
    if ( v7 ) /*0x7fa1f6*/
      return (NiD3DShaderProgram *)InterlockedIncrement(v7 + 1); /*0x7fa1fc*/
  }
  return result; /*0x7fa202*/
}
