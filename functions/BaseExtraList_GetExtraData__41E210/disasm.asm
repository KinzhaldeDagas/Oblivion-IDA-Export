0x41E210: push    ebp
0x41E211: push    esi
0x41E212: movzx   esi, [esp+8+a2]
0x41E217: mov     eax, esi
0x41E219: shr     eax, 3
0x41E21C: cmp     eax, 0Ch
0x41E21F: mov     ebp, ecx
0x41E221: jnb     short loc_41E241
0x41E223: mov     ecx, esi
0x41E225: and     ecx, 80000007h
0x41E22B: jns     short loc_41E232
0x41E22D: dec     ecx
0x41E22E: or      ecx, 0FFFFFFF8h
0x41E231: inc     ecx
0x41E232: mov     al, [eax+ebp+8]
0x41E236: mov     edx, 1
0x41E23B: shl     edx, cl
0x41E23D: test    al, dl
0x41E23F: jnz     short loc_41E248
0x41E241: pop     esi
0x41E242: xor     eax, eax
0x41E244: pop     ebp
0x41E245: retn    4
0x41E248: mov     ecx, TlsIndex
0x41E24E: mov     edx, large fs:2Ch
0x41E255: push    ebx
0x41E256: mov     ebx, [edx+ecx*4]
0x41E259: push    edi
0x41E25A: xor     edi, edi
0x41E25C: cmp     ebp, [ebx+8]
0x41E262: jnz     short loc_41E275
0x41E264: call    sub_41DEA0
0x41E269: cmp     esi, 5Ch ; '\'
0x41E26C: ja      short loc_41E275
0x41E26E: mov     edi, [ebx+esi*4+10h]
0x41E275: test    edi, edi
0x41E277: jnz     short loc_41E2BA
0x41E279: push    offset aBaseextralistG; lpCriticalSection
0x41E27E: mov     ecx, offset BSExtraDataCS
0x41E283: call    NiEnterCriticalSection
0x41E288: mov     esi, [ebp+4]
0x41E28B: test    esi, esi
0x41E28D: jz      short loc_41E2B0
0x41E28F: nop
0x41E290: test    edi, edi
0x41E292: jnz     short loc_41E2B0
0x41E294: mov     al, [esp+10h+a2]
0x41E298: cmp     [esi+4], al
0x41E29B: jnz     short loc_41E2A9
0x41E29D: push    esi
0x41E29E: push    ebp
0x41E29F: call    sub_41DF90
0x41E2A4: add     esp, 8
0x41E2A7: mov     edi, esi
0x41E2A9: mov     esi, [esi+8]
0x41E2AC: test    esi, esi
0x41E2AE: jnz     short loc_41E290
0x41E2B0: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x41E2B5: call    NiLeaveCriticalSection_0
0x41E2BA: mov     eax, edi
0x41E2BC: pop     edi
0x41E2BD: pop     ebx
0x41E2BE: pop     esi
0x41E2BF: pop     ebp
0x41E2C0: retn    4
