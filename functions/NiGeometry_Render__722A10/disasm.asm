0x722A10: mov     edx, [ecx+0ACh]
0x722A16: mov     eax, [esp+arg_0]
0x722A1A: mov     [eax+0Ch], edx
0x722A1D: mov     edx, [ecx+0B0h]
0x722A23: push    esi
0x722A24: mov     [eax+10h], edx
0x722A27: mov     esi, [ecx+0Ch]
0x722A2A: test    esi, esi
0x722A2C: jz      short loc_722A40
0x722A2E: mov     edi, edi
0x722A30: mov     eax, [esi]
0x722A32: mov     edx, [eax+68h]
0x722A35: mov     ecx, esi
0x722A37: call    edx
0x722A39: mov     esi, [esi+34h]
0x722A3C: test    esi, esi
0x722A3E: jnz     short loc_722A30
0x722A40: pop     esi
0x722A41: retn    4
