0x65BCE0: push    esi
0x65BCE1: mov     esi, ecx
0x65BCE3: mov     eax, [esi]
0x65BCE5: test    eax, eax
0x65BCE7: jz      short loc_65BCF2
0x65BCE9: push    eax
0x65BCEA: call    FormHeapFree
0x65BCEF: add     esp, 4
0x65BCF2: mov     eax, [esi+4]
0x65BCF5: test    eax, eax
0x65BCF7: jz      short loc_65BD02
0x65BCF9: push    eax
0x65BCFA: call    FormHeapFree
0x65BCFF: add     esp, 4
0x65BD02: mov     eax, [esi+8]
0x65BD05: test    eax, eax
0x65BD07: jz      short loc_65BD12
0x65BD09: push    eax
0x65BD0A: call    FormHeapFree
0x65BD0F: add     esp, 4
0x65BD12: mov     eax, [esi+0Ch]
0x65BD15: test    eax, eax
0x65BD17: jz      short loc_65BD22
0x65BD19: push    eax
0x65BD1A: call    FormHeapFree
0x65BD1F: add     esp, 4
0x65BD22: mov     eax, [esi+10h]
0x65BD25: test    eax, eax
0x65BD27: jz      short loc_65BD32
0x65BD29: push    eax
0x65BD2A: call    FormHeapFree
0x65BD2F: add     esp, 4
0x65BD32: mov     eax, [esi+14h]
0x65BD35: test    eax, eax
0x65BD37: jz      short loc_65BD42
0x65BD39: push    eax
0x65BD3A: call    FormHeapFree
0x65BD3F: add     esp, 4
0x65BD42: mov     eax, [esi+18h]
0x65BD45: test    eax, eax
0x65BD47: jz      short loc_65BD52
0x65BD49: push    eax
0x65BD4A: call    FormHeapFree
0x65BD4F: add     esp, 4
0x65BD52: mov     eax, [esi+1Ch]
0x65BD55: test    eax, eax
0x65BD57: jz      short loc_65BD62
0x65BD59: push    eax
0x65BD5A: call    FormHeapFree
0x65BD5F: add     esp, 4
0x65BD62: mov     eax, [esi+20h]
0x65BD65: test    eax, eax
0x65BD67: jz      short loc_65BD72
0x65BD69: push    eax
0x65BD6A: call    FormHeapFree
0x65BD6F: add     esp, 4
0x65BD72: mov     eax, [esi+24h]
0x65BD75: test    eax, eax
0x65BD77: jz      short loc_65BD82
0x65BD79: push    eax
0x65BD7A: call    FormHeapFree
0x65BD7F: add     esp, 4
0x65BD82: mov     eax, [esi+28h]
0x65BD85: test    eax, eax
0x65BD87: jz      short loc_65BD92
0x65BD89: push    eax
0x65BD8A: call    FormHeapFree
0x65BD8F: add     esp, 4
0x65BD92: mov     eax, [esi+2Ch]
0x65BD95: test    eax, eax
0x65BD97: jz      short loc_65BDA2
0x65BD99: push    eax
0x65BD9A: call    FormHeapFree
0x65BD9F: add     esp, 4
0x65BDA2: mov     eax, [esi+30h]
0x65BDA5: test    eax, eax
0x65BDA7: jz      short loc_65BDB2
0x65BDA9: push    eax
0x65BDAA: call    FormHeapFree
0x65BDAF: add     esp, 4
0x65BDB2: mov     eax, [esi+34h]
0x65BDB5: test    eax, eax
0x65BDB7: jz      short loc_65BDC2
0x65BDB9: push    eax
0x65BDBA: call    FormHeapFree
0x65BDBF: add     esp, 4
0x65BDC2: mov     eax, [esi+38h]
0x65BDC5: test    eax, eax
0x65BDC7: jz      short loc_65BDD2
0x65BDC9: push    eax
0x65BDCA: call    FormHeapFree
0x65BDCF: add     esp, 4
0x65BDD2: mov     eax, [esi+3Ch]
0x65BDD5: test    eax, eax
0x65BDD7: jz      short loc_65BDE2
0x65BDD9: push    eax
0x65BDDA: call    FormHeapFree
0x65BDDF: add     esp, 4
0x65BDE2: mov     eax, [esi+40h]
0x65BDE5: test    eax, eax
0x65BDE7: jz      short loc_65BDF2
0x65BDE9: push    eax
0x65BDEA: call    FormHeapFree
0x65BDEF: add     esp, 4
0x65BDF2: mov     esi, [esi+44h]
0x65BDF5: test    esi, esi
0x65BDF7: jz      short loc_65BE02
0x65BDF9: push    esi
0x65BDFA: call    FormHeapFree
0x65BDFF: add     esp, 4
0x65BE02: pop     esi
0x65BE03: retn
