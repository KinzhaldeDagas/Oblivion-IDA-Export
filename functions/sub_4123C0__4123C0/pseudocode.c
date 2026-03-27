int __cdecl sub_4123C0(float *a1, char a2, signed int *a3, signed int *a4)
{
  signed int v4; // edi
  signed int v5; // esi
  signed int v6; // edi
  int result; // eax
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]

  if ( a2 )
  {
    v9 = (int)a1[1];
    v4 = (int)*a1 - (((int)*a1 - 0x800) & 0xFFFFF000) - 0x800;
    *a3 = v4;
    *a3 = v4 / Double_To_SInt32(flt_B03174);
    v5 = (int)a1[1] - ((v9 - 0x800) & 0xFFFFF000) - 0x800;
  }
  else
  {
    v8 = (int)a1[1];
    v6 = (int)*a1 - ((int)*a1 & 0xFFFFF000);
    *a3 = v6;
    *a3 = v6 / Double_To_SInt32(flt_B03174);
    v5 = (int)a1[1] - (v8 & 0xFFFFF000);
  }
  *a4 = v5;
  result = v5 / Double_To_SInt32(flt_B03174);
  *a4 = result;
  return result;
}
