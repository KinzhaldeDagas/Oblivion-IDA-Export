0x414190: push    0FFFFFFFFh
0x414192: push    offset EffectItem_CompareTo_SEH
0x414197: mov     eax, large fs:0
0x41419D: push    eax
0x41419E: sub     esp, 14h
0x4141A1: push    ebx
0x4141A2: push    ebp
0x4141A3: push    esi
0x4141A4: push    edi
0x4141A5: mov     eax, ___security_cookie
0x4141AA: xor     eax, esp
0x4141AC: push    eax
0x4141AD: lea     eax, [esp+34h+var_C]
0x4141B1: mov     large fs:0, eax
0x4141B7: mov     edi, ecx
0x4141B9: mov     ebp, [esp+34h+arg_0]
0x4141BD: mov     [esp+34h+var_20], 0
0x9AB150: mov     eax, [ebp-20h]
0x9AB153: and     eax, 1
0x9AB156: jz      locret_9AB168
0x9AB15C: and     dword ptr [ebp-20h], 0FFFFFFFEh
0x9AB160: lea     ecx, [ebp-14h]; void *
0x9AB163: jmp     BSStringT_Clear
0x9AB168: retn
0x9AB169: mov     edx, [esp+arg_4]
0x9AB16D: lea     eax, [edx-24h]
0x9AB170: mov     ecx, [edx-28h]
0x9AB173: xor     ecx, eax
0x9AB175: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB17A: mov     eax, offset stru_AD808C
0x9AB17F: jmp     ___CxxFrameHandler3
