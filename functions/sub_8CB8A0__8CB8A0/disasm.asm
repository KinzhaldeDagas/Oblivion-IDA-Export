0x8CB8A0: push    ecx
0x8CB8A1: mov     ecx, [esp+4+arg_0]
0x8CB8A5: mov     eax, [ecx+6Ch]
0x8CB8A8: dec     eax
0x8CB8A9: push    ebx
0x8CB8AA: push    ebp
0x8CB8AB: push    esi
0x8CB8AC: mov     esi, [esp+10h+arg_4]
0x8CB8B0: push    edi
0x8CB8B1: mov     edi, [ecx+8]
0x8CB8B4: js      loc_8CB966
0x8CB8BA: mov     ebp, eax
0x8CB8BC: imul    ebp, 1Ch
0x8CB8BF: inc     eax
0x8CB8C0: mov     [esp+14h+var_4], eax
0x8CB8C4: mov     eax, [ecx+68h]
0x8CB8C7: mov     ebx, [eax+ebp]
0x8CB8CA: cmp     word ptr [ebx+4], 0
0x8CB8CF: jz      short loc_8CB8D5
0x8CB8D1: inc     word ptr [ebx+6]
0x8CB8D5: mov     eax, [edi+88h]
0x8CB8DB: test    eax, eax
0x8CB8DD: push    ebx
0x8CB8DE: jz      short loc_8CB8EA
0x8CB8E0: call    sub_91ED30
0x8CB8E5: add     esp, 4
0x8CB8E8: jmp     short loc_8CB926
0x8CB8EA: mov     dword ptr [edi+88h], 1
0x8CB8F4: call    sub_91ED30
0x8CB8F9: mov     eax, [edi+88h]
0x8CB8FF: add     esp, 4
0x8CB902: dec     eax
0x8CB903: mov     [edi+88h], eax
0x8CB909: jnz     short loc_8CB926
0x8CB90B: mov     eax, [edi+84h]
0x8CB911: test    eax, eax
0x8CB913: jz      short loc_8CB926
0x8CB915: mov     al, [edi+90h]
0x8CB91B: test    al, al
0x8CB91D: jnz     short loc_8CB926
0x8CB91F: mov     ecx, edi
0x8CB921: call    sub_899210
0x8CB926: mov     ecx, [esi+8]
0x8CB929: mov     eax, [esi+4]
0x8CB92C: and     ecx, 3FFFFFFFh
0x8CB932: cmp     eax, ecx
0x8CB934: jnz     short loc_8CB941
0x8CB936: push    4
0x8CB938: push    esi
0x8CB939: call    sub_8A6EE0
0x8CB93E: add     esp, 8
0x8CB941: mov     edx, [esi+4]
0x8CB944: mov     eax, [esi]
0x8CB946: mov     ecx, [esp+14h+arg_0]
0x8CB94A: mov     [eax+edx*4], ebx
0x8CB94D: mov     edx, [esi+4]
0x8CB950: mov     eax, [esp+14h+var_4]
0x8CB954: inc     edx
0x8CB955: sub     ebp, 1Ch
0x8CB958: dec     eax
0x8CB959: mov     [esi+4], edx
0x8CB95C: mov     [esp+14h+var_4], eax
0x8CB960: jnz     loc_8CB8C4
0x8CB966: mov     ebp, [ecx+78h]
0x8CB969: dec     ebp
0x8CB96A: js      loc_8CBA13
0x8CB970: jmp     short loc_8CB980
0x8CB972: mov     ecx, [esp+14h+arg_0]
0x8CB976: jmp     short loc_8CB980
0x8CB978: align 10h
0x8CB980: mov     ecx, [ecx+74h]
0x8CB983: mov     ebx, [ecx+ebp*4]
0x8CB986: cmp     word ptr [ebx+4], 0
0x8CB98B: jz      short loc_8CB991
0x8CB98D: inc     word ptr [ebx+6]
0x8CB991: mov     eax, [edi+88h]
0x8CB997: test    eax, eax
0x8CB999: push    ebx
0x8CB99A: jz      short loc_8CB9A6
0x8CB99C: call    sub_91ED30
0x8CB9A1: add     esp, 4
0x8CB9A4: jmp     short loc_8CB9E2
0x8CB9A6: mov     dword ptr [edi+88h], 1
0x8CB9B0: call    sub_91ED30
0x8CB9B5: mov     eax, [edi+88h]
0x8CB9BB: add     esp, 4
0x8CB9BE: dec     eax
0x8CB9BF: mov     [edi+88h], eax
0x8CB9C5: jnz     short loc_8CB9E2
0x8CB9C7: mov     eax, [edi+84h]
0x8CB9CD: test    eax, eax
0x8CB9CF: jz      short loc_8CB9E2
0x8CB9D1: mov     al, [edi+90h]
0x8CB9D7: test    al, al
0x8CB9D9: jnz     short loc_8CB9E2
0x8CB9DB: mov     ecx, edi
0x8CB9DD: call    sub_899210
0x8CB9E2: mov     edx, [esi+8]
0x8CB9E5: mov     eax, [esi+4]
0x8CB9E8: and     edx, 3FFFFFFFh
0x8CB9EE: cmp     eax, edx
0x8CB9F0: jnz     short loc_8CB9FD
0x8CB9F2: push    4
0x8CB9F4: push    esi
0x8CB9F5: call    sub_8A6EE0
0x8CB9FA: add     esp, 8
0x8CB9FD: mov     eax, [esi+4]
0x8CBA00: mov     ecx, [esi]
0x8CBA02: mov     [ecx+eax*4], ebx
0x8CBA05: mov     ecx, [esi+4]
0x8CBA08: inc     ecx
0x8CBA09: dec     ebp
0x8CBA0A: mov     [esi+4], ecx
0x8CBA0D: jns     loc_8CB972
0x8CBA13: pop     edi
0x8CBA14: pop     esi
0x8CBA15: pop     ebp
0x8CBA16: pop     ebx
0x8CBA17: pop     ecx
0x8CBA18: retn
