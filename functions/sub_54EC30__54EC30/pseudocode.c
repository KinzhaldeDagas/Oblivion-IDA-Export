char __thiscall sub_54EC30(_DWORD *this, _DWORD *a2, float a3, char a4, char a5)
{
  _DWORD *v5; // ebx
  int v7; // esi
  int v8; // esi
  double v9; // st7
  double v10; // st6
  int v11; // esi
  bool v13; // c0
  double v14; // st7
  double v15; // st7
  int v16; // edx
  int (__thiscall *v17)(_DWORD *, int, _DWORD); // eax
  float v18; // [esp+0h] [ebp-34h]
  float v19; // [esp+4h] [ebp-30h]
  float v20; // [esp+8h] [ebp-2Ch]
  float v21; // [esp+8h] [ebp-2Ch]
  char v22; // [esp+1Fh] [ebp-15h]
  float v23; // [esp+20h] [ebp-14h]
  double v24; // [esp+24h] [ebp-10h]
  int v25; // [esp+30h] [ebp-4h]
  int (__thiscall **v26)(_DWORD *, int, _DWORD); // [esp+30h] [ebp-4h]

  v5 = a2; /*0x54ec3a*/
  if ( !a2 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 0x40))(a2) ) /*0x54ec4c*/
    v5 = 0; /*0x54ec52*/
  v22 = 0; /*0x54ec56*/
  if ( v5 ) /*0x54ec5b*/
  {
    if ( v5 != this ) /*0x54ec63*/
    {
      v7 = (*(int (__thiscall **)(_DWORD *))(*v5 + 4))(v5); /*0x54ec72*/
      if ( (*(int (__thiscall **)(_DWORD *))(*this + 4))(this) == v7 ) /*0x54ec7f*/
      {
        v8 = (*(int (__thiscall **)(_DWORD *))(*v5 + 0x50))(v5); /*0x54ec8e*/
        if ( (*(int (__thiscall **)(_DWORD *))(*this + 0x50))(this) == v8 ) /*0x54ec9b*/
        {
          v9 = 0.0; /*0x54eca1*/
          v10 = a3; /*0x54eca3*/
          if ( a3 >= 0.0 ) /*0x54ecaf*/
          {
            if ( v10 > 1.0 ) /*0x54ecc2*/
              v10 = 1.0; /*0x54ecc4*/
            v23 = v10; /*0x54ecca*/
          }
          else
          {
            v23 = 0.0; /*0x54ecb5*/
          }
          v11 = 0; /*0x54ecce*/
          if ( !*(this + 4) ) /*0x54ecd0*/
            return 0; /*0x54ece1*/
          while ( !a4 ) /*0x54ecea*/
          {
            v20 = flt_A37080; /*0x54ecfa*/
            v19 = v9; /*0x54ed00*/
            v18 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*v5 + 0x48))(v5, v11); /*0x54ed07*/
            if ( !FloatNearlyEqualAbsolute(v18, v19, v20) ) /*0x54ed0a*/
              break; /*0x54ed0a*/
LABEL_29:
            if ( (unsigned int)++v11 >= *(this + 4) ) /*0x54ee09*/
              return v22; /*0x54ee19*/
            v9 = 0.0; /*0x54ece4*/
          }
          if ( ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*v5 + 0x48))(v5, v11) < *(float *)&SrcStr /*0x54ed4e*/
            || (v13 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*v5 + 0x48))(v5, v11) > 1.0, v14 = 1.0, v13) )
          {
            if ( !a5 ) /*0x54ede9*/
              goto LABEL_29; /*0x54ede9*/
            v16 = *this; /*0x54edeb*/
            v14 = flt_A32048; /*0x54eded*/
          }
          else
          {
            if ( a3 >= 1.0 /*0x54ed8a*/
              || (v14 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*this + 0x48))(this, v11),
                  v14 < *(float *)&SrcStr)
              || (v14 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*this + 0x48))(this, v11), v14 > fConstant_1) )
            {
              v26 = (int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 0x4C); /*0x54edcf*/
              (*(void (__thiscall **)(_DWORD *, int))(*v5 + 0x48))(v5, v11); /*0x54edd9*/
              v17 = *v26; /*0x54eddf*/
LABEL_28:
              v21 = v14; /*0x54edf6*/
              v22 |= v17(this, v11, LODWORD(v21)); /*0x54edff*/
              goto LABEL_29; /*0x54edff*/
            }
            v25 = *this; /*0x54ed8e*/
            v24 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*this + 0x48))(this, v11) * (1.0 - v23); /*0x54edac*/
            v15 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*v5 + 0x48))(v5, v11); /*0x54edb0*/
            v16 = v25; /*0x54edb6*/
            *(float *)&v24 = v15 * v23 + v24; /*0x54edbe*/
            v14 = *(float *)&v24; /*0x54edc2*/
          }
          v17 = *(int (__thiscall **)(_DWORD *, int, _DWORD))(v16 + 0x4C); /*0x54edf3*/
          goto LABEL_28; /*0x54edf3*/
        }
      }
    }
  }
  return 0; /*0x54ecdb*/
}
