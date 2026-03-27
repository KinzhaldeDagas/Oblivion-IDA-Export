0x4FA5E0: cmp     byte ptr ds:0B333F4h, 0
0x4FA5E7: push    ebx
0x4FA5E8: mov     ebx, [esp+4+arg_0]
0x4FA5EC: push    ebp
0x4FA5ED: mov     ebp, ecx
0x4FA5EF: jnz     short loc_4FA669
0x4FA5F1: mov     byte ptr ds:0B333F4h, 1
0x4FA5F8: mov     eax, [ebp+0]
0x4FA5FB: mov     edx, [eax+0D4h]
0x4FA601: call    edx
0x4FA603: test    eax, eax
0x4FA605: mov     byte ptr ds:0B333F4h, 0
0x4FA60C: jz      short loc_4FA669
0x4FA60E: lea     edx, [eax+1]
0x4FA611: mov     cl, [eax]
0x4FA613: add     eax, 1
0x4FA616: test    cl, cl
0x4FA618: jnz     short loc_4FA611
0x4FA61A: sub     eax, edx
0x4FA61C: test    eax, eax
0x4FA61E: jz      short loc_4FA669
0x4FA620: movzx   eax, word ptr [ebx+10h]
0x4FA624: cmp     ax, 0FFFFh
0x4FA628: jnz     short loc_4FA63D
0x4FA62A: mov     eax, [ebx+0Ch]
0x4FA62D: lea     edx, [eax+1]
0x4FA630: mov     cl, [eax]
0x4FA632: add     eax, 1
0x4FA635: test    cl, cl
0x4FA637: jnz     short loc_4FA630
0x4FA639: sub     eax, edx
0x4FA63B: jmp     short loc_4FA640
0x4FA63D: movzx   eax, ax
0x4FA640: test    eax, eax
0x4FA642: jz      short loc_4FA669
0x4FA644: mov     eax, [ebx+0Ch]
0x4FA647: push    eax; Str2
0x4FA648: mov     eax, [ebp+0]
0x4FA64B: mov     edx, [eax+0D4h]
0x4FA651: mov     ecx, ebp
0x4FA653: call    edx
0x4FA655: push    eax; Str1
0x4FA656: call    __strcmp
0x4FA65B: add     esp, 8
0x4FA65E: test    eax, eax
0x4FA660: jz      short loc_4FA669
0x4FA662: pop     ebp
0x4FA663: mov     al, 1
0x4FA665: pop     ebx
0x4FA666: retn    4
0x4FA669: mov     ecx, [ebp+20h]
0x4FA66C: cmp     ecx, [ebx+30h]
0x4FA66F: jnz     short loc_4FA662
0x4FA671: mov     eax, [ebp+1Ch]
0x4FA674: cmp     eax, [ebx+2Ch]
0x4FA677: jnz     short loc_4FA662
0x4FA679: push    esi
0x4FA67A: mov     esi, [ebx+20h]
0x4FA67D: xor     eax, eax
0x4FA67F: test    ecx, ecx
0x4FA681: push    edi
0x4FA682: jbe     short loc_4FA6A3
0x4FA684: mov     edi, [ebp+30h]
0x4FA687: jmp     short loc_4FA690
0x4FA689: align 10h
0x4FA690: mov     dl, [edi+eax]
0x4FA693: cmp     dl, [eax+esi]
0x4FA696: jnz     loc_4FA772
0x4FA69C: add     eax, 1
0x4FA69F: cmp     eax, ecx
0x4FA6A1: jb      short loc_4FA690
0x4FA6A3: lea     esi, [ebx+3Ch]
0x4FA6A6: xor     edx, edx
0x4FA6A8: test    esi, esi
0x4FA6AA: lea     edi, [ebp+48h]
0x4FA6AD: mov     eax, esi
0x4FA6AF: jz      short loc_4FA6C0
0x4FA6B1: cmp     dword ptr [eax], 0
0x4FA6B4: jz      short loc_4FA6B9
0x4FA6B6: add     edx, 1
0x4FA6B9: mov     eax, [eax+4]
0x4FA6BC: test    eax, eax
0x4FA6BE: jnz     short loc_4FA6B1
0x4FA6C0: xor     ecx, ecx
0x4FA6C2: test    edi, edi
0x4FA6C4: mov     eax, edi
0x4FA6C6: jz      short loc_4FA6D7
0x4FA6C8: cmp     dword ptr [eax], 0
0x4FA6CB: jz      short loc_4FA6D0
0x4FA6CD: add     ecx, 1
0x4FA6D0: mov     eax, [eax+4]
0x4FA6D3: test    eax, eax
0x4FA6D5: jnz     short loc_4FA6C8
0x4FA6D7: cmp     edx, ecx
0x4FA6D9: jnz     loc_4FA772
0x4FA6DF: test    esi, esi
0x4FA6E1: jz      short loc_4FA707
0x4FA6E3: test    edi, edi
0x4FA6E5: jz      short loc_4FA707
0x4FA6E7: mov     ecx, [esi]
0x4FA6E9: test    ecx, ecx
0x4FA6EB: mov     eax, [edi]
0x4FA6ED: jz      short loc_4FA6FD
0x4FA6EF: test    eax, eax
0x4FA6F1: jz      short loc_4FA6FD
0x4FA6F3: push    eax
0x4FA6F4: call    sub_517B60
0x4FA6F9: test    al, al
0x4FA6FB: jnz     short loc_4FA772
0x4FA6FD: mov     esi, [esi+4]
0x4FA700: test    esi, esi
0x4FA702: mov     edi, [edi+4]
0x4FA705: jnz     short loc_4FA6E3
0x4FA707: lea     eax, [ebx+44h]
0x4FA70A: xor     edi, edi
0x4FA70C: test    eax, eax
0x4FA70E: lea     ecx, [ebp+40h]
0x4FA711: mov     edx, eax
0x4FA713: jz      short loc_4FA724
0x4FA715: cmp     dword ptr [edx], 0
0x4FA718: jz      short loc_4FA71D
0x4FA71A: add     edi, 1
0x4FA71D: mov     edx, [edx+4]
0x4FA720: test    edx, edx
0x4FA722: jnz     short loc_4FA715
0x4FA724: xor     esi, esi
0x4FA726: test    ecx, ecx
0x4FA728: mov     edx, ecx
0x4FA72A: jz      short loc_4FA73F
0x4FA72C: lea     esp, [esp+0]
0x4FA730: cmp     dword ptr [edx], 0
0x4FA733: jz      short loc_4FA738
0x4FA735: add     esi, 1
0x4FA738: mov     edx, [edx+4]
0x4FA73B: test    edx, edx
0x4FA73D: jnz     short loc_4FA730
0x4FA73F: cmp     edi, esi
0x4FA741: jnz     short loc_4FA772
0x4FA743: test    eax, eax
0x4FA745: jz      short loc_4FA769
0x4FA747: test    ecx, ecx
0x4FA749: jz      short loc_4FA769
0x4FA74B: mov     edx, [eax]
0x4FA74D: test    edx, edx
0x4FA74F: mov     esi, [ecx]
0x4FA751: jz      short loc_4FA75F
0x4FA753: test    esi, esi
0x4FA755: jz      short loc_4FA75F
0x4FA757: mov     edx, [edx+8]
0x4FA75A: cmp     edx, [esi+8]
0x4FA75D: jnz     short loc_4FA772
0x4FA75F: mov     eax, [eax+4]
0x4FA762: test    eax, eax
0x4FA764: mov     ecx, [ecx+4]
0x4FA767: jnz     short loc_4FA747
0x4FA769: pop     edi
0x4FA76A: pop     esi
0x4FA76B: pop     ebp
0x4FA76C: xor     al, al
0x4FA76E: pop     ebx
0x4FA76F: retn    4
0x4FA772: pop     edi
0x4FA773: pop     esi
0x4FA774: pop     ebp
0x4FA775: mov     al, 1
0x4FA777: pop     ebx
0x4FA778: retn    4
