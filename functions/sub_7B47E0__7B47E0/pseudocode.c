const char *BSShaderManager_GetVertexShaderTargetName()
{
  const char *result; // eax

  switch ( *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] ) /*0x7b47ed*/
  {
    case 1: /*0x7b47ed*/
      result = "vs_1_1"; /*0x7b47f4*/
      break; /*0x7b47f9*/
    case 2: /*0x7b47ed*/
    case 3: /*0x7b47ed*/
    case 4: /*0x7b47ed*/
    case 5: /*0x7b47ed*/
    case 6: /*0x7b47ed*/
      result = "vs_2_0"; /*0x7b47fa*/
      break; /*0x7b47ff*/
    case 7: /*0x7b47ed*/
      result = "vs_3_0"; /*0x7b4800*/
      break; /*0x7b4805*/
    default:
      JUMPOUT(0x7B4806); /*0x7b4806*/
  }
  return result; /*0x7b47f9*/
}
