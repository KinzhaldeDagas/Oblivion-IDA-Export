0x78DD10: push    0FFFFFFFFh
0x78DD12: push    offset SEH_78DD10
0x78DD17: mov     eax, large fs:0
0x78DD1D: push    eax
0x78DD1E: sub     esp, 0B4h
0x78DD24: push    ebx
0x78DD25: push    ebp
0x78DD26: push    esi
0x78DD27: push    edi
0x78DD28: mov     eax, ds:0B30AACh
0x78DD2D: xor     eax, esp
0x78DD2F: push    eax
0x78DD30: lea     eax, [esp+0D4h+var_C]
0x78DD37: mov     large fs:0, eax
0x78DD3D: mov     ebp, ecx
0x78DD3F: push    10h; Size
0x78DD41: call    FormHeapAlloc
0x78DD46: add     esp, 4
0x78DD49: xor     ebx, ebx
0x78DD4B: cmp     eax, ebx
0x78DD4D: jz      short loc_78DD5A
0x78DD4F: mov     [eax+4], ebx
0x78DD52: mov     [eax+8], ebx
0x78DD55: mov     [eax+0Ch], ebx
0x78DD58: jmp     short loc_78DD5C
0x78DD5A: xor     eax, eax
0x78DD5C: mov     esi, [esp+0D4h+arg_0]
0x78DD63: mov     ecx, esi
0x78DD65: mov     [esp+0D4h+var_4], 0FFFFFFFFh
0x78DD70: mov     [ebp+58h], eax
0x78DD73: call    sub_78EB40
0x78DD78: sub     eax, 2EE2h
0x78DD7D: fldz
0x78DD7F: fst     [esp+0D4h+var_B0]
0x78DD83: mov     [esp+0D4h+var_BC], ebx
0x78DD87: fst     [esp+0D4h+var_B4]
0x78DD8B: fst     [esp+0D4h+var_B8]
0x78DD8F: fst     [esp+0D4h+var_A4]
0x78DD93: fst     [esp+0D4h+var_A8]
0x78DD97: fstp    [esp+0D4h+var_AC]
0x78DD9B: jz      short loc_78DDB9
0x78DD9D: sub     eax, 1
0x78DDA0: jz      short loc_78DDB2
0x78DDA2: sub     eax, 1
0x78DDA5: jnz     loc_78DE9C
0x78DDAB: mov     edi, 2
0x78DDB0: jmp     short loc_78DDBB
0x78DDB2: mov     edi, 1
0x78DDB7: jmp     short loc_78DDBB
0x78DDB9: xor     edi, edi
0x78DDBB: mov     ecx, esi
0x78DDBD: mov     [esp+0D4h+var_BC], edi
0x78DDC1: call    sub_78EB10
0x78DDC6: fstp    [esp+0D4h+var_A0]
0x78DDCA: mov     ecx, esi
0x78DDCC: call    sub_78EB10
0x78DDD1: fstp    [esp+0D4h+var_9C]
0x78DDD5: mov     ecx, esi
0x78DDD7: call    sub_78EB10
0x78DDDC: fstp    [esp+0D4h+var_98]
0x78DDE0: fld     [esp+0D4h+var_A0]
0x78DDE4: mov     eax, edi
0x78DDE6: sub     eax, ebx
0x78DDE8: fstp    [esp+0D4h+var_B8]
0x78DDEC: fld     [esp+0D4h+var_9C]
0x78DDF0: fstp    [esp+0D4h+var_B4]
0x78DDF4: fld     [esp+0D4h+var_98]
0x78DDF8: fstp    [esp+0D4h+var_B0]
0x78DDFC: jz      short loc_78DE47
0x78DDFE: sub     eax, 1
0x78DE01: jz      short loc_78DE2F
0x78DE03: sub     eax, 1
0x78DE06: jnz     loc_78DEE8
0x78DE0C: mov     ecx, esi
0x78DE0E: call    sub_78EB10
0x78DE13: fstp    [esp+0D4h+var_AC]
0x78DE17: mov     ecx, esi
0x78DE19: call    sub_78EB10
0x78DE1E: fstp    [esp+0D4h+var_A8]
0x78DE22: mov     ecx, esi
0x78DE24: call    sub_78EB10
0x78DE29: fstp    [esp+0D4h+var_A4]
0x78DE2D: jmp     short loc_78DE52
0x78DE2F: mov     ecx, esi
0x78DE31: call    sub_78EB10
0x78DE36: fstp    [esp+0D4h+var_AC]
0x78DE3A: mov     ecx, esi
0x78DE3C: call    sub_78EB10
0x78DE41: fstp    [esp+0D4h+var_A8]
0x78DE45: jmp     short loc_78DE52
0x78DE47: mov     ecx, esi
0x78DE49: call    sub_78EB10
0x78DE4E: fstp    [esp+0D4h+var_AC]
0x78DE52: mov     ecx, [ebp+58h]
0x78DE55: lea     eax, [esp+0D4h+var_BC]
0x78DE59: push    eax
0x78DE5A: call    sub_78D550
0x78DE5F: mov     ecx, esi
0x78DE61: call    sub_787810
0x78DE66: test    al, al
0x78DE68: jnz     loc_78DF34
0x78DE6E: mov     ecx, esi
0x78DE70: call    sub_78EB40
0x78DE75: cmp     eax, 2EE1h
0x78DE7A: jnz     loc_78DD78
0x78DE80: mov     ecx, [esp+0D4h+var_C]
0x78DE87: mov     large fs:0, ecx
0x78DE8E: pop     ecx
0x78DE8F: pop     edi
0x78DE90: pop     esi
0x78DE91: pop     ebp
0x78DE92: pop     ebx
0x78DE93: add     esp, 0C0h
0x78DE99: retn    4
0x78DE9C: push    1Fh; MaxCount
0x78DE9E: push    offset aMalformedColli; "malformed collision object info"
0x78DEA3: lea     ecx, [esp+0DCh+var_94]
0x78DEA7: mov     [esp+0DCh+var_7C], 0Fh
0x78DEAF: mov     [esp+0DCh+var_80], ebx
0x78DEB3: mov     [esp+0DCh+var_90], bl
0x78DEB7: call    sub_414500
0x78DEBC: push    ebx
0x78DEBD: lea     ecx, [esp+0D8h+var_94]
0x78DEC1: push    ecx
0x78DEC2: lea     ecx, [esp+0DCh+var_5C]
0x78DEC9: mov     [esp+0DCh+var_4], 1
0x78DED4: call    sub_789190
0x78DED9: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x78DEDE: lea     edx, [esp+0D8h+var_5C]
0x78DEE2: push    edx
0x78DEE3: call    ThrowException??
0x78DEE8: push    1Dh; MaxCount
0x78DEEA: push    offset aUnknownCollisi; "unknown collision object type"
0x78DEEF: lea     ecx, [esp+0DCh+var_94]
0x78DEF3: mov     [esp+0DCh+var_7C], 0Fh
0x78DEFB: mov     [esp+0DCh+var_80], ebx
0x78DEFF: mov     [esp+0DCh+var_90], bl
0x78DF03: call    sub_414500
0x78DF08: push    ebx
0x78DF09: lea     eax, [esp+0D8h+var_94]
0x78DF0D: push    eax
0x78DF0E: lea     ecx, [esp+0DCh+var_5C]
0x78DF15: mov     [esp+0DCh+var_4], 2
0x78DF20: call    sub_789190
0x78DF25: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x78DF2A: lea     ecx, [esp+0D8h+var_5C]
0x78DF2E: push    ecx
0x78DF2F: call    ThrowException??
0x78DF34: push    3Bh ; ';'; MaxCount
0x78DF36: push    offset aPrematureEnd_2; "premature end of file reached parsing c"...
0x78DF3B: lea     ecx, [esp+0DCh+var_78]
0x78DF3F: mov     [esp+0DCh+var_60], 0Fh
0x78DF47: mov     [esp+0DCh+var_64], ebx
0x78DF4B: mov     [esp+0DCh+var_74], bl
0x78DF4F: call    sub_414500
0x78DF54: push    ebx
0x78DF55: lea     edx, [esp+0D8h+var_78]
0x78DF59: push    edx
0x78DF5A: lea     ecx, [esp+0DCh+var_34]
0x78DF61: mov     [esp+0DCh+var_4], 3
0x78DF6C: call    sub_789190
0x78DF71: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x78DF76: lea     eax, [esp+0D8h+var_34]
0x78DF7D: push    eax
0x78DF7E: call    ThrowException??
