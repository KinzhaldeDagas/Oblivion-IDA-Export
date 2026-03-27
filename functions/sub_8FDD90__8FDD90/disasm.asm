0x8FDD90: push    ebp
0x8FDD91: mov     ebp, esp
0x8FDD93: and     esp, 0FFFFFFF0h
0x8FDD96: sub     esp, 1D4h
0x8FDD9C: mov     ecx, ds:0BA9DE4h
0x8FDDA2: push    ebx
0x8FDDA3: mov     ebx, large fs:2Ch
0x8FDDAA: mov     eax, [ebx+ecx*4]
0x8FDDAD: mov     edx, [eax+1A4h]
0x8FDDB3: push    esi
0x8FDDB4: cmp     edx, [eax+1A8h]
0x8FDDBA: push    edi
0x8FDDBB: jnb     short loc_8FDDE1
0x8FDDBD: mov     esi, eax
0x8FDDBF: mov     ecx, [esi+1A4h]
0x8FDDC5: mov     dword ptr [ecx], offset aTtboxbox; "TtBoxBox"
0x8FDDCB: rdtsc
0x8FDDCD: mov     [esp+1E0h+var_1C8], eax
0x8FDDD1: mov     eax, [esp+1E0h+var_1C8]
0x8FDDD5: mov     [ecx+4], eax
0x8FDDD8: add     ecx, 0Ch
0x8FDDDB: mov     [esi+1A4h], ecx
0x8FDDE1: mov     esi, [ebp+arg_0]
0x8FDDE4: mov     eax, [esi]
0x8FDDE6: mov     edx, [eax+0Ch]
0x8FDDE9: mov     edi, [ebp+arg_4]
0x8FDDEC: mov     ecx, [edi]
0x8FDDEE: movaps  xmm1, xmmword ptr [eax+10h]
0x8FDDF2: mov     eax, [ecx+0Ch]
0x8FDDF5: mov     [esp+1E0h+var_1C8], edx
0x8FDDF9: movss   xmm0, [esp+1E0h+var_1C8]
0x8FDDFF: mov     edx, [esi+8]
0x8FDE02: shufps  xmm0, xmm0, 0
0x8FDE06: addps   xmm1, xmm0
0x8FDE09: movaps  [esp+1E0h+var_1B0], xmm1
0x8FDE0E: movaps  xmm1, xmmword ptr [ecx+10h]
0x8FDE12: mov     ecx, [edi+8]
0x8FDE15: mov     [esp+1E0h+var_1C8], eax
0x8FDE19: movss   xmm0, [esp+1E0h+var_1C8]
0x8FDE1F: push    ecx
0x8FDE20: shufps  xmm0, xmm0, 0
0x8FDE24: addps   xmm1, xmm0
0x8FDE27: push    edx
0x8FDE28: lea     ecx, [esp+1E8h+var_170]
0x8FDE2C: movaps  [esp+1E8h+var_1C0], xmm1
0x8FDE31: call    sub_8B1FF0
0x8FDE36: mov     eax, [ebp+arg_8]
0x8FDE39: fld     dword ptr [eax+8]
0x8FDE3C: mov     edx, [edi+8]
0x8FDE3F: mov     ecx, [esi+8]
0x8FDE42: fst     [esp+1E0h+var_80]
0x8FDE49: movaps  xmm0, [esp+1E0h+var_170]
0x8FDE4E: fstp    [esp+1E0h+var_1C8]
0x8FDE52: xor     eax, eax
0x8FDE54: mov     [esp+1E0h+var_128], eax
0x8FDE5B: mov     [esp+1E0h+var_124], eax
0x8FDE62: mov     [esp+1E0h+var_120], eax
0x8FDE69: mov     eax, dword ptr [esp+1E0h+var_1B0]
0x8FDE6D: movaps  [esp+1E0h+var_110], xmm0
0x8FDE75: movaps  xmm0, [esp+1E0h+var_160]
0x8FDE7D: mov     [esp+1E0h+var_11C], ecx
0x8FDE84: mov     ecx, dword ptr [esp+1E0h+var_1B0+4]
0x8FDE88: mov     [esp+1E0h+var_118], edx
0x8FDE8F: mov     edx, dword ptr [esp+1E0h+var_1B0+8]
0x8FDE93: movaps  [esp+1E0h+var_100], xmm0
0x8FDE9B: movaps  xmm0, [esp+1E0h+var_150]
0x8FDEA3: mov     dword ptr [esp+1E0h+var_D0], eax
0x8FDEAA: mov     eax, dword ptr [esp+1E0h+var_1B0+0Ch]
0x8FDEAE: movaps  [esp+1E0h+var_F0], xmm0
0x8FDEB6: movaps  xmm0, [esp+1E0h+var_140]
0x8FDEBE: mov     dword ptr [esp+1E0h+var_D0+4], ecx
0x8FDEC5: mov     ecx, dword ptr [esp+1E0h+var_1C0]
0x8FDEC9: mov     dword ptr [esp+1E0h+var_C8], edx
0x8FDED0: mov     edx, dword ptr [esp+1E0h+var_1C0+4]
0x8FDED4: mov     dword ptr [esp+1E0h+var_C8+4], eax
0x8FDEDB: mov     eax, dword ptr [esp+1E0h+var_1C0+8]
0x8FDEDF: movaps  [esp+1E0h+var_E0], xmm0
0x8FDEE7: movss   xmm0, [esp+1E0h+var_1C8]
0x8FDEED: mov     dword ptr [esp+1E0h+var_C0], ecx
0x8FDEF4: mov     ecx, dword ptr [esp+1E0h+var_1C0+0Ch]
0x8FDEF8: mov     dword ptr [esp+1E0h+var_C0+4], edx
0x8FDEFF: shufps  xmm0, xmm0, 0
0x8FDF03: lea     edx, [esp+1E0h+var_1A0]
0x8FDF07: mov     dword ptr [esp+1E0h+var_B8], eax
0x8FDF0E: movaps  xmm1, xmm0
0x8FDF11: addps   xmm1, [esp+1E0h+var_1B0]
0x8FDF16: push    edx
0x8FDF17: lea     eax, [esp+1E4h+var_1C4]
0x8FDF1B: mov     dword ptr [esp+1E4h+var_B8+4], ecx
0x8FDF22: movaps  [esp+1E4h+var_B0], xmm0
0x8FDF2A: addps   xmm0, [esp+1E4h+var_1C0]
0x8FDF2F: push    eax
0x8FDF30: lea     ecx, [esp+1E8h+var_130]
0x8FDF37: mov     [esp+1E8h+var_130], esi
0x8FDF3E: mov     [esp+1E8h+var_12C], edi
0x8FDF45: mov     [esp+1E8h+var_7C], 3C23D70Ah
0x8FDF50: movaps  [esp+1E8h+var_A0], xmm1
0x8FDF58: movaps  [esp+1E8h+var_90], xmm0
0x8FDF60: mov     [esp+1E8h+var_180], esi
0x8FDF64: mov     [esp+1E8h+var_17C], edi
0x8FDF68: call    sub_9385C0
0x8FDF6D: mov     al, [esp+1E0h+var_1C4]
0x8FDF71: test    al, al
0x8FDF73: jz      short loc_8FDF82
0x8FDF75: mov     ecx, [ebp+arg_C]
0x8FDF78: mov     edx, [ecx]
0x8FDF7A: lea     eax, [esp+1E0h+var_1A0]
0x8FDF7E: push    eax
0x8FDF7F: call    dword ptr [edx+4]
0x8FDF82: mov     ecx, ds:0BA9DE4h
0x8FDF88: mov     eax, [ebx+ecx*4]
0x8FDF8B: mov     edx, [eax+1A4h]
0x8FDF91: cmp     edx, [eax+1A8h]
0x8FDF97: jnb     short loc_8FDFBD
0x8FDF99: mov     esi, eax
0x8FDF9B: mov     ecx, [esi+1A4h]
0x8FDFA1: mov     dword ptr [ecx], offset aEt; "Et"
0x8FDFA7: rdtsc
0x8FDFA9: mov     [esp+1E0h+var_1C8], eax
0x8FDFAD: mov     eax, [esp+1E0h+var_1C8]
0x8FDFB1: mov     [ecx+4], eax
0x8FDFB4: add     ecx, 0Ch
0x8FDFB7: mov     [esi+1A4h], ecx
0x8FDFBD: pop     edi
0x8FDFBE: pop     esi
0x8FDFBF: pop     ebx
0x8FDFC0: mov     esp, ebp
0x8FDFC2: pop     ebp
0x8FDFC3: retn
