0x72D860: sub     esp, 0Ch
0x72D863: push    ebx
0x72D864: push    ebp
0x72D865: push    esi
0x72D866: mov     esi, [esp+18h+arg_0]
0x72D86A: mov     eax, [esi+21Ch]
0x72D870: mov     edx, [eax+4]
0x72D873: push    edi
0x72D874: mov     edi, ecx
0x72D876: push    1
0x72D878: lea     ecx, [esp+20h+var_8]
0x72D87C: push    ecx
0x72D87D: mov     ebp, 2
0x72D882: push    ebp
0x72D883: lea     ebx, [edi+1Ch]
0x72D886: push    ebx
0x72D887: push    eax
0x72D888: mov     [esp+30h+var_8], ebp
0x72D88C: call    edx
0x72D88E: mov     eax, [esi+21Ch]
0x72D894: push    1
0x72D896: lea     edx, [esp+34h+var_8]
0x72D89A: push    edx
0x72D89B: lea     ecx, [edi+1Eh]
0x72D89E: push    ebp
0x72D89F: push    ecx
0x72D8A0: push    eax
0x72D8A1: mov     eax, [eax+4]
0x72D8A4: mov     [esp+44h+var_8], ebp
0x72D8A8: call    eax
0x72D8AA: mov     eax, [esi+21Ch]
0x72D8B0: mov     edx, [eax+4]
0x72D8B3: push    1
0x72D8B5: lea     ecx, [esp+48h+var_8]
0x72D8B9: push    ecx
0x72D8BA: mov     [esp+4Ch+var_8], ebp
0x72D8BE: push    2
0x72D8C0: lea     ebp, [edi+20h]
0x72D8C3: push    ebp
0x72D8C4: push    eax
0x72D8C5: call    edx
0x72D8C7: mov     eax, [esi+21Ch]
0x72D8CD: push    1
0x72D8CF: lea     edx, [esp+5Ch+var_8]
0x72D8D3: push    edx
0x72D8D4: lea     ecx, [edi+22h]
0x72D8D7: push    2
0x72D8D9: push    ecx
0x72D8DA: push    eax
0x72D8DB: mov     eax, [eax+4]
0x72D8DE: mov     [esp+6Ch+var_8], 2
0x72D8E6: call    eax
0x72D8E8: mov     eax, [esi+21Ch]
0x72D8EE: add     esp, 50h
0x72D8F1: push    1
0x72D8F3: lea     edx, [esp+20h+var_8]
0x72D8F7: push    edx
0x72D8F8: lea     ecx, [edi+24h]
0x72D8FB: push    2
0x72D8FD: push    ecx
0x72D8FE: push    eax
0x72D8FF: mov     eax, [eax+4]
0x72D902: mov     [esp+30h+var_8], 2
0x72D90A: call    eax
0x72D90C: movzx   eax, word ptr [ebp+0]
0x72D910: xor     ecx, ecx
0x72D912: mov     edx, 2
0x72D917: mul     edx
0x72D919: seto    cl
0x72D91C: neg     ecx
0x72D91E: or      ecx, eax
0x72D920: push    ecx; Size
0x72D921: call    FormHeapAlloc
0x72D926: push    1
0x72D928: lea     edx, [esp+38h+var_8]
0x72D92C: push    edx
0x72D92D: movzx   edx, word ptr [ebp+0]
0x72D931: add     edx, edx
0x72D933: mov     [edi+4], eax
0x72D936: mov     ecx, [esi+21Ch]
0x72D93C: mov     [esp+3Ch+var_8], 2
0x72D944: push    edx
0x72D945: push    eax
0x72D946: mov     eax, [ecx+4]
0x72D949: push    ecx
0x72D94A: call    eax
0x72D94C: add     esp, 2Ch
0x72D94F: cmp     dword ptr [esi+0D8h], 0A000112h
0x72D959: jb      loc_72DA6A
0x72D95F: mov     eax, [esi+21Ch]
0x72D965: push    1
0x72D967: lea     ecx, [esp+20h+var_8]
0x72D96B: push    ecx
0x72D96C: push    1
0x72D96E: lea     edx, [esp+28h+arg_0]
0x72D972: push    edx
0x72D973: push    eax
0x72D974: mov     eax, [eax+4]
0x72D977: mov     [esp+30h+var_8], 1
0x72D97F: call    eax
0x72D981: add     esp, 14h
0x72D984: cmp     byte ptr [esp+1Ch+arg_0], 0
0x72D989: jz      short loc_72D9CC
0x72D98B: movzx   eax, word ptr [ebx]
0x72D98E: xor     ecx, ecx
0x72D990: mov     edx, 2
0x72D995: mul     edx
0x72D997: seto    cl
0x72D99A: neg     ecx
0x72D99C: or      ecx, eax
0x72D99E: push    ecx; Size
0x72D99F: call    FormHeapAlloc
0x72D9A4: push    1
0x72D9A6: lea     edx, [esp+24h+var_8]
0x72D9AA: push    edx
0x72D9AB: movzx   edx, word ptr [ebx]
0x72D9AE: add     edx, edx
0x72D9B0: push    edx
0x72D9B1: mov     [edi+0Ch], eax
0x72D9B4: mov     ecx, [esi+21Ch]
0x72D9BA: push    eax
0x72D9BB: mov     eax, [ecx+4]
0x72D9BE: push    ecx
0x72D9BF: mov     [esp+34h+var_8], 2
0x72D9C7: call    eax
0x72D9C9: add     esp, 18h
0x72D9CC: movzx   ebp, word ptr [edi+24h]
0x72D9D0: movzx   ecx, word ptr [ebx]
0x72D9D3: imul    ebp, ecx
0x72D9D6: cmp     dword ptr [esi+0D8h], 0A000112h
0x72D9E0: mov     [esp+1Ch+Size], ebp
0x72D9E4: jb      loc_72DA74
0x72D9EA: mov     eax, [esi+21Ch]
0x72D9F0: push    1
0x72D9F2: lea     edx, [esp+20h+var_8]
0x72D9F6: push    edx
0x72D9F7: mov     edx, [eax+4]
0x72D9FA: push    1
0x72D9FC: lea     ecx, [esp+28h+var_B]
0x72DA00: push    ecx
0x72DA01: push    eax
0x72DA02: mov     [esp+30h+var_8], 1
0x72DA0A: call    edx
0x72DA0C: add     esp, 14h
0x72DA0F: cmp     [esp+1Ch+var_B], 0
0x72DA14: jz      short loc_72DA58
0x72DA16: xor     ecx, ecx
0x72DA18: mov     eax, ebp
0x72DA1A: mov     edx, 4
0x72DA1F: mul     edx
0x72DA21: seto    cl
0x72DA24: neg     ecx
0x72DA26: or      ecx, eax
0x72DA28: push    ecx; Size
0x72DA29: call    FormHeapAlloc
0x72DA2E: push    1
0x72DA30: lea     edx, [esp+24h+var_8]
0x72DA34: push    edx
0x72DA35: lea     edx, ds:0[ebp*4]
0x72DA3C: push    edx
0x72DA3D: mov     [edi+8], eax
0x72DA40: mov     ecx, [esi+21Ch]
0x72DA46: push    eax
0x72DA47: mov     eax, [ecx+4]
0x72DA4A: push    ecx
0x72DA4B: mov     [esp+34h+var_8], 4
0x72DA53: call    eax
0x72DA55: add     esp, 18h
0x72DA58: movzx   eax, word ptr [edi+22h]
0x72DA5C: test    ax, ax
0x72DA5F: jnz     short loc_72DA7B
0x72DA61: movzx   eax, word ptr [edi+1Eh]
0x72DA65: lea     ebp, [eax+eax*2]
0x72DA68: jmp     short loc_72DADF
0x72DA6A: mov     byte ptr [esp+1Ch+arg_0], 1
0x72DA6F: jmp     loc_72D98B
0x72DA74: mov     [esp+1Ch+var_B], 1
0x72DA79: jmp     short loc_72DA16
0x72DA7B: movzx   eax, ax
0x72DA7E: xor     ecx, ecx
0x72DA80: mov     edx, 2
0x72DA85: mul     edx
0x72DA87: seto    cl
0x72DA8A: neg     ecx
0x72DA8C: or      ecx, eax
0x72DA8E: push    ecx; Size
0x72DA8F: call    FormHeapAlloc
0x72DA94: push    1
0x72DA96: lea     edx, [esp+24h+var_8]
0x72DA9A: push    edx
0x72DA9B: movzx   edx, word ptr [edi+22h]
0x72DA9F: add     edx, edx
0x72DAA1: push    edx
0x72DAA2: mov     [edi+18h], eax
0x72DAA5: mov     ecx, [esi+21Ch]
0x72DAAB: push    eax
0x72DAAC: mov     eax, [ecx+4]
0x72DAAF: push    ecx
0x72DAB0: mov     [esp+34h+var_8], 2
0x72DAB8: call    eax
0x72DABA: xor     ecx, ecx
0x72DABC: add     esp, 18h
0x72DABF: cmp     [edi+22h], cx
0x72DAC3: jbe     short loc_72DADD
0x72DAC5: mov     eax, [edi+18h]
0x72DAC8: movzx   edx, word ptr [edi+22h]
0x72DACC: lea     esp, [esp+0]
0x72DAD0: movzx   ebx, word ptr [eax]
0x72DAD3: add     ecx, ebx
0x72DAD5: add     eax, 2
0x72DAD8: sub     edx, 1
0x72DADB: jnz     short loc_72DAD0
0x72DADD: mov     ebp, ecx
0x72DADF: cmp     dword ptr [esi+0D8h], 0A000112h
0x72DAE9: mov     ebx, 1
0x72DAEE: jb      loc_72DBB0
0x72DAF4: mov     eax, [esi+21Ch]
0x72DAFA: push    ebx
0x72DAFB: lea     ecx, [esp+20h+var_8]
0x72DAFF: push    ecx
0x72DB00: push    ebx
0x72DB01: lea     edx, [esp+28h+var_A]
0x72DB05: push    edx
0x72DB06: push    eax
0x72DB07: mov     eax, [eax+4]
0x72DB0A: mov     [esp+30h+var_8], ebx
0x72DB0E: call    eax
0x72DB10: add     esp, 14h
0x72DB13: cmp     [esp+1Ch+var_A], 0
0x72DB18: jz      short loc_72DB58
0x72DB1A: xor     ecx, ecx
0x72DB1C: mov     eax, ebp
0x72DB1E: mov     edx, 2
0x72DB23: mul     edx
0x72DB25: seto    cl
0x72DB28: neg     ecx
0x72DB2A: or      ecx, eax
0x72DB2C: push    ecx; Size
0x72DB2D: call    FormHeapAlloc
0x72DB32: push    ebx
0x72DB33: lea     edx, [esp+24h+var_8]
0x72DB37: push    edx
0x72DB38: lea     edx, [ebp+ebp+0]
0x72DB3C: push    edx
0x72DB3D: mov     [edi+14h], eax
0x72DB40: mov     ecx, [esi+21Ch]
0x72DB46: push    eax
0x72DB47: mov     eax, [ecx+4]
0x72DB4A: push    ecx
0x72DB4B: mov     [esp+34h+var_8], 2
0x72DB53: call    eax
0x72DB55: add     esp, 18h
0x72DB58: mov     eax, [esi+21Ch]
0x72DB5E: push    ebx
0x72DB5F: lea     ecx, [esp+20h+var_8]
0x72DB63: push    ecx
0x72DB64: push    ebx
0x72DB65: lea     edx, [esp+28h+var_9]
0x72DB69: push    edx
0x72DB6A: push    eax
0x72DB6B: mov     eax, [eax+4]
0x72DB6E: mov     [esp+30h+var_8], ebx
0x72DB72: call    eax
0x72DB74: add     esp, 14h
0x72DB77: cmp     [esp+1Ch+var_9], 0
0x72DB7C: jz      short loc_72DBA6
0x72DB7E: mov     ebp, [esp+1Ch+Size]
0x72DB82: push    ebp; Size
0x72DB83: call    FormHeapAlloc
0x72DB88: push    ebx
0x72DB89: lea     ecx, [esp+24h+Size]
0x72DB8D: push    ecx
0x72DB8E: mov     [edi+10h], eax
0x72DB91: mov     esi, [esi+21Ch]
0x72DB97: mov     edx, [esi+4]
0x72DB9A: push    ebp
0x72DB9B: push    eax
0x72DB9C: push    esi
0x72DB9D: mov     [esp+34h+Size], ebx
0x72DBA1: call    edx
0x72DBA3: add     esp, 18h
0x72DBA6: pop     edi
0x72DBA7: pop     esi
0x72DBA8: pop     ebp
0x72DBA9: pop     ebx
0x72DBAA: add     esp, 0Ch
0x72DBAD: retn    4
0x72DBB0: mov     [esp+1Ch+var_A], 1
0x72DBB5: jmp     loc_72DB1A
