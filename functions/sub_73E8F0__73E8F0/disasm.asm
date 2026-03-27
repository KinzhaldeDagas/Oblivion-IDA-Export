0x73E8F0: push    ebx
0x73E8F1: mov     ebx, [esp+4+arg_0]
0x73E8F5: push    edi
0x73E8F6: mov     edi, ecx
0x73E8F8: lea     eax, [ebx+8]
0x73E8FB: push    eax
0x73E8FC: lea     ecx, [edi+8]
0x73E8FF: call    sub_72A0A0
0x73E904: test    al, al
0x73E906: jnz     short loc_73E90F
0x73E908: pop     edi
0x73E909: xor     al, al
0x73E90B: pop     ebx
0x73E90C: retn    4
0x73E90F: lea     ecx, [ebx+18h]
0x73E912: push    ecx
0x73E913: lea     ecx, [edi+18h]
0x73E916: call    sub_72A0A0
0x73E91B: test    al, al
0x73E91D: jz      short loc_73E908
0x73E91F: push    esi
0x73E920: mov     esi, [edi+28h]
0x73E923: cmp     esi, [ebx+28h]
0x73E926: jnz     short loc_73E956
0x73E928: xor     edx, edx
0x73E92A: test    esi, esi
0x73E92C: jbe     short loc_73E94E
0x73E92E: mov     ecx, [edi+2Ch]
0x73E931: mov     ebx, [ebx+2Ch]
0x73E934: sub     ebx, ecx
0x73E936: fld     dword ptr [ebx+ecx]
0x73E939: fld     dword ptr [ecx]
0x73E93B: fucompp
0x73E93D: fnstsw  ax
0x73E93F: test    ah, 44h
0x73E942: jp      short loc_73E956
0x73E944: add     edx, 1
0x73E947: add     ecx, 4
0x73E94A: cmp     edx, esi
0x73E94C: jb      short loc_73E936
0x73E94E: pop     esi
0x73E94F: pop     edi
0x73E950: mov     al, 1
0x73E952: pop     ebx
0x73E953: retn    4
0x73E956: pop     esi
0x73E957: pop     edi
0x73E958: xor     al, al
0x73E95A: pop     ebx
0x73E95B: retn    4
