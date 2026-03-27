0x7A7900: push    0FFFFFFFFh
0x7A7902: push    offset SEH_7A7900
0x7A7907: mov     eax, large fs:0
0x7A790D: push    eax
0x7A790E: sub     esp, 8Ch
0x7A7914: push    ebx
0x7A7915: push    ebp
0x7A7916: push    esi
0x7A7917: push    edi
0x7A7918: mov     eax, ds:0B30AACh
0x7A791D: xor     eax, esp
0x7A791F: push    eax
0x7A7920: lea     eax, [esp+0ACh+var_C]
0x7A7927: mov     large fs:0, eax
0x7A792D: push    74h ; 't'; Size
0x7A792F: call    FormHeapAlloc
0x7A7934: add     esp, 4
0x7A7937: mov     [esp+0ACh+var_98], eax
0x7A793B: xor     ebx, ebx
0x7A793D: cmp     eax, ebx
0x7A793F: mov     [esp+0ACh+var_4], ebx
0x7A7946: jz      short loc_7A7953
0x7A7948: mov     ecx, eax
0x7A794A: call    sub_7A7610
0x7A794F: mov     edi, eax
0x7A7951: jmp     short loc_7A7955
0x7A7953: xor     edi, edi
0x7A7955: mov     esi, [esp+0ACh+arg_0]
0x7A795C: mov     ecx, esi
0x7A795E: mov     [esp+0ACh+var_4], 0FFFFFFFFh
0x7A7969: call    sub_78EB40
0x7A796E: cmp     eax, 3F8h
0x7A7973: jz      short loc_7A79BE
0x7A7975: push    15h; MaxCount
0x7A7977: push    offset aMalformedBranc; "malformed branch data"
0x7A797C: lea     ecx, [esp+0B4h+var_78]
0x7A7980: mov     [esp+0B4h+var_60], 0Fh
0x7A7988: mov     [esp+0B4h+var_64], ebx
0x7A798C: mov     [esp+0B4h+var_74], bl
0x7A7990: call    sub_414500
0x7A7995: push    ebx
0x7A7996: lea     eax, [esp+0B0h+var_78]
0x7A799A: push    eax
0x7A799B: lea     ecx, [esp+0B4h+var_5C]
0x7A799F: mov     [esp+0B4h+var_4], 1
0x7A79AA: call    sub_789190
0x7A79AF: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A79B4: lea     ecx, [esp+0B0h+var_5C]
0x7A79B8: push    ecx
0x7A79B9: call    ThrowException??
0x7A79BE: mov     ecx, esi
0x7A79C0: call    sub_78EB40
0x7A79C5: add     eax, 0FFFFE890h; switch 18 cases
0x7A79CA: cmp     eax, 11h
0x7A79CD: ja      def_7A79D3; jumptable 007A79D3 default case
0x7A79D3: jmp     ds:jpt_7A79D3[eax*4]; switch jump
0x7A79DA: mov     ecx, esi; jumptable 007A79D3 case 6000
0x7A79DC: call    sub_7909D0
0x7A79E1: mov     ebp, [edi+50h]
0x7A79E4: mov     ebx, eax
0x7A79E6: cmp     ebp, ebx
0x7A79E8: jz      loc_7A7C3A
0x7A79EE: test    ebp, ebp
0x7A79F0: jz      short loc_7A7A02
0x7A79F2: mov     ecx, ebp
0x7A79F4: call    sub_784B60
0x7A79F9: push    ebp
0x7A79FA: call    FormHeapFree
0x7A79FF: add     esp, 4
0x7A7A02: mov     [edi+50h], ebx
0x7A7A05: jmp     loc_7A7C3A
0x7A7A0A: mov     ecx, esi; jumptable 007A79D3 case 6001
0x7A7A0C: call    sub_7909D0
0x7A7A11: mov     ebp, [edi+54h]
0x7A7A14: mov     ebx, eax
0x7A7A16: cmp     ebp, ebx
0x7A7A18: jz      loc_7A7C3A
0x7A7A1E: test    ebp, ebp
0x7A7A20: jz      short loc_7A7A32
0x7A7A22: mov     ecx, ebp
0x7A7A24: call    sub_784B60
0x7A7A29: push    ebp
0x7A7A2A: call    FormHeapFree
0x7A7A2F: add     esp, 4
0x7A7A32: mov     [edi+54h], ebx
0x7A7A35: jmp     loc_7A7C3A
0x7A7A3A: mov     ecx, esi; jumptable 007A79D3 case 6002
0x7A7A3C: call    sub_7909D0
0x7A7A41: mov     ebp, [edi+58h]
0x7A7A44: mov     ebx, eax
0x7A7A46: cmp     ebp, ebx
0x7A7A48: jz      loc_7A7C3A
0x7A7A4E: test    ebp, ebp
0x7A7A50: jz      short loc_7A7A62
0x7A7A52: mov     ecx, ebp
0x7A7A54: call    sub_784B60
0x7A7A59: push    ebp
0x7A7A5A: call    FormHeapFree
0x7A7A5F: add     esp, 4
0x7A7A62: mov     [edi+58h], ebx
0x7A7A65: jmp     loc_7A7C3A
0x7A7A6A: mov     ecx, esi; jumptable 007A79D3 case 6003
0x7A7A6C: call    sub_7909D0
0x7A7A71: mov     ebp, [edi+5Ch]
0x7A7A74: mov     ebx, eax
0x7A7A76: cmp     ebp, ebx
0x7A7A78: jz      loc_7A7C3A
0x7A7A7E: test    ebp, ebp
0x7A7A80: jz      short loc_7A7A92
0x7A7A82: mov     ecx, ebp
0x7A7A84: call    sub_784B60
0x7A7A89: push    ebp
0x7A7A8A: call    FormHeapFree
0x7A7A8F: add     esp, 4
0x7A7A92: mov     [edi+5Ch], ebx
0x7A7A95: jmp     loc_7A7C3A
0x7A7A9A: mov     ecx, esi; jumptable 007A79D3 case 6017
0x7A7A9C: call    sub_7909D0
0x7A7AA1: mov     ebp, [edi+70h]
0x7A7AA4: mov     ebx, eax
0x7A7AA6: cmp     ebp, ebx
0x7A7AA8: jz      loc_7A7C3A
0x7A7AAE: test    ebp, ebp
0x7A7AB0: jz      short loc_7A7AC2
0x7A7AB2: mov     ecx, ebp
0x7A7AB4: call    sub_784B60
0x7A7AB9: push    ebp
0x7A7ABA: call    FormHeapFree
0x7A7ABF: add     esp, 4
0x7A7AC2: mov     [edi+70h], ebx
0x7A7AC5: jmp     loc_7A7C3A
0x7A7ACA: mov     ecx, esi; jumptable 007A79D3 case 6004
0x7A7ACC: call    sub_7909D0
0x7A7AD1: mov     ebp, [edi+60h]
0x7A7AD4: mov     ebx, eax
0x7A7AD6: cmp     ebp, ebx
0x7A7AD8: jz      loc_7A7C3A
0x7A7ADE: test    ebp, ebp
0x7A7AE0: jz      short loc_7A7AF2
0x7A7AE2: mov     ecx, ebp
0x7A7AE4: call    sub_784B60
0x7A7AE9: push    ebp
0x7A7AEA: call    FormHeapFree
0x7A7AEF: add     esp, 4
0x7A7AF2: mov     [edi+60h], ebx
0x7A7AF5: jmp     loc_7A7C3A
0x7A7AFA: mov     ecx, esi; jumptable 007A79D3 case 6005
0x7A7AFC: call    sub_7909D0
0x7A7B01: mov     ebp, [edi+64h]
0x7A7B04: mov     ebx, eax
0x7A7B06: cmp     ebp, ebx
0x7A7B08: jz      loc_7A7C3A
0x7A7B0E: test    ebp, ebp
0x7A7B10: jz      short loc_7A7B22
0x7A7B12: mov     ecx, ebp
0x7A7B14: call    sub_784B60
0x7A7B19: push    ebp
0x7A7B1A: call    FormHeapFree
0x7A7B1F: add     esp, 4
0x7A7B22: mov     [edi+64h], ebx
0x7A7B25: jmp     loc_7A7C3A
0x7A7B2A: mov     ecx, esi; jumptable 007A79D3 case 6006
0x7A7B2C: call    sub_7909D0
0x7A7B31: mov     ebp, [edi+68h]
0x7A7B34: mov     ebx, eax
0x7A7B36: cmp     ebp, ebx
0x7A7B38: jz      loc_7A7C3A
0x7A7B3E: test    ebp, ebp
0x7A7B40: jz      short loc_7A7B52
0x7A7B42: mov     ecx, ebp
0x7A7B44: call    sub_784B60
0x7A7B49: push    ebp
0x7A7B4A: call    FormHeapFree
0x7A7B4F: add     esp, 4
0x7A7B52: mov     [edi+68h], ebx
0x7A7B55: jmp     loc_7A7C3A
0x7A7B5A: mov     ecx, esi; jumptable 007A79D3 case 6007
0x7A7B5C: call    sub_7909D0
0x7A7B61: mov     ebp, [edi+6Ch]
0x7A7B64: mov     ebx, eax
0x7A7B66: cmp     ebp, ebx
0x7A7B68: jz      loc_7A7C3A
0x7A7B6E: test    ebp, ebp
0x7A7B70: jz      short loc_7A7B82
0x7A7B72: mov     ecx, ebp
0x7A7B74: call    sub_784B60
0x7A7B79: push    ebp
0x7A7B7A: call    FormHeapFree
0x7A7B7F: add     esp, 4
0x7A7B82: mov     [edi+6Ch], ebx
0x7A7B85: jmp     loc_7A7C3A
0x7A7B8A: mov     ecx, esi; jumptable 007A79D3 case 6008
0x7A7B8C: call    sub_78EB40
0x7A7B91: mov     [edi], eax
0x7A7B93: jmp     loc_7A7C3A
0x7A7B98: mov     ecx, esi; jumptable 007A79D3 case 6009
0x7A7B9A: call    sub_78EB40
0x7A7B9F: mov     [edi+4], eax
0x7A7BA2: jmp     loc_7A7C3A
0x7A7BA7: mov     ecx, esi; jumptable 007A79D3 case 6010
0x7A7BA9: call    sub_78EB10
0x7A7BAE: fstp    dword ptr [edi+8]
0x7A7BB1: jmp     loc_7A7C3A
0x7A7BB6: mov     ecx, esi; jumptable 007A79D3 case 6011
0x7A7BB8: call    sub_78EB10
0x7A7BBD: fstp    dword ptr [edi+0Ch]
0x7A7BC0: jmp     short loc_7A7C3A
0x7A7BC2: mov     ecx, esi; jumptable 007A79D3 case 6012
0x7A7BC4: call    sub_78EB10
0x7A7BC9: fstp    dword ptr [edi+10h]
0x7A7BCC: jmp     short loc_7A7C3A
0x7A7BCE: mov     ecx, esi; jumptable 007A79D3 case 6013
0x7A7BD0: call    sub_78EB10
0x7A7BD5: fstp    dword ptr [edi+14h]
0x7A7BD8: jmp     short loc_7A7C3A
0x7A7BDA: mov     ecx, esi; jumptable 007A79D3 case 6014
0x7A7BDC: call    sub_78EB10
0x7A7BE1: fstp    dword ptr [edi+18h]
0x7A7BE4: jmp     short loc_7A7C3A
0x7A7BE6: mov     ebp, [esi]; jumptable 007A79D3 case 6015
0x7A7BE8: lea     edx, [ebp+1]
0x7A7BEB: mov     [esi], edx
0x7A7BED: mov     ecx, [esi+8]
0x7A7BF0: test    ecx, ecx
0x7A7BF2: jz      short loc_7A7BFD
0x7A7BF4: mov     eax, [esi+0Ch]
0x7A7BF7: sub     eax, ecx
0x7A7BF9: cmp     ebp, eax
0x7A7BFB: jb      short loc_7A7C02
0x7A7BFD: call    __invalid_parameter_noinfo
0x7A7C02: mov     eax, [esi+8]
0x7A7C05: cmp     byte ptr [eax+ebp], 0
0x7A7C09: setnz   cl
0x7A7C0C: mov     [edi+1Ch], cl
0x7A7C0F: jmp     short loc_7A7C3A
0x7A7C11: mov     ebp, [esi]; jumptable 007A79D3 case 6016
0x7A7C13: lea     edx, [ebp+1]
0x7A7C16: mov     [esi], edx
0x7A7C18: mov     ecx, [esi+8]
0x7A7C1B: test    ecx, ecx
0x7A7C1D: jz      short loc_7A7C28
0x7A7C1F: mov     eax, [esi+0Ch]
0x7A7C22: sub     eax, ecx
0x7A7C24: cmp     ebp, eax
0x7A7C26: jb      short loc_7A7C2D
0x7A7C28: call    __invalid_parameter_noinfo
0x7A7C2D: mov     eax, [esi+8]
0x7A7C30: cmp     byte ptr [eax+ebp], 0
0x7A7C34: setnz   cl
0x7A7C37: mov     [edi+1Dh], cl
0x7A7C3A: mov     ecx, esi
0x7A7C3C: call    sub_78EB40
0x7A7C41: cmp     eax, 3F9h
0x7A7C46: jnz     loc_7A79C5
0x7A7C4C: mov     eax, edi
0x7A7C4E: mov     ecx, [esp+0ACh+var_C]
0x7A7C55: mov     large fs:0, ecx
0x7A7C5C: pop     ecx
0x7A7C5D: pop     edi
0x7A7C5E: pop     esi
0x7A7C5F: pop     ebp
0x7A7C60: pop     ebx
0x7A7C61: add     esp, 98h
0x7A7C67: retn
0x7A7C68: push    24h ; '$'; jumptable 007A79D3 default case
0x7A7C6A: push    offset aMalformedGen_1; "malformed general branch information"
0x7A7C6F: lea     ecx, [esp+0B4h+var_94]
0x7A7C73: mov     [esp+0B4h+var_7C], 0Fh
0x7A7C7B: mov     [esp+0B4h+var_80], 0
0x7A7C83: mov     [esp+0B4h+var_90], 0
0x7A7C88: call    sub_414500
0x7A7C8D: push    0
0x7A7C8F: lea     edx, [esp+0B0h+var_94]
0x7A7C93: push    edx
0x7A7C94: lea     ecx, [esp+0B4h+var_34]
0x7A7C9B: mov     [esp+0B4h+var_4], 2
0x7A7CA6: call    sub_789190
0x7A7CAB: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A7CB0: lea     eax, [esp+0B0h+var_34]
0x7A7CB4: push    eax
0x7A7CB5: call    ThrowException??
