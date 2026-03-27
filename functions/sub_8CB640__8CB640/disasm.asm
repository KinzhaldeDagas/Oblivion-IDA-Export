0x8CB640: push    ebp
0x8CB641: mov     ebp, [esp+4+arg_4]
0x8CB645: mov     al, [ebp+91h]
0x8CB64B: test    al, al
0x8CB64D: push    edi
0x8CB64E: mov     edi, [esp+8+arg_0]
0x8CB652: mov     [ebp+8], edi
0x8CB655: jz      short loc_8CB663
0x8CB657: mov     ecx, [edi+30h]
0x8CB65A: push    ebp
0x8CB65B: call    sub_8DDE30
0x8CB660: pop     edi
0x8CB661: pop     ebp
0x8CB662: retn
0x8CB663: mov     al, [edi+0A4h]
0x8CB669: test    al, al
0x8CB66B: jz      loc_8CB71C
0x8CB671: mov     ecx, ds:0BA7D98h
0x8CB677: mov     eax, [ecx]
0x8CB679: push    esi
0x8CB67A: push    2Fh ; '/'
0x8CB67C: push    6Ch ; 'l'
0x8CB67E: call    dword ptr [eax+10h]
0x8CB681: push    edi
0x8CB682: mov     ecx, eax
0x8CB684: mov     word ptr [eax+4], 6Ch ; 'l'
0x8CB68A: call    sub_8DE400
0x8CB68F: mov     ecx, [esp+0Ch+arg_8]
0x8CB693: mov     esi, eax
0x8CB695: mov     eax, 1
0x8CB69A: cmp     ecx, eax
0x8CB69C: jnz     short loc_8CB6D4
0x8CB69E: mov     [esi+28h], al
0x8CB6A1: mov     [esi+29h], al
0x8CB6A4: mov     cx, [edi+3Ch]
0x8CB6A8: add     edi, 38h ; '8'
0x8CB6AB: mov     [esi+20h], cx
0x8CB6AF: mov     edx, [edi+8]
0x8CB6B2: mov     eax, [edi+4]
0x8CB6B5: and     edx, 3FFFFFFFh
0x8CB6BB: cmp     eax, edx
0x8CB6BD: jnz     short loc_8CB6CA
0x8CB6BF: push    4
0x8CB6C1: push    edi
0x8CB6C2: call    sub_8A6EE0
0x8CB6C7: add     esp, 8
0x8CB6CA: mov     eax, [edi+4]
0x8CB6CD: mov     ecx, [edi]
0x8CB6CF: mov     [ecx+eax*4], esi
0x8CB6D2: jmp     short loc_8CB709
0x8CB6D4: mov     byte ptr [esi+28h], 0
0x8CB6D8: mov     byte ptr [esi+29h], 0
0x8CB6DC: mov     dx, [edi+48h]
0x8CB6E0: add     edi, 44h ; 'D'
0x8CB6E3: mov     [esi+20h], dx
0x8CB6E7: mov     eax, [edi+8]
0x8CB6EA: mov     ecx, [edi+4]
0x8CB6ED: and     eax, 3FFFFFFFh
0x8CB6F2: cmp     ecx, eax
0x8CB6F4: jnz     short loc_8CB701
0x8CB6F6: push    4
0x8CB6F8: push    edi
0x8CB6F9: call    sub_8A6EE0
0x8CB6FE: add     esp, 8
0x8CB701: mov     ecx, [edi+4]
0x8CB704: mov     edx, [edi]
0x8CB706: mov     [edx+ecx*4], esi
0x8CB709: mov     eax, [edi+4]
0x8CB70C: inc     eax
0x8CB70D: push    ebp
0x8CB70E: mov     ecx, esi
0x8CB710: mov     [edi+4], eax
0x8CB713: call    sub_8DDE30
0x8CB718: pop     esi
0x8CB719: pop     edi
0x8CB71A: pop     ebp
0x8CB71B: retn
0x8CB71C: cmp     [esp+8+arg_8], 1
0x8CB721: jnz     short loc_8CB72E
0x8CB723: mov     eax, [edi+38h]
0x8CB726: mov     ecx, [eax]
0x8CB728: push    ebp
0x8CB729: call    sub_8DDE30
0x8CB72E: pop     edi
0x8CB72F: pop     ebp
0x8CB730: retn
