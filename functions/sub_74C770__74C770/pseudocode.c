char __thiscall sub_74C770(unsigned __int16 *this, NiPoint3 *a2, NiPoint3 *a3)
{
  int v4; // edi
  unsigned int v5; // eax
  int v6; // edi
  int v7; // ebp
  int v8; // ebx
  char result; // al
  float v10; // [esp+8h] [ebp-Ch]

  v4 = *(this + 0x2E); /*0x74c777*/
  if ( !*(this + 0x2E) ) /*0x74c777*/
    goto LABEL_21; /*0x74c777*/
  v10 = (double)rand() / dbl_A3D5A8; /*0x74c79e*/
  v5 = (__int64)(v10 * (double)v4); /*0x74c7ce*/
  if ( v5 == v4 ) /*0x74c7d8*/
    v5 = v4 - 1; /*0x74c7da*/
  if ( v5 >= *(this + 0x2E) || (v6 = *(_DWORD *)(*((_DWORD *)this + 0x15) + 4 * v5)) == 0 ) /*0x74c7f1*/
LABEL_21:
    JUMPOUT(0x74C8EC); /*0x74c8ec*/
  v7 = *(_DWORD *)(v6 + 0xB8); /*0x74c7ff*/
  if ( v5 >= *(this + 0x36) ) /*0x74c805*/
    v8 = 0; /*0x74c80f*/
  else
    v8 = *(_DWORD *)(*((_DWORD *)this + 0x19) + 4 * v5); /*0x74c80a*/
  if ( v7 ) /*0x74c813*/
  {
    if ( v8 ) /*0x74c817*/
    {
      if ( !*(_DWORD *)(v8 + 8) ) /*0x74c819*/
        sub_74A2D0((Ni2DBuffer **)v8, v6); /*0x74c822*/
    }
  }
  switch ( *((_DWORD *)this + 0x1D) ) /*0x74c836*/
  {
    case 1: /*0x74c836*/
    case 3: /*0x74c836*/
      if ( v7 ) /*0x74c83f*/
        result = sub_74B3C0((float *)this, v8, v6, a2, a3); /*0x74c84f*/
      else
        result = sub_74BCD0((float *)this, (NiPoint3 *)v6, a2, a3); /*0x74c86b*/
      break; /*0x74c85b*/
    case 2: /*0x74c836*/
    case 4: /*0x74c836*/
      if ( v7 ) /*0x74c87c*/
        result = sub_74B7A0((float *)this, v8, (NiPoint3 *)v6, a2, a3); /*0x74c88c*/
      else
        result = sub_74AE30((float *)this, *(float *)&v6, a2, a3); /*0x74c8a8*/
      break; /*0x74c898*/
    default:
      JUMPOUT(0x74C8B7); /*0x74c8b7*/
  }
  return result; /*0x74c856*/
}
