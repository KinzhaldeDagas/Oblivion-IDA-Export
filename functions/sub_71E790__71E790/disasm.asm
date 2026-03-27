0x71E790: push    0FFFFFFFFh
0x71E792: push    offset SEH_71E790
0x71E797: mov     eax, large fs:0
0x71E79D: push    eax
0x71E79E: sub     esp, 8
0x71E7A1: push    ebx
0x71E7A2: push    ebp
0x71E7A3: push    esi
0x71E7A4: push    edi
0x71E7A5: mov     eax, ds:0B30AACh
0x71E7AA: xor     eax, esp
0x71E7AC: push    eax
0x71E7AD: lea     eax, [esp+28h+var_C]
0x71E7B1: mov     large fs:0, eax
0x71E7B7: mov     ebp, ecx
0x71E7B9: mov     [esp+28h+var_10], ebp
0x71E7BD: xor     eax, eax
0x71E7BF: mov     [esp+28h+var_14], eax
0x71E7C3: mov     [esp+28h+var_4], eax
0x71E7C7: mov     eax, [esp+28h+arg_0]
0x71E7CB: test    byte ptr [eax+8], 1
0x71E7CF: mov     esi, eax
0x71E7D1: jz      loc_71EA46
0x71E7D7: mov     ebx, [esp+28h+arg_4]
0x71E7DB: test    byte ptr [ebx], 1
0x71E7DE: jz      loc_71EA46
0x71E7E4: mov     ecx, [eax+0Ch]
0x71E7E7: cmp     ecx, 4
0x71E7EA: jl      short loc_71E813
0x71E7EC: cmp     ecx, 6
0x71E7EF: jg      short loc_71E813
0x71E7F1: mov     ecx, [ebx+4]
0x71E7F4: cmp     ecx, [eax+0Ch]
0x71E7F7: jz      short loc_71E813
0x71E7F9: push    eax
0x71E7FA: lea     ecx, [ebp+680h]
0x71E800: call    sub_734460
0x71E805: push    eax; a2
0x71E806: lea     ecx, [esp+2Ch+var_14]; this
0x71E80A: call    NiSmartPointer_Set??
0x71E80F: mov     esi, [esp+28h+var_14]
0x71E813: mov     [esp+28h+arg_0], 0
0x71E81B: cmp     byte ptr [esp+28h+arg_C], 0
0x71E820: mov     edi, [esp+28h+arg_8]
0x71E824: mov     byte ptr [esp+28h+var_4], 1
0x71E829: jz      short loc_71E88B
0x71E82B: cmp     dword ptr [esi+60h], 1
0x71E82F: ja      short loc_71E88B
0x71E831: mov     eax, [esi+54h]
0x71E834: mov     eax, [eax]
0x71E836: test    eax, eax
0x71E838: jz      short loc_71E88B
0x71E83A: lea     ecx, [eax-1]
0x71E83D: test    eax, ecx
0x71E83F: setz    al
0x71E842: test    al, al
0x71E844: jz      short loc_71E88B
0x71E846: mov     edx, [esi+58h]
0x71E849: mov     eax, [edx]
0x71E84B: push    eax
0x71E84C: call    sub_71B460
0x71E851: add     esp, 4
0x71E854: test    al, al
0x71E856: jz      short loc_71E88B
0x71E858: mov     eax, [ebx+4]
0x71E85B: test    eax, eax
0x71E85D: jz      short loc_71E86E
0x71E85F: cmp     eax, 1
0x71E862: jz      short loc_71E86E
0x71E864: cmp     eax, 8
0x71E867: jz      short loc_71E86E
0x71E869: cmp     eax, 9
0x71E86C: jnz     short loc_71E88B
0x71E86E: push    edi
0x71E86F: push    esi
0x71E870: mov     ecx, ebp
0x71E872: call    sub_71B8D0
0x71E877: push    eax; a2
0x71E878: lea     ecx, [esp+2Ch+arg_0]; this
0x71E87C: call    NiSmartPointer_Set??
0x71E881: mov     eax, [esp+28h+arg_0]
0x71E885: test    eax, eax
0x71E887: jz      short loc_71E88B
0x71E889: mov     esi, eax
0x71E88B: test    edi, edi
0x71E88D: jz      short loc_71E8E5
0x71E88F: push    ebx
0x71E890: lea     ecx, [edi+8]
0x71E893: call    sub_71AD40
0x71E898: test    al, al
0x71E89A: jz      short loc_71E8E5
0x71E89C: cmp     byte ptr [esp+28h+arg_C], 0
0x71E8A1: jz      short loc_71E8A9
0x71E8A3: cmp     dword ptr [edi+60h], 1
0x71E8A7: jbe     short loc_71E8E5
0x71E8A9: cmp     edi, esi
0x71E8AB: jnz     short loc_71E8D3
0x71E8AD: lea     ecx, [esp+28h+arg_0]; this
0x71E8B1: mov     byte ptr [esp+28h+var_4], 0
0x71E8B6: call    sub_7016A0
0x71E8BB: lea     ecx, [esp+28h+var_14]; this
0x71E8BF: mov     [esp+28h+var_4], 0FFFFFFFFh
0x71E8C7: call    sub_7016A0
0x71E8CC: mov     eax, edi
0x71E8CE: jmp     loc_71EA48
0x71E8D3: mov     eax, [ebp+0]
0x71E8D6: mov     edx, [eax+2Ch]
0x71E8D9: push    0FFFFFFFFh
0x71E8DB: push    esi
0x71E8DC: push    edi
0x71E8DD: mov     ecx, ebp
0x71E8DF: call    edx
0x71E8E1: test    al, al
0x71E8E3: jnz     short loc_71E8AD
0x71E8E5: xor     edi, edi
0x71E8E7: mov     [esp+28h+arg_C], edi
0x71E8EB: mov     eax, [ebx+4]
0x71E8EE: cmp     eax, 8
0x71E8F1: mov     byte ptr [esp+28h+var_4], 2
0x71E8F6: jz      short loc_71E8FD
0x71E8F8: cmp     eax, 9
0x71E8FB: jnz     short loc_71E91D
0x71E8FD: mov     eax, [ebp+0]
0x71E900: mov     edx, [eax+30h]
0x71E903: push    ebx
0x71E904: push    esi
0x71E905: mov     ecx, ebp
0x71E907: call    edx
0x71E909: push    eax; a2
0x71E90A: lea     ecx, [esp+2Ch+arg_C]; this
0x71E90E: call    NiSmartPointer_Set??
0x71E913: mov     edi, [esp+28h+arg_C]
0x71E917: test    edi, edi
0x71E919: jz      short loc_71E91D
0x71E91B: mov     esi, edi
0x71E91D: push    70h ; 'p'; Size
0x71E91F: call    FormHeapAlloc
0x71E924: mov     ebx, eax
0x71E926: add     esp, 4
0x71E929: mov     [esp+28h+arg_8], ebx
0x71E92D: test    ebx, ebx
0x71E92F: mov     byte ptr [esp+28h+var_4], 3
0x71E934: jz      short loc_71E95E
0x71E936: mov     edx, [esi+6Ch]
0x71E939: mov     ebp, [esi+60h]
0x71E93C: mov     eax, [esi+58h]
0x71E93F: mov     eax, [eax]
0x71E941: mov     ecx, [esi+54h]
0x71E944: mov     ecx, [ecx]
0x71E946: push    edx
0x71E947: mov     edx, [esp+2Ch+arg_4]
0x71E94B: push    ebp
0x71E94C: push    edx
0x71E94D: push    eax
0x71E94E: push    ecx
0x71E94F: mov     ecx, ebx
0x71E951: call    NiPixelData__NiPixelData
0x71E956: mov     ebp, [esp+28h+var_10]
0x71E95A: mov     ebx, eax
0x71E95C: jmp     short loc_71E960
0x71E95E: xor     ebx, ebx
0x71E960: mov     eax, [ebp+0]
0x71E963: mov     edx, [eax+2Ch]
0x71E966: push    0FFFFFFFFh
0x71E968: push    esi
0x71E969: push    ebx
0x71E96A: mov     ecx, ebp
0x71E96C: mov     byte ptr [esp+34h+var_4], 2
0x71E971: call    edx
0x71E973: test    al, al
0x71E975: mov     byte ptr [esp+28h+var_4], 1
0x71E97A: jz      short loc_71E9E3
0x71E97C: test    edi, edi
0x71E97E: mov     ebp, ds:0A2807Ch
0x71E984: jz      short loc_71E99A
0x71E986: lea     eax, [edi+4]
0x71E989: push    eax; lpAddend
0x71E98A: call    ebp ; InterlockedDecrement
0x71E98C: test    eax, eax
0x71E98E: jnz     short loc_71E99A
0x71E990: mov     edx, [edi]
0x71E992: mov     eax, [edx]
0x71E994: push    1
0x71E996: mov     ecx, edi
0x71E998: call    eax
0x71E99A: mov     esi, [esp+28h+arg_0]
0x71E99E: test    esi, esi
0x71E9A0: mov     byte ptr [esp+28h+var_4], 0
0x71E9A5: jz      short loc_71E9BB
0x71E9A7: lea     ecx, [esi+4]
0x71E9AA: push    ecx; lpAddend
0x71E9AB: call    ebp ; InterlockedDecrement
0x71E9AD: test    eax, eax
0x71E9AF: jnz     short loc_71E9BB
0x71E9B1: mov     edx, [esi]
0x71E9B3: mov     eax, [edx]
0x71E9B5: push    1
0x71E9B7: mov     ecx, esi
0x71E9B9: call    eax
0x71E9BB: mov     esi, [esp+28h+var_14]
0x71E9BF: test    esi, esi
0x71E9C1: mov     [esp+28h+var_4], 0FFFFFFFFh
0x71E9C9: jz      short loc_71E9DF
0x71E9CB: lea     ecx, [esi+4]
0x71E9CE: push    ecx; lpAddend
0x71E9CF: call    ebp ; InterlockedDecrement
0x71E9D1: test    eax, eax
0x71E9D3: jnz     short loc_71E9DF
0x71E9D5: mov     edx, [esi]
0x71E9D7: mov     eax, [edx]
0x71E9D9: push    1
0x71E9DB: mov     ecx, esi
0x71E9DD: call    eax
0x71E9DF: mov     eax, ebx
0x71E9E1: jmp     short loc_71EA48
0x71E9E3: test    edi, edi
0x71E9E5: mov     ebx, ds:0A2807Ch
0x71E9EB: jz      short loc_71EA01
0x71E9ED: lea     ecx, [edi+4]
0x71E9F0: push    ecx; lpAddend
0x71E9F1: call    ebx ; InterlockedDecrement
0x71E9F3: test    eax, eax
0x71E9F5: jnz     short loc_71EA01
0x71E9F7: mov     edx, [edi]
0x71E9F9: mov     eax, [edx]
0x71E9FB: push    1
0x71E9FD: mov     ecx, edi
0x71E9FF: call    eax
0x71EA01: mov     esi, [esp+28h+arg_0]
0x71EA05: test    esi, esi
0x71EA07: mov     byte ptr [esp+28h+var_4], 0
0x71EA0C: jz      short loc_71EA22
0x71EA0E: lea     ecx, [esi+4]
0x71EA11: push    ecx; lpAddend
0x71EA12: call    ebx ; InterlockedDecrement
0x71EA14: test    eax, eax
0x71EA16: jnz     short loc_71EA22
0x71EA18: mov     edx, [esi]
0x71EA1A: mov     eax, [edx]
0x71EA1C: push    1
0x71EA1E: mov     ecx, esi
0x71EA20: call    eax
0x71EA22: mov     esi, [esp+28h+var_14]
0x71EA26: test    esi, esi
0x71EA28: mov     [esp+28h+var_4], 0FFFFFFFFh
0x71EA30: jz      short loc_71EA46
0x71EA32: lea     ecx, [esi+4]
0x71EA35: push    ecx; lpAddend
0x71EA36: call    ebx ; InterlockedDecrement
0x71EA38: test    eax, eax
0x71EA3A: jnz     short loc_71EA46
0x71EA3C: mov     edx, [esi]
0x71EA3E: mov     eax, [edx]
0x71EA40: push    1
0x71EA42: mov     ecx, esi
0x71EA44: call    eax
0x71EA46: xor     eax, eax
0x71EA48: mov     ecx, [esp+28h+var_C]
0x71EA4C: mov     large fs:0, ecx
0x71EA53: pop     ecx
0x71EA54: pop     edi
0x71EA55: pop     esi
0x71EA56: pop     ebp
0x71EA57: pop     ebx
0x71EA58: add     esp, 14h
0x71EA5B: retn    10h
