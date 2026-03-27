0x4BFF00: push    0FFFFFFFFh
0x4BFF02: push    offset SEH_4BFF00
0x4BFF07: mov     eax, large fs:0
0x4BFF0D: push    eax
0x4BFF0E: sub     esp, 120h
0x4BFF14: mov     eax, ds:0B30AACh
0x4BFF19: xor     eax, esp
0x4BFF1B: mov     [esp+12Ch+var_10], eax
0x4BFF22: push    ebx
0x4BFF23: push    ebp
0x4BFF24: push    esi
0x4BFF25: push    edi
0x4BFF26: mov     eax, ds:0B30AACh
0x4BFF2B: xor     eax, esp
0x4BFF2D: push    eax
0x4BFF2E: lea     eax, [esp+140h+var_C]
0x4BFF35: mov     large fs:0, eax
0x4BFF3B: xor     eax, eax
0x4BFF3D: cmp     [esp+140h+arg_0], 4
0x4BFF45: mov     [esp+140h+var_12C], ecx
0x4BFF49: jnb     loc_4C007B
0x4BFF4F: cmp     [ecx+24h], eax
0x4BFF52: jz      loc_4C007B
0x4BFF58: push    908h; Size
0x4BFF5D: call    FormHeapAlloc
0x4BFF62: mov     esi, ds:0B35BD4h
0x4BFF68: mov     ebx, eax
0x4BFF6A: mov     ecx, 242h
0x4BFF6F: mov     edi, ebx
0x4BFF71: push    2; Size
0x4BFF73: rep movsd
0x4BFF75: call    FormHeapAlloc
0x4BFF7A: push    7FAh; Size
0x4BFF7F: mov     ebp, eax
0x4BFF81: call    FormHeapAlloc
0x4BFF86: mov     word ptr [ebp+0], 3FDh
0x4BFF8C: mov     edi, eax
0x4BFF8E: mov     ecx, 1FEh
0x4BFF93: mov     esi, offset off_B08BA8
0x4BFF98: rep movsd
0x4BFF9A: push    0C0h ; 'À'; Size
0x4BFF9F: mov     [esp+150h+var_128], eax
0x4BFFA3: movsw
0x4BFFA5: call    FormHeapAlloc
0x4BFFAA: add     esp, 10h
0x4BFFAD: mov     [esp+140h+var_118], eax
0x4BFFB1: test    eax, eax
0x4BFFB3: mov     [esp+140h+var_4], 0
0x4BFFBE: jz      short loc_4C000E
0x4BFFC0: mov     ecx, [esp+140h+var_12C]
0x4BFFC4: mov     esi, [ecx+24h]
0x4BFFC7: mov     ecx, [esp+140h+var_128]
0x4BFFCB: movzx   edx, [esp+140h+arg_0]
0x4BFFD3: push    ecx
0x4BFFD4: movzx   ecx, word ptr [ebp+0]
0x4BFFD8: sub     cx, 2
0x4BFFDC: push    ebp
0x4BFFDD: push    1
0x4BFFDF: add     edx, edx
0x4BFFE1: add     edx, edx
0x4BFFE3: push    ecx
0x4BFFE4: mov     ecx, [esi+0Ch]
0x4BFFE7: mov     ecx, [ecx+edx]
0x4BFFEA: push    0
0x4BFFEC: push    1
0x4BFFEE: push    ebx
0x4BFFEF: push    ecx
0x4BFFF0: mov     ecx, [esi+8]
0x4BFFF3: mov     ecx, [ecx+edx]
0x4BFFF6: push    ecx
0x4BFFF7: mov     ecx, [esi+4]
0x4BFFFA: mov     edx, [ecx+edx]
0x4BFFFD: push    edx
0x4BFFFE: push    121h
0x4C0003: mov     ecx, eax
0x4C0005: call    sub_719960
0x4C000A: mov     esi, eax
0x4C000C: jmp     short loc_4C0010
0x4C000E: xor     esi, esi
0x4C0010: movzx   edi, [esp+140h+arg_0]
0x4C0018: mov     ecx, [esp+140h+var_12C]
0x4C001C: push    edi
0x4C001D: lea     eax, [esp+144h+var_124]
0x4C0021: push    eax
0x4C0022: mov     [esp+148h+var_4], 0FFFFFFFFh
0x4C002D: call    sub_4BFE00
0x4C0032: mov     ecx, [esp+140h+var_124]
0x4C0036: mov     edx, [esp+140h+var_120]
0x4C003A: mov     eax, [esp+140h+var_11C]
0x4C003E: mov     [esi+54h], ecx
0x4C0041: mov     ecx, edi
0x4C0043: shr     ecx, 2
0x4C0046: and     edi, 80000003h
0x4C004C: mov     [esi+58h], edx
0x4C004F: mov     [esi+5Ch], eax
0x4C0052: push    ecx
0x4C0053: jns     short loc_4C005A
0x4C0055: dec     edi
0x4C0056: or      edi, 0FFFFFFFCh
0x4C0059: inc     edi
0x4C005A: push    edi
0x4C005B: lea     edx, [esp+148h+Src]
0x4C005F: push    offset aBlockII; "Block (%i, %i)"
0x4C0064: push    edx
0x4C0065: call    __sprintf
0x4C006A: add     esp, 10h
0x4C006D: lea     eax, [esp+140h+Src]
0x4C0071: push    eax; Src
0x4C0072: mov     ecx, esi
0x4C0074: call    NiObjectNET_SetName
0x4C0079: mov     eax, esi
0x4C007B: mov     ecx, [esp+140h+var_C]
0x4C0082: mov     large fs:0, ecx
0x4C0089: pop     ecx
0x4C008A: pop     edi
0x4C008B: pop     esi
0x4C008C: pop     ebp
0x4C008D: pop     ebx
0x4C008E: mov     ecx, [esp+12Ch+var_10]
0x4C0095: xor     ecx, esp
0x4C0097: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4C009C: add     esp, 12Ch
0x4C00A2: retn    4
