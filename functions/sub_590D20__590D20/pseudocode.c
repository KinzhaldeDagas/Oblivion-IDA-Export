char __thiscall sub_590D20(_DWORD *this, float arg0)
{
  CHAR *v3; // eax
  bool v4; // zf
  char *m_data; // ebp
  const char **v6; // edi
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  double v10; // st7
  float a2; // [esp+0h] [ebp-34h]
  BSStringT Str2; // [esp+20h] [ebp-14h] BYREF
  int v14; // [esp+30h] [ebp-4h]
  float v15; // [esp+38h] [ebp+4h]

  v3 = sub_588C10(this, 0xFEC); /*0x590d4e*/
  Str2.m_data = 0; /*0x590d5b*/
  Str2.m_dataLen = 0; /*0x590d5f*/
  Str2.m_bufLen = 0; /*0x590d64*/
  BSStringT_Set(&Str2, v3, 0); /*0x590d69*/
  v4 = *(this + 0x12) == 0; /*0x590d6e*/
  m_data = Str2.m_data; /*0x590d71*/
  v6 = (const char **)(this + 0x12); /*0x590d75*/
  v14 = 0; /*0x590d78*/
  if ( !v4 || Str2.m_data ) /*0x590d80*/
  {
    if ( Str2.m_data && *v6 ) /*0x590d86*/
      v7 = CRT_StricmpLocaleDispatch(*v6, Str2.m_data); /*0x590d8e*/
    else
      v7 = 2 * (Str2.m_data == 0) - 1; /*0x590d9f*/
    if ( v7 ) /*0x590da5*/
    {
      BSStringT_Set((BSStringT *)this + 9, m_data, 0); /*0x590dab*/
      LOWORD(v8) = *((_WORD *)this + 0x26); /*0x590db0*/
      if ( (_WORD)v8 == 0xFFFF ) /*0x590db8*/
        v8 = strlen(*v6); /*0x590dc9*/
      else
        v8 = (unsigned __int16)v8; /*0x590dcd*/
      if ( v8 ) /*0x590dd2*/
      {
        if ( !sub_590740(this, (BSAnimGroupSequence *)*v6) ) /*0x590dd9*/
        {
          FormHeapFree((unsigned int)*v6); /*0x590de5*/
          *v6 = 0; /*0x590ded*/
          *((_WORD *)this + 0x27) = 0; /*0x590def*/
          *((_WORD *)this + 0x26) = 0; /*0x590df3*/
        }
      }
    }
  }
  if ( !*(this + 9) ) /*0x590df7*/
    goto LABEL_27; /*0x590df7*/
  if ( !*(this + 0x10) ) /*0x590e00*/
    goto LABEL_27; /*0x590e00*/
  if ( Tile_GetFloat(this, 0xFA1) == fConstant_1 ) /*0x590e20*/
    goto LABEL_27; /*0x590e20*/
  if ( Tile_GetFloat(this, 0xFA1) == fConstant_1 ) /*0x590e3d*/
    *(_WORD *)(*(this + 9) + 0x18) |= 1u; /*0x590e42*/
  v9 = *(this + 0x11); /*0x590e47*/
  if ( v9 ) /*0x590e4c*/
  {
    if ( -flt_A7DEB4 == *(float *)(v9 + 0x48) ) /*0x590e6c*/
    {
      v10 = 0.0; /*0x590e6e*/
LABEL_22:
      a2 = v10; /*0x590e70*/
      NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 9), a2, 1); /*0x590e79*/
LABEL_23:
      FormHeapFree((unsigned int)m_data); /*0x590e7e*/
      return 1; /*0x590e89*/
    }
    v10 = arg0; /*0x590e9c*/
    if ( arg0 != kTerrainLODQuadRayDirectionZ ) /*0x590ea1*/
      goto LABEL_22; /*0x590ea1*/
    v15 = *(float *)(v9 + 0x34) + *(float *)&MEMORY[0xB33E90][0xC]; /*0x590ebc*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 9), v15, 1); /*0x590ec7*/
    if ( !sub_49F950((int)v6, *(this + 0x11), 0) ) /*0x590edb*/
      goto LABEL_23; /*0x590edb*/
    NiControllerSequence_Deactivate((NiControllerSequence *)*(this + 0x11), 0.0, 0); /*0x590ee7*/
    *(this + 0x11) = 0; /*0x590eec*/
    *(_WORD *)(*(this + 0x10) + 8) &= ~8u; /*0x590ef2*/
    FormHeapFree((unsigned int)m_data); /*0x590ef9*/
    return 1; /*0x590f01*/
  }
  else
  {
LABEL_27:
    FormHeapFree((unsigned int)m_data); /*0x590f06*/
    return 0; /*0x590f0e*/
  }
}
