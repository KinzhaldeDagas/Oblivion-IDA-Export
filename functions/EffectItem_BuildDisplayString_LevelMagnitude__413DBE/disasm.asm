0x413DBE: mov     ecx, [eax+58h]
0x413DC1: shr     ecx, 1Eh
0x413DC4: test    cl, 1
0x413DC7: jz      short EffectItem_BuildDisplayString___FeetMagnitude
0x413DC9: mov     ecx, (offset flt_B37ED0+200h)
0x413DCE: call    GameSetting_GetSafeFloatPointer
0x413DD3: fild    [esp+arg_10]
0x413DD7: fmul    dword ptr [eax]
0x413DD9: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x413DDE: mov     edx, ds:0B334B8h
0x413DE4: push    eax
0x413DE5: push    edx
0x413DE6: push    offset aSD_2; " %s %d"
0x413DEB: lea     eax, [esp+0Ch+arg_20]
0x413DEF: push    eax
0x413DF0: jmp     short EffectItem_BuildDisplayString___ConcatMagnitude
