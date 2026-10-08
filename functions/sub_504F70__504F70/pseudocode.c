double __usercall sub_504F70@<st0>(double result@<st0>, int _14, int a3, int a4, int a5, int a6, int a7, double *a8)
{
  int v8; // eax
  NiAVObject *a2; // esi
  double v10; // st6

  if ( a4 ) /*0x504f77*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x154))(a4) ) /*0x504f87*/
    {
      v8 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)a4 + 0x154))(a4, result); /*0x504f9b*/
      a2 = 0; /*0x504f9d*/
      if ( v8 ) /*0x504fa1*/
        a2 = (NiAVObject *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x504fac*/
      v10 = (double)(unsigned __int8)sub_4E26F0((int)a2, (int)a2); /*0x504fc3*/
      *a8 = v10; /*0x504fc7*/
      if ( 0.0 != v10 ) /*0x504fd2*/
      {
        NiAVObject_InitializePropertyState(a2); /*0x504fd6*/
        NiNode_UpdateDynamicEffectState((NiNode *)a2); /*0x504fdd*/
        result = 0.0; /*0x504fe2*/
        NiAVObject_UpdateNiAVObject(a2, 0.0, 1); /*0x504fec*/
      }
      if ( MEMORY[0xB361AC] ) /*0x504ff1*/
        Interface_ConsolePrint("AddFlames >> %0.2f", *a8); /*0x505007*/
    }
  }
  return result; /*0x505012*/
}
