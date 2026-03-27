double __usercall sub_623FA0@<st0>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double result@<st0>)
{
  bool v5; // zf
  int v6; // ecx
  char *Name; // eax
  signed int v8; // eax

  v5 = *(_DWORD *)(a1 + 0x6C) == 7;
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58);
  if ( v5 && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x184))(v6) == a1 )
  {
    if ( sub_612D60((_DWORD *)a1) )
    {
      if ( *(_DWORD *)(a1 + 0x70) != 0xD )
      {
        result = flt_A30634;
        *(float *)(a1 + 0x188) = flt_A30634;
      }
      *(_DWORD *)(a1 + 0x70) = 0xD;
      sub_61D320(a1);
    }
    else
    {
      if ( byte_B3B908 )
      {
        Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C));
        Interface_ConsolePrint("%.20s cannot find any weapons or ammo!", Name);
      }
      v8 = sub_6239D0(a1, a2, a3, result, 0, 0);
      sub_612DE0(a1, v8);
      sub_619920(a1, 0);
    }
  }
  return result;
}
