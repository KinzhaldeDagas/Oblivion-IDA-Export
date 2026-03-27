void __thiscall sub_96F170(float *this, float *a2, float *a3)
{
  void (__thiscall *v6)(float *, float *, float *); // edx
  void (__thiscall *v7)(float *, float *, float *); // edx
  int v8; // ebp
  double v9; // st7
  double v10; // st6
  int v11; // eax
  void (__thiscall *v12)(float *, float *, float *); // edx
  float v13; // [esp+50h] [ebp-Ch]
  float v14; // [esp+54h] [ebp-8h]
  float v15; // [esp+54h] [ebp-8h]
  float v16; // [esp+58h] [ebp-4h]
  float v17; // [esp+60h] [ebp+4h]
  float v18; // [esp+60h] [ebp+4h]
  float v19; // [esp+60h] [ebp+4h]
  float v20; // [esp+60h] [ebp+4h]
  float v21; // [esp+60h] [ebp+4h]
  float v22; // [esp+60h] [ebp+4h]
  float v23; // [esp+60h] [ebp+4h]
  float v24; // [esp+64h] [ebp+8h]
  float v25; // [esp+64h] [ebp+8h]

  v13 = 0.0;
  v24 = ((double (__thiscall *)(float *, float *, float *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 8))(this, a2, a3, 0.0);
  if ( -*(this + 4) < v24 )
  {
    if ( v24 > (double)flt_AA3B44 )
    {
      if ( sub_8AA350(a2, a3)
        || (v17 = 0.0 - *(this + 2),
            v18 = ((double (__thiscall *)(float *, float *, float *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 8))(
                    this,
                    a2,
                    a3,
                    LODWORD(v17)),
            v14 = (v24 - v18) * *(this + 3),
            v14 >= 0.0)
        || (v16 = ((double (__thiscall *)(float *, float *, float *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 8))(
                    this,
                    a2,
                    a3,
                    *(this + 1)),
            v16 > 0.0)
        && (v19 = *(this + 1) - *(this + 2),
            v20 = ((double (__thiscall *)(float *, float *, float *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 8))(
                    this,
                    a2,
                    a3,
                    LODWORD(v19)),
            v21 = (v16 - v20) * *(this + 3),
            v21 < (double)*(float *)&SrcStr) )
      {
        *((_DWORD *)this + 6) = 1;
        *(this + 7) = flt_A7DEB4;
      }
      else
      {
        v8 = 1;
        if ( *((int *)this + 5) < 1 )
        {
LABEL_16:
          v11 = *(_DWORD *)this;
LABEL_17:
          v12 = *(void (__thiscall **)(float *, float *, float *))(v11 + 0xC);
          *(this + 7) = v13;
          *((_DWORD *)this + 6) = 2;
          v12(this, a2, a3);
        }
        else
        {
          v9 = v24;
          v10 = v14;
          while ( 1 )
          {
            v13 = v13 - v9 / v10;
            if ( *(this + 1) < (double)v13 )
              break;
            v25 = ((double (__thiscall *)(float *, float *, float *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 8))(
                    this,
                    a2,
                    a3,
                    LODWORD(v13));
            v11 = *(_DWORD *)this;
            if ( *(this + 4) >= (double)v25 )
              goto LABEL_17;
            v22 = v13 - *(this + 2);
            v23 = ((double (__thiscall *)(float *, float *, float *, _DWORD))*(_DWORD *)(v11 + 8))(
                    this,
                    a2,
                    a3,
                    LODWORD(v22));
            v9 = v25;
            v15 = (v25 - v23) * *(this + 3);
            v10 = v15;
            if ( v15 >= 0.0 )
              break;
            if ( ++v8 > *((_DWORD *)this + 5) )
              goto LABEL_16;
          }
          *((_DWORD *)this + 6) = 1;
          *(this + 7) = flt_A7DEB4;
        }
      }
    }
    else
    {
      v7 = *(void (__thiscall **)(float *, float *, float *))(*(_DWORD *)this + 0xC);
      *(this + 7) = 0.0;
      *((_DWORD *)this + 6) = 2;
      v7(this, a2, a3);
    }
  }
  else
  {
    v6 = *(void (__thiscall **)(float *, float *, float *))(*(_DWORD *)this + 0xC);
    *(this + 7) = 0.0;
    *((_DWORD *)this + 6) = 3;
    v6(this, a2, a3);
  }
}
