char __thiscall sub_74C770(unsigned __int16 *this, NiPoint3 *a2, NiPoint3 *a3)
{
  int v4; // edi
  unsigned int v5; // eax
  int v6; // edi
  int v7; // ebp
  int v8; // ebx
  char result; // al
  float v10; // [esp+8h] [ebp-Ch]

  v4 = *(this + 0x2E);
  if ( !*(this + 0x2E) )
    goto LABEL_21;
  v10 = (double)rand() / dbl_A3D5A8;
  v5 = (__int64)(v10 * (double)v4);
  if ( v5 == v4 )
    v5 = v4 - 1;
  if ( v5 >= *(this + 0x2E) || (v6 = *(_DWORD *)(*((_DWORD *)this + 0x15) + 4 * v5)) == 0 )
LABEL_21:
    JUMPOUT(0x74C8EC);
  v7 = *(_DWORD *)(v6 + 0xB8);
  if ( v5 >= *(this + 0x36) )
    v8 = 0;
  else
    v8 = *(_DWORD *)(*((_DWORD *)this + 0x19) + 4 * v5);
  if ( v7 )
  {
    if ( v8 )
    {
      if ( !*(_DWORD *)(v8 + 8) )
        sub_74A2D0((Ni2DBuffer **)v8, v6);
    }
  }
  switch ( *((_DWORD *)this + 0x1D) )
  {
    case 1:
    case 3:
      if ( v7 )
        result = sub_74B3C0((float *)this, v8, v6, a2, a3);
      else
        result = sub_74BCD0((float *)this, (NiPoint3 *)v6, a2, a3);
      break;
    case 2:
    case 4:
      if ( v7 )
        result = sub_74B7A0((float *)this, v8, (NiPoint3 *)v6, a2, a3);
      else
        result = sub_74AE30((float *)this, *(float *)&v6, a2, a3);
      break;
    default:
      JUMPOUT(0x74C8B7);
  }
  return result;
}
