char __thiscall sub_6F99F0(_DWORD *this, int a2)
{
  void (__thiscall ***NiFile_Indirect)(_DWORD, int); // esi
  char result; // al
  char v5; // bl
  __int64 v6; // [esp-4h] [ebp-Ch]

  LODWORD(v6) = 0x2800;
  NiFile_Indirect = (void (__thiscall ***)(_DWORD, int))NiFile_GetNiFile_Indirect(a2, 1, v6);
  result = 0;
  if ( NiFile_Indirect )
  {
    v5 = sub_712260(this, (int)NiFile_Indirect);
    (**NiFile_Indirect)(NiFile_Indirect, 1);
    return v5;
  }
  return result;
}
