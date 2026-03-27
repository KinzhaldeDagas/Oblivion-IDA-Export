0x5508F0: sub     esp, 0Ch
0x5508F3: push    ebx
0x5508F4: mov     ebx, [esp+10h+arg_0]
0x5508F8: push    ebx
0x5508F9: call    sub_5508A0
0x5508FE: add     esp, 4
0x550901: test    eax, eax
0x550903: jz      short loc_55096E
0x550905: mov     edx, [esp+10h+arg_4]
0x550909: cmp     dword ptr [edx], 0
0x55090C: jz      short loc_55096E
0x55090E: mov     ecx, [edx+8]
0x550911: push    ebp
0x550912: mov     ebp, [edx+4]
0x550915: push    esi
0x550916: mov     esi, [edx]
0x550918: mov     edx, [eax]
0x55091A: mov     [esp+18h+var_4], ecx
0x55091E: mov     ecx, eax
0x550920: mov     eax, [edx+54h]
0x550923: push    edi
0x550924: xor     edi, edi
0x550926: call    eax
0x550928: mov     ecx, [ebx+0B4h]
0x55092E: cmp     [ecx+8], di
0x550932: jbe     short loc_55095A
0x550934: mov     edx, [eax]
0x550936: mov     [esi], edx
0x550938: mov     ecx, [eax+4]
0x55093B: mov     [esi+4], ecx
0x55093E: mov     edx, [eax+8]
0x550941: mov     [esi+8], edx
0x550944: mov     ecx, [ebx+0B4h]
0x55094A: movzx   edx, word ptr [ecx+8]
0x55094E: add     edi, 1
0x550951: add     esi, ebp
0x550953: add     eax, 0Ch
0x550956: cmp     edi, edx
0x550958: jb      short loc_550934
0x55095A: mov     ebx, [ebx+0B4h]
0x550960: cmp     dword ptr [ebx+1Ch], 0
0x550964: pop     edi
0x550965: pop     esi
0x550966: pop     ebp
0x550967: jz      short loc_55096E
0x550969: or      word ptr [ebx+2Eh], 1
0x55096E: pop     ebx
0x55096F: add     esp, 0Ch
0x550972: retn
