0x544CA0: push    0FFFFFFFFh
0x544CA2: push    offset ??1Sun@@UAE@XZ_SEH
0x544CA7: mov     eax, large fs:0
0x544CAD: push    eax
0x544CAE: push    ecx
0x544CAF: push    ebx
0x544CB0: push    ebp
0x544CB1: push    esi
0x544CB2: push    edi
0x544CB3: mov     eax, ds:0B30AACh
0x544CB8: xor     eax, esp
0x544CBA: push    eax
0x544CBB: lea     eax, [esp+24h+var_C]
0x544CBF: mov     large fs:0, eax
0x544CC5: mov     esi, ecx
0x544CC7: mov     [esp+24h+var_10], esi
0x544CCB: mov     dword ptr [esi], offset ??_7Sun@@6B@; const Sun::`vftable'
0x544CD1: mov     edi, [esi+4]
0x544CD4: mov     ebp, ds:0A2807Ch
0x544CDA: xor     ebx, ebx
0x544CDC: cmp     edi, ebx
0x544CDE: mov     [esp+24h+var_4], 5
0x544CE6: jz      short loc_544D03
0x544CE8: lea     eax, [edi+4]
0x544CEB: push    eax; lpAddend
0x544CEC: call    ebp ; InterlockedDecrement
0x544CEE: test    eax, eax
0x544CF0: jnz     short loc_544D00
0x544CF2: cmp     edi, ebx
0x544CF4: jz      short loc_544D00
0x544CF6: mov     edx, [edi]
0x544CF8: mov     eax, [edx]
0x544CFA: push    1
0x544CFC: mov     ecx, edi
0x544CFE: call    eax
0x544D00: mov     [esi+4], ebx
0x544D03: mov     edi, [esi+8]
0x544D06: cmp     edi, ebx
0x544D08: jz      short loc_544D25
0x544D0A: lea     ecx, [edi+4]
0x544D0D: push    ecx; lpAddend
0x544D0E: call    ebp ; InterlockedDecrement
0x544D10: test    eax, eax
0x544D12: jnz     short loc_544D22
0x544D14: cmp     edi, ebx
0x544D16: jz      short loc_544D22
0x544D18: mov     edx, [edi]
0x544D1A: mov     eax, [edx]
0x544D1C: push    1
0x544D1E: mov     ecx, edi
0x544D20: call    eax
0x544D22: mov     [esi+8], ebx
0x544D25: mov     edi, [esi+0Ch]
0x544D28: cmp     edi, ebx
0x544D2A: jz      short loc_544D47
0x544D2C: lea     ecx, [edi+4]
0x544D2F: push    ecx; lpAddend
0x544D30: call    ebp ; InterlockedDecrement
0x544D32: test    eax, eax
0x544D34: jnz     short loc_544D44
0x544D36: cmp     edi, ebx
0x544D38: jz      short loc_544D44
0x544D3A: mov     edx, [edi]
0x544D3C: mov     eax, [edx]
0x544D3E: push    1
0x544D40: mov     ecx, edi
0x544D42: call    eax
0x544D44: mov     [esi+0Ch], ebx
0x544D47: mov     edi, [esi+10h]
0x544D4A: cmp     edi, ebx
0x544D4C: jz      short loc_544D69
0x544D4E: lea     ecx, [edi+4]
0x544D51: push    ecx; lpAddend
0x544D52: call    ebp ; InterlockedDecrement
0x544D54: test    eax, eax
0x544D56: jnz     short loc_544D66
0x544D58: cmp     edi, ebx
0x544D5A: jz      short loc_544D66
0x544D5C: mov     edx, [edi]
0x544D5E: mov     eax, [edx]
0x544D60: push    1
0x544D62: mov     ecx, edi
0x544D64: call    eax
0x544D66: mov     [esi+10h], ebx
0x544D69: mov     edi, [esi+14h]
0x544D6C: cmp     edi, ebx
0x544D6E: jz      short loc_544D8B
0x544D70: lea     ecx, [edi+4]
0x544D73: push    ecx; lpAddend
0x544D74: call    ebp ; InterlockedDecrement
0x544D76: test    eax, eax
0x544D78: jnz     short loc_544D88
0x544D7A: cmp     edi, ebx
0x544D7C: jz      short loc_544D88
0x544D7E: mov     edx, [edi]
0x544D80: mov     eax, [edx]
0x544D82: push    1
0x544D84: mov     ecx, edi
0x544D86: call    eax
0x544D88: mov     [esi+14h], ebx
0x544D8B: mov     edi, [esi+1Ch]
0x544D8E: cmp     edi, ebx
0x544D90: jz      short loc_544DAD
0x544D92: lea     ecx, [edi+4]
0x544D95: push    ecx; lpAddend
0x544D96: call    ebp ; InterlockedDecrement
0x544D98: test    eax, eax
0x544D9A: jnz     short loc_544DAA
0x544D9C: cmp     edi, ebx
0x544D9E: jz      short loc_544DAA
0x544DA0: mov     edx, [edi]
0x544DA2: mov     eax, [edx]
0x544DA4: push    1
0x544DA6: mov     ecx, edi
0x544DA8: call    eax
0x544DAA: mov     [esi+1Ch], ebx
0x544DAD: mov     edi, [esi+18h]
0x544DB0: cmp     edi, ebx
0x544DB2: jz      short loc_544DC4
0x544DB4: mov     ecx, edi
0x544DB6: call    sub_959EC0
0x544DBB: push    edi
0x544DBC: call    FormHeapFree
0x544DC1: add     esp, 4
0x544DC4: mov     edi, [esi+1Ch]
0x544DC7: cmp     edi, ebx
0x544DC9: mov     byte ptr [esp+24h+var_4], 4
0x544DCE: jz      short loc_544DE8
0x544DD0: lea     ecx, [edi+4]
0x544DD3: push    ecx; lpAddend
0x544DD4: call    ebp ; InterlockedDecrement
0x544DD6: test    eax, eax
0x544DD8: jnz     short loc_544DE8
0x544DDA: cmp     edi, ebx
0x544DDC: jz      short loc_544DE8
0x544DDE: mov     edx, [edi]
0x544DE0: mov     eax, [edx]
0x544DE2: push    1
0x544DE4: mov     ecx, edi
0x544DE6: call    eax
0x544DE8: mov     edi, [esi+14h]
0x544DEB: cmp     edi, ebx
0x544DED: mov     byte ptr [esp+24h+var_4], 3
0x544DF2: jz      short loc_544E0C
0x544DF4: lea     ecx, [edi+4]
0x544DF7: push    ecx; lpAddend
0x544DF8: call    ebp ; InterlockedDecrement
0x544DFA: test    eax, eax
0x544DFC: jnz     short loc_544E0C
0x544DFE: cmp     edi, ebx
0x544E00: jz      short loc_544E0C
0x544E02: mov     edx, [edi]
0x544E04: mov     eax, [edx]
0x544E06: push    1
0x544E08: mov     ecx, edi
0x544E0A: call    eax
0x544E0C: mov     edi, [esi+10h]
0x544E0F: cmp     edi, ebx
0x544E11: mov     byte ptr [esp+24h+var_4], 2
0x544E16: jz      short loc_544E30
0x544E18: lea     ecx, [edi+4]
0x544E1B: push    ecx; lpAddend
0x544E1C: call    ebp ; InterlockedDecrement
0x544E1E: test    eax, eax
0x544E20: jnz     short loc_544E30
0x544E22: cmp     edi, ebx
0x544E24: jz      short loc_544E30
0x544E26: mov     edx, [edi]
0x544E28: mov     eax, [edx]
0x544E2A: push    1
0x544E2C: mov     ecx, edi
0x544E2E: call    eax
0x544E30: mov     edi, [esi+0Ch]
0x544E33: cmp     edi, ebx
0x544E35: mov     byte ptr [esp+24h+var_4], 1
0x544E3A: jz      short loc_544E54
0x544E3C: lea     ecx, [edi+4]
0x544E3F: push    ecx; lpAddend
0x544E40: call    ebp ; InterlockedDecrement
0x544E42: test    eax, eax
0x544E44: jnz     short loc_544E54
0x544E46: cmp     edi, ebx
0x544E48: jz      short loc_544E54
0x544E4A: mov     edx, [edi]
0x544E4C: mov     eax, [edx]
0x544E4E: push    1
0x544E50: mov     ecx, edi
0x544E52: call    eax
0x544E54: mov     edi, [esi+8]
0x544E57: cmp     edi, ebx
0x544E59: mov     byte ptr [esp+24h+var_4], bl
0x544E5D: jz      short loc_544E77
0x544E5F: lea     ecx, [edi+4]
0x544E62: push    ecx; lpAddend
0x544E63: call    ebp ; InterlockedDecrement
0x544E65: test    eax, eax
0x544E67: jnz     short loc_544E77
0x544E69: cmp     edi, ebx
0x544E6B: jz      short loc_544E77
0x544E6D: mov     edx, [edi]
0x544E6F: mov     eax, [edx]
0x544E71: push    1
0x544E73: mov     ecx, edi
0x544E75: call    eax
0x544E77: mov     ecx, esi; this
0x544E79: mov     [esp+24h+var_4], 0FFFFFFFFh
0x544E81: call    ??1SkyObject@@UAE@XZ; SkyObject::~SkyObject(void)
0x544E86: mov     ecx, dword ptr [esp+24h+var_C]
0x544E8A: mov     large fs:0, ecx
0x544E91: pop     ecx
0x544E92: pop     edi
0x544E93: pop     esi
0x544E94: pop     ebp
0x544E95: pop     ebx
0x544E96: add     esp, 10h
0x544E99: retn
