char __thiscall sub_590D20(_DWORD *this, float arg0)
{
  CHAR *v3; // eax
  bool v4; // zf
  char *m_data; // ebp
  char **v6; // edi
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  double v10; // st7
  float a2; // [esp+0h] [ebp-34h]
  BSStringT Str2; // [esp+20h] [ebp-14h] BYREF
  int v14; // [esp+30h] [ebp-4h]
  float v15; // [esp+38h] [ebp+4h]

  v3 = sub_588C10(this, 0xFEC);
  Str2.m_data = 0;
  Str2.m_dataLen = 0;
  Str2.m_bufLen = 0;
  BSStringT_Set(&Str2, v3, 0);
  v4 = *(this + 0x12) == 0;
  m_data = Str2.m_data;
  v6 = (char **)(this + 0x12);
  v14 = 0;
  if ( !v4 || Str2.m_data )
  {
    if ( Str2.m_data && *v6 )
      v7 = _strcmp(*v6, Str2.m_data);
    else
      v7 = 2 * (Str2.m_data == 0) - 1;
    if ( v7 )
    {
      BSStringT_Set((BSStringT *)this + 9, m_data, 0);
      LOWORD(v8) = *((_WORD *)this + 0x26);
      if ( (_WORD)v8 == 0xFFFF )
        v8 = strlen(*v6);
      else
        v8 = (unsigned __int16)v8;
      if ( v8 )
      {
        if ( !sub_590740(this, *v6) )
        {
          FormHeapFree((unsigned int)*v6);
          *v6 = 0;
          *((_WORD *)this + 0x27) = 0;
          *((_WORD *)this + 0x26) = 0;
        }
      }
    }
  }
  if ( !*(this + 9) )
    goto LABEL_27;
  if ( !*(this + 0x10) )
    goto LABEL_27;
  if ( Tile_GetFloat(this, 0xFA1) == fConstant_1 )
    goto LABEL_27;
  if ( Tile_GetFloat(this, 0xFA1) == fConstant_1 )
    *(_WORD *)(*(this + 9) + 0x18) |= 1u;
  v9 = *(this + 0x11);
  if ( v9 )
  {
    if ( -flt_A7DEB4 == *(float *)(v9 + 0x48) )
    {
      v10 = 0.0;
LABEL_22:
      a2 = v10;
      NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 9), a2, 1);
LABEL_23:
      FormHeapFree((unsigned int)m_data);
      return 1;
    }
    v10 = arg0;
    if ( arg0 != flt_A30634 )
      goto LABEL_22;
    v15 = *(float *)(v9 + 0x34) + flt_B33E9C;
    NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 9), v15, 1);
    if ( !sub_49F950((int)v6, *(this + 0x11), 0) )
      goto LABEL_23;
    sub_6C9CB0(*(this + 0x11), 0.0, 0);
    *(this + 0x11) = 0;
    *(_WORD *)(*(this + 0x10) + 8) &= ~8u;
    FormHeapFree((unsigned int)m_data);
    return 1;
  }
  else
  {
LABEL_27:
    FormHeapFree((unsigned int)m_data);
    return 0;
  }
}
