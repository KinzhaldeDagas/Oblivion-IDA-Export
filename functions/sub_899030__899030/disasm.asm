0x899030: mov     eax, [esi+3Ch]
0x899033: push    edi
0x899034: mov     edi, [esi+38h]
0x899037: lea     ecx, [edi+eax*4]
0x89903A: cmp     edi, ecx
0x89903C: jz      short loc_89905C
0x89903E: mov     edi, edi
0x899040: mov     edx, [edi]
0x899042: push    ebx
0x899043: push    edx
0x899044: call    sub_898FE0
0x899049: mov     eax, [esi+3Ch]
0x89904C: mov     ecx, [esi+38h]
0x89904F: add     edi, 4
0x899052: lea     edx, [ecx+eax*4]
0x899055: add     esp, 8
0x899058: cmp     edi, edx
0x89905A: jnz     short loc_899040
0x89905C: mov     edi, [esi+44h]
0x89905F: mov     eax, [esi+48h]
0x899062: lea     ecx, [edi+eax*4]
0x899065: cmp     edi, ecx
0x899067: jz      short loc_89908C
0x899069: lea     esp, [esp+0]
0x899070: mov     edx, [edi]
0x899072: push    ebx
0x899073: push    edx
0x899074: call    sub_898FE0
0x899079: mov     eax, [esi+48h]
0x89907C: mov     ecx, [esi+44h]
0x89907F: add     edi, 4
0x899082: lea     edx, [ecx+eax*4]
0x899085: add     esp, 8
0x899088: cmp     edi, edx
0x89908A: jnz     short loc_899070
0x89908C: pop     edi
0x89908D: retn
