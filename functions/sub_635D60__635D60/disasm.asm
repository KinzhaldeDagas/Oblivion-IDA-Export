0x635D60: sub     esp, 18h
0x635D63: push    ebx
0x635D64: push    esi
0x635D65: mov     esi, [esp+20h+arg_0]
0x635D69: xor     bl, bl
0x635D6B: test    esi, esi
0x635D6D: push    edi
0x635D6E: jz      loc_635E09
0x635D74: fldz
0x635D76: mov     ecx, [esp+24h+arg_4]
0x635D7A: mov     edx, [esp+24h+arg_8]
0x635D7E: sub     esp, 14h
0x635D81: fstp    [esp+38h+var_28]; float
0x635D85: mov     eax, esp
0x635D87: fld     [esp+38h+arg_10]
0x635D8B: fstp    [esp+38h+var_2C]; float
0x635D8F: mov     [eax], ecx
0x635D91: mov     ecx, [esp+38h+arg_C]
0x635D95: mov     [eax+4], edx
0x635D98: lea     edx, [esp+38h+var_18]
0x635D9C: push    edx; int
0x635D9D: mov     [eax+8], ecx
0x635DA0: call    sub_62E790
0x635DA5: add     esp, 18h
0x635DA8: push    0; int
0x635DAA: push    0; float
0x635DAC: push    1; float
0x635DAE: mov     ecx, esi; this
0x635DB0: call    TESObjectREFR_GetParentCell
0x635DB5: mov     ecx, [esp+30h+var_18]
0x635DB9: mov     edx, [esp+30h+var_14]
0x635DBD: push    eax; int
0x635DBE: sub     esp, 0Ch
0x635DC1: mov     eax, esp
0x635DC3: mov     [eax], ecx
0x635DC5: mov     ecx, [esp+40h+var_10]
0x635DC9: mov     [eax+4], edx
0x635DCC: lea     edx, [esp+40h+var_C]
0x635DD0: mov     [eax+8], ecx
0x635DD3: push    edx; int
0x635DD4: mov     ecx, esi
0x635DD6: call    sub_5E2E20
0x635DDB: mov     ecx, [eax]
0x635DDD: mov     edi, [esp+24h+arg_14]
0x635DE1: mov     [edi], ecx
0x635DE3: mov     edx, [eax+4]
0x635DE6: mov     [edi+4], edx
0x635DE9: mov     eax, [eax+8]
0x635DEC: mov     [edi+8], eax
0x635DEF: mov     edx, [esi]
0x635DF1: mov     eax, [edx+174h]
0x635DF7: mov     ecx, esi
0x635DF9: call    eax
0x635DFB: push    eax
0x635DFC: mov     ecx, edi
0x635DFE: call    sub_8AA390
0x635E03: test    al, al
0x635E05: mov     al, 1
0x635E07: jnz     short loc_635E0B
0x635E09: mov     al, bl
0x635E0B: pop     edi
0x635E0C: pop     esi
0x635E0D: pop     ebx
0x635E0E: add     esp, 18h
0x635E11: retn
