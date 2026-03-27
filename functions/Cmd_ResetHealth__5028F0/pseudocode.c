double __usercall Cmd_ResetHealth@<st0>(double result@<st0>, int a2, int a3, int *a4)
{
  float v7; // [esp+10h] [ebp-4h]
  float v8; // [esp+20h] [ebp+Ch]

  if ( a4 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*a4 + 0x190))(a4) )
    {
      (*(void (__thiscall **)(int *, int))(*a4 + 0x288))(a4, 8);
      v7 = result;
      v8 = (double)(int)Actor_GetBaseCalcAVi(8) - v7;
      (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*a4 + 0x2A4))(a4, 8, LODWORD(v8), 0);
      return v8;
    }
  }
  return result;
}
