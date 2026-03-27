0x798CC0: push    0FFFFFFFFh
0x798CC2: push    offset SEH_798CC0
0x798CC7: mov     eax, large fs:0
0x798CCD: push    eax
0x798CCE: sub     esp, 0Ch
0x798CD1: push    ebx
0x798CD2: push    ebp
0x798CD3: push    esi
0x798CD4: push    edi
0x798CD5: mov     eax, ds:0B30AACh
0x798CDA: xor     eax, esp
0x798CDC: push    eax
0x798CDD: lea     eax, [esp+2Ch+var_C]
0x798CE1: mov     large fs:0, eax
0x798CE7: mov     edi, ecx
0x798CE9: mov     [esp+2Ch+var_18], edi
0x798CED: xor     ebx, ebx
0x798CEF: cmp     [esp+2Ch+arg_4], ebx
0x798CF3: jz      loc_799303
0x798CF9: cmp     [edi+10h], ebx
0x798CFC: jz      loc_799303
0x798D02: cmp     [edi+4], ebx
0x798D05: jz      loc_799303
0x798D0B: cmp     [edi+14h], ebx
0x798D0E: jz      loc_799303
0x798D14: mov     bp, [esp+2Ch+arg_0]
0x798D19: movzx   esi, bp
0x798D1C: xor     ecx, ecx
0x798D1E: mov     eax, esi
0x798D20: mov     edx, 44h ; 'D'
0x798D25: mul     edx
0x798D27: seto    cl
0x798D2A: mov     [edi+28h], bp
0x798D2E: neg     ecx
0x798D30: or      ecx, eax
0x798D32: xor     eax, eax
0x798D34: add     ecx, 4
0x798D37: setb    al
0x798D3A: neg     eax
0x798D3C: or      eax, ecx
0x798D3E: push    eax; Size
0x798D3F: call    FormHeapAlloc
0x798D44: add     esp, 4
0x798D47: mov     [esp+2Ch+var_10], eax
0x798D4B: cmp     eax, ebx
0x798D4D: mov     [esp+2Ch+var_4], ebx
0x798D51: jz      short loc_798D6B
0x798D53: push    offset sub_7981E0; a5
0x798D58: push    offset sub_7981C0; a4
0x798D5D: push    esi; size
0x798D5E: lea     ebx, [eax+4]
0x798D61: push    44h ; 'D'; a2
0x798D63: push    ebx; a1
0x798D64: mov     [eax], esi
0x798D66: call    ArrayConstructor
0x798D6B: test    bp, bp
0x798D6E: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x798D76: mov     [edi+2Ch], ebx
0x798D79: mov     [esp+2Ch+var_14], 0
0x798D81: jbe     loc_799303
0x798D87: movzx   ebp, word ptr [esp+2Ch+var_14]
0x798D8C: mov     edx, [esp+2Ch+var_18]
0x798D90: mov     eax, [edx+2Ch]
0x798D93: mov     edx, [esp+2Ch+arg_4]
0x798D97: mov     ecx, ebp
0x798D99: shl     ecx, 4
0x798D9C: add     ecx, ebp
0x798D9E: lea     edi, [eax+ecx*4]
0x798DA1: mov     ecx, ebp
0x798DA3: shl     ecx, 4
0x798DA6: lea     esi, [ecx+edx]
0x798DA9: mov     ecx, [esi+4]
0x798DAC: test    ecx, ecx
0x798DAE: jnz     short loc_798DB4
0x798DB0: xor     eax, eax
0x798DB2: jmp     short loc_798DBC
0x798DB4: mov     eax, [esi+8]
0x798DB7: sub     eax, ecx
0x798DB9: sar     eax, 2
0x798DBC: mov     [edi+0Ch], ax
0x798DC0: movzx   eax, ax
0x798DC3: xor     ecx, ecx
0x798DC5: mov     edx, 4
0x798DCA: mul     edx
0x798DCC: seto    cl
0x798DCF: neg     ecx
0x798DD1: or      ecx, eax
0x798DD3: push    ecx; Size
0x798DD4: call    FormHeapAlloc
0x798DD9: xor     ebx, ebx
0x798DDB: add     esp, 4
0x798DDE: cmp     [edi+0Ch], bx
0x798DE2: mov     [edi+20h], eax
0x798DE5: jbe     short loc_798E58
0x798DE7: mov     ecx, [esi+4]
0x798DEA: test    ecx, ecx
0x798DEC: jz      short loc_798DFA
0x798DEE: mov     eax, [esi+8]
0x798DF1: sub     eax, ecx
0x798DF3: sar     eax, 2
0x798DF6: cmp     ebx, eax
0x798DF8: jb      short loc_798DFF
0x798DFA: call    __invalid_parameter_noinfo
0x798DFF: mov     eax, [esi+4]
0x798E02: mov     ecx, [eax+ebx*4]
0x798E05: movzx   edx, byte ptr [ecx+40h]
0x798E09: mov     ecx, eax
0x798E0B: test    ecx, ecx
0x798E0D: mov     [esp+2Ch+var_10], edx
0x798E11: jz      short loc_798E1F
0x798E13: mov     eax, [esi+8]
0x798E16: sub     eax, ecx
0x798E18: sar     eax, 2
0x798E1B: cmp     ebx, eax
0x798E1D: jb      short loc_798E24
0x798E1F: call    __invalid_parameter_noinfo
0x798E24: mov     eax, [esi+4]
0x798E27: mov     ecx, [eax+ebx*4]
0x798E2A: movzx   edx, byte ptr [ecx+10h]
0x798E2E: mov     eax, [esp+2Ch+var_18]
0x798E32: movzx   ecx, word ptr [eax+8]
0x798E36: imul    ecx, [esp+2Ch+var_10]
0x798E3B: add     edx, ecx
0x798E3D: mov     ecx, [eax+10h]
0x798E40: mov     eax, [edi+20h]
0x798E43: shl     edx, 6
0x798E46: add     edx, [ecx+ebp*4]
0x798E49: add     ebx, 1
0x798E4C: mov     [eax+ebx*4-4], edx
0x798E50: movzx   ecx, word ptr [edi+0Ch]
0x798E54: cmp     ebx, ecx
0x798E56: jl      short loc_798DE7
0x798E58: mov     edx, [esp+2Ch+var_18]
0x798E5C: cmp     byte ptr [edx+1], 0
0x798E60: jz      loc_798F9D
0x798E66: movzx   eax, word ptr [edi+0Ch]
0x798E6A: xor     ecx, ecx
0x798E6C: lea     eax, [eax+eax*2]
0x798E6F: mov     edx, 4
0x798E74: mul     edx
0x798E76: seto    cl
0x798E79: neg     ecx
0x798E7B: or      ecx, eax
0x798E7D: push    ecx; Size
0x798E7E: call    FormHeapAlloc
0x798E83: xor     ebx, ebx
0x798E85: add     esp, 4
0x798E88: cmp     [edi+0Ch], bx
0x798E8C: mov     [edi+40h], eax
0x798E8F: jbe     short loc_798ED9
0x798E91: xor     ebp, ebp
0x798E93: mov     ecx, [esi+4]
0x798E96: test    ecx, ecx
0x798E98: jz      short loc_798EA6
0x798E9A: mov     eax, [esi+8]
0x798E9D: sub     eax, ecx
0x798E9F: sar     eax, 2
0x798EA2: cmp     ebx, eax
0x798EA4: jb      short loc_798EAB
0x798EA6: call    __invalid_parameter_noinfo
0x798EAB: mov     eax, [esi+4]
0x798EAE: mov     eax, [eax+ebx*4]
0x798EB1: mov     ecx, [edi+40h]
0x798EB4: fld     dword ptr [eax+4]
0x798EB7: add     eax, 4
0x798EBA: fstp    dword ptr [ecx+ebp]
0x798EBD: fld     dword ptr [eax+4]
0x798EC0: add     ecx, ebp
0x798EC2: fstp    dword ptr [ecx+4]
0x798EC5: add     ebx, 1
0x798EC8: fld     dword ptr [eax+8]
0x798ECB: add     ebp, 0Ch
0x798ECE: fstp    dword ptr [ecx+8]
0x798ED1: movzx   ecx, word ptr [edi+0Ch]
0x798ED5: cmp     ebx, ecx
0x798ED7: jl      short loc_798E93
0x798ED9: movzx   eax, word ptr [edi+0Ch]
0x798EDD: xor     ecx, ecx
0x798EDF: mov     edx, 4
0x798EE4: mul     edx
0x798EE6: seto    cl
0x798EE9: neg     ecx
0x798EEB: or      ecx, eax
0x798EED: push    ecx; Size
0x798EEE: call    FormHeapAlloc
0x798EF3: xor     ebx, ebx
0x798EF5: add     esp, 4
0x798EF8: cmp     [edi+0Ch], bx
0x798EFC: mov     [edi+34h], eax
0x798EFF: jbe     short loc_798F40
0x798F01: mov     ecx, [esi+4]
0x798F04: test    ecx, ecx
0x798F06: jz      short loc_798F14
0x798F08: mov     eax, [esi+8]
0x798F0B: sub     eax, ecx
0x798F0D: sar     eax, 2
0x798F10: cmp     ebx, eax
0x798F12: jb      short loc_798F19
0x798F14: call    __invalid_parameter_noinfo
0x798F19: mov     eax, [esi+4]
0x798F1C: mov     ecx, [eax+ebx*4]
0x798F1F: fld     dword ptr [ecx+44h]
0x798F22: mov     edx, [edi+34h]
0x798F25: fld1
0x798F27: add     ebx, 1
0x798F2A: fsubrp  st(1), st
0x798F2C: fstp    [esp+2Ch+var_10]
0x798F30: fld     [esp+2Ch+var_10]
0x798F34: fstp    dword ptr [edx+ebx*4-4]
0x798F38: movzx   eax, word ptr [edi+0Ch]
0x798F3C: cmp     ebx, eax
0x798F3E: jl      short loc_798F01
0x798F40: movzx   ecx, word ptr [edi+0Ch]
0x798F44: push    ecx; Size
0x798F45: call    FormHeapAlloc
0x798F4A: xor     ebx, ebx
0x798F4C: add     esp, 4
0x798F4F: cmp     [edi+0Ch], bx
0x798F53: mov     [edi+38h], eax
0x798F56: jbe     short loc_798F9D
0x798F58: mov     ecx, [esi+4]
0x798F5B: test    ecx, ecx
0x798F5D: jz      short loc_798F6B
0x798F5F: mov     eax, [esi+8]
0x798F62: sub     eax, ecx
0x798F64: sar     eax, 2
0x798F67: cmp     ebx, eax
0x798F69: jb      short loc_798F70
0x798F6B: call    __invalid_parameter_noinfo
0x798F70: mov     edx, [esp+2Ch+var_18]
0x798F74: mov     ecx, [edx+4]
0x798F77: mov     eax, [esi+4]
0x798F7A: mov     edx, [eax+ebx*4]
0x798F7D: movzx   eax, byte ptr [edx+48h]
0x798F81: movzx   ebp, byte ptr [ecx+2Ch]
0x798F85: cdq
0x798F86: idiv    ebp
0x798F88: mov     eax, [edi+38h]
0x798F8B: add     ebx, 1
0x798F8E: add     dl, [ecx+28h]
0x798F91: mov     [ebx+eax-1], dl
0x798F95: movzx   ecx, word ptr [edi+0Ch]
0x798F99: cmp     ebx, ecx
0x798F9B: jl      short loc_798F58
0x798F9D: movzx   eax, word ptr [edi+0Ch]
0x798FA1: xor     ecx, ecx
0x798FA3: lea     eax, [eax+eax*2]
0x798FA6: mov     edx, 4
0x798FAB: mul     edx
0x798FAD: seto    cl
0x798FB0: neg     ecx
0x798FB2: or      ecx, eax
0x798FB4: push    ecx; Size
0x798FB5: call    FormHeapAlloc
0x798FBA: xor     ebx, ebx
0x798FBC: add     esp, 4
0x798FBF: cmp     [edi+0Ch], bx
0x798FC3: mov     [edi+18h], eax
0x798FC6: jbe     short loc_799010
0x798FC8: xor     ebp, ebp
0x798FCA: mov     ecx, [esi+4]
0x798FCD: test    ecx, ecx
0x798FCF: jz      short loc_798FDD
0x798FD1: mov     eax, [esi+8]
0x798FD4: sub     eax, ecx
0x798FD6: sar     eax, 2
0x798FD9: cmp     ebx, eax
0x798FDB: jb      short loc_798FE2
0x798FDD: call    __invalid_parameter_noinfo
0x798FE2: mov     eax, [esi+4]
0x798FE5: mov     eax, [eax+ebx*4]
0x798FE8: mov     ecx, [edi+18h]
0x798FEB: fld     dword ptr [eax+4]
0x798FEE: add     eax, 4
0x798FF1: fstp    dword ptr [ecx+ebp]
0x798FF4: fld     dword ptr [eax+4]
0x798FF7: add     ecx, ebp
0x798FF9: fstp    dword ptr [ecx+4]
0x798FFC: add     ebx, 1
0x798FFF: fld     dword ptr [eax+8]
0x799002: add     ebp, 0Ch
0x799005: fstp    dword ptr [ecx+8]
0x799008: movzx   ecx, word ptr [edi+0Ch]
0x79900C: cmp     ebx, ecx
0x79900E: jb      short loc_798FCA
0x799010: movzx   edx, word ptr [edi+0Ch]
0x799014: push    edx; Size
0x799015: call    FormHeapAlloc
0x79901A: xor     ebx, ebx
0x79901C: add     esp, 4
0x79901F: cmp     [edi+0Ch], bx
0x799023: mov     [edi+10h], eax
0x799026: jbe     short loc_79905A
0x799028: mov     ecx, [esi+4]
0x79902B: test    ecx, ecx
0x79902D: jz      short loc_79903B
0x79902F: mov     eax, [esi+8]
0x799032: sub     eax, ecx
0x799034: sar     eax, 2
0x799037: cmp     ebx, eax
0x799039: jb      short loc_799040
0x79903B: call    __invalid_parameter_noinfo
0x799040: mov     eax, [esi+4]
0x799043: mov     ecx, [eax+ebx*4]
0x799046: mov     al, [ecx+40h]
0x799049: mov     edx, [edi+10h]
0x79904C: mov     [ebx+edx], al
0x79904F: movzx   ecx, word ptr [edi+0Ch]
0x799053: add     ebx, 1
0x799056: cmp     ebx, ecx
0x799058: jb      short loc_799028
0x79905A: movzx   edx, word ptr [edi+0Ch]
0x79905E: push    edx; Size
0x79905F: call    FormHeapAlloc
0x799064: mov     ebp, [esp+30h+var_18]
0x799068: xor     ebx, ebx
0x79906A: add     esp, 4
0x79906D: cmp     [edi+0Ch], bx
0x799071: mov     [edi+14h], eax
0x799074: jbe     short loc_7990D4
0x799076: mov     ecx, [esi+4]
0x799079: test    ecx, ecx
0x79907B: jz      short loc_799089
0x79907D: mov     eax, [esi+8]
0x799080: sub     eax, ecx
0x799082: sar     eax, 2
0x799085: cmp     ebx, eax
0x799087: jb      short loc_79908E
0x799089: call    __invalid_parameter_noinfo
0x79908E: mov     eax, [esi+4]
0x799091: mov     ecx, [eax+ebx*4]
0x799094: movzx   edx, byte ptr [ecx+40h]
0x799098: mov     ecx, eax
0x79909A: test    ecx, ecx
0x79909C: mov     [esp+2Ch+var_10], edx
0x7990A0: jz      short loc_7990AE
0x7990A2: mov     eax, [esi+8]
0x7990A5: sub     eax, ecx
0x7990A7: sar     eax, 2
0x7990AA: cmp     ebx, eax
0x7990AC: jb      short loc_7990B3
0x7990AE: call    __invalid_parameter_noinfo
0x7990B3: mov     eax, [esi+4]
0x7990B6: mov     ecx, [eax+ebx*4]
0x7990B9: mov     al, [ebp+8]
0x7990BC: imul    byte ptr [esp+2Ch+var_10]
0x7990C0: add     al, [ecx+10h]
0x7990C3: mov     edx, [edi+14h]
0x7990C6: mov     [ebx+edx], al
0x7990C9: movzx   eax, word ptr [edi+0Ch]
0x7990CD: add     ebx, 1
0x7990D0: cmp     ebx, eax
0x7990D2: jb      short loc_799076
0x7990D4: movzx   eax, word ptr [edi+0Ch]
0x7990D8: xor     ecx, ecx
0x7990DA: mov     edx, 4
0x7990DF: mul     edx
0x7990E1: seto    cl
0x7990E4: neg     ecx
0x7990E6: or      ecx, eax
0x7990E8: push    ecx; Size
0x7990E9: call    FormHeapAlloc
0x7990EE: xor     ebx, ebx
0x7990F0: add     esp, 4
0x7990F3: cmp     [edi+0Ch], bx
0x7990F7: mov     [edi+1Ch], eax
0x7990FA: jbe     short loc_79913A
0x7990FC: lea     esp, [esp+0]
0x799100: mov     ecx, [esi+4]
0x799103: test    ecx, ecx
0x799105: jz      short loc_799113
0x799107: mov     eax, [esi+8]
0x79910A: sub     eax, ecx
0x79910C: sar     eax, 2
0x79910F: cmp     ebx, eax
0x799111: jb      short loc_799118
0x799113: call    __invalid_parameter_noinfo
0x799118: mov     eax, [esi+4]
0x79911B: mov     ecx, [eax+ebx*4]
0x79911E: movzx   edx, byte ptr [ecx+40h]
0x799122: mov     eax, [edi+1Ch]
0x799125: shl     edx, 5
0x799128: add     edx, [ebp+14h]
0x79912B: add     ebx, 1
0x79912E: mov     [eax+ebx*4-4], edx
0x799132: movzx   ecx, word ptr [edi+0Ch]
0x799136: cmp     ebx, ecx
0x799138: jb      short loc_799100
0x79913A: movzx   eax, word ptr [edi+0Ch]
0x79913E: xor     ecx, ecx
0x799140: mov     edx, 4
0x799145: mul     edx
0x799147: seto    cl
0x79914A: neg     ecx
0x79914C: or      ecx, eax
0x79914E: push    ecx; Size
0x79914F: call    FormHeapAlloc
0x799154: xor     ebx, ebx
0x799156: add     esp, 4
0x799159: cmp     [edi+0Ch], bx
0x79915D: mov     [edi+24h], eax
0x799160: jbe     short loc_799194
0x799162: mov     ecx, [esi+4]
0x799165: test    ecx, ecx
0x799167: jz      short loc_799175
0x799169: mov     eax, [esi+8]
0x79916C: sub     eax, ecx
0x79916E: sar     eax, 2
0x799171: cmp     ebx, eax
0x799173: jb      short loc_79917A
0x799175: call    __invalid_parameter_noinfo
0x79917A: mov     eax, [esi+4]
0x79917D: mov     ecx, [eax+ebx*4]
0x799180: mov     eax, [ecx+14h]
0x799183: mov     edx, [edi+24h]
0x799186: mov     [edx+ebx*4], eax
0x799189: movzx   ecx, word ptr [edi+0Ch]
0x79918D: add     ebx, 1
0x799190: cmp     ebx, ecx
0x799192: jb      short loc_799162
0x799194: cmp     byte ptr [ebp+0], 0
0x799198: jnz     loc_7992ED
0x79919E: movzx   eax, word ptr [edi+0Ch]
0x7991A2: xor     ecx, ecx
0x7991A4: lea     eax, [eax+eax*2]
0x7991A7: mov     edx, 4
0x7991AC: mul     edx
0x7991AE: seto    cl
0x7991B1: neg     ecx
0x7991B3: or      ecx, eax
0x7991B5: push    ecx; Size
0x7991B6: call    FormHeapAlloc
0x7991BB: xor     ebx, ebx
0x7991BD: add     esp, 4
0x7991C0: cmp     [edi+0Ch], bx
0x7991C4: mov     [edi+28h], eax
0x7991C7: jbe     short loc_799211
0x7991C9: xor     ebp, ebp
0x7991CB: mov     ecx, [esi+4]
0x7991CE: test    ecx, ecx
0x7991D0: jz      short loc_7991DE
0x7991D2: mov     eax, [esi+8]
0x7991D5: sub     eax, ecx
0x7991D7: sar     eax, 2
0x7991DA: cmp     ebx, eax
0x7991DC: jb      short loc_7991E3
0x7991DE: call    __invalid_parameter_noinfo
0x7991E3: mov     eax, [esi+4]
0x7991E6: mov     eax, [eax+ebx*4]
0x7991E9: mov     ecx, [edi+28h]
0x7991EC: fld     dword ptr [eax+1Ch]
0x7991EF: add     eax, 1Ch
0x7991F2: fstp    dword ptr [ecx+ebp]
0x7991F5: fld     dword ptr [eax+4]
0x7991F8: add     ecx, ebp
0x7991FA: fstp    dword ptr [ecx+4]
0x7991FD: add     ebx, 1
0x799200: fld     dword ptr [eax+8]
0x799203: add     ebp, 0Ch
0x799206: fstp    dword ptr [ecx+8]
0x799209: movzx   ecx, word ptr [edi+0Ch]
0x79920D: cmp     ebx, ecx
0x79920F: jb      short loc_7991CB
0x799211: mov     edx, [esp+2Ch+var_18]
0x799215: cmp     byte ptr [edx], 0
0x799218: jnz     loc_7992ED
0x79921E: movzx   eax, word ptr [edi+0Ch]
0x799222: xor     ecx, ecx
0x799224: lea     eax, [eax+eax*2]
0x799227: mov     edx, 4
0x79922C: mul     edx
0x79922E: seto    cl
0x799231: neg     ecx
0x799233: or      ecx, eax
0x799235: push    ecx; Size
0x799236: call    FormHeapAlloc
0x79923B: mov     [edi+30h], eax
0x79923E: movzx   eax, word ptr [edi+0Ch]
0x799242: xor     ecx, ecx
0x799244: lea     eax, [eax+eax*2]
0x799247: mov     edx, 4
0x79924C: mul     edx
0x79924E: seto    cl
0x799251: neg     ecx
0x799253: or      ecx, eax
0x799255: push    ecx; Size
0x799256: call    FormHeapAlloc
0x79925B: xor     ebx, ebx
0x79925D: add     esp, 8
0x799260: cmp     [edi+0Ch], bx
0x799264: mov     [edi+2Ch], eax
0x799267: jbe     loc_7992ED
0x79926D: xor     ebp, ebp
0x79926F: mov     ecx, [esi+4]
0x799272: test    ecx, ecx
0x799274: jz      short loc_799282
0x799276: mov     eax, [esi+8]
0x799279: sub     eax, ecx
0x79927B: sar     eax, 2
0x79927E: cmp     ebx, eax
0x799280: jb      short loc_799287
0x799282: call    __invalid_parameter_noinfo
0x799287: mov     eax, [esi+4]
0x79928A: mov     eax, [eax+ebx*4]
0x79928D: mov     ecx, [edi+30h]
0x799290: fld     dword ptr [eax+28h]
0x799293: add     eax, 28h ; '('
0x799296: fstp    dword ptr [ecx+ebp]
0x799299: fld     dword ptr [eax+4]
0x79929C: add     ecx, ebp
0x79929E: fstp    dword ptr [ecx+4]
0x7992A1: fld     dword ptr [eax+8]
0x7992A4: fstp    dword ptr [ecx+8]
0x7992A7: mov     eax, [esi+4]
0x7992AA: test    eax, eax
0x7992AC: jz      short loc_7992BA
0x7992AE: mov     ecx, [esi+8]
0x7992B1: sub     ecx, eax
0x7992B3: sar     ecx, 2
0x7992B6: cmp     ebx, ecx
0x7992B8: jb      short loc_7992BF
0x7992BA: call    __invalid_parameter_noinfo
0x7992BF: mov     ecx, [esi+4]
0x7992C2: mov     eax, [ecx+ebx*4]
0x7992C5: mov     ecx, [edi+2Ch]
0x7992C8: fld     dword ptr [eax+34h]
0x7992CB: add     eax, 34h ; '4'
0x7992CE: fstp    dword ptr [ecx+ebp]
0x7992D1: fld     dword ptr [eax+4]
0x7992D4: add     ecx, ebp
0x7992D6: fstp    dword ptr [ecx+4]
0x7992D9: add     ebx, 1
0x7992DC: fld     dword ptr [eax+8]
0x7992DF: add     ebp, 0Ch
0x7992E2: fstp    dword ptr [ecx+8]
0x7992E5: movzx   edx, word ptr [edi+0Ch]
0x7992E9: cmp     ebx, edx
0x7992EB: jb      short loc_79926F
0x7992ED: mov     eax, [esp+2Ch+var_14]
0x7992F1: add     eax, 1
0x7992F4: cmp     ax, [esp+2Ch+arg_0]
0x7992F9: mov     [esp+2Ch+var_14], eax
0x7992FD: jb      loc_798D87
0x799303: mov     ecx, [esp+2Ch+var_C]
0x799307: mov     large fs:0, ecx
0x79930E: pop     ecx
0x79930F: pop     edi
0x799310: pop     esi
0x799311: pop     ebp
0x799312: pop     ebx
0x799313: add     esp, 18h
0x799316: retn    8
