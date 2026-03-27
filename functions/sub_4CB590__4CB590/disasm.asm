0x4CB590: push    ebp
0x4CB591: mov     ebp, ecx
0x4CB593: push    ebp; a2
0x4CB594: mov     ecx, offset stru_B35C80; this
0x4CB599: call    sub_496EA0
0x4CB59E: mov     eax, ds:0B33398h
0x4CB5A3: cmp     dword ptr [eax+24h], 0
0x4CB5A7: jz      loc_4CB665
0x4CB5AD: push    edi
0x4CB5AE: lea     edi, [ebp+48h]
0x4CB5B1: test    edi, edi
0x4CB5B3: jz      loc_4CB659
0x4CB5B9: push    ebx
0x4CB5BA: mov     ebx, [esp+0Ch+arg_0]
0x4CB5BE: push    esi
0x4CB5BF: nop
0x4CB5C0: mov     esi, [edi]
0x4CB5C2: test    esi, esi
0x4CB5C4: mov     edi, [edi+4]
0x4CB5C7: jz      loc_4CB64F
0x4CB5CD: mov     edx, [esi]
0x4CB5CF: mov     eax, [edx+170h]
0x4CB5D5: mov     ecx, esi
0x4CB5D7: call    eax
0x4CB5D9: test    eax, eax
0x4CB5DB: jz      short loc_4CB64F
0x4CB5DD: mov     edx, [esi]
0x4CB5DF: mov     eax, [edx+170h]
0x4CB5E5: mov     ecx, esi
0x4CB5E7: call    eax
0x4CB5E9: mov     ecx, [eax+8]
0x4CB5EC: shr     ecx, 0Bh
0x4CB5EF: test    cl, 1
0x4CB5F2: jnz     short loc_4CB64F
0x4CB5F4: mov     edx, [esi]
0x4CB5F6: mov     eax, [edx+170h]
0x4CB5FC: mov     ecx, esi
0x4CB5FE: call    eax
0x4CB600: cmp     byte ptr [eax+4], 0Ah
0x4CB604: jz      short loc_4CB647
0x4CB606: mov     edx, [esi]
0x4CB608: mov     eax, [edx+170h]
0x4CB60E: mov     ecx, esi
0x4CB610: call    eax
0x4CB612: cmp     byte ptr [eax+4], 1Ah
0x4CB616: jz      short loc_4CB647
0x4CB618: mov     edx, [esi]
0x4CB61A: mov     eax, [edx+170h]
0x4CB620: mov     ecx, esi
0x4CB622: call    eax
0x4CB624: cmp     byte ptr [eax+4], 12h
0x4CB628: jz      short loc_4CB647
0x4CB62A: mov     edx, [esi]
0x4CB62C: mov     eax, [edx+170h]
0x4CB632: mov     ecx, esi
0x4CB634: call    eax
0x4CB636: cmp     byte ptr [eax+4], 18h
0x4CB63A: jnz     short loc_4CB64F
0x4CB63C: mov     ecx, [ebp+8]
0x4CB63F: shr     ecx, 0Dh
0x4CB642: test    cl, 1
0x4CB645: jnz     short loc_4CB64F
0x4CB647: push    ebx
0x4CB648: mov     ecx, esi
0x4CB64A: call    sub_4D9310
0x4CB64F: test    edi, edi
0x4CB651: jnz     loc_4CB5C0
0x4CB657: pop     esi
0x4CB658: pop     ebx
0x4CB659: push    ebp; a2
0x4CB65A: mov     ecx, offset stru_B35C80; this
0x4CB65F: call    sub_496F50
0x4CB664: pop     edi
0x4CB665: pop     ebp
0x4CB666: retn    4
