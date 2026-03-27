0x4A0D50: push    ecx
0x4A0D51: fldz
0x4A0D53: push    esi
0x4A0D54: fcomp   [esp+8+arg_0]
0x4A0D58: mov     esi, ecx
0x4A0D5A: fnstsw  ax
0x4A0D5C: test    ah, 5
0x4A0D5F: jp      loc_4A0E32
0x4A0D65: push    esi
0x4A0D66: call    sub_4A05E0
0x4A0D6B: add     esp, 4
0x4A0D6E: test    eax, eax
0x4A0D70: jnz     short loc_4A0DAA
0x4A0D72: push    esi
0x4A0D73: call    sub_6FA970
0x4A0D78: add     esp, 4
0x4A0D7B: test    eax, eax
0x4A0D7D: jz      short loc_4A0DAF
0x4A0D7F: mov     eax, [eax+0Ch]
0x4A0D82: and     eax, 2
0x4A0D85: jz      short loc_4A0DAF
0x4A0D87: cmp     word ptr [esi+0B6h], 0
0x4A0D8F: ja      short loc_4A0D95
0x4A0D91: xor     eax, eax
0x4A0D93: jmp     short loc_4A0D9D
0x4A0D95: mov     eax, [esi+0B0h]
0x4A0D9B: mov     eax, [eax]
0x4A0D9D: push    eax
0x4A0D9E: call    sub_480340
0x4A0DA3: add     esp, 4
0x4A0DA6: test    eax, eax
0x4A0DA8: jz      short loc_4A0DAF
0x4A0DAA: mov     eax, [eax+10h]
0x4A0DAD: jmp     short loc_4A0DB1
0x4A0DAF: xor     eax, eax
0x4A0DB1: push    eax
0x4A0DB2: push    offset dword_BA7D84
0x4A0DB7: call    NiRTTI_Cast
0x4A0DBC: add     esp, 8
0x4A0DBF: test    eax, eax
0x4A0DC1: jz      short loc_4A0DDE
0x4A0DC3: mov     ecx, [eax+8]
0x4A0DC6: test    ecx, ecx
0x4A0DC8: jz      short loc_4A0DDE
0x4A0DCA: lea     edx, [esp+8+var_1]
0x4A0DCE: push    edx
0x4A0DCF: call    sub_8A63F0
0x4A0DD4: cmp     byte ptr [eax], 0
0x4A0DD7: setnz   al
0x4A0DDA: test    al, al
0x4A0DDC: jnz     short loc_4A0E32
0x4A0DDE: cmp     word ptr [esi+0B6h], 0
0x4A0DE6: jbe     short loc_4A0E18
0x4A0DE8: mov     eax, [esi+0B0h]
0x4A0DEE: mov     eax, [eax]
0x4A0DF0: test    eax, eax
0x4A0DF2: jz      short loc_4A0E18
0x4A0DF4: mov     eax, [eax+0Ch]
0x4A0DF7: test    eax, eax
0x4A0DF9: jz      short loc_4A0E18
0x4A0DFB: push    eax
0x4A0DFC: push    offset stru_B3CAC0
0x4A0E01: call    NiRTTI_Cast
0x4A0E06: add     esp, 8
0x4A0E09: test    eax, eax
0x4A0E0B: jz      short loc_4A0E18
0x4A0E0D: mov     cl, [eax+8]
0x4A0E10: shr     cl, 3
0x4A0E13: test    cl, 1
0x4A0E16: jnz     short loc_4A0E32
0x4A0E18: mov     edx, ds:0B333CCh
0x4A0E1E: mov     eax, [edx+0DCh]
0x4A0E24: push    eax
0x4A0E25: push    esi
0x4A0E26: call    sub_47F7B0
0x4A0E2B: add     esp, 8
0x4A0E2E: test    al, al
0x4A0E30: jz      short loc_4A0E41
0x4A0E32: fld     [esp+8+arg_0]
0x4A0E36: push    ecx
0x4A0E37: mov     ecx, esi
0x4A0E39: fstp    [esp+0Ch+var_C]; float
0x4A0E3C: call    sub_70A190
0x4A0E41: pop     esi
0x4A0E42: pop     ecx
0x4A0E43: retn    4
