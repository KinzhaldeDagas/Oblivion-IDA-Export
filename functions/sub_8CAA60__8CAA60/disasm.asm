0x8CAA60: sub     esp, 210h
0x8CAA66: mov     eax, ds:0B30AACh
0x8CAA6B: push    ebx
0x8CAA6C: push    esi
0x8CAA6D: mov     esi, ecx
0x8CAA6F: mov     [esp+218h+var_4], eax
0x8CAA76: mov     al, [esi+58h]
0x8CAA79: test    al, al
0x8CAA7B: push    edi
0x8CAA7C: jz      short loc_8CAAD5
0x8CAA7E: mov     al, [esi+80h]
0x8CAA84: test    al, al
0x8CAA86: jz      short loc_8CAAD5
0x8CAA88: mov     byte ptr [esi+80h], 0
0x8CAA8F: call    sub_917FC0
0x8CAA94: mov     edi, [esi+60h]
0x8CAA97: mov     ebx, [esi+64h]
0x8CAA9A: mov     ecx, eax
0x8CAA9C: sub     ecx, edi
0x8CAA9E: mov     edi, edx
0x8CAAA0: sbb     edi, ebx
0x8CAAA2: mov     ebx, [esi+68h]
0x8CAAA5: add     ebx, ecx
0x8CAAA7: mov     ecx, [esi+6Ch]
0x8CAAAA: adc     ecx, edi
0x8CAAAC: sub     eax, [esi+70h]
0x8CAAAF: mov     edi, [esi+78h]
0x8CAAB2: mov     [esi+6Ch], ecx
0x8CAAB5: sbb     edx, [esi+74h]
0x8CAAB8: mov     ecx, [esi+7Ch]
0x8CAABB: add     edi, eax
0x8CAABD: mov     eax, [esi+84h]
0x8CAAC3: adc     ecx, edx
0x8CAAC5: inc     eax
0x8CAAC6: mov     [esi+68h], ebx
0x8CAAC9: mov     [esi+78h], edi
0x8CAACC: mov     [esi+7Ch], ecx
0x8CAACF: mov     [esi+84h], eax
0x8CAAD5: mov     eax, [esi+8]
0x8CAAD8: test    eax, eax
0x8CAADA: jz      short loc_8CAB47
0x8CAADC: mov     ecx, eax
0x8CAADE: mov     edx, [ecx]
0x8CAAE0: call    dword ptr [edx+24h]
0x8CAAE3: mov     edi, eax
0x8CAAE5: test    edi, edi
0x8CAAE7: jz      short loc_8CAB47
0x8CAAE9: push    ecx
0x8CAAEA: mov     eax, esp
0x8CAAEC: mov     byte ptr [eax], 1
0x8CAAEF: push    200h
0x8CAAF4: lea     eax, [esp+224h+var_204]
0x8CAAF8: push    eax
0x8CAAF9: lea     ecx, [esp+228h+var_210]
0x8CAAFD: call    sub_8BBFB0
0x8CAB02: push    offset aANewNetworkCli; "A new network client has been received "...
0x8CAB07: lea     ecx, [esp+220h+var_210]
0x8CAB0B: call    sub_8BBDB0
0x8CAB10: mov     ecx, ds:0BA7FB0h
0x8CAB16: mov     edx, [ecx]
0x8CAB18: push    0BFh ; '¿'
0x8CAB1D: push    offset a_Hkvisualdebug; ".\\hkVisualDebugger.cpp"
0x8CAB22: lea     eax, [esp+224h+var_204]
0x8CAB26: push    eax
0x8CAB27: push    0FFFFFFFFh
0x8CAB29: push    0
0x8CAB2B: call    dword ptr [edx+8]
0x8CAB2E: lea     ecx, [esp+21Ch+var_210]
0x8CAB32: call    sub_8BC000
0x8CAB37: lea     ecx, [edi+14h]
0x8CAB3A: push    ecx
0x8CAB3B: lea     edx, [edi+8]
0x8CAB3E: push    edx
0x8CAB3F: push    edi
0x8CAB40: mov     ecx, esi
0x8CAB42: call    sub_8CA940
0x8CAB47: mov     al, [esi+58h]
0x8CAB4A: test    al, al
0x8CAB4C: jz      short loc_8CAB68
0x8CAB4E: mov     byte ptr [esi+80h], 1
0x8CAB55: call    sub_917FC0
0x8CAB5A: mov     ecx, edx
0x8CAB5C: mov     [esi+60h], eax
0x8CAB5F: mov     [esi+64h], edx
0x8CAB62: mov     [esi+70h], eax
0x8CAB65: mov     [esi+74h], ecx
0x8CAB68: mov     ecx, [esp+21Ch+var_4]
0x8CAB6F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8CAB74: pop     edi
0x8CAB75: pop     esi
0x8CAB76: pop     ebx
0x8CAB77: add     esp, 210h
0x8CAB7D: retn
