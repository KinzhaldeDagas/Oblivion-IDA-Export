char __userpurge sub_6CA950@<al>(int this@<ecx>, int edi0@<edi>, float a3, float a4)
{
  int v5; // ecx
  double v6; // st7
  char result; // al
  float *v8; // ecx
  int v9; // eax
  bool v10; // zf
  unsigned int *v11; // ecx
  NiD3DPass *a2; // [esp+10h] [ebp-4h] BYREF

  v5 = *(_DWORD *)(this + 0x44);
  if ( !v5 )
    JUMPOUT(0x6CAC36);
  v6 = a3;
  if ( -flt_A7DEB4 == *(float *)(this + 0x48) )
    *(float *)(this + 0x48) = -v6;
  if ( -flt_A7DEB4 == *(float *)(this + 0x4C) )
  {
    *(float *)(this + 0x4C) = a3;
    *(float *)(this + 0x50) = *(float *)(this + 0x50) + v6;
  }
  *(float *)&a2 = 1.0;
  switch ( v5 )
  {
    case 1:
      *(float *)(this + 0x4C) = *(float *)(this + 0x3C);
      return def_6CA9B5(a3, a4);
    case 2:
      if ( *(float *)(this + 0x50) <= v6 )
        goto LABEL_17;
      if ( *(float *)(this + 0x4C) > v6 )
        a3 = *(float *)(this + 0x4C);
      goto LABEL_28;
    case 3:
      if ( *(float *)(this + 0x50) <= v6 )
        return sub_6C9CB0(this, 0.0, 0);
      if ( *(float *)(this + 0x4C) > v6 )
        a3 = *(float *)(this + 0x4C);
      goto LABEL_28;
    case 4:
      goto LABEL_25;
    case 5:
      if ( *(float *)(this + 0x50) > v6 )
      {
        if ( *(float *)(this + 0x4C) > v6 )
          a3 = *(float *)(this + 0x4C);
        goto LABEL_28;
      }
      if ( -flt_A7DEB4 != *(float *)(this + 0x54) )
      {
        *(float *)(this + 0x48) = *(float *)(this + 0x54) - v6;
        *(float *)(this + 0x54) = -flt_A7DEB4;
      }
LABEL_17:
      *(_DWORD *)(this + 0x44) = 1;
      result = def_6CA9B5(a3, a4);
      break;
    case 6:
      v8 = *(float **)(this + 0x58);
      *(float *)&a2 = v6 + *(float *)(this + 0x48);
      *(float *)&a2 = sub_6C6B30(v8, edi0, this, *(float *)&a2);
      v9 = *(_DWORD *)(this + 0x58);
      *(float *)&a2 = *(float *)&a2 / *(float *)(v9 + 0x28);
      v6 = a3;
      *(float *)(v9 + 0x48) = *(float *)&a2 - a3;
      v10 = *(_DWORD *)(this + 0x44) == 0;
      *(_DWORD *)(this + 0x44) = 4;
      if ( v10 )
      {
        v11 = (unsigned int *)(*(_DWORD *)(this + 0x40) + 0x4C);
        a2 = (NiD3DPass *)this;
        sub_73A5E0(v11, &a2);
        v6 = a3;
      }
LABEL_25:
      if ( *(float *)(this + 0x50) <= v6 )
      {
        result = sub_6C9CB0(this, 0.0, 1);
      }
      else
      {
        if ( *(float *)(this + 0x4C) > v6 )
          a3 = *(float *)(this + 0x4C);
LABEL_28:
        result = def_6CA9B5(a3, a4);
      }
      break;
    default:
      JUMPOUT(0x6CAB79);
  }
  return result;
}
