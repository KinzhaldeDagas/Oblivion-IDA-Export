const char *__cdecl BSShaderManager_GetPixelShaderTargetName(char a1)
{
  int v1; // eax
  const char *result; // eax

  v1 = MEMORY[0xB42D74]; /*0x7b4785*/
  if ( !a1 ) /*0x7b478a*/
    v1 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF]; /*0x7b478c*/
  switch ( v1 ) /*0x7b4799*/
  {
    case 1: /*0x7b4799*/
      result = "ps_1_3"; /*0x7b47a0*/
      break; /*0x7b47a5*/
    case 2: /*0x7b4799*/
      result = "ps_2_0"; /*0x7b47a6*/
      break; /*0x7b47ab*/
    case 3: /*0x7b4799*/
    case 5: /*0x7b4799*/
      result = "ps_2_a"; /*0x7b47ac*/
      break; /*0x7b47b1*/
    case 4: /*0x7b4799*/
    case 6: /*0x7b4799*/
      result = "ps_2_b"; /*0x7b47b2*/
      break; /*0x7b47b7*/
    case 7: /*0x7b4799*/
      result = "ps_3_0"; /*0x7b47b8*/
      break; /*0x7b47bd*/
    default:
      JUMPOUT(0x7B47BE); /*0x7b47be*/
  }
  return result; /*0x7b47a5*/
}
