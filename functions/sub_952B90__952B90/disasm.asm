0x952B90: push    ebp
0x952B91: mov     ebp, esp
0x952B93: and     esp, 0FFFFFFF0h
0x952B96: sub     esp, 74h
0x952B99: mov     ecx, large fs:2Ch
0x952BA0: mov     edx, ds:0BA9DE4h
0x952BA6: mov     eax, [ecx+edx*4]
0x952BA9: push    ebx
0x952BAA: push    esi
0x952BAB: mov     esi, [eax+1A4h]
0x952BB1: push    edi
0x952BB2: cmp     esi, [eax+1A8h]
0x952BB8: jnb     short loc_952BDE
0x952BBA: mov     esi, eax
0x952BBC: mov     ecx, [esi+1A4h]
0x952BC2: mov     dword ptr [ecx], offset aTtpenetration; "TtPenetration"
0x952BC8: rdtsc
0x952BCA: mov     [esp+80h+var_74], eax
0x952BCE: mov     eax, [esp+80h+var_74]
0x952BD2: mov     [ecx+4], eax
0x952BD5: add     ecx, 0Ch
0x952BD8: mov     [esi+1A4h], ecx
0x952BDE: mov     esi, [ebp+arg_1C]
0x952BE1: mov     ecx, [ebp+arg_18]
0x952BE4: mov     edi, [ebp+arg_14]
0x952BE7: mov     ebx, [ebp+arg_10]
0x952BEA: mov     edx, [ebp+arg_C]
0x952BED: mov     eax, [ebp+arg_8]
0x952BF0: push    esi; int
0x952BF1: push    ecx; int
0x952BF2: mov     ecx, [ebp+arg_4]
0x952BF5: push    edi; int
0x952BF6: push    ebx; int
0x952BF7: push    edx; float
0x952BF8: mov     edx, [ebp+arg_0]
0x952BFB: push    eax; int
0x952BFC: push    ecx; int
0x952BFD: push    edx; int
0x952BFE: lea     ecx, [esp+0A0h+var_70]
0x952C02: call    sub_951C80
0x952C07: mov     eax, [ebp+arg_20]
0x952C0A: push    eax
0x952C0B: lea     ecx, [esp+84h+var_70]
0x952C0F: call    sub_952A00
0x952C14: mov     ecx, eax
0x952C16: cmp     ecx, 3
0x952C19: jnz     short loc_952C40
0x952C1B: mov     ecx, [ebp+arg_20]
0x952C1E: mov     edx, [ebp+arg_8]
0x952C21: mov     eax, [ebp+arg_4]
0x952C24: push    ecx
0x952C25: mov     ecx, [ebp+arg_0]
0x952C28: push    edi
0x952C29: push    ebx
0x952C2A: push    edx
0x952C2B: push    eax
0x952C2C: push    ecx
0x952C2D: call    sub_959750
0x952C32: add     esp, 18h
0x952C35: mov     dword ptr [esi], 1
0x952C3B: mov     ecx, 1
0x952C40: mov     edx, large fs:2Ch
0x952C47: mov     esi, ds:0BA9DE4h
0x952C4D: mov     eax, [edx+esi*4]
0x952C50: mov     edi, [eax+1A4h]
0x952C56: cmp     edi, [eax+1A8h]
0x952C5C: jnb     short loc_952C82
0x952C5E: mov     edi, eax
0x952C60: mov     esi, [edi+1A4h]
0x952C66: mov     dword ptr [esi], offset aEt; "Et"
0x952C6C: rdtsc
0x952C6E: mov     [esp+80h+var_74], eax
0x952C72: mov     edx, [esp+80h+var_74]
0x952C76: mov     [esi+4], edx
0x952C79: add     esi, 0Ch
0x952C7C: mov     [edi+1A4h], esi
0x952C82: pop     edi
0x952C83: pop     esi
0x952C84: mov     eax, ecx
0x952C86: pop     ebx
0x952C87: mov     esp, ebp
0x952C89: pop     ebp
0x952C8A: retn
