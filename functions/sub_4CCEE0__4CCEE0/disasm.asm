0x4CCEE0: push    0FFFFFFFFh
0x4CCEE2: push    offset SEH_4CCEE0
0x4CCEE7: mov     eax, large fs:0
0x4CCEED: push    eax
0x4CCEEE: push    ebx
0x4CCEEF: push    ebp
0x4CCEF0: push    esi
0x4CCEF1: push    edi
0x4CCEF2: mov     eax, ds:0B30AACh
0x4CCEF7: xor     eax, esp
0x4CCEF9: push    eax
0x4CCEFA: lea     eax, [esp+20h+var_C]
0x4CCEFE: mov     large fs:0, eax
0x4CCF04: mov     edi, ecx
0x4CCF06: xor     eax, eax
0x4CCF08: test    byte ptr [edi+24h], 1
0x4CCF0C: jz      loc_4CCFDC
0x4CCF12: lea     ebp, [edi+28h]
0x4CCF15: mov     ecx, ebp
0x4CCF17: call    sub_420B50
0x4CCF1C: push    0; int
0x4CCF1E: push    offset ??_R0?AVIntSeenData@@@8; struct TypeDescriptor *
0x4CCF23: push    offset ??_R0?AVSeenData@@@8; struct _s_RTTICompleteObjectLocator *
0x4CCF28: push    0; int
0x4CCF2A: push    eax; void *
0x4CCF2B: call    OblivionDynamicCast
0x4CCF30: mov     ebx, [esp+34h+arg_4]
0x4CCF34: add     esp, 14h
0x4CCF37: xor     esi, esi
0x4CCF39: test    eax, eax
0x4CCF3B: jz      short loc_4CCF5F
0x4CCF3D: lea     ecx, [ecx+0]
0x4CCF40: movsx   ecx, byte ptr [eax+24h]
0x4CCF44: cmp     ecx, [esp+20h+arg_0]
0x4CCF48: jnz     short loc_4CCF56
0x4CCF4A: movsx   edx, byte ptr [eax+25h]
0x4CCF4E: cmp     edx, ebx
0x4CCF50: jz      loc_4CCFDC
0x4CCF56: mov     esi, eax
0x4CCF58: mov     eax, [eax+28h]
0x4CCF5B: test    eax, eax
0x4CCF5D: jnz     short loc_4CCF40
0x4CCF5F: cmp     byte ptr [esp+20h+arg_8], 0
0x4CCF64: jz      short loc_4CCFDC
0x4CCF66: push    2Ch ; ','; Size
0x4CCF68: call    FormHeapAlloc
0x4CCF6D: add     esp, 4
0x4CCF70: test    esi, esi
0x4CCF72: mov     [esp+20h+arg_8], eax
0x4CCF76: jz      short loc_4CCF9D
0x4CCF78: test    eax, eax
0x4CCF7A: mov     [esp+20h+var_4], 0
0x4CCF82: jz      short loc_4CCF96
0x4CCF84: mov     ecx, [esp+20h+arg_0]
0x4CCF88: push    ebx
0x4CCF89: push    ecx
0x4CCF8A: mov     ecx, eax
0x4CCF8C: call    sub_411F60
0x4CCF91: mov     [esi+28h], eax
0x4CCF94: jmp     short loc_4CCFDC
0x4CCF96: xor     eax, eax
0x4CCF98: mov     [esi+28h], eax
0x4CCF9B: jmp     short loc_4CCFDC
0x4CCF9D: test    eax, eax
0x4CCF9F: mov     [esp+20h+var_4], 1
0x4CCFA7: jz      short loc_4CCFBA
0x4CCFA9: mov     edx, [esp+20h+arg_0]
0x4CCFAD: push    ebx
0x4CCFAE: push    edx
0x4CCFAF: mov     ecx, eax
0x4CCFB1: call    sub_411F60
0x4CCFB6: mov     esi, eax
0x4CCFB8: jmp     short loc_4CCFBC
0x4CCFBA: xor     esi, esi
0x4CCFBC: push    esi
0x4CCFBD: mov     ecx, ebp
0x4CCFBF: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4CCFC7: call    sub_420B70
0x4CCFCC: mov     eax, [edi]
0x4CCFCE: mov     edx, [eax+48h]
0x4CCFD1: push    10000000h
0x4CCFD6: mov     ecx, edi
0x4CCFD8: call    edx
0x4CCFDA: mov     eax, esi
0x4CCFDC: mov     ecx, dword ptr [esp+20h+var_C]
0x4CCFE0: mov     large fs:0, ecx
0x4CCFE7: pop     ecx
0x4CCFE8: pop     edi
0x4CCFE9: pop     esi
0x4CCFEA: pop     ebp
0x4CCFEB: pop     ebx
0x4CCFEC: add     esp, 0Ch
0x4CCFEF: retn    0Ch
