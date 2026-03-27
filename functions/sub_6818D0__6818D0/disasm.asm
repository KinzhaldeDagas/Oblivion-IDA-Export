0x6818D0: push    0FFFFFFFFh
0x6818D2: push    offset SEH_6818D0
0x6818D7: mov     eax, large fs:0
0x6818DD: push    eax
0x6818DE: sub     esp, 44h
0x6818E1: push    ebx
0x6818E2: push    ebp
0x6818E3: push    esi
0x6818E4: push    edi
0x6818E5: mov     eax, ds:0B30AACh
0x6818EA: xor     eax, esp
0x6818EC: push    eax
0x6818ED: lea     eax, [esp+64h+var_C]
0x6818F1: mov     large fs:0, eax
0x6818F7: mov     esi, [esp+64h+arg_0]
0x6818FB: test    esi, esi
0x6818FD: jz      loc_681A40
0x681903: mov     ecx, esi; this
0x681905: call    MobileObject_GetCharProxy
0x68190A: test    eax, eax
0x68190C: jz      loc_681A40
0x681912: mov     eax, [eax+368h]
0x681918: test    eax, eax
0x68191A: jz      loc_681A40
0x681920: mov     ebx, [eax+8]
0x681923: test    ebx, ebx
0x681925: mov     [esp+64h+var_50], ebx
0x681929: jz      loc_681A40
0x68192F: mov     ebp, [esp+64h+arg_8]
0x681933: test    ebp, ebp
0x681935: jz      loc_681A40
0x68193B: lea     eax, [esp+64h+var_3C]
0x68193F: push    eax
0x681940: push    esi
0x681941: call    sub_680F60
0x681946: xor     ecx, ecx
0x681948: add     esp, 8
0x68194B: cmp     [ebx+0A4h], ecx
0x681951: mov     [esp+64h+arg_0], ecx
0x681955: jle     loc_681A40
0x68195B: mov     edx, [ebx+90h]
0x681961: mov     esi, [edx+ecx*4]
0x681964: mov     eax, [esi]
0x681966: test    eax, eax
0x681968: jz      short loc_68196F
0x68196A: mov     edi, [eax+8]
0x68196D: jmp     short loc_681971
0x68196F: xor     edi, edi
0x681971: test    edi, edi
0x681973: jz      loc_681A2D
0x681979: push    0DCh ; 'Ü'; Size
0x68197E: call    FormHeapAlloc
0x681983: add     esp, 4
0x681986: mov     [esp+64h+var_4C], eax
0x68198A: xor     ebx, ebx
0x68198C: cmp     eax, ebx
0x68198E: mov     [esp+64h+var_4], ebx
0x681992: jz      short loc_68199E
0x681994: push    ebx
0x681995: mov     ecx, eax; this
0x681997: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x68199C: mov     ebx, eax
0x68199E: mov     eax, [edi]
0x6819A0: mov     edx, [eax+90h]
0x6819A6: push    ebx
0x6819A7: mov     ecx, edi
0x6819A9: mov     [esp+68h+var_4], 0FFFFFFFFh
0x6819B1: call    edx
0x6819B3: mov     eax, [esi+8]
0x6819B6: add     eax, 30h ; '0'
0x6819B9: push    eax
0x6819BA: lea     ecx, [esp+68h+var_48]
0x6819BE: push    ecx
0x6819BF: call    sub_43F3E0
0x6819C4: mov     edx, [esp+6Ch+var_48]
0x6819C8: mov     eax, [esp+6Ch+var_44]
0x6819CC: mov     ecx, [esp+6Ch+var_40]
0x6819D0: mov     [ebx+54h], edx
0x6819D3: mov     [ebx+58h], eax
0x6819D6: mov     [ebx+5Ch], ecx
0x6819D9: mov     edx, [esi+8]
0x6819DC: push    edx
0x6819DD: lea     eax, [esp+70h+var_3C]
0x6819E1: push    eax
0x6819E2: call    sub_607740
0x6819E7: add     esp, 10h
0x6819EA: lea     edi, [ebx+30h]
0x6819ED: mov     ecx, 9
0x6819F2: lea     esi, [esp+64h+var_3C]
0x6819F6: rep movsd
0x6819F8: mov     edx, [ebp+0]
0x6819FB: mov     eax, [edx+84h]
0x681A01: push    1
0x681A03: push    ebx
0x681A04: mov     ecx, ebp
0x681A06: call    eax
0x681A08: mov     ecx, ebx; this
0x681A0A: call    NiAVObject_InitializePropertyState
0x681A0F: mov     ecx, ebx
0x681A11: call    NiNode_UpdateDynamicEffectState
0x681A16: fldz
0x681A18: push    0; a3
0x681A1A: push    ecx
0x681A1B: mov     ecx, ebx; this
0x681A1D: fstp    [esp+6Ch+a2]; a2
0x681A20: call    NiAVObject_UpdateNiAVObject
0x681A25: mov     ebx, [esp+64h+var_50]
0x681A29: mov     ecx, [esp+64h+arg_0]
0x681A2D: add     ecx, 1
0x681A30: cmp     ecx, [ebx+0A4h]
0x681A36: mov     [esp+64h+arg_0], ecx
0x681A3A: jl      loc_68195B
0x681A40: mov     ecx, dword ptr [esp+64h+var_C]
0x681A44: mov     large fs:0, ecx
0x681A4B: pop     ecx
0x681A4C: pop     edi
0x681A4D: pop     esi
0x681A4E: pop     ebp
0x681A4F: pop     ebx
0x681A50: add     esp, 50h
0x681A53: retn
