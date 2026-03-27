double __usercall sub_504F70@<st0>(double result@<st0>, int a2, int a3, int a4, int a5, int a6, int a7, double *a8)
{
  int v11; // eax
  NiAVObject *v12; // esi
  double v13; // st6

  if ( a4 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x154))(a4) )
    {
      v11 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)a4 + 0x154))(a4, result);
      v12 = 0;
      if ( v11 )
        v12 = (NiAVObject *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
      v13 = (double)(unsigned __int8)sub_4E26F0((int)v12, (int)v12);
      *a8 = v13;
      if ( 0.0 != v13 )
      {
        NiAVObject_InitializePropertyState(v12);
        NiNode_UpdateDynamicEffectState((NiNode *)v12);
        result = 0.0;
        NiAVObject_UpdateNiAVObject(v12, 0.0, 1);
      }
      if ( IsConsoleMode )
        Interface_ConsolePrint("AddFlames >> %0.2f", *a8);
    }
  }
  return result;
}
