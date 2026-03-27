0x5E2BE0: push    esi; int
0x5E2BE1: push    edi; int
0x5E2BE2: mov     edi, [esp+8+arg_0]
0x5E2BE6: cmp     edi, 0Ah
0x5E2BE9: mov     esi, ecx
0x5E2BEB: jnz     short loc_5E2C0C
0x5E2BED: fldz
0x5E2BEF: fcomp   [esp+8+arg_4]
0x5E2BF3: fnstsw  ax
0x5E2BF5: test    ah, 41h
0x5E2BF8: jnz     short loc_5E2C0C
0x5E2BFA: mov     eax, [esi]
0x5E2BFC: mov     edx, [eax+278h]
0x5E2C02: call    edx
0x5E2C04: test    al, al
0x5E2C06: jz      Actor_ModCurAVf___Done
0x5E2C0C: push    ebp
0x5E2C0D: mov     ebp, [esi+58h]
0x5E2C10: test    ebp, ebp
0x5E2C12: jz      short Actor_ModCurAVf___CheckHealthDmg
0x5E2C14: mov     eax, [esi]
0x5E2C16: mov     edx, [eax+170h]
0x5E2C1C: push    ebx
0x5E2C1D: mov     ecx, esi
0x5E2C1F: xor     ebx, ebx
0x5E2C21: call    edx
0x5E2C23: mov     edi, eax
0x5E2C25: test    edi, edi
0x5E2C27: jz      short loc_5E2C3B
0x5E2C29: mov     eax, [esi]
0x5E2C2B: mov     edx, [eax+190h]
0x5E2C31: mov     ecx, esi
0x5E2C33: call    edx
0x5E2C35: test    al, al
0x5E2C37: jz      short loc_5E2C3B
0x5E2C39: mov     ebx, edi
0x5E2C3B: fld     [esp+10h+arg_4]
0x5E2C3F: mov     eax, [ebp+0]
0x5E2C42: mov     edx, [eax+288h]
0x5E2C48: push    ecx
0x5E2C49: mov     ecx, [esp+14h+arg_0]
0x5E2C4D: fstp    [esp+14h+var_14]
0x5E2C50: push    ecx
0x5E2C51: push    ebx
0x5E2C52: mov     ecx, ebp
0x5E2C54: call    edx
0x5E2C56: mov     edi, [esp+1Ch+var_8]
0x5E2C5A: pop     ebx
