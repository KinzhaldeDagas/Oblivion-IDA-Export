double __usercall sub_622D40@<st0>(int a1@<ecx>, double result@<st0>)
{
  _DWORD *v4; // eax
  double v5; // st5
  char v6; // al
  char v7; // al
  float v8; // [esp+4h] [ebp-4h] BYREF

  if ( *(_DWORD *)(a1 + 0x6C) == 0xF )
  {
    if ( !sub_6135F0(a1)
      || (v4 = (_DWORD *)sub_6135F0(a1), !Actor_IsSwimming(v4))
      || Actor_IsSwimming(*(_DWORD **)(a1 + 0x3C))
      || Actor_CanFightInWater(*(void **)(a1 + 0x3C)) )
    {
      if ( *(_BYTE *)(a1 + 0x174) )
        goto LABEL_7;
    }
    if ( !sub_6195B0((float *)a1) )
    {
      v5 = *(float *)(a1 + 0xD8);
      if ( v5 < *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4) )
      {
        ((void (__thiscall *)(int))loc_622820)(a1);
        if ( !v6 )
        {
          if ( sub_614290(a1) || (result = sub_6150E0((_DWORD *)a1, v5, result, 0), v7) )
          {
LABEL_7:
            sub_61D320(a1);
            return result;
          }
          if ( !*(_DWORD *)(a1 + 0x80) )
            *(_DWORD *)(a1 + 0x80) = sub_616980((_DWORD *)a1, result, &v8, 4, *(unsigned __int8 *)(a1 + 0x17C));
          *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44);
          *(float *)(a1 + 0xD8) = *(float *)&dword_A46C30;
          *(float *)(a1 + 0xDC) = flt_A30634;
        }
      }
    }
  }
  return result;
}
