0x84C580: push    0FFFFFFFFh
0x84C582: push    offset SEH_882120
0x84C587: mov     eax, large fs:0
0x84C58D: push    eax
0x84C58E: push    ebx
0x84C58F: push    ebp
0x84C590: push    esi
0x84C591: push    edi
0x84C592: mov     eax, ds:0B30AACh
0x84C597: xor     eax, esp
0x84C599: push    eax
0x84C59A: lea     eax, [esp+20h+var_C]
0x84C59E: mov     large fs:0, eax
0x84C5A4: mov     ebx, ecx
0x84C5A6: mov     esi, [esp+20h+arg_8]
0x84C5AA: mov     eax, [esi+10h]
0x84C5AD: mov     edi, ds:0B45698h
0x84C5B3: push    eax
0x84C5B4: call    sub_848C40
0x84C5B9: mov     esi, [esi+0Ch]
0x84C5BC: push    esi
0x84C5BD: mov     ecx, ebx
0x84C5BF: call    sub_848E50
0x84C5C4: mov     eax, [edi+24h]
0x84C5C7: mov     ebp, [esp+20h+arg_C]
0x84C5CB: mov     esi, [eax]
0x84C5CD: mov     edx, [ebp+0]
0x84C5D0: mov     eax, [edx+88h]
0x84C5D6: push    0
0x84C5D8: mov     ecx, ebp
0x84C5DA: mov     [esp+24h+arg_8], esi
0x84C5DE: call    eax
0x84C5E0: mov     esi, [esi+4]
0x84C5E3: cmp     esi, eax
0x84C5E5: mov     [esp+20h+arg_C], eax
0x84C5E9: jz      short loc_84C626
0x84C5EB: test    esi, esi
0x84C5ED: jz      short loc_84C60F
0x84C5EF: lea     ecx, [esi+4]
0x84C5F2: push    ecx; lpAddend
0x84C5F3: call    dword ptr ds:0A2807Ch
0x84C5F9: test    eax, eax
0x84C5FB: jnz     short loc_84C60B
0x84C5FD: test    esi, esi
0x84C5FF: jz      short loc_84C60B
0x84C601: mov     edx, [esi]
0x84C603: mov     eax, [edx]
0x84C605: push    1
0x84C607: mov     ecx, esi
0x84C609: call    eax
0x84C60B: mov     eax, [esp+20h+arg_C]
0x84C60F: test    eax, eax
0x84C611: mov     esi, [esp+20h+arg_8]
0x84C615: mov     [esi+4], eax
0x84C618: jz      short loc_84C62A
0x84C61A: add     eax, 4
0x84C61D: push    eax; lpAddend
0x84C61E: call    dword ptr ds:0A28078h
0x84C624: jmp     short loc_84C62A
0x84C626: mov     esi, [esp+20h+arg_8]
0x84C62A: test    esi, esi
0x84C62C: jz      short loc_84C649
0x84C62E: cmp     byte ptr ds:0B42CDDh, 0
0x84C635: jz      short loc_84C649
0x84C637: mov     edx, [ebp+0]
0x84C63A: mov     eax, [edx+78h]
0x84C63D: mov     ecx, ebp
0x84C63F: call    eax
0x84C641: push    eax
0x84C642: mov     ecx, esi
0x84C644: call    sub_7715E0
0x84C649: mov     ecx, [edi+24h]
0x84C64C: mov     esi, [ecx+4]
0x84C64F: mov     edx, [ebp+0]
0x84C652: mov     eax, [edx+8Ch]
0x84C658: push    0
0x84C65A: mov     ecx, ebp
0x84C65C: mov     [esp+24h+arg_8], esi
0x84C660: call    eax
0x84C662: test    eax, eax
0x84C664: jz      short loc_84C67B
0x84C666: mov     edx, [ebp+0]
0x84C669: mov     eax, [edx+8Ch]
0x84C66F: push    0
0x84C671: mov     ecx, ebp
0x84C673: call    eax
0x84C675: mov     [esp+20h+arg_C], eax
0x84C679: jmp     short loc_84C69A
0x84C67B: test    dword ptr [ebp+1Ch], 80h
0x84C682: jbe     short loc_84C690
0x84C684: mov     ecx, ds:0B430F0h
0x84C68A: mov     [esp+20h+arg_C], ecx
0x84C68E: jmp     short loc_84C69A
0x84C690: mov     edx, ds:0B430DCh
0x84C696: mov     [esp+20h+arg_C], edx
0x84C69A: mov     esi, [esi+4]
0x84C69D: cmp     esi, [esp+20h+arg_C]
0x84C6A1: jz      short loc_84C6DE
0x84C6A3: test    esi, esi
0x84C6A5: jz      short loc_84C6C3
0x84C6A7: lea     eax, [esi+4]
0x84C6AA: push    eax; lpAddend
0x84C6AB: call    dword ptr ds:0A2807Ch
0x84C6B1: test    eax, eax
0x84C6B3: jnz     short loc_84C6C3
0x84C6B5: test    esi, esi
0x84C6B7: jz      short loc_84C6C3
0x84C6B9: mov     edx, [esi]
0x84C6BB: mov     eax, [edx]
0x84C6BD: push    1
0x84C6BF: mov     ecx, esi
0x84C6C1: call    eax
0x84C6C3: mov     eax, [esp+20h+arg_C]
0x84C6C7: test    eax, eax
0x84C6C9: mov     esi, [esp+20h+arg_8]
0x84C6CD: mov     [esi+4], eax
0x84C6D0: jz      short loc_84C6E2
0x84C6D2: add     eax, 4
0x84C6D5: push    eax; lpAddend
0x84C6D6: call    dword ptr ds:0A28078h
0x84C6DC: jmp     short loc_84C6E2
0x84C6DE: mov     esi, [esp+20h+arg_8]
0x84C6E2: test    esi, esi
0x84C6E4: jz      short loc_84C701
0x84C6E6: cmp     byte ptr ds:0B42CDDh, 0
0x84C6ED: jz      short loc_84C701
0x84C6EF: mov     edx, [ebp+0]
0x84C6F2: mov     eax, [edx+78h]
0x84C6F5: mov     ecx, ebp
0x84C6F7: call    eax
0x84C6F9: push    eax
0x84C6FA: mov     ecx, esi
0x84C6FC: call    sub_7715E0
0x84C701: mov     esi, 1
0x84C706: add     [edi+60h], esi
0x84C709: mov     [esp+20h+arg_8], edi
0x84C70D: mov     edx, [ebx+38h]
0x84C710: lea     ecx, [esp+20h+arg_8]
0x84C714: push    ecx
0x84C715: push    edx
0x84C716: lea     ecx, [ebx+40h]
0x84C719: mov     [esp+28h+var_4], 0
0x84C721: call    sub_76CE40
0x84C726: or      eax, 0FFFFFFFFh
0x84C729: add     [edi+60h], eax
0x84C72C: mov     [esp+20h+var_4], eax
0x84C730: jnz     short loc_84C739
0x84C732: mov     ecx, edi
0x84C734: call    sub_7604D0
0x84C739: add     [ebx+38h], esi
0x84C73C: mov     ecx, [esp+20h+var_C]
0x84C740: mov     large fs:0, ecx
0x84C747: pop     ecx
0x84C748: pop     edi
0x84C749: pop     esi
0x84C74A: pop     ebp
0x84C74B: pop     ebx
0x84C74C: add     esp, 0Ch
0x84C74F: retn    10h
