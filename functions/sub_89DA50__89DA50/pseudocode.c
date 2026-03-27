int __cdecl sub_89DA50(float a1)
{
  int v1; // ecx
  float v3; // [esp+4h] [ebp+4h]

  if ( a1 == *(float *)&SrcStr )
    v3 = 0.0;
  else
    v3 = fConstant_1 / a1;
  return (*(int (__thiscall **)(int, float))(*(_DWORD *)v1 + 0x24))(v1, COERCE_FLOAT(LODWORD(v3)));
}
