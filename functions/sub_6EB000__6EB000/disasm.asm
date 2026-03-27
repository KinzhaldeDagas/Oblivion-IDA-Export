0x6EB000: sub     esp, 24h
0x6EB003: fld1
0x6EB005: push    ebx
0x6EB006: push    esi
0x6EB007: fstp    [esp+2Ch+var_24]
0x6EB00B: mov     esi, ecx
0x6EB00D: mov     byte ptr [esi+40h], 0
0x6EB011: mov     eax, ds:0B25AD0h
0x6EB016: mov     [esi+30h], eax
0x6EB019: mov     ecx, ds:0B25AD4h
0x6EB01F: mov     [esi+34h], ecx
0x6EB022: mov     edx, ds:0B25AD8h
0x6EB028: mov     [esi+38h], edx
0x6EB02B: mov     eax, ds:0B25ADCh
0x6EB030: xor     bl, bl
0x6EB032: cmp     [esi+0Dh], bl
0x6EB035: mov     [esi+3Ch], eax
0x6EB038: jbe     loc_6EB18D
0x6EB03E: fldz
0x6EB040: push    ebp
0x6EB041: mov     ebp, [esp+30h+arg_4]
0x6EB045: push    edi
0x6EB046: mov     ecx, [esi+14h]
0x6EB049: movzx   eax, bl
0x6EB04C: lea     edi, [eax+eax*2]
0x6EB04F: add     edi, edi
0x6EB051: add     edi, edi
0x6EB053: add     edi, edi
0x6EB055: lea     edx, [ecx+edi]
0x6EB058: mov     ecx, [edx]
0x6EB05A: test    ecx, ecx
0x6EB05C: jz      loc_6EB17D
0x6EB062: fcom    dword ptr [edx+8]
0x6EB065: fnstsw  ax
0x6EB067: test    ah, 5
0x6EB06A: jp      loc_6EB17D
0x6EB070: test    ecx, ecx
0x6EB072: fst     [esp+34h+var_10]
0x6EB076: fst     [esp+34h+var_C]
0x6EB07A: fst     [esp+34h+var_8]
0x6EB07E: fst     [esp+34h+var_4]
0x6EB082: fld     [esp+34h+arg_0]
0x6EB086: fstp    [esp+34h+arg_4]
0x6EB08A: jz      short loc_6EB0BA
0x6EB08C: fcom    dword ptr [edx+8]
0x6EB08F: fnstsw  ax
0x6EB091: test    ah, 44h
0x6EB094: jnp     short loc_6EB0BA
0x6EB096: test    byte ptr [esi+0Ch], 1
0x6EB09A: jz      short loc_6EB0A3
0x6EB09C: fld     dword ptr [edx+14h]
0x6EB09F: fstp    [esp+34h+arg_4]
0x6EB0A3: fld     [esp+34h+arg_4]
0x6EB0A7: fld     st
0x6EB0A9: fld     dword ptr ds:0A79F00h
0x6EB0AF: fucompp
0x6EB0B1: fnstsw  ax
0x6EB0B3: test    ah, 44h
0x6EB0B6: jp      short loc_6EB0CA
0x6EB0B8: fstp    st
0x6EB0BA: fld     [esp+34h+var_24]
0x6EB0BE: fsub    dword ptr [edx+8]
0x6EB0C1: fstp    [esp+34h+var_24]
0x6EB0C5: jmp     loc_6EB17D
0x6EB0CA: mov     edx, [ecx]
0x6EB0CC: fstp    st(1)
0x6EB0CE: mov     edx, [edx+50h]
0x6EB0D1: lea     eax, [esp+34h+var_10]
0x6EB0D5: push    eax
0x6EB0D6: push    ebp
0x6EB0D7: push    ecx
0x6EB0D8: fstp    [esp+40h+var_40]
0x6EB0DB: call    edx
0x6EB0DD: test    al, al
0x6EB0DF: jz      loc_6EB16C
0x6EB0E5: mov     eax, [esi+14h]
0x6EB0E8: fld     dword ptr [eax+edi+8]
0x6EB0EC: mov     ecx, [esp+34h+var_10]
0x6EB0F0: fstp    [esp+34h+arg_4]
0x6EB0F4: mov     edx, [esp+34h+var_C]
0x6EB0F8: fld     [esp+34h+var_10]
0x6EB0FC: mov     eax, [esp+34h+var_8]
0x6EB100: fld     [esp+34h+arg_4]
0x6EB104: mov     [esp+34h+var_20], ecx
0x6EB108: fld     st
0x6EB10A: mov     ecx, [esp+34h+var_4]
0x6EB10E: fmulp   st(2), st
0x6EB110: mov     [esp+34h+var_1C], edx
0x6EB114: fxch    st(1)
0x6EB116: mov     [esp+34h+var_18], eax
0x6EB11A: mov     [esp+34h+var_14], ecx
0x6EB11E: fstp    [esp+34h+var_20]
0x6EB122: fld     [esp+34h+var_1C]
0x6EB126: fmul    st, st(1)
0x6EB128: fstp    [esp+34h+var_1C]
0x6EB12C: fld     [esp+34h+var_18]
0x6EB130: fmul    st, st(1)
0x6EB132: fstp    [esp+34h+var_18]
0x6EB136: fmul    [esp+34h+var_14]
0x6EB13A: fstp    [esp+34h+var_14]
0x6EB13E: fld     dword ptr [esi+30h]
0x6EB141: fadd    [esp+34h+var_20]
0x6EB145: fstp    dword ptr [esi+30h]
0x6EB148: fld     dword ptr [esi+34h]
0x6EB14B: fadd    [esp+34h+var_1C]
0x6EB14F: fstp    dword ptr [esi+34h]
0x6EB152: fld     [esp+34h+var_18]
0x6EB156: fadd    dword ptr [esi+38h]
0x6EB159: fstp    dword ptr [esi+38h]
0x6EB15C: fld     dword ptr [esi+3Ch]
0x6EB15F: fadd    [esp+34h+var_14]
0x6EB163: fstp    dword ptr [esi+3Ch]
0x6EB166: mov     byte ptr [esi+40h], 1
0x6EB16A: jmp     short loc_6EB17B
0x6EB16C: fld     [esp+34h+var_24]
0x6EB170: mov     edx, [esi+14h]
0x6EB173: fsub    dword ptr [edx+edi+8]
0x6EB177: fstp    [esp+34h+var_24]
0x6EB17B: fldz
0x6EB17D: add     bl, 1
0x6EB180: cmp     bl, [esi+0Dh]
0x6EB183: jb      loc_6EB046
0x6EB189: pop     edi
0x6EB18A: fstp    st
0x6EB18C: pop     ebp
0x6EB18D: cmp     byte ptr [esi+40h], 0
0x6EB191: jnz     short loc_6EB1DA
0x6EB193: mov     eax, ds:0B24FD4h
0x6EB198: mov     [esi+30h], eax
0x6EB19B: mov     ecx, ds:0B24FD8h
0x6EB1A1: mov     [esi+34h], ecx
0x6EB1A4: mov     edx, ds:0B24FDCh
0x6EB1AA: mov     [esi+38h], edx
0x6EB1AD: mov     eax, ds:0B24FE0h
0x6EB1B2: mov     [esi+3Ch], eax
0x6EB1B5: mov     ecx, [esi+30h]
0x6EB1B8: mov     eax, [esp+2Ch+arg_8]
0x6EB1BC: mov     [eax], ecx
0x6EB1BE: mov     edx, [esi+34h]
0x6EB1C1: mov     [eax+4], edx
0x6EB1C4: mov     ecx, [esi+38h]
0x6EB1C7: mov     [eax+8], ecx
0x6EB1CA: mov     edx, [esi+3Ch]
0x6EB1CD: pop     esi
0x6EB1CE: mov     [eax+0Ch], edx
0x6EB1D1: xor     al, al
0x6EB1D3: pop     ebx
0x6EB1D4: add     esp, 24h
0x6EB1D7: retn    0Ch
0x6EB1DA: fld     dword ptr [esi+30h]
0x6EB1DD: mov     eax, [esp+2Ch+arg_8]
0x6EB1E1: fld     [esp+2Ch+var_24]
0x6EB1E5: fld     st
0x6EB1E7: fdivp   st(2), st
0x6EB1E9: fxch    st(1)
0x6EB1EB: fstp    dword ptr [esi+30h]
0x6EB1EE: fld     dword ptr [esi+34h]
0x6EB1F1: fdiv    st, st(1)
0x6EB1F3: fstp    dword ptr [esi+34h]
0x6EB1F6: fld     dword ptr [esi+38h]
0x6EB1F9: fdiv    st, st(1)
0x6EB1FB: fstp    dword ptr [esi+38h]
0x6EB1FE: fdivr   dword ptr [esi+3Ch]
0x6EB201: fstp    dword ptr [esi+3Ch]
0x6EB204: mov     ecx, [esi+30h]
0x6EB207: mov     [eax], ecx
0x6EB209: mov     edx, [esi+34h]
0x6EB20C: mov     [eax+4], edx
0x6EB20F: mov     ecx, [esi+38h]
0x6EB212: mov     [eax+8], ecx
0x6EB215: mov     edx, [esi+3Ch]
0x6EB218: pop     esi
0x6EB219: mov     [eax+0Ch], edx
0x6EB21C: mov     al, 1
0x6EB21E: pop     ebx
0x6EB21F: add     esp, 24h
0x6EB222: retn    0Ch
