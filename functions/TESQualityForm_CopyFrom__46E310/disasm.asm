0x46E310: push    ecx
0x46E311: mov     eax, [esp+4+arg_0]
0x46E315: push    esi
0x46E316: push    0; int
0x46E318: push    offset ??_R0?AVTESQualityForm@@@8; struct TypeDescriptor *
0x46E31D: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46E322: push    0; int
0x46E324: push    eax; void *
0x46E325: mov     esi, ecx
0x46E327: call    OblivionDynamicCast
0x46E32C: add     esp, 14h
0x46E32F: test    eax, eax
0x46E331: jz      short loc_46E366
0x46E333: fld     dword ptr [eax+4]
0x46E336: fnstcw  word ptr [esp+8+arg_0]
0x46E33A: movzx   eax, word ptr [esp+8+arg_0]
0x46E33F: or      eax, 0C00h
0x46E344: mov     [esp+8+var_4], eax
0x46E348: fldcw   word ptr [esp+8+var_4]
0x46E34C: fistp   [esp+8+var_4]
0x46E350: mov     cl, byte ptr [esp+8+var_4]
0x46E354: movzx   edx, cl
0x46E357: fldcw   word ptr [esp+8+arg_0]
0x46E35B: mov     [esp+8+arg_0], edx
0x46E35F: fild    [esp+8+arg_0]
0x46E363: fstp    dword ptr [esi+4]
0x46E366: pop     esi
0x46E367: pop     ecx
0x46E368: retn    4
