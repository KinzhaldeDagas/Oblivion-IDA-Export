int __thiscall sub_49A100(CellInfo *this, NiCamera *a2, int a3, int a4)
{
  int v4; // ecx
  double v5; // st7
  int result; // eax
  float v7; // [esp+0h] [ebp-8h]

  if ( !byte_B07050 || !ImageSpaceEffectEnabled )
  {
    v4 = *((_DWORD *)this + 7);
    if ( v4 )
    {
      v5 = (double)(int)Seed;
      if ( (int)Seed < 0 )
        v5 = v5 + flt_A2FC78;
      v7 = v5;
      return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 0x54))(LODWORD(v7));
    }
  }
  return result;
}
