0x74D710: push    ebx
0x74D711: mov     ebx, [esp+4+arg_0]
0x74D715: push    edi
0x74D716: push    ebx
0x74D717: mov     edi, ecx
0x74D719: call    sub_752CD0
0x74D71E: test    al, al
0x74D720: jnz     short loc_74D729
0x74D722: pop     edi
0x74D723: xor     al, al
0x74D725: pop     ebx
0x74D726: retn    4
0x74D729: movzx   eax, word ptr [edi+22h]
0x74D72D: cmp     ax, [ebx+22h]
0x74D731: jnz     short loc_74D722
0x74D733: push    esi
0x74D734: xor     esi, esi
0x74D736: test    ax, ax
0x74D739: jbe     short loc_74D777
0x74D73B: jmp     short loc_74D740
0x74D73D: align 10h
0x74D740: movzx   edx, word ptr [ebx+22h]
0x74D744: cmp     esi, edx
0x74D746: mov     eax, [edi+1Ch]
0x74D749: mov     ecx, [eax+esi*4]
0x74D74C: jnb     short loc_74D756
0x74D74E: mov     eax, [ebx+1Ch]
0x74D751: mov     eax, [eax+esi*4]
0x74D754: jmp     short loc_74D758
0x74D756: xor     eax, eax
0x74D758: test    ecx, ecx
0x74D75A: jz      short loc_74D77F
0x74D75C: test    eax, eax
0x74D75E: jz      short loc_74D783
0x74D760: mov     edx, [ecx]
0x74D762: push    eax
0x74D763: mov     eax, [edx+2Ch]
0x74D766: call    eax
0x74D768: test    al, al
0x74D76A: jz      short loc_74D783
0x74D76C: movzx   ecx, word ptr [edi+22h]
0x74D770: add     esi, 1
0x74D773: cmp     esi, ecx
0x74D775: jb      short loc_74D740
0x74D777: pop     esi
0x74D778: pop     edi
0x74D779: mov     al, 1
0x74D77B: pop     ebx
0x74D77C: retn    4
0x74D77F: test    eax, eax
0x74D781: jz      short loc_74D76C
0x74D783: pop     esi
0x74D784: pop     edi
0x74D785: xor     al, al
0x74D787: pop     ebx
0x74D788: retn    4
