void __usercall sub_59CA70(int a1@<ecx>, double a2@<st2>, double a3@<st1>)
{
  InputGlobal *input; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  double v9; // st5
  float v10; // [esp+10h] [ebp-10h]
  float v11; // [esp+1Ch] [ebp-4h]

  input = OSGlobals->input;
  LOBYTE(v6) = InputGlobals::QueryMouseKeyState(input, 0, 1u);
  if ( v6 || InputGlobals::QueryControlState(input, 0x1D, 1) || sub_6DA150(9) == 2 )
    sub_59C9F0(a2, a3);
  v7 = *(_DWORD *)(a1 + 0x2C);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 0x58);
    v9 = flt_B13FC4 * flt_B33E9C + *(float *)(v7 + 0x5C);
    *(_DWORD *)(v7 + 0x54) = *(_DWORD *)(v7 + 0x54);
    *(_DWORD *)(v7 + 0x58) = v8;
    v11 = v9;
    *(float *)(v7 + 0x5C) = v11;
    NiAVObject_UpdateNiAVObject(*(NiAVObject **)(a1 + 0x2C), 0.0, 1);
    v10 = *(float *)(*(_DWORD *)(a1 + 0x2C) + 0x2C) + *(float *)(*(_DWORD *)(a1 + 0x2C) + 0x2C);
    if ( v10 < (double)v11 )
      sub_59C9F0(v11, a3);
  }
}
