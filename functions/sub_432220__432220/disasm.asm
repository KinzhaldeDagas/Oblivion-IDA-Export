0x432220: push    ebx
0x432221: push    ebp
0x432222: push    esi
0x432223: mov     esi, [esp+0Ch+arg_0]
0x432227: mov     ebx, [esi+0Ch]
0x43222A: test    ebx, ebx
0x43222C: push    edi
0x43222D: lea     edi, [esi+0Ch]
0x432230: mov     ebp, ecx
0x432232: jnz     short loc_43224B
0x432234: mov     eax, [esp+10h+arg_4]
0x432238: mov     ecx, [esp+10h+arg_8]
0x43223C: pop     edi
0x43223D: mov     [esi+10h], eax
0x432240: mov     [esi+14h], ecx
0x432243: pop     esi
0x432244: pop     ebp
0x432245: mov     al, 1
0x432247: pop     ebx
0x432248: retn    0Ch
0x43224B: cmp     ebx, 3
0x43224E: jge     short loc_432298
0x432250: push    ebx; Comperand
0x432251: push    2; Exchange
0x432253: push    edi; Destination
0x432254: call    ds:InterlockedCompareExchange
0x43225A: cmp     eax, ebx
0x43225C: jnz     short loc_432298
0x43225E: push    esi
0x43225F: mov     ecx, ebp
0x432261: call    sub_431D10
0x432266: mov     edx, [esp+10h+arg_4]
0x43226A: mov     eax, [esp+10h+arg_8]
0x43226E: push    2; Comperand
0x432270: push    0; Exchange
0x432272: push    edi; Destination
0x432273: mov     [esi+10h], edx
0x432276: mov     [esi+14h], eax
0x432279: call    ds:InterlockedCompareExchange
0x43227F: cmp     eax, 2
0x432282: jnz     short loc_43228F
0x432284: mov     edx, [ebp+0]
0x432287: mov     eax, [edx+3Ch]
0x43228A: push    esi
0x43228B: mov     ecx, ebp
0x43228D: call    eax
0x43228F: pop     edi
0x432290: pop     esi
0x432291: pop     ebp
0x432292: mov     al, 1
0x432294: pop     ebx
0x432295: retn    0Ch
0x432298: pop     edi
0x432299: pop     esi
0x43229A: pop     ebp
0x43229B: xor     al, al
0x43229D: pop     ebx
0x43229E: retn    0Ch
