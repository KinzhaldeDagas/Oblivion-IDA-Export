// Verified registration: fPathInvalidMovementTypePenalty defaults to 20000.0 and is returned by actor-aware connected-point traversal when the actor cannot use the point's movement type.
int sub_9FA5C0()
{
  GameSetting_ConstrAndReg_float(&g_fPathInvalidMovementTypePenalty, (int)"fPathInvalidMovementTypePenalty", 20000.0); /*0x9fa5d4*/
  return atexit(sub_A24040); /*0x9fa5e4*/
}
