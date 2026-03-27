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

  v5 = a2;
  if ( !a2 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 0x40))(a2) )
    v5 = 0;
  v22 = 0;
  if ( v5 )
  {
    if ( v5 != this )
    {
      v7 = (*(int (__thiscall **)(_DWORD *))(*v5 + 4))(v5);
      if ( (*(int (__thiscall **)(_DWORD *))(*this + 4))(this) == v7 )
      {
        v8 = (*(int (__thiscall **)(_DWORD *))(*v5 + 0x50))(v5);
        if ( (*(int (__thiscall **)(_DWORD *))(*this + 0x50))(this) == v8 )
        {
          v9 = 0.0;
          v10 = a3;
          if ( a3 >= 0.0 )
          {
            if ( v10 > 1.0 )
              v10 = 1.0;
            v23 = v10;
          }
          else
          {
            v23 = 0.0;
          }
          v11 = 0;
          if ( !*(this + 4) )
            return 0;
          while ( !a4 )
          {
            v20 = flt_A37080;
            v19 = v9;
            v18 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*v5 + 0x48))(v5, v11);
            if ( !sub_47DF40(v18, v19, v20) )
              break;
LABEL_29:
            if ( (unsigned int)++v11 >= *(this + 4) )
              return v22;
            v9 = 0.0;
          }
          if ( ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*v5 + 0x48))(v5, v11) < *(float *)&SrcStr
            || (v13 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*v5 + 0x48))(v5, v11) > 1.0, v14 = 1.0, v13) )
          {
            if ( !a5 )
              goto LABEL_29;
            v16 = *this;
            v14 = flt_A32048;
          }
          else
          {
            if ( a3 >= 1.0
              || (v14 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*this + 0x48))(this, v11),
                  v14 < *(float *)&SrcStr)
              || (v14 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*this + 0x48))(this, v11), v14 > fConstant_1) )
            {
              v26 = (int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 0x4C);
              (*(void (__thiscall **)(_DWORD *, int))(*v5 + 0x48))(v5, v11);
              v17 = *v26;
LABEL_28:
              v21 = v14;
              v22 |= v17(this, v11, LODWORD(v21));
              goto LABEL_29;
            }
            v25 = *this;
            v24 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*this + 0x48))(this, v11) * (1.0 - v23);
            v15 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*v5 + 0x48))(v5, v11);
            v16 = v25;
            *(float *)&v24 = v15 * v23 + v24;
            v14 = *(float *)&v24;
          }
          v17 = *(int (__thiscall **)(_DWORD *, int, _DWORD))(v16 + 0x4C);
          goto LABEL_28;
        }
      }
    }
  }
  return 0;
}
