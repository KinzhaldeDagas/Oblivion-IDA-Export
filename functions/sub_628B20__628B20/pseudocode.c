int __thiscall sub_628B20(int this, int a2, int a3)
{
  int result; // eax

  result = a3; /*0x628b20*/
  switch ( a3 ) /*0x628b30*/
  {
    case 0: /*0x628b30*/
    case 7: /*0x628b30*/
    case 0x12: /*0x628b30*/
    case 0x1B: /*0x628b30*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x2C0))(a2); /*0x628b5f*/
      break; /*0x628b5f*/
    case 0xB: /*0x628b30*/
      *(float *)(this + 0x294) = kTerrainLODQuadRayDirectionZ; /*0x628b3d*/
      break; /*0x628b43*/
    case 0x30: /*0x628b30*/
      *(_DWORD *)(this + 0x298) = 0xFFFFFFFF; /*0x628b46*/
      break; /*0x628b50*/
    default:
      return result;
  }
  return result; /*0x628b43*/
}
