0x526FA0: mov     eax, [esp+arg_C]
0x526FA4: fld     dword ptr [eax]
0x526FA6: push    ebx
0x526FA7: push    esi
0x526FA8: fstp    [esp+8+arg_C]
0x526FAC: mov     esi, ecx
0x526FAE: mov     edx, [esi+4]
0x526FB1: test    edx, edx
0x526FB3: jnz     short loc_526FB9
0x526FB5: xor     eax, eax
0x526FB7: jmp     short loc_526FC1
0x526FB9: mov     eax, [esi+0Ch]
0x526FBC: sub     eax, edx
0x526FBE: sar     eax, 2
0x526FC1: mov     ebx, [esp+8+arg_8]
0x526FC5: test    ebx, ebx
0x526FC7: jz      loc_52714F
0x526FCD: test    edx, edx
0x526FCF: jnz     short loc_526FD5
0x526FD1: xor     ecx, ecx
0x526FD3: jmp     short loc_526FDD
0x526FD5: mov     ecx, [esi+8]
0x526FD8: sub     ecx, edx
0x526FDA: sar     ecx, 2
0x526FDD: push    edi
0x526FDE: or      edi, 0FFFFFFFFh
0x526FE1: sub     edi, ecx
0x526FE3: cmp     edi, ebx
0x526FE5: jnb     short loc_526FEC
0x526FE7: call    sub_790B90
0x526FEC: test    edx, edx
0x526FEE: jnz     short loc_526FF4
0x526FF0: xor     ecx, ecx
0x526FF2: jmp     short loc_526FFC
0x526FF4: mov     ecx, [esi+8]
0x526FF7: sub     ecx, edx
0x526FF9: sar     ecx, 2
0x526FFC: add     ecx, ebx
0x526FFE: cmp     eax, ecx
0x527000: push    ebp
0x527001: jnb     loc_5270BC
0x527007: mov     ecx, eax
0x527009: shr     ecx, 1
0x52700B: or      edi, 0FFFFFFFFh
0x52700E: sub     edi, ecx
0x527010: cmp     edi, eax
0x527012: jnb     short loc_527018
0x527014: xor     eax, eax
0x527016: jmp     short loc_52701A
0x527018: add     eax, ecx
0x52701A: test    edx, edx
0x52701C: jnz     short loc_527022
0x52701E: xor     ecx, ecx
0x527020: jmp     short loc_52702A
0x527022: mov     ecx, [esi+8]
0x527025: sub     ecx, edx
0x527027: sar     ecx, 2
0x52702A: add     ecx, ebx
0x52702C: cmp     eax, ecx
0x52702E: jnb     short loc_527042
0x527030: test    edx, edx
0x527032: jnz     short loc_527038
0x527034: xor     eax, eax
0x527036: jmp     short loc_527040
0x527038: mov     eax, [esi+8]
0x52703B: sub     eax, edx
0x52703D: sar     eax, 2
0x527040: add     eax, ebx
0x527042: add     eax, eax
0x527044: add     eax, eax
0x527046: push    eax; Size
0x527047: mov     [esp+14h+arg_8], eax
0x52704B: call    FormHeapAlloc
0x527050: mov     ebp, [esp+14h+Src]
0x527054: mov     ecx, [esi+4]
0x527057: add     esp, 4
0x52705A: mov     edi, eax
0x52705C: push    edi; Dst
0x52705D: push    ebp; int
0x52705E: push    ecx; Src
0x52705F: mov     ecx, esi
0x527061: call    sub_7A25C0
0x527066: lea     edx, [esp+10h+arg_C]
0x52706A: push    edx
0x52706B: push    ebx
0x52706C: push    eax
0x52706D: mov     ecx, esi
0x52706F: call    sub_784B30
0x527074: push    eax; Dst
0x527075: mov     eax, [esi+8]
0x527078: push    eax; int
0x527079: push    ebp; Src
0x52707A: mov     ecx, esi
0x52707C: call    sub_7A25C0
0x527081: mov     eax, [esi+4]
0x527084: test    eax, eax
0x527086: jnz     short loc_52708C
0x527088: xor     ecx, ecx
0x52708A: jmp     short loc_527094
0x52708C: mov     ecx, [esi+8]
0x52708F: sub     ecx, eax
0x527091: sar     ecx, 2
0x527094: add     ebx, ecx
0x527096: test    eax, eax
0x527098: jz      short loc_5270A3
0x52709A: push    eax
0x52709B: call    FormHeapFree
0x5270A0: add     esp, 4
0x5270A3: mov     ecx, [esp+10h+arg_8]
0x5270A7: pop     ebp
0x5270A8: lea     edx, [edi+ebx*4]
0x5270AB: add     ecx, edi
0x5270AD: mov     [esi+4], edi
0x5270B0: pop     edi
0x5270B1: mov     [esi+0Ch], ecx
0x5270B4: mov     [esi+8], edx
0x5270B7: pop     esi
0x5270B8: pop     ebx
0x5270B9: retn    10h
0x5270BC: mov     ebp, [esi+8]
0x5270BF: mov     edi, [esp+10h+Src]
0x5270C3: mov     eax, ebp
0x5270C5: sub     eax, edi
0x5270C7: sar     eax, 2
0x5270CA: cmp     eax, ebx
0x5270CC: lea     eax, ds:0[ebx*4]
0x5270D3: mov     ecx, esi
0x5270D5: mov     [esp+10h+arg_8], eax
0x5270D9: jnb     short loc_527121
0x5270DB: add     eax, edi
0x5270DD: push    eax; Dst
0x5270DE: push    ebp; int
0x5270DF: push    edi; Src
0x5270E0: call    sub_7A25C0
0x5270E5: mov     eax, [esi+8]
0x5270E8: mov     edx, eax
0x5270EA: sub     edx, edi
0x5270EC: lea     ecx, [esp+10h+arg_C]
0x5270F0: push    ecx
0x5270F1: sar     edx, 2
0x5270F4: sub     ebx, edx
0x5270F6: push    ebx
0x5270F7: push    eax
0x5270F8: mov     ecx, esi
0x5270FA: call    sub_784B30
0x5270FF: mov     eax, [esp+10h+arg_8]
0x527103: add     [esi+8], eax
0x527106: mov     esi, [esi+8]
0x527109: lea     ecx, [esp+10h+arg_C]
0x52710D: push    ecx
0x52710E: sub     esi, eax
0x527110: push    esi
0x527111: push    edi
0x527112: call    sub_523AF0
0x527117: add     esp, 0Ch
0x52711A: pop     ebp
0x52711B: pop     edi
0x52711C: pop     esi
0x52711D: pop     ebx
0x52711E: retn    10h
0x527121: push    ebp; Dst
0x527122: mov     ebx, ebp
0x527124: sub     ebx, eax
0x527126: push    ebp; int
0x527127: push    ebx; Src
0x527128: call    sub_7A25C0
0x52712D: push    ebp; int
0x52712E: push    ebx; int
0x52712F: push    edi; Src
0x527130: mov     [esi+8], eax
0x527133: call    sub_5254A0
0x527138: mov     eax, [esp+1Ch+arg_8]
0x52713C: lea     edx, [esp+1Ch+arg_C]
0x527140: push    edx
0x527141: add     eax, edi
0x527143: push    eax
0x527144: push    edi
0x527145: call    sub_523AF0
0x52714A: add     esp, 18h
0x52714D: pop     ebp
0x52714E: pop     edi
0x52714F: pop     esi
0x527150: pop     ebx
0x527151: retn    10h
