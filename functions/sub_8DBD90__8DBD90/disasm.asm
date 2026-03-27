0x8DBD90: push    ebx
0x8DBD91: push    ebp
0x8DBD92: push    esi
0x8DBD93: mov     esi, ecx
0x8DBD95: push    edi
0x8DBD96: lea     edi, [esi+74h]
0x8DBD99: lea     ebx, [esi+10h]
0x8DBD9C: push    edi
0x8DBD9D: mov     ecx, ebx
0x8DBD9F: mov     word ptr [esi+6], 1
0x8DBDA5: mov     dword ptr [esi], offset off_A9A430
0x8DBDAB: call    sub_925DA0
0x8DBDB0: mov     ebp, [esp+10h+arg_4]
0x8DBDB4: push    0
0x8DBDB6: push    1
0x8DBDB8: push    ebx
0x8DBDB9: mov     ebx, [esp+1Ch+arg_8]
0x8DBDBD: push    ebx
0x8DBDBE: push    ebp
0x8DBDBF: mov     ecx, edi
0x8DBDC1: call    sub_8D99A0
0x8DBDC6: mov     eax, [esp+10h+arg_0]
0x8DBDCA: xor     ecx, ecx
0x8DBDCC: mov     [esi+0Eh], cx
0x8DBDD0: mov     [esi+0Ch], cx
0x8DBDD4: mov     [esi+14h], cx
0x8DBDD8: mov     [esi+78h], cx
0x8DBDDC: mov     [esi+8], eax
0x8DBDDF: movzx   edx, word ptr [ebx+2Eh]
0x8DBDE3: mov     eax, [eax+7Ch]
0x8DBDE6: movzx   ecx, word ptr [ebp+2Eh]
0x8DBDEA: add     edx, eax
0x8DBDEC: movsx   ecx, byte ptr [edx+ecx*8+19D4h]
0x8DBDF4: imul    ecx, 3Ch ; '<'
0x8DBDF7: movzx   edx, word ptr [ecx+eax+1A4Ch]
0x8DBDFF: push    edx
0x8DBE00: mov     ecx, edi
0x8DBE02: call    sub_8D9A10
0x8DBE07: pop     edi
0x8DBE08: mov     eax, esi
0x8DBE0A: pop     esi
0x8DBE0B: pop     ebp
0x8DBE0C: pop     ebx
0x8DBE0D: retn    0Ch
