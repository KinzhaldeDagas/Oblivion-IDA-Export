0x46E3F0: mov     eax, [esp+arg_0]
0x46E3F4: sub     esp, 8
0x46E3F7: push    0; int
0x46E3F9: push    offset ??_R0?AVTESQualityForm@@@8; struct TypeDescriptor *
0x46E3FE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46E403: push    0; int
0x46E405: push    eax; void *
0x46E406: call    OblivionDynamicCast
0x46E40B: add     esp, 14h
0x46E40E: test    eax, eax
0x46E410: jz      short loc_46E43B
0x46E412: fld     dword ptr [eax+4]
0x46E415: fnstcw  [esp+8+var_6]
0x46E419: movzx   eax, [esp+8+var_6]
0x46E41E: or      eax, 0C00h
0x46E423: mov     [esp+8+var_4], eax
0x46E427: fldcw   word ptr [esp+8+var_4]
0x46E42B: fistp   [esp+8+var_4]
0x46E42F: mov     al, byte ptr [esp+8+var_4]
0x46E433: fldcw   [esp+8+var_6]
0x46E437: add     esp, 8
0x46E43A: retn
0x46E43B: or      al, 0FFh
0x46E43D: add     esp, 8
0x46E440: retn
