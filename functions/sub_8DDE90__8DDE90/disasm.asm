0x8DDE90: push    ecx
0x8DDE91: push    ebx
0x8DDE92: push    esi
0x8DDE93: mov     esi, [esp+0Ch+arg_0]
0x8DDE97: mov     eax, [esi]
0x8DDE99: push    edi
0x8DDE9A: mov     ebx, ecx
0x8DDE9C: push    ebx
0x8DDE9D: push    8
0x8DDE9F: push    0
0x8DDEA1: mov     ecx, esi
0x8DDEA3: mov     [esp+1Ch+var_4], ebx
0x8DDEA7: call    dword ptr [eax]
0x8DDEA9: mov     eax, [ebx+3Ch]
0x8DDEAC: test    eax, eax
0x8DDEAE: js      short loc_8DDED2
0x8DDEB0: mov     ecx, [ebx+34h]
0x8DDEB3: mov     edx, [esi]
0x8DDEB5: and     eax, 3FFFFFFFh
0x8DDEBA: shl     eax, 2
0x8DDEBD: push    eax
0x8DDEBE: mov     eax, [ebx+38h]
0x8DDEC1: shl     eax, 2
0x8DDEC4: push    eax
0x8DDEC5: push    ecx
0x8DDEC6: push    8
0x8DDEC8: push    offset aEntityptrs; "EntityPtrs"
0x8DDECD: mov     ecx, esi
0x8DDECF: call    dword ptr [edx+4]
0x8DDED2: mov     eax, [ebx+38h]
0x8DDED5: test    eax, eax
0x8DDED7: mov     [esp+10h+arg_0], 0
0x8DDEDF: jle     loc_8DDFEA
0x8DDEE5: push    ebp
0x8DDEE6: mov     edx, [ebx+34h]
0x8DDEE9: mov     eax, [esp+14h+arg_0]
0x8DDEED: mov     edi, [edx+eax*4]
0x8DDEF0: mov     edx, [esi]
0x8DDEF2: push    edi
0x8DDEF3: push    2
0x8DDEF5: push    offset aEntity; "Entity"
0x8DDEFA: mov     ecx, esi
0x8DDEFC: call    dword ptr [edx+8]
0x8DDEFF: mov     eax, [esi]
0x8DDF01: push    offset aConstraints; "Constraints"
0x8DDF06: mov     ecx, esi
0x8DDF08: call    dword ptr [eax+0Ch]
0x8DDF0B: mov     eax, [edi+70h]
0x8DDF0E: test    eax, eax
0x8DDF10: js      short loc_8DDF34
0x8DDF12: mov     ecx, [edi+68h]
0x8DDF15: and     eax, 3FFFFFFFh
0x8DDF1A: imul    eax, 1Ch
0x8DDF1D: mov     edx, [esi]
0x8DDF1F: push    eax
0x8DDF20: mov     eax, [edi+6Ch]
0x8DDF23: imul    eax, 1Ch
0x8DDF26: push    eax
0x8DDF27: push    ecx
0x8DDF28: push    8
0x8DDF2A: push    offset aConmstptr; "ConMstPtr"
0x8DDF2F: mov     ecx, esi
0x8DDF31: call    dword ptr [edx+4]
0x8DDF34: mov     eax, [edi+7Ch]
0x8DDF37: test    eax, eax
0x8DDF39: js      short loc_8DDF5D
0x8DDF3B: mov     ecx, [edi+74h]
0x8DDF3E: mov     edx, [esi]
0x8DDF40: and     eax, 3FFFFFFFh
0x8DDF45: shl     eax, 2
0x8DDF48: push    eax
0x8DDF49: mov     eax, [edi+78h]
0x8DDF4C: shl     eax, 2
0x8DDF4F: push    eax
0x8DDF50: push    ecx
0x8DDF51: push    8
0x8DDF53: push    offset aConslvptr; "ConSlvPtr"
0x8DDF58: mov     ecx, esi
0x8DDF5A: call    dword ptr [edx+4]
0x8DDF5D: mov     eax, [edi+6Ch]
0x8DDF60: xor     ebp, ebp
0x8DDF62: test    eax, eax
0x8DDF64: jle     short loc_8DDFA2
0x8DDF66: xor     ebx, ebx
0x8DDF68: mov     eax, [edi+68h]
0x8DDF6B: mov     ecx, [ebx+eax]
0x8DDF6E: mov     edx, [esi]
0x8DDF70: push    ecx
0x8DDF71: push    2
0x8DDF73: push    offset aConinstance; "ConInstance"
0x8DDF78: mov     ecx, esi
0x8DDF7A: call    dword ptr [edx+8]
0x8DDF7D: mov     eax, [edi+68h]
0x8DDF80: mov     ecx, [ebx+eax+0Ch]
0x8DDF84: mov     edx, [esi]
0x8DDF86: push    ecx
0x8DDF87: push    1
0x8DDF89: push    offset aCondata; "ConData"
0x8DDF8E: mov     ecx, esi
0x8DDF90: call    dword ptr [edx+8]
0x8DDF93: mov     eax, [edi+6Ch]
0x8DDF96: inc     ebp
0x8DDF97: add     ebx, 1Ch
0x8DDF9A: cmp     ebp, eax
0x8DDF9C: jl      short loc_8DDF68
0x8DDF9E: mov     ebx, [esp+14h+var_4]
0x8DDFA2: mov     eax, [edi+88h]
0x8DDFA8: test    eax, eax
0x8DDFAA: js      short loc_8DDFCE
0x8DDFAC: mov     ecx, [edi+80h]
0x8DDFB2: mov     edx, [esi]
0x8DDFB4: and     eax, 3FFFFFFFh
0x8DDFB9: push    eax
0x8DDFBA: mov     eax, [edi+84h]
0x8DDFC0: push    eax
0x8DDFC1: push    ecx
0x8DDFC2: push    4
0x8DDFC4: push    offset aRuntime; "Runtime"
0x8DDFC9: mov     ecx, esi
0x8DDFCB: call    dword ptr [edx+4]
0x8DDFCE: mov     edx, [esi]
0x8DDFD0: mov     ecx, esi
0x8DDFD2: call    dword ptr [edx+10h]
0x8DDFD5: mov     eax, [esp+14h+arg_0]
0x8DDFD9: mov     ecx, [ebx+38h]
0x8DDFDC: inc     eax
0x8DDFDD: cmp     eax, ecx
0x8DDFDF: mov     [esp+14h+arg_0], eax
0x8DDFE3: jl      loc_8DDEE6
0x8DDFE9: pop     ebp
0x8DDFEA: mov     eax, [ebx+64h]
0x8DDFED: test    eax, eax
0x8DDFEF: js      short loc_8DE013
0x8DDFF1: mov     ecx, [ebx+5Ch]
0x8DDFF4: mov     edx, [esi]
0x8DDFF6: and     eax, 3FFFFFFFh
0x8DDFFB: shl     eax, 2
0x8DDFFE: push    eax
0x8DDFFF: mov     eax, [ebx+60h]
0x8DE002: shl     eax, 2
0x8DE005: push    eax
0x8DE006: push    ecx
0x8DE007: push    8
0x8DE009: push    offset aActionptrs; "ActionPtrs"
0x8DE00E: mov     ecx, esi
0x8DE010: call    dword ptr [edx+4]
0x8DE013: mov     eax, [ebx+60h]
0x8DE016: xor     edi, edi
0x8DE018: test    eax, eax
0x8DE01A: jle     short loc_8DE03D
0x8DE01C: lea     esp, [esp+0]
0x8DE020: mov     eax, [ebx+5Ch]
0x8DE023: mov     ecx, [eax+edi*4]
0x8DE026: mov     edx, [esi]
0x8DE028: push    ecx
0x8DE029: push    2
0x8DE02B: push    offset aActions; "Actions"
0x8DE030: mov     ecx, esi
0x8DE032: call    dword ptr [edx+8]
0x8DE035: mov     eax, [ebx+60h]
0x8DE038: inc     edi
0x8DE039: cmp     edi, eax
0x8DE03B: jl      short loc_8DE020
0x8DE03D: lea     edi, [ebx+44h]
0x8DE040: push    esi
0x8DE041: push    edi
0x8DE042: call    sub_925FB0
0x8DE047: mov     edx, [esi]
0x8DE049: add     esp, 8
0x8DE04C: push    offset aCollagents; "CollAgents"
0x8DE051: mov     ecx, esi
0x8DE053: call    dword ptr [edx+0Ch]
0x8DE056: push    esi
0x8DE057: push    edi
0x8DE058: call    sub_925ED0
0x8DE05D: mov     eax, [esi]
0x8DE05F: add     esp, 8
0x8DE062: mov     ecx, esi
0x8DE064: call    dword ptr [eax+10h]
0x8DE067: mov     edx, [esi]
0x8DE069: mov     ecx, esi
0x8DE06B: call    dword ptr [edx+14h]
0x8DE06E: pop     edi
0x8DE06F: pop     esi
0x8DE070: pop     ebx
0x8DE071: pop     ecx
0x8DE072: retn    4
